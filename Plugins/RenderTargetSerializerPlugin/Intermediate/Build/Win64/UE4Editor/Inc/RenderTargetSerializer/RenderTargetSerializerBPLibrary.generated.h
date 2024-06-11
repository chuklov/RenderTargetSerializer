// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UTexture2D;
class UTextureRenderTarget2D;
#ifdef RENDERTARGETSERIALIZER_RenderTargetSerializerBPLibrary_generated_h
#error "RenderTargetSerializerBPLibrary.generated.h already included, missing '#pragma once' in RenderTargetSerializerBPLibrary.h"
#endif
#define RENDERTARGETSERIALIZER_RenderTargetSerializerBPLibrary_generated_h

#define RTS_BP_Plugins_RenderTargetSerializer_Source_RenderTargetSerializer_Public_RenderTargetSerializerBPLibrary_h_30_SPARSE_DATA
#define RTS_BP_Plugins_RenderTargetSerializer_Source_RenderTargetSerializer_Public_RenderTargetSerializerBPLibrary_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDeserializeRenderTarget); \
	DECLARE_FUNCTION(execSerializeRenderTarget); \
	DECLARE_FUNCTION(execRenderTargetSerializerSampleFunction);


#define RTS_BP_Plugins_RenderTargetSerializer_Source_RenderTargetSerializer_Public_RenderTargetSerializerBPLibrary_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeserializeRenderTarget); \
	DECLARE_FUNCTION(execSerializeRenderTarget); \
	DECLARE_FUNCTION(execRenderTargetSerializerSampleFunction);


#define RTS_BP_Plugins_RenderTargetSerializer_Source_RenderTargetSerializer_Public_RenderTargetSerializerBPLibrary_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURenderTargetSerializerBPLibrary(); \
	friend struct Z_Construct_UClass_URenderTargetSerializerBPLibrary_Statics; \
public: \
	DECLARE_CLASS(URenderTargetSerializerBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RenderTargetSerializer"), NO_API) \
	DECLARE_SERIALIZER(URenderTargetSerializerBPLibrary)


#define RTS_BP_Plugins_RenderTargetSerializer_Source_RenderTargetSerializer_Public_RenderTargetSerializerBPLibrary_h_30_INCLASS \
private: \
	static void StaticRegisterNativesURenderTargetSerializerBPLibrary(); \
	friend struct Z_Construct_UClass_URenderTargetSerializerBPLibrary_Statics; \
public: \
	DECLARE_CLASS(URenderTargetSerializerBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RenderTargetSerializer"), NO_API) \
	DECLARE_SERIALIZER(URenderTargetSerializerBPLibrary)


#define RTS_BP_Plugins_RenderTargetSerializer_Source_RenderTargetSerializer_Public_RenderTargetSerializerBPLibrary_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URenderTargetSerializerBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URenderTargetSerializerBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URenderTargetSerializerBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URenderTargetSerializerBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URenderTargetSerializerBPLibrary(URenderTargetSerializerBPLibrary&&); \
	NO_API URenderTargetSerializerBPLibrary(const URenderTargetSerializerBPLibrary&); \
public:


#define RTS_BP_Plugins_RenderTargetSerializer_Source_RenderTargetSerializer_Public_RenderTargetSerializerBPLibrary_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URenderTargetSerializerBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URenderTargetSerializerBPLibrary(URenderTargetSerializerBPLibrary&&); \
	NO_API URenderTargetSerializerBPLibrary(const URenderTargetSerializerBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URenderTargetSerializerBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URenderTargetSerializerBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URenderTargetSerializerBPLibrary)


#define RTS_BP_Plugins_RenderTargetSerializer_Source_RenderTargetSerializer_Public_RenderTargetSerializerBPLibrary_h_30_PRIVATE_PROPERTY_OFFSET
#define RTS_BP_Plugins_RenderTargetSerializer_Source_RenderTargetSerializer_Public_RenderTargetSerializerBPLibrary_h_27_PROLOG
#define RTS_BP_Plugins_RenderTargetSerializer_Source_RenderTargetSerializer_Public_RenderTargetSerializerBPLibrary_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTS_BP_Plugins_RenderTargetSerializer_Source_RenderTargetSerializer_Public_RenderTargetSerializerBPLibrary_h_30_PRIVATE_PROPERTY_OFFSET \
	RTS_BP_Plugins_RenderTargetSerializer_Source_RenderTargetSerializer_Public_RenderTargetSerializerBPLibrary_h_30_SPARSE_DATA \
	RTS_BP_Plugins_RenderTargetSerializer_Source_RenderTargetSerializer_Public_RenderTargetSerializerBPLibrary_h_30_RPC_WRAPPERS \
	RTS_BP_Plugins_RenderTargetSerializer_Source_RenderTargetSerializer_Public_RenderTargetSerializerBPLibrary_h_30_INCLASS \
	RTS_BP_Plugins_RenderTargetSerializer_Source_RenderTargetSerializer_Public_RenderTargetSerializerBPLibrary_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RTS_BP_Plugins_RenderTargetSerializer_Source_RenderTargetSerializer_Public_RenderTargetSerializerBPLibrary_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RTS_BP_Plugins_RenderTargetSerializer_Source_RenderTargetSerializer_Public_RenderTargetSerializerBPLibrary_h_30_PRIVATE_PROPERTY_OFFSET \
	RTS_BP_Plugins_RenderTargetSerializer_Source_RenderTargetSerializer_Public_RenderTargetSerializerBPLibrary_h_30_SPARSE_DATA \
	RTS_BP_Plugins_RenderTargetSerializer_Source_RenderTargetSerializer_Public_RenderTargetSerializerBPLibrary_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	RTS_BP_Plugins_RenderTargetSerializer_Source_RenderTargetSerializer_Public_RenderTargetSerializerBPLibrary_h_30_INCLASS_NO_PURE_DECLS \
	RTS_BP_Plugins_RenderTargetSerializer_Source_RenderTargetSerializer_Public_RenderTargetSerializerBPLibrary_h_30_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class RenderTargetSerializerBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RENDERTARGETSERIALIZER_API UClass* StaticClass<class URenderTargetSerializerBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RTS_BP_Plugins_RenderTargetSerializer_Source_RenderTargetSerializer_Public_RenderTargetSerializerBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
