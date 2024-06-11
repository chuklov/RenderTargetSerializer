/*
	This code was written by Alexander Chadfield
	
	Plugin created by Alexander Chadfield
*/


#include "RenderTargetSerializerBPLibrary.h"
#include "RenderTargetSerializer.h"
#include "EngineUtils.h"
#include "Math/Vector.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Engine/Texture2D.h"

URenderTargetSerializerBPLibrary::URenderTargetSerializerBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

TArray<FVector> URenderTargetSerializerBPLibrary::SerializeRenderTarget(UTextureRenderTarget2D* RenderTarget)
{
    // Convert pixel data to array of vectors
    TArray<FVector> PixelVectors;

    if (!RenderTarget)
    {
        return PixelVectors;
    }

    // Get the render target size
    int32 Width = RenderTarget->SizeX;
    int32 Height = RenderTarget->SizeY;

    //// Allocate memory for pixel data
    TArray<FColor> PixelData;
    PixelData.Init(FColor::Black, Width * Height);

    //// Read pixel data from the render target
    FRenderTarget* RenderTargetResource = RenderTarget->GameThread_GetRenderTargetResource();
    FReadSurfaceDataFlags ReadPixelFlags;
    ReadPixelFlags.SetLinearToGamma(false); // Ensure no colour space conversion
    RenderTargetResource->ReadPixels(PixelData, ReadPixelFlags);

    for (int32 y = 0; y < Height; ++y)
    {
        for (int32 x = 0; x < Width; ++x)
        {
            // Convert pixel colour to vector format (XYZ = RGB)
            FColor PixelColor = PixelData[y * Width + x];
            FVector PixelVector(PixelColor.R, PixelColor.G, PixelColor.B);

            // Add pixel vector to the array
            PixelVectors.Add(PixelVector);
        }
    }

    return PixelVectors; //SerializedData;
}

UTexture2D* URenderTargetSerializerBPLibrary::DeserializeRenderTarget(const TArray<FVector>& PixelVectors, int32 Width, int32 Height)
{
    if (Width <= 0 || Height <= 0 || PixelVectors.Num() != Width * Height)
    {
        return nullptr;
    }

    // Create a texture 2D to store the pixel data
    UTexture2D* Texture2D = UTexture2D::CreateTransient(Width, Height, PF_B8G8R8A8);
    if (!Texture2D)
    {
        return nullptr;
    }

    // Lock the texture for writing
    FTexture2DMipMap& Mip = Texture2D->PlatformData->Mips[0];
    void* Data = Mip.BulkData.Lock(LOCK_READ_WRITE);

    // Copy pixel data into the texture after converting to FColor
    FColor* ColorData = static_cast<FColor*>(Data);
    for (int32 Index = 0; Index < PixelVectors.Num(); ++Index)
    {
        FVector PixelVector = PixelVectors[Index];
        FColor PixelColor(FMath::Clamp(int32(PixelVector.X), 0, 255), FMath::Clamp(int32(PixelVector.Y), 0, 255), FMath::Clamp(int32(PixelVector.Z), 0, 255), 255);
        ColorData[Index] = PixelColor;
    }

    // Unlock the texture
    Mip.BulkData.Unlock();

    // Update the texture resource
    Texture2D->UpdateResource();

    return Texture2D;
}


