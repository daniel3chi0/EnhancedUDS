// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnhancedUDS/Public/UDSWManager.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUDSWManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
ENHANCEDUDS_API UClass* Z_Construct_UClass_UUDSWManager();
ENHANCEDUDS_API UClass* Z_Construct_UClass_UUDSWManager_NoRegister();
ENHANCEDUDS_API UEnum* Z_Construct_UEnum_EnhancedUDS_EDayTimeState();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_EnhancedUDS();
// End Cross Module References

// Begin Class UUDSWManager Function BindToDayTimeManagerDelegate
struct Z_Construct_UFunction_UUDSWManager_BindToDayTimeManagerDelegate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UDSWManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUDSWManager_BindToDayTimeManagerDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUDSWManager, nullptr, "BindToDayTimeManagerDelegate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUDSWManager_BindToDayTimeManagerDelegate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUDSWManager_BindToDayTimeManagerDelegate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UUDSWManager_BindToDayTimeManagerDelegate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUDSWManager_BindToDayTimeManagerDelegate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUDSWManager::execBindToDayTimeManagerDelegate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindToDayTimeManagerDelegate();
	P_NATIVE_END;
}
// End Class UUDSWManager Function BindToDayTimeManagerDelegate

// Begin Class UUDSWManager Function ChangeUDSWState
struct Z_Construct_UFunction_UUDSWManager_ChangeUDSWState_Statics
{
	struct UDSWManager_eventChangeUDSWState_Parms
	{
		EDayTimeState DayTimeState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UDSWManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DayTimeState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DayTimeState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUDSWManager_ChangeUDSWState_Statics::NewProp_DayTimeState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUDSWManager_ChangeUDSWState_Statics::NewProp_DayTimeState = { "DayTimeState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDSWManager_eventChangeUDSWState_Parms, DayTimeState), Z_Construct_UEnum_EnhancedUDS_EDayTimeState, METADATA_PARAMS(0, nullptr) }; // 2856581246
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUDSWManager_ChangeUDSWState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDSWManager_ChangeUDSWState_Statics::NewProp_DayTimeState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDSWManager_ChangeUDSWState_Statics::NewProp_DayTimeState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUDSWManager_ChangeUDSWState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUDSWManager_ChangeUDSWState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUDSWManager, nullptr, "ChangeUDSWState", nullptr, nullptr, Z_Construct_UFunction_UUDSWManager_ChangeUDSWState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUDSWManager_ChangeUDSWState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUDSWManager_ChangeUDSWState_Statics::UDSWManager_eventChangeUDSWState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUDSWManager_ChangeUDSWState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUDSWManager_ChangeUDSWState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUDSWManager_ChangeUDSWState_Statics::UDSWManager_eventChangeUDSWState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUDSWManager_ChangeUDSWState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUDSWManager_ChangeUDSWState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUDSWManager::execChangeUDSWState)
{
	P_GET_ENUM(EDayTimeState,Z_Param_DayTimeState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeUDSWState(EDayTimeState(Z_Param_DayTimeState));
	P_NATIVE_END;
}
// End Class UUDSWManager Function ChangeUDSWState

// Begin Class UUDSWManager Function ClearAndApplyUDSWCfgEntry
struct UDSWManager_eventClearAndApplyUDSWCfgEntry_Parms
{
	FGameplayTag Tag;
};
static FName NAME_UUDSWManager_ClearAndApplyUDSWCfgEntry = FName(TEXT("ClearAndApplyUDSWCfgEntry"));
void UUDSWManager::ClearAndApplyUDSWCfgEntry(FGameplayTag Tag)
{
	UDSWManager_eventClearAndApplyUDSWCfgEntry_Parms Parms;
	Parms.Tag=Tag;
	ProcessEvent(FindFunctionChecked(NAME_UUDSWManager_ClearAndApplyUDSWCfgEntry),&Parms);
}
struct Z_Construct_UFunction_UUDSWManager_ClearAndApplyUDSWCfgEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UDSWManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUDSWManager_ClearAndApplyUDSWCfgEntry_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDSWManager_eventClearAndApplyUDSWCfgEntry_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUDSWManager_ClearAndApplyUDSWCfgEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDSWManager_ClearAndApplyUDSWCfgEntry_Statics::NewProp_Tag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUDSWManager_ClearAndApplyUDSWCfgEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUDSWManager_ClearAndApplyUDSWCfgEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUDSWManager, nullptr, "ClearAndApplyUDSWCfgEntry", nullptr, nullptr, Z_Construct_UFunction_UUDSWManager_ClearAndApplyUDSWCfgEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUDSWManager_ClearAndApplyUDSWCfgEntry_Statics::PropPointers), sizeof(UDSWManager_eventClearAndApplyUDSWCfgEntry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUDSWManager_ClearAndApplyUDSWCfgEntry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUDSWManager_ClearAndApplyUDSWCfgEntry_Statics::Function_MetaDataParams) };
static_assert(sizeof(UDSWManager_eventClearAndApplyUDSWCfgEntry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUDSWManager_ClearAndApplyUDSWCfgEntry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUDSWManager_ClearAndApplyUDSWCfgEntry_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UUDSWManager Function ClearAndApplyUDSWCfgEntry

// Begin Class UUDSWManager Function GetUDSWCfg
struct Z_Construct_UFunction_UUDSWManager_GetUDSWCfg_Statics
{
	struct UDSWManager_eventGetUDSWCfg_Parms
	{
		UPrimaryDataAsset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UDSWManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUDSWManager_GetUDSWCfg_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDSWManager_eventGetUDSWCfg_Parms, ReturnValue), Z_Construct_UClass_UPrimaryDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUDSWManager_GetUDSWCfg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDSWManager_GetUDSWCfg_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUDSWManager_GetUDSWCfg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUDSWManager_GetUDSWCfg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUDSWManager, nullptr, "GetUDSWCfg", nullptr, nullptr, Z_Construct_UFunction_UUDSWManager_GetUDSWCfg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUDSWManager_GetUDSWCfg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUDSWManager_GetUDSWCfg_Statics::UDSWManager_eventGetUDSWCfg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUDSWManager_GetUDSWCfg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUDSWManager_GetUDSWCfg_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUDSWManager_GetUDSWCfg_Statics::UDSWManager_eventGetUDSWCfg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUDSWManager_GetUDSWCfg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUDSWManager_GetUDSWCfg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUDSWManager::execGetUDSWCfg)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPrimaryDataAsset**)Z_Param__Result=P_THIS->GetUDSWCfg();
	P_NATIVE_END;
}
// End Class UUDSWManager Function GetUDSWCfg

// Begin Class UUDSWManager Function InitOrReInitSkyState
struct Z_Construct_UFunction_UUDSWManager_InitOrReInitSkyState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UDSWManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUDSWManager_InitOrReInitSkyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUDSWManager, nullptr, "InitOrReInitSkyState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUDSWManager_InitOrReInitSkyState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUDSWManager_InitOrReInitSkyState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UUDSWManager_InitOrReInitSkyState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUDSWManager_InitOrReInitSkyState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUDSWManager::execInitOrReInitSkyState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitOrReInitSkyState();
	P_NATIVE_END;
}
// End Class UUDSWManager Function InitOrReInitSkyState

