// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UDSWManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimaryDataAsset;
enum class EDayTimeState : uint8;
struct FGameplayTag;
#ifdef ENHANCEDUDS_UDSWManager_generated_h
#error "UDSWManager.generated.h already included, missing '#pragma once' in UDSWManager.h"
#endif
#define ENHANCEDUDS_UDSWManager_generated_h

#define FID_MyPluginProject_Plugins_EnhancedUDS_Source_EnhancedUDS_Public_UDSWManager_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInitUDSW); \
	DECLARE_FUNCTION(execInitOrReInitSkyState); \
	DECLARE_FUNCTION(execChangeUDSWState); \
	DECLARE_FUNCTION(execBindToDayTimeManagerDelegate); \
	DECLARE_FUNCTION(execGetUDSWCfg);


#define FID_MyPluginProject_Plugins_EnhancedUDS_Source_EnhancedUDS_Public_UDSWManager_h_19_CALLBACK_WRAPPERS
#define FID_MyPluginProject_Plugins_EnhancedUDS_Source_EnhancedUDS_Public_UDSWManager_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUDSWManager(); \
	friend struct Z_Construct_UClass_UUDSWManager_Statics; \
public: \
	DECLARE_CLASS(UUDSWManager, UWorldSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/EnhancedUDS"), NO_API) \
	DECLARE_SERIALIZER(UUDSWManager)


#define FID_MyPluginProject_Plugins_EnhancedUDS_Source_EnhancedUDS_Public_UDSWManager_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUDSWManager(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUDSWManager(UUDSWManager&&); \
	UUDSWManager(const UUDSWManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUDSWManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUDSWManager); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UUDSWManager) \
	NO_API virtual ~UUDSWManager();


#define FID_MyPluginProject_Plugins_EnhancedUDS_Source_EnhancedUDS_Public_UDSWManager_h_16_PROLOG
#define FID_MyPluginProject_Plugins_EnhancedUDS_Source_EnhancedUDS_Public_UDSWManager_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyPluginProject_Plugins_EnhancedUDS_Source_EnhancedUDS_Public_UDSWManager_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyPluginProject_Plugins_EnhancedUDS_Source_EnhancedUDS_Public_UDSWManager_h_19_CALLBACK_WRAPPERS \
	FID_MyPluginProject_Plugins_EnhancedUDS_Source_EnhancedUDS_Public_UDSWManager_h_19_INCLASS_NO_PURE_DECLS \
	FID_MyPluginProject_Plugins_EnhancedUDS_Source_EnhancedUDS_Public_UDSWManager_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDUDS_API UClass* StaticClass<class UUDSWManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyPluginProject_Plugins_EnhancedUDS_Source_EnhancedUDS_Public_UDSWManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
