/*
    This code was written by Alexander Chadfield

    Plugin created by Alexander Chadfield
*/


#include "RenderTargetSerializerBPLibrary.h"
#include "EngineUtils.h"
#include "Math/Vector.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Engine/Texture2D.h"

URenderTargetSerializerBPLibrary::URenderTargetSerializerBPLibrary(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{

}

TArray<uint8> URenderTargetSerializerBPLibrary::SerializeRenderTarget(UTextureRenderTarget2D* RenderTarget)
{
    // Convert pixel data to array of vectors
    TArray<uint8> PixelBytes;

    if (!RenderTarget)
    {
        return PixelBytes;
    }

    // Get the render target size
    int32 Width = RenderTarget->SizeX;
    int32 Height = RenderTarget->SizeY;

    // Allocate memory for pixel data
    TArray<FColor> PixelData;
    PixelData.Init(FColor::Black, Width * Height);

    // Read pixel data from the render target
    FRenderTarget* RenderTargetResource = RenderTarget->GameThread_GetRenderTargetResource();
    FReadSurfaceDataFlags ReadPixelFlags;
    ReadPixelFlags.SetLinearToGamma(true); // Ensure correct gamma
    RenderTargetResource->ReadPixels(PixelData, ReadPixelFlags);

    // Reserve memory for raw byte storage (4 bytes per pixel: R, G, B, A)
    PixelBytes.Reserve(Width * Height * 4);

    for (const FColor& PixelColor : PixelData)
    {
        PixelBytes.Add(PixelColor.R);
        PixelBytes.Add(PixelColor.G);
        PixelBytes.Add(PixelColor.B);
        PixelBytes.Add(PixelColor.A);
    }

    return PixelBytes;
}

UTexture2D* URenderTargetSerializerBPLibrary::DeserializeRenderTarget(const TArray<uint8>& PixelBytes, int32 Width, int32 Height)
{
    if (Width <= 0 || Height <= 0 || PixelBytes.Num() != Width * Height * 4)
    {
        return nullptr;
    }

    // Create a texture 2D to store the pixel data
    UTexture2D* Texture2D = UTexture2D::CreateTransient(Width, Height, PF_B8G8R8A8);
    if (!Texture2D)
    {
        return nullptr;
    }

    // Update the texture resource
    Texture2D->UpdateResource();

    // Lock the texture for writing
    FTexture2DMipMap& Mip = Texture2D->PlatformData->Mips[0];
    void* Data = Mip.BulkData.Lock(LOCK_READ_WRITE);

    // Copy pixel data into the texture
    FColor* ColorData = static_cast<FColor*>(Data);
    for (int32 Index = 0; Index < Width * Height; ++Index)
    {
        int32 ByteIndex = Index * 4;
        uint8 R = PixelBytes[ByteIndex];
        uint8 G = PixelBytes[ByteIndex + 1];
        uint8 B = PixelBytes[ByteIndex + 2];
        uint8 A = PixelBytes[ByteIndex + 3];

        ColorData[Index] = FColor(R, G, B, A); 
    }

    // Unlock the texture
    Mip.BulkData.Unlock();

    // Update the texture resource
    Texture2D->UpdateResource();

    return Texture2D;
}



TArray<FVector> URenderTargetSerializerBPLibrary::SerializeToVector(UTextureRenderTarget2D* RenderTarget)
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

    // Allocate memory for pixel data
    TArray<FColor> PixelData;
    PixelData.Init(FColor::Black, Width* Height);

    // Read pixel data from the render target
    FRenderTarget* RenderTargetResource = RenderTarget->GameThread_GetRenderTargetResource();
    FReadSurfaceDataFlags ReadPixelFlags;
    ReadPixelFlags.SetLinearToGamma(true); // Ensure gamma
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

    return PixelVectors;
}

UTexture2D* URenderTargetSerializerBPLibrary::DeserializeFromVector(const TArray<FVector>& PixelVectors, int32 Width, int32 Height)
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

    // Copy pixel data into the texture
    FColor* ColorData = static_cast<FColor*>(Data);
    for (int32 Index = 0; Index < PixelVectors.Num(); ++Index)
    {
        FVector PixelVector = PixelVectors[Index];
        FColor PixelColor(PixelVector.X, PixelVector.Y, PixelVector.Z, 1.0);
        ColorData[Index] = PixelColor;
    }

    // Unlock the texture
    Mip.BulkData.Unlock();
    // Update the texture resource
    Texture2D->UpdateResource();
    return Texture2D;

}
