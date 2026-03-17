// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnhancedUDS_init() {}
	ENHANCEDUDS_API UFunction* Z_Construct_UDelegateFunction_EnhancedUDS_DayTimeInitDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_EnhancedUDS;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_EnhancedUDS()
	{
		if (!Z_Registration_Info_UPackage__Script_EnhancedUDS.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_EnhancedUDS_DayTimeInitDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/EnhancedUDS",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x0362CBC8,
				0xCD73239D,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_EnhancedUDS.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_EnhancedUDS.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_EnhancedUDS(Z_Construct_UPackage__Script_EnhancedUDS, TEXT("/Script/EnhancedUDS"), Z_Registration_Info_UPackage__Script_EnhancedUDS, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x0362CBC8, 0xCD73239D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
