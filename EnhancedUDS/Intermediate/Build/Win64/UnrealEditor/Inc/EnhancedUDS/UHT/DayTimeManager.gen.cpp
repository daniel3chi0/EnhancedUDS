// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnhancedUDS/Public/DayTimeManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDayTimeManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
ENHANCEDUDS_API UClass* Z_Construct_UClass_UDayTimeManager();
ENHANCEDUDS_API UClass* Z_Construct_UClass_UDayTimeManager_NoRegister();
ENHANCEDUDS_API UEnum* Z_Construct_UEnum_EnhancedUDS_EDayTimeState();
ENHANCEDUDS_API UFunction* Z_Construct_UDelegateFunction_EnhancedUDS_DayTimeInitDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_EnhancedUDS();
// End Cross Module References

// Begin Enum EDayTimeState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDayTimeState;
static UEnum* EDayTimeState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDayTimeState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDayTimeState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EnhancedUDS_EDayTimeState, (UObject*)Z_Construct_UPackage__Script_EnhancedUDS(), TEXT("EDayTimeState"));
	}
	return Z_Registration_Info_UEnum_EDayTimeState.OuterSingleton;
}
template<> ENHANCEDUDS_API UEnum* StaticEnum<EDayTimeState>()
{
	return EDayTimeState_StaticEnum();
}
struct Z_Construct_UEnum_EnhancedUDS_EDayTimeState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Day.Name", "EDayTimeState::Day" },
		{ "Day1.Name", "EDayTimeState::Day1" },
		{ "Day2.Name", "EDayTimeState::Day2" },
		{ "ModuleRelativePath", "Public/DayTimeManager.h" },
		{ "Night.Name", "EDayTimeState::Night" },
		{ "None.Name", "EDayTimeState::None" },
		{ "RedMoon.Name", "EDayTimeState::RedMoon" },
		{ "Sunrise.Name", "EDayTimeState::Sunrise" },
		{ "Sunset.Name", "EDayTimeState::Sunset" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDayTimeState::None", (int64)EDayTimeState::None },
		{ "EDayTimeState::Sunrise", (int64)EDayTimeState::Sunrise },
		{ "EDayTimeState::Day", (int64)EDayTimeState::Day },
		{ "EDayTimeState::Day1", (int64)EDayTimeState::Day1 },
		{ "EDayTimeState::Day2", (int64)EDayTimeState::Day2 },
		{ "EDayTimeState::Sunset", (int64)EDayTimeState::Sunset },
		{ "EDayTimeState::Night", (int64)EDayTimeState::Night },
		{ "EDayTimeState::RedMoon", (int64)EDayTimeState::RedMoon },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EnhancedUDS_EDayTimeState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EnhancedUDS,
	nullptr,
	"EDayTimeState",
	"EDayTimeState",
	Z_Construct_UEnum_EnhancedUDS_EDayTimeState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedUDS_EDayTimeState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedUDS_EDayTimeState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EnhancedUDS_EDayTimeState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EnhancedUDS_EDayTimeState()
{
	if (!Z_Registration_Info_UEnum_EDayTimeState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDayTimeState.InnerSingleton, Z_Construct_UEnum_EnhancedUDS_EDayTimeState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDayTimeState.InnerSingleton;
}
// End Enum EDayTimeState

// Begin Delegate FDayTimeInitDelegate
struct Z_Construct_UDelegateFunction_EnhancedUDS_DayTimeInitDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DayTimeManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EnhancedUDS_DayTimeInitDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EnhancedUDS, nullptr, "DayTimeInitDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EnhancedUDS_DayTimeInitDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_EnhancedUDS_DayTimeInitDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_EnhancedUDS_DayTimeInitDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EnhancedUDS_DayTimeInitDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDayTimeInitDelegate_DelegateWrapper(const FMulticastScriptDelegate& DayTimeInitDelegate)
{
	DayTimeInitDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FDayTimeInitDelegate

// Begin Class UDayTimeManager Function Day0Action
struct Z_Construct_UFunction_UDayTimeManager_Day0Action_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DayTimeManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDayTimeManager_Day0Action_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDayTimeManager, nullptr, "Day0Action", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDayTimeManager_Day0Action_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDayTimeManager_Day0Action_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDayTimeManager_Day0Action()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDayTimeManager_Day0Action_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDayTimeManager::execDay0Action)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Day0Action();
	P_NATIVE_END;
}
// End Class UDayTimeManager Function Day0Action

// Begin Class UDayTimeManager Function Day1Action
struct Z_Construct_UFunction_UDayTimeManager_Day1Action_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DayTimeManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDayTimeManager_Day1Action_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDayTimeManager, nullptr, "Day1Action", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDayTimeManager_Day1Action_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDayTimeManager_Day1Action_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDayTimeManager_Day1Action()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDayTimeManager_Day1Action_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDayTimeManager::execDay1Action)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Day1Action();
	P_NATIVE_END;
}
// End Class UDayTimeManager Function Day1Action

