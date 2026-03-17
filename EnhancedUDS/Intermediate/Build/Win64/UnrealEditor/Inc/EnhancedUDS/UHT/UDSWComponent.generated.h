// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UDSWComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENHANCEDUDS_UDSWComponent_generated_h
#error "UDSWComponent.generated.h already included, missing '#pragma once' in UDSWComponent.h"
#endif
#define ENHANCEDUDS_UDSWComponent_generated_h

#define FID_MyPluginProject_Plugins_EnhancedUDS_Source_EnhancedUDS_Public_UDSWComponent_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUDswComponent(); \
	friend struct Z_Construct_UClass_UUDswComponent_Statics; \
public: \
	DECLARE_CLASS(UUDswComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedUDS"), NO_API) \
	DECLARE_SERIALIZER(UUDswComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SkyState=NETFIELD_REP_START, \
		NETFIELD_REP_END=SkyState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_MyPluginProject_Plugins_EnhancedUDS_Source_EnhancedUDS_Public_UDSWComponent_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUDswComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUDswComponent(UUDswComponent&&); \
	UUDswComponent(const UUDswComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUDswComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUDswComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUDswComponent) \
	NO_API virtual ~UUDswComponent();


#define FID_MyPluginProject_Plugins_EnhancedUDS_Source_EnhancedUDS_Public_UDSWComponent_h_5_PROLOG
#define FID_MyPluginProject_Plugins_EnhancedUDS_Source_EnhancedUDS_Public_UDSWComponent_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyPluginProject_Plugins_EnhancedUDS_Source_EnhancedUDS_Public_UDSWComponent_h_8_INCLASS_NO_PURE_DECLS \
	FID_MyPluginProject_Plugins_EnhancedUDS_Source_EnhancedUDS_Public_UDSWComponent_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDUDS_API UClass* StaticClass<class UUDswComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyPluginProject_Plugins_EnhancedUDS_Source_EnhancedUDS_Public_UDSWComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
