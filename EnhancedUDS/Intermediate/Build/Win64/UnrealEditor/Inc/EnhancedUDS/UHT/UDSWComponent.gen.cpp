// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnhancedUDS/Public/UDSWComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUDSWComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENHANCEDUDS_API UClass* Z_Construct_UClass_UUDswComponent();
ENHANCEDUDS_API UClass* Z_Construct_UClass_UUDswComponent_NoRegister();
ENHANCEDUDS_API UEnum* Z_Construct_UEnum_EnhancedUDS_EDayTimeState();
UPackage* Z_Construct_UPackage__Script_EnhancedUDS();
// End Cross Module References

// Begin Class UUDswComponent
void UUDswComponent::StaticRegisterNativesUUDswComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUDswComponent);
UClass* Z_Construct_UClass_UUDswComponent_NoRegister()
{
	return UUDswComponent::StaticClass();
}
struct Z_Construct_UClass_UUDswComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UDSWComponent.h" },
		{ "ModuleRelativePath", "Public/UDSWComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkyState_MetaData[] = {
		{ "ModuleRelativePath", "Public/UDSWComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SkyState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SkyState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUDswComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUDswComponent_Statics::NewProp_SkyState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUDswComponent_Statics::NewProp_SkyState = { "SkyState", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUDswComponent, SkyState), Z_Construct_UEnum_EnhancedUDS_EDayTimeState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkyState_MetaData), NewProp_SkyState_MetaData) }; // 2856581246
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUDswComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUDswComponent_Statics::NewProp_SkyState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUDswComponent_Statics::NewProp_SkyState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUDswComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUDswComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_EnhancedUDS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUDswComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUDswComponent_Statics::ClassParams = {
	&UUDswComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUDswComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUDswComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUDswComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UUDswComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUDswComponent()
{
	if (!Z_Registration_Info_UClass_UUDswComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUDswComponent.OuterSingleton, Z_Construct_UClass_UUDswComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUDswComponent.OuterSingleton;
}
template<> ENHANCEDUDS_API UClass* StaticClass<UUDswComponent>()
{
	return UUDswComponent::StaticClass();
}
void UUDswComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_SkyState(TEXT("SkyState"));
	const bool bIsValid = true
		&& Name_SkyState == ClassReps[(int32)ENetFields_Private::SkyState].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UUDswComponent"));
}
UUDswComponent::UUDswComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUDswComponent);
UUDswComponent::~UUDswComponent() {}
// End Class UUDswComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyPluginProject_Plugins_EnhancedUDS_Source_EnhancedUDS_Public_UDSWComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUDswComponent, UUDswComponent::StaticClass, TEXT("UUDswComponent"), &Z_Registration_Info_UClass_UUDswComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUDswComponent), 3092552531U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyPluginProject_Plugins_EnhancedUDS_Source_EnhancedUDS_Public_UDSWComponent_h_2385044257(TEXT("/Script/EnhancedUDS"),
	Z_CompiledInDeferFile_FID_MyPluginProject_Plugins_EnhancedUDS_Source_EnhancedUDS_Public_UDSWComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyPluginProject_Plugins_EnhancedUDS_Source_EnhancedUDS_Public_UDSWComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
