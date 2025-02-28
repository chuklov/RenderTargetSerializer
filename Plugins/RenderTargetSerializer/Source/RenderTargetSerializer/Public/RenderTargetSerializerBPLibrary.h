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

	/**
	* This method will serialize a Render Target from RGBA to Array of Integers
	* 
	* @param TextureRenderTarget2D 
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Serialize RT RGBA to Bytes", Keywords = "Render Target Serializer v2"), Category = "Render Target Serialization")
		static TArray<uint8> SerializeRenderTarget(UTextureRenderTarget2D* RenderTarget);



	/**
	* This method will deserialize Array of int8 into a Render Target to RGBA 
	*
	* @param Array of Int8
	* @param Width of the Render Target
	* @param Height of the Render Target
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Deserialize RT from Bytes to RGBA", Keywords = "Render Target Serializer v2"), Category = "Render Target Serialization")
		static UTexture2D* DeserializeRenderTarget(const TArray<uint8>& PixelBytes, int32 Width, int32 Height);
};
