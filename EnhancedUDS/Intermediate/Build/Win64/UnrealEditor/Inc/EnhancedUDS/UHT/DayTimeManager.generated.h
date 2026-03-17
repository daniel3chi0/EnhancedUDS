// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DayTimeManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDayTimeState : uint8;
#ifdef ENHANCEDUDS_DayTimeManager_generated_h
#error "DayTimeManager.generated.h already included, missing '#pragma once' in DayTimeManager.h"
#endif
#define ENHANCEDUDS_DayTimeManager_generated_h

#define FID_MyPluginProject_Plugins_EnhancedUDS_Source_EnhancedUDS_Public_DayTimeManager_h_30_DELEGATE \
ENHANCEDUDS_API void FDayTimeInitDelegate_DelegateWrapper(const FMulticastScriptDelegate& DayTimeInitDelegate);


#define FID_MyPluginProject_Plugins_EnhancedUDS_Source_EnhancedUDS_Public_DayTimeManager_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRedMoonAction); \
	DECLARE_FUNCTION(execNightAction); \
	DECLARE_FUNCTION(execSunsetAction); \
	DECLARE_FUNCTION(execDay2Action); \
	DECLARE_FUNCTION(execDay1Action); \
	DECLARE_FUNCTION(execDay0Action); \
	DECLARE_FUNCTION(execSunriseAction); \
	DECLARE_FUNCTION(execInitStaticSky); \
	DECLARE_FUNCTION(execGetDayTimeState); \
	DECLARE_FUNCTION(execInitDay);


#define FID_MyPluginProject_Plugins_EnhancedUDS_Source_EnhancedUDS_Public_DayTimeManager_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDayTimeManager(); \
	friend struct Z_Construct_UClass_UDayTimeManager_Statics; \
public: \
	DECLARE_CLASS(UDayTimeManager, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EnhancedUDS"), NO_API) \
	DECLARE_SERIALIZER(UDayTimeManager)


#define FID_MyPluginProject_Plugins_EnhancedUDS_Source_EnhancedUDS_Public_DayTimeManager_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDayTimeManager(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDayTimeManager(UDayTimeManager&&); \
	UDayTimeManager(const UDayTimeManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDayTimeManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDayTimeManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDayTimeManager) \
	NO_API virtual ~UDayTimeManager();


#define FID_MyPluginProject_Plugins_EnhancedUDS_Source_EnhancedUDS_Public_DayTimeManager_h_34_PROLOG
#define FID_MyPluginProject_Plugins_EnhancedUDS_Source_EnhancedUDS_Public_DayTimeManager_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyPluginProject_Plugins_EnhancedUDS_Source_EnhancedUDS_Public_DayTimeManager_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyPluginProject_Plugins_EnhancedUDS_Source_EnhancedUDS_Public_DayTimeManager_h_37_INCLASS_NO_PURE_DECLS \
	FID_MyPluginProject_Plugins_EnhancedUDS_Source_EnhancedUDS_Public_DayTimeManager_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDUDS_API UClass* StaticClass<class UDayTimeManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyPluginProject_Plugins_EnhancedUDS_Source_EnhancedUDS_Public_DayTimeManager_h


#define FOREACH_ENUM_EDAYTIMESTATE(op) \
	op(EDayTimeState::None) \
	op(EDayTimeState::Sunrise) \
	op(EDayTimeState::Day) \
	op(EDayTimeState::Day1) \
	op(EDayTimeState::Day2) \
	op(EDayTimeState::Sunset) \
	op(EDayTimeState::Night) \
	op(EDayTimeState::RedMoon) 

enum class EDayTimeState : uint8;
template<> struct TIsUEnumClass<EDayTimeState> { enum { Value = true }; };
template<> ENHANCEDUDS_API UEnum* StaticEnum<EDayTimeState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
