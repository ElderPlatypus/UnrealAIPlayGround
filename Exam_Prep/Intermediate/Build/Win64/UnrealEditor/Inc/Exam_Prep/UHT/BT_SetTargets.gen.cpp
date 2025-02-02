// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Exam_Prep/Tracker/BT_SetTargets.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBT_SetTargets() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
EXAM_PREP_API UClass* Z_Construct_UClass_UBT_SetTargets();
EXAM_PREP_API UClass* Z_Construct_UClass_UBT_SetTargets_NoRegister();
UPackage* Z_Construct_UPackage__Script_Exam_Prep();
// End Cross Module References

// Begin Class UBT_SetTargets
void UBT_SetTargets::StaticRegisterNativesUBT_SetTargets()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBT_SetTargets);
UClass* Z_Construct_UClass_UBT_SetTargets_NoRegister()
{
	return UBT_SetTargets::StaticClass();
}
struct Z_Construct_UClass_UBT_SetTargets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Tracker/BT_SetTargets.h" },
		{ "ModuleRelativePath", "Tracker/BT_SetTargets.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBT_SetTargets>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBT_SetTargets_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Exam_Prep,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBT_SetTargets_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBT_SetTargets_Statics::ClassParams = {
	&UBT_SetTargets::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBT_SetTargets_Statics::Class_MetaDataParams), Z_Construct_UClass_UBT_SetTargets_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBT_SetTargets()
{
	if (!Z_Registration_Info_UClass_UBT_SetTargets.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBT_SetTargets.OuterSingleton, Z_Construct_UClass_UBT_SetTargets_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBT_SetTargets.OuterSingleton;
}
template<> EXAM_PREP_API UClass* StaticClass<UBT_SetTargets>()
{
	return UBT_SetTargets::StaticClass();
}
UBT_SetTargets::UBT_SetTargets(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBT_SetTargets);
UBT_SetTargets::~UBT_SetTargets() {}
// End Class UBT_SetTargets

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_UnrealAIPlayGround_Exam_Prep_Source_Exam_Prep_Tracker_BT_SetTargets_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBT_SetTargets, UBT_SetTargets::StaticClass, TEXT("UBT_SetTargets"), &Z_Registration_Info_UClass_UBT_SetTargets, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBT_SetTargets), 3710670958U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_UnrealAIPlayGround_Exam_Prep_Source_Exam_Prep_Tracker_BT_SetTargets_h_2995557539(TEXT("/Script/Exam_Prep"),
	Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_UnrealAIPlayGround_Exam_Prep_Source_Exam_Prep_Tracker_BT_SetTargets_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_UnrealAIPlayGround_Exam_Prep_Source_Exam_Prep_Tracker_BT_SetTargets_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