// Begin Class UUDSWManager Function InitUDSW
struct Z_Construct_UFunction_UUDSWManager_InitUDSW_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UDSWManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUDSWManager_InitUDSW_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUDSWManager, nullptr, "InitUDSW", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUDSWManager_InitUDSW_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUDSWManager_InitUDSW_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UUDSWManager_InitUDSW()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUDSWManager_InitUDSW_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUDSWManager::execInitUDSW)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitUDSW();
	P_NATIVE_END;
}
// End Class UUDSWManager Function InitUDSW

// Begin Class UUDSWManager Function UDSIsValid
struct UDSWManager_eventUDSIsValid_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	UDSWManager_eventUDSIsValid_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UUDSWManager_UDSIsValid = FName(TEXT("UDSIsValid"));
bool UUDSWManager::UDSIsValid()
{
	UDSWManager_eventUDSIsValid_Parms Parms;
	ProcessEvent(FindFunctionChecked(NAME_UUDSWManager_UDSIsValid),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UUDSWManager_UDSIsValid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UDSWManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUDSWManager_UDSIsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UDSWManager_eventUDSIsValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUDSWManager_UDSIsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDSWManager_eventUDSIsValid_Parms), &Z_Construct_UFunction_UUDSWManager_UDSIsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUDSWManager_UDSIsValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDSWManager_UDSIsValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUDSWManager_UDSIsValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUDSWManager_UDSIsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUDSWManager, nullptr, "UDSIsValid", nullptr, nullptr, Z_Construct_UFunction_UUDSWManager_UDSIsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUDSWManager_UDSIsValid_Statics::PropPointers), sizeof(UDSWManager_eventUDSIsValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUDSWManager_UDSIsValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUDSWManager_UDSIsValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(UDSWManager_eventUDSIsValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUDSWManager_UDSIsValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUDSWManager_UDSIsValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UUDSWManager Function UDSIsValid

// Begin Class UUDSWManager Function UDWIsValid
struct UDSWManager_eventUDWIsValid_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	UDSWManager_eventUDWIsValid_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UUDSWManager_UDWIsValid = FName(TEXT("UDWIsValid"));
bool UUDSWManager::UDWIsValid()
{
	UDSWManager_eventUDWIsValid_Parms Parms;
	ProcessEvent(FindFunctionChecked(NAME_UUDSWManager_UDWIsValid),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UUDSWManager_UDWIsValid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UDSWManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUDSWManager_UDWIsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UDSWManager_eventUDWIsValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUDSWManager_UDWIsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDSWManager_eventUDWIsValid_Parms), &Z_Construct_UFunction_UUDSWManager_UDWIsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUDSWManager_UDWIsValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDSWManager_UDWIsValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUDSWManager_UDWIsValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUDSWManager_UDWIsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUDSWManager, nullptr, "UDWIsValid", nullptr, nullptr, Z_Construct_UFunction_UUDSWManager_UDWIsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUDSWManager_UDWIsValid_Statics::PropPointers), sizeof(UDSWManager_eventUDWIsValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUDSWManager_UDWIsValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUDSWManager_UDWIsValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(UDSWManager_eventUDWIsValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUDSWManager_UDWIsValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUDSWManager_UDWIsValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UUDSWManager Function UDWIsValid

// Begin Class UUDSWManager
void UUDSWManager::StaticRegisterNativesUUDSWManager()
{
	UClass* Class = UUDSWManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BindToDayTimeManagerDelegate", &UUDSWManager::execBindToDayTimeManagerDelegate },
		{ "ChangeUDSWState", &UUDSWManager::execChangeUDSWState },
		{ "GetUDSWCfg", &UUDSWManager::execGetUDSWCfg },
		{ "InitOrReInitSkyState", &UUDSWManager::execInitOrReInitSkyState },
		{ "InitUDSW", &UUDSWManager::execInitUDSW },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUDSWManager);
UClass* Z_Construct_UClass_UUDSWManager_NoRegister()
{
	return UUDSWManager::StaticClass();
}
struct Z_Construct_UClass_UUDSWManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UDSWManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UDSWManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UDSWConfig_MetaData[] = {
		{ "Category", "UDSWManager" },
		{ "ModuleRelativePath", "Public/UDSWManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UDSToCpp_MetaData[] = {
		{ "Category", "UDSWManager" },
		{ "ModuleRelativePath", "Public/UDSWManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UDWToCpp_MetaData[] = {
		{ "Category", "UDSWManager" },
		{ "ModuleRelativePath", "Public/UDSWManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_UDSWConfig;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_UDSToCpp;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_UDWToCpp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUDSWManager_BindToDayTimeManagerDelegate, "BindToDayTimeManagerDelegate" }, // 478844320
		{ &Z_Construct_UFunction_UUDSWManager_ChangeUDSWState, "ChangeUDSWState" }, // 3281256379
		{ &Z_Construct_UFunction_UUDSWManager_ClearAndApplyUDSWCfgEntry, "ClearAndApplyUDSWCfgEntry" }, // 678374186
		{ &Z_Construct_UFunction_UUDSWManager_GetUDSWCfg, "GetUDSWCfg" }, // 3518581394
		{ &Z_Construct_UFunction_UUDSWManager_InitOrReInitSkyState, "InitOrReInitSkyState" }, // 3663483864
		{ &Z_Construct_UFunction_UUDSWManager_InitUDSW, "InitUDSW" }, // 2806317715
		{ &Z_Construct_UFunction_UUDSWManager_UDSIsValid, "UDSIsValid" }, // 768813040
		{ &Z_Construct_UFunction_UUDSWManager_UDWIsValid, "UDWIsValid" }, // 1326919290
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUDSWManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UUDSWManager_Statics::NewProp_UDSWConfig = { "UDSWConfig", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUDSWManager, UDSWConfig), Z_Construct_UClass_UPrimaryDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UDSWConfig_MetaData), NewProp_UDSWConfig_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UUDSWManager_Statics::NewProp_UDSToCpp = { "UDSToCpp", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUDSWManager, UDSToCpp), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UDSToCpp_MetaData), NewProp_UDSToCpp_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UUDSWManager_Statics::NewProp_UDWToCpp = { "UDWToCpp", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUDSWManager, UDWToCpp), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UDWToCpp_MetaData), NewProp_UDWToCpp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUDSWManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUDSWManager_Statics::NewProp_UDSWConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUDSWManager_Statics::NewProp_UDSToCpp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUDSWManager_Statics::NewProp_UDWToCpp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUDSWManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUDSWManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedUDS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUDSWManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUDSWManager_Statics::ClassParams = {
	&UUDSWManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUDSWManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUDSWManager_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUDSWManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UUDSWManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUDSWManager()
{
	if (!Z_Registration_Info_UClass_UUDSWManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUDSWManager.OuterSingleton, Z_Construct_UClass_UUDSWManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUDSWManager.OuterSingleton;
}
template<> ENHANCEDUDS_API UClass* StaticClass<UUDSWManager>()
{
	return UUDSWManager::StaticClass();
}
UUDSWManager::UUDSWManager() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUDSWManager);
UUDSWManager::~UUDSWManager() {}
// End Class UUDSWManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyPluginProject_Plugins_EnhancedUDS_Source_EnhancedUDS_Public_UDSWManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUDSWManager, UUDSWManager::StaticClass, TEXT("UUDSWManager"), &Z_Registration_Info_UClass_UUDSWManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUDSWManager), 3067524757U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPluginProject_Plugins_EnhancedUDS_Source_EnhancedUDS_Public_UDSWManager_h_57802908(TEXT("/Script/EnhancedUDS"),
	Z_CompiledInDeferFile_FID_MyPluginProject_Plugins_EnhancedUDS_Source_EnhancedUDS_Public_UDSWManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPluginProject_Plugins_EnhancedUDS_Source_EnhancedUDS_Public_UDSWManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