// Begin Class UDayTimeManager Function Day2Action
struct Z_Construct_UFunction_UDayTimeManager_Day2Action_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DayTimeManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDayTimeManager_Day2Action_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDayTimeManager, nullptr, "Day2Action", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDayTimeManager_Day2Action_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDayTimeManager_Day2Action_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDayTimeManager_Day2Action()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDayTimeManager_Day2Action_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDayTimeManager::execDay2Action)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Day2Action();
	P_NATIVE_END;
}
// End Class UDayTimeManager Function Day2Action

// Begin Class UDayTimeManager Function GetDayTimeState
struct Z_Construct_UFunction_UDayTimeManager_GetDayTimeState_Statics
{
	struct DayTimeManager_eventGetDayTimeState_Parms
	{
		EDayTimeState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DayTimeManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDayTimeManager_GetDayTimeState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDayTimeManager_GetDayTimeState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DayTimeManager_eventGetDayTimeState_Parms, ReturnValue), Z_Construct_UEnum_EnhancedUDS_EDayTimeState, METADATA_PARAMS(0, nullptr) }; // 2856581246
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDayTimeManager_GetDayTimeState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDayTimeManager_GetDayTimeState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDayTimeManager_GetDayTimeState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDayTimeManager_GetDayTimeState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDayTimeManager_GetDayTimeState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDayTimeManager, nullptr, "GetDayTimeState", nullptr, nullptr, Z_Construct_UFunction_UDayTimeManager_GetDayTimeState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDayTimeManager_GetDayTimeState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDayTimeManager_GetDayTimeState_Statics::DayTimeManager_eventGetDayTimeState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDayTimeManager_GetDayTimeState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDayTimeManager_GetDayTimeState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDayTimeManager_GetDayTimeState_Statics::DayTimeManager_eventGetDayTimeState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDayTimeManager_GetDayTimeState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDayTimeManager_GetDayTimeState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDayTimeManager::execGetDayTimeState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDayTimeState*)Z_Param__Result=P_THIS->GetDayTimeState();
	P_NATIVE_END;
}
// End Class UDayTimeManager Function GetDayTimeState

// Begin Class UDayTimeManager Function InitDay
struct Z_Construct_UFunction_UDayTimeManager_InitDay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DayTimeManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDayTimeManager_InitDay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDayTimeManager, nullptr, "InitDay", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDayTimeManager_InitDay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDayTimeManager_InitDay_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDayTimeManager_InitDay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDayTimeManager_InitDay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDayTimeManager::execInitDay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitDay();
	P_NATIVE_END;
}
// End Class UDayTimeManager Function InitDay

// Begin Class UDayTimeManager Function InitStaticSky
struct Z_Construct_UFunction_UDayTimeManager_InitStaticSky_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DayTimeManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDayTimeManager_InitStaticSky_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDayTimeManager, nullptr, "InitStaticSky", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDayTimeManager_InitStaticSky_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDayTimeManager_InitStaticSky_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDayTimeManager_InitStaticSky()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDayTimeManager_InitStaticSky_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDayTimeManager::execInitStaticSky)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitStaticSky();
	P_NATIVE_END;
}
// End Class UDayTimeManager Function InitStaticSky

// Begin Class UDayTimeManager Function NightAction
struct Z_Construct_UFunction_UDayTimeManager_NightAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DayTimeManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDayTimeManager_NightAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDayTimeManager, nullptr, "NightAction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDayTimeManager_NightAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDayTimeManager_NightAction_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDayTimeManager_NightAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDayTimeManager_NightAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDayTimeManager::execNightAction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NightAction();
	P_NATIVE_END;
}
// End Class UDayTimeManager Function NightAction

// Begin Class UDayTimeManager Function RedMoonAction
struct Z_Construct_UFunction_UDayTimeManager_RedMoonAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DayTimeManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDayTimeManager_RedMoonAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDayTimeManager, nullptr, "RedMoonAction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDayTimeManager_RedMoonAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDayTimeManager_RedMoonAction_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDayTimeManager_RedMoonAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDayTimeManager_RedMoonAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDayTimeManager::execRedMoonAction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RedMoonAction();
	P_NATIVE_END;
}
// End Class UDayTimeManager Function RedMoonAction

// Begin Class UDayTimeManager Function SunriseAction
struct Z_Construct_UFunction_UDayTimeManager_SunriseAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DayTimeManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDayTimeManager_SunriseAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDayTimeManager, nullptr, "SunriseAction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDayTimeManager_SunriseAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDayTimeManager_SunriseAction_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDayTimeManager_SunriseAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDayTimeManager_SunriseAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDayTimeManager::execSunriseAction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SunriseAction();
	P_NATIVE_END;
}
// End Class UDayTimeManager Function SunriseAction

// Begin Class UDayTimeManager Function SunsetAction
struct Z_Construct_UFunction_UDayTimeManager_SunsetAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DayTimeManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDayTimeManager_SunsetAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDayTimeManager, nullptr, "SunsetAction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDayTimeManager_SunsetAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDayTimeManager_SunsetAction_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDayTimeManager_SunsetAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDayTimeManager_SunsetAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDayTimeManager::execSunsetAction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SunsetAction();
	P_NATIVE_END;
}
// End Class UDayTimeManager Function SunsetAction

