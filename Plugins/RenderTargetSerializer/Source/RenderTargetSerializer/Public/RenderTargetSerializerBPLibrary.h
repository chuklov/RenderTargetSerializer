/*
	This code was written by Alexander Chadfield

	Plugin created by Alexander Chadfield
*/

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/TextureRenderTarget2D.h"
#include "RenderTargetSerializerBPLibrary.generated.h"

UCLASS()
class URenderTargetSerializerBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Serialize RT to Bytes", Keywords = "RenderTargetSerializer"), Category = "Render Target Serialization")
		static TArray<uint8> SerializeRenderTarget(UTextureRenderTarget2D* RenderTarget);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Deserialize RT from Bytes", Keywords = "RenderTargetSerializer"), Category = "Render Target Serialization")
		static UTexture2D* DeserializeRenderTarget(const TArray<uint8>& PixelBytes, int32 Width, int32 Height);
};
