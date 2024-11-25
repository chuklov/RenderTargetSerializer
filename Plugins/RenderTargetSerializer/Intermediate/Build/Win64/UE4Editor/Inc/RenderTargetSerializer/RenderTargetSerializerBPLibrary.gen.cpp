// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RenderTargetSerializer/Public/RenderTargetSerializerBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRenderTargetSerializerBPLibrary() {}
// Cross Module References
	RENDERTARGETSERIALIZER_API UClass* Z_Construct_UClass_URenderTargetSerializerBPLibrary_NoRegister();
	RENDERTARGETSERIALIZER_API UClass* Z_Construct_UClass_URenderTargetSerializerBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_RenderTargetSerializer();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(URenderTargetSerializerBPLibrary::execDeserializeRenderTarget)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_PixelBytes);
		P_GET_PROPERTY(FIntProperty,Z_Param_Width);
		P_GET_PROPERTY(FIntProperty,Z_Param_Height);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=URenderTargetSerializerBPLibrary::DeserializeRenderTarget(Z_Param_Out_PixelBytes,Z_Param_Width,Z_Param_Height);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderTargetSerializerBPLibrary::execSerializeRenderTarget)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RenderTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=URenderTargetSerializerBPLibrary::SerializeRenderTarget(Z_Param_RenderTarget);
		P_NATIVE_END;
	}
	void URenderTargetSerializerBPLibrary::StaticRegisterNativesURenderTargetSerializerBPLibrary()
	{
		UClass* Class = URenderTargetSerializerBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeserializeRenderTarget", &URenderTargetSerializerBPLibrary::execDeserializeRenderTarget },
			{ "SerializeRenderTarget", &URenderTargetSerializerBPLibrary::execSerializeRenderTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget_Statics
	{
		struct RenderTargetSerializerBPLibrary_eventDeserializeRenderTarget_Parms
		{
			TArray<uint8> PixelBytes;
			int32 Width;
			int32 Height;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PixelBytes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PixelBytes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PixelBytes;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget_Statics::NewProp_PixelBytes_Inner = { "PixelBytes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget_Statics::NewProp_PixelBytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget_Statics::NewProp_PixelBytes = { "PixelBytes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RenderTargetSerializerBPLibrary_eventDeserializeRenderTarget_Parms, PixelBytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget_Statics::NewProp_PixelBytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget_Statics::NewProp_PixelBytes_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RenderTargetSerializerBPLibrary_eventDeserializeRenderTarget_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RenderTargetSerializerBPLibrary_eventDeserializeRenderTarget_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RenderTargetSerializerBPLibrary_eventDeserializeRenderTarget_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget_Statics::NewProp_PixelBytes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget_Statics::NewProp_PixelBytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Target Serialization" },
		{ "DisplayName", "Deserialize RT from Bytes" },
		{ "Keywords", "RenderTargetSerializer" },
		{ "ModuleRelativePath", "Public/RenderTargetSerializerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderTargetSerializerBPLibrary, nullptr, "DeserializeRenderTarget", nullptr, nullptr, sizeof(RenderTargetSerializerBPLibrary_eventDeserializeRenderTarget_Parms), Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderTargetSerializerBPLibrary_SerializeRenderTarget_Statics
	{
		struct RenderTargetSerializerBPLibrary_eventSerializeRenderTarget_Parms
		{
			UTextureRenderTarget2D* RenderTarget;
			TArray<uint8> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderTargetSerializerBPLibrary_SerializeRenderTarget_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RenderTargetSerializerBPLibrary_eventSerializeRenderTarget_Parms, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URenderTargetSerializerBPLibrary_SerializeRenderTarget_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URenderTargetSerializerBPLibrary_SerializeRenderTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RenderTargetSerializerBPLibrary_eventSerializeRenderTarget_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderTargetSerializerBPLibrary_SerializeRenderTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderTargetSerializerBPLibrary_SerializeRenderTarget_Statics::NewProp_RenderTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderTargetSerializerBPLibrary_SerializeRenderTarget_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderTargetSerializerBPLibrary_SerializeRenderTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderTargetSerializerBPLibrary_SerializeRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Target Serialization" },
		{ "DisplayName", "Serialize RT to Bytes" },
		{ "Keywords", "RenderTargetSerializer" },
		{ "ModuleRelativePath", "Public/RenderTargetSerializerBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderTargetSerializerBPLibrary_SerializeRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderTargetSerializerBPLibrary, nullptr, "SerializeRenderTarget", nullptr, nullptr, sizeof(RenderTargetSerializerBPLibrary_eventSerializeRenderTarget_Parms), Z_Construct_UFunction_URenderTargetSerializerBPLibrary_SerializeRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderTargetSerializerBPLibrary_SerializeRenderTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderTargetSerializerBPLibrary_SerializeRenderTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderTargetSerializerBPLibrary_SerializeRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderTargetSerializerBPLibrary_SerializeRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URenderTargetSerializerBPLibrary_SerializeRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URenderTargetSerializerBPLibrary_NoRegister()
	{
		return URenderTargetSerializerBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_URenderTargetSerializerBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URenderTargetSerializerBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RenderTargetSerializer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URenderTargetSerializerBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URenderTargetSerializerBPLibrary_DeserializeRenderTarget, "DeserializeRenderTarget" }, // 2167675693
		{ &Z_Construct_UFunction_URenderTargetSerializerBPLibrary_SerializeRenderTarget, "SerializeRenderTarget" }, // 1192006740
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderTargetSerializerBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RenderTargetSerializerBPLibrary.h" },
		{ "ModuleRelativePath", "Public/RenderTargetSerializerBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URenderTargetSerializerBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenderTargetSerializerBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URenderTargetSerializerBPLibrary_Statics::ClassParams = {
		&URenderTargetSerializerBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URenderTargetSerializerBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URenderTargetSerializerBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URenderTargetSerializerBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URenderTargetSerializerBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URenderTargetSerializerBPLibrary, 4258952460);
	template<> RENDERTARGETSERIALIZER_API UClass* StaticClass<URenderTargetSerializerBPLibrary>()
	{
		return URenderTargetSerializerBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URenderTargetSerializerBPLibrary(Z_Construct_UClass_URenderTargetSerializerBPLibrary, &URenderTargetSerializerBPLibrary::StaticClass, TEXT("/Script/RenderTargetSerializer"), TEXT("URenderTargetSerializerBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URenderTargetSerializerBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
