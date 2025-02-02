// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Exam_Prep/Enemy/BT_Allocate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBT_Allocate() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
EXAM_PREP_API UClass* Z_Construct_UClass_UBT_Allocate();
EXAM_PREP_API UClass* Z_Construct_UClass_UBT_Allocate_NoRegister();
UPackage* Z_Construct_UPackage__Script_Exam_Prep();
// End Cross Module References

// Begin Class UBT_Allocate
void UBT_Allocate::StaticRegisterNativesUBT_Allocate()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBT_Allocate);
UClass* Z_Construct_UClass_UBT_Allocate_NoRegister()
{
	return UBT_Allocate::StaticClass();
}
struct Z_Construct_UClass_UBT_Allocate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Enemy/BT_Allocate.h" },
		{ "ModuleRelativePath", "Enemy/BT_Allocate.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBT_Allocate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBT_Allocate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Exam_Prep,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBT_Allocate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBT_Allocate_Statics::ClassParams = {
	&UBT_Allocate::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBT_Allocate_Statics::Class_MetaDataParams), Z_Construct_UClass_UBT_Allocate_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBT_Allocate()
{
	if (!Z_Registration_Info_UClass_UBT_Allocate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBT_Allocate.OuterSingleton, Z_Construct_UClass_UBT_Allocate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBT_Allocate.OuterSingleton;
}
template<> EXAM_PREP_API UClass* StaticClass<UBT_Allocate>()
{
	return UBT_Allocate::StaticClass();
}
UBT_Allocate::UBT_Allocate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBT_Allocate);
UBT_Allocate::~UBT_Allocate() {}
// End Class UBT_Allocate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_UnrealAIPlayGround_Exam_Prep_Source_Exam_Prep_Enemy_BT_Allocate_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBT_Allocate, UBT_Allocate::StaticClass, TEXT("UBT_Allocate"), &Z_Registration_Info_UClass_UBT_Allocate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBT_Allocate), 3395788554U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_UnrealAIPlayGround_Exam_Prep_Source_Exam_Prep_Enemy_BT_Allocate_h_4197801517(TEXT("/Script/Exam_Prep"),
	Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_UnrealAIPlayGround_Exam_Prep_Source_Exam_Prep_Enemy_BT_Allocate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_UnrealAIPlayGround_Exam_Prep_Source_Exam_Prep_Enemy_BT_Allocate_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