// Begin Class UDayTimeManager
void UDayTimeManager::StaticRegisterNativesUDayTimeManager()
{
	UClass* Class = UDayTimeManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Day0Action", &UDayTimeManager::execDay0Action },
		{ "Day1Action", &UDayTimeManager::execDay1Action },
		{ "Day2Action", &UDayTimeManager::execDay2Action },
		{ "GetDayTimeState", &UDayTimeManager::execGetDayTimeState },
		{ "InitDay", &UDayTimeManager::execInitDay },
		{ "InitStaticSky", &UDayTimeManager::execInitStaticSky },
		{ "NightAction", &UDayTimeManager::execNightAction },
		{ "RedMoonAction", &UDayTimeManager::execRedMoonAction },
		{ "SunriseAction", &UDayTimeManager::execSunriseAction },
		{ "SunsetAction", &UDayTimeManager::execSunsetAction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDayTimeManager);
UClass* Z_Construct_UClass_UDayTimeManager_NoRegister()
{
	return UDayTimeManager::StaticClass();
}
struct Z_Construct_UClass_UDayTimeManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DayTimeManager.h" },
		{ "ModuleRelativePath", "Public/DayTimeManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDayInit_MetaData[] = {
		{ "ModuleRelativePath", "Public/DayTimeManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDayInit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDayTimeManager_Day0Action, "Day0Action" }, // 3010504100
		{ &Z_Construct_UFunction_UDayTimeManager_Day1Action, "Day1Action" }, // 2705238989
		{ &Z_Construct_UFunction_UDayTimeManager_Day2Action, "Day2Action" }, // 2574537930
		{ &Z_Construct_UFunction_UDayTimeManager_GetDayTimeState, "GetDayTimeState" }, // 339844532
		{ &Z_Construct_UFunction_UDayTimeManager_InitDay, "InitDay" }, // 2335439628
		{ &Z_Construct_UFunction_UDayTimeManager_InitStaticSky, "InitStaticSky" }, // 3115916859
		{ &Z_Construct_UFunction_UDayTimeManager_NightAction, "NightAction" }, // 937146745
		{ &Z_Construct_UFunction_UDayTimeManager_RedMoonAction, "RedMoonAction" }, // 4252188383
		{ &Z_Construct_UFunction_UDayTimeManager_SunriseAction, "SunriseAction" }, // 672047762
		{ &Z_Construct_UFunction_UDayTimeManager_SunsetAction, "SunsetAction" }, // 3888840500
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDayTimeManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDayTimeManager_Statics::NewProp_OnDayInit = { "OnDayInit", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDayTimeManager, OnDayInit), Z_Construct_UDelegateFunction_EnhancedUDS_DayTimeInitDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDayInit_MetaData), NewProp_OnDayInit_MetaData) }; // 3560746583
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDayTimeManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDayTimeManager_Statics::NewProp_OnDayInit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDayTimeManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDayTimeManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedUDS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDayTimeManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDayTimeManager_Statics::ClassParams = {
	&UDayTimeManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDayTimeManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDayTimeManager_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDayTimeManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UDayTimeManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDayTimeManager()
{
	if (!Z_Registration_Info_UClass_UDayTimeManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDayTimeManager.OuterSingleton, Z_Construct_UClass_UDayTimeManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDayTimeManager.OuterSingleton;
}
template<> ENHANCEDUDS_API UClass* StaticClass<UDayTimeManager>()
{
	return UDayTimeManager::StaticClass();
}
UDayTimeManager::UDayTimeManager() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDayTimeManager);
UDayTimeManager::~UDayTimeManager() {}
// End Class UDayTimeManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyPluginProject_Plugins_EnhancedUDS_Source_EnhancedUDS_Public_DayTimeManager_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDayTimeState_StaticEnum, TEXT("EDayTimeState"), &Z_Registration_Info_UEnum_EDayTimeState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2856581246U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDayTimeManager, UDayTimeManager::StaticClass, TEXT("UDayTimeManager"), &Z_Registration_Info_UClass_UDayTimeManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDayTimeManager), 2998420323U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPluginProject_Plugins_EnhancedUDS_Source_EnhancedUDS_Public_DayTimeManager_h_1841141490(TEXT("/Script/EnhancedUDS"),
	Z_CompiledInDeferFile_FID_MyPluginProject_Plugins_EnhancedUDS_Source_EnhancedUDS_Public_DayTimeManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPluginProject_Plugins_EnhancedUDS_Source_EnhancedUDS_Public_DayTimeManager_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MyPluginProject_Plugins_EnhancedUDS_Source_EnhancedUDS_Public_DayTimeManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPluginProject_Plugins_EnhancedUDS_Source_EnhancedUDS_Public_DayTimeManager_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
