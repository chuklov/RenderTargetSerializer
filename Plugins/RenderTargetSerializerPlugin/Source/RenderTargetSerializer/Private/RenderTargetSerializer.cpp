#include "RenderTargetSerializerBPLibrary.h"
#include "RenderTargetSerializer.h"
#include "EngineUtils.h"
#include "Math/Vector.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Engine/Texture2D.h"
#include "Rendering/Texture2DResource.h"
#include "RenderUtils.h"

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

    // Allocate memory for pixel data
    TArray<FColor> PixelData;
    PixelData.Init(FColor::Black, Width * Height);

    // Read pixel data from the render target
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
    FTexture2DResource* Texture2DResource = static_cast<FTexture2DResource*>(Texture2D->GetResource());
    if (!Texture2DResource)
    {
        return nullptr;
    }

    ENQUEUE_RENDER_COMMAND(UpdateTextureData)(
        [Texture2DResource, PixelVectors, Width, Height](FRHICommandListImmediate& RHICmdList)
    {
        // Lock the texture for writing
        uint32 DestStride;
        uint8* DestData = (uint8*)RHILockTexture2D(Texture2DResource->GetTexture2DRHI(), 0, RLM_WriteOnly, DestStride, false);

        // Copy pixel data into the texture after converting to FColor
        for (int32 y = 0; y < Height; ++y)
        {
            FColor* RowData = (FColor*)(DestData + y * DestStride);
            for (int32 x = 0; x < Width; ++x)
            {
                int32 Index = y * Width + x;
                FVector PixelVector = PixelVectors[Index];
                FColor PixelColor(FMath::Clamp(int32(PixelVector.X), 0, 255), FMath::Clamp(int32(PixelVector.Y), 0, 255), FMath::Clamp(int32(PixelVector.Z), 0, 255), 255);
                RowData[x] = PixelColor;
            }
        }

        // Unlock the texture
        RHIUnlockTexture2D(Texture2DResource->GetTexture2DRHI(), 0, false);
    }
    );

    // Update the texture resource
    Texture2D->UpdateResource();

    return Texture2D;
}
