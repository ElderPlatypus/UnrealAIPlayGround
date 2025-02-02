// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Exam_Prep/Flocking/BoidCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoidCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
EXAM_PREP_API UClass* Z_Construct_UClass_ABoidCharacter();
EXAM_PREP_API UClass* Z_Construct_UClass_ABoidCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_Exam_Prep();
// End Cross Module References

// Begin Class ABoidCharacter
void ABoidCharacter::StaticRegisterNativesABoidCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABoidCharacter);
UClass* Z_Construct_UClass_ABoidCharacter_NoRegister()
{
	return ABoidCharacter::StaticClass();
}
struct Z_Construct_UClass_ABoidCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Flocking/BoidCharacter.h" },
		{ "ModuleRelativePath", "Flocking/BoidCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoidCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABoidCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Exam_Prep,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABoidCharacter_Statics::ClassParams = {
	&ABoidCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ABoidCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABoidCharacter()
{
	if (!Z_Registration_Info_UClass_ABoidCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABoidCharacter.OuterSingleton, Z_Construct_UClass_ABoidCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABoidCharacter.OuterSingleton;
}
template<> EXAM_PREP_API UClass* StaticClass<ABoidCharacter>()
{
	return ABoidCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABoidCharacter);
ABoidCharacter::~ABoidCharacter() {}
// End Class ABoidCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_UnrealAIPlayGround_Exam_Prep_Source_Exam_Prep_Flocking_BoidCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABoidCharacter, ABoidCharacter::StaticClass, TEXT("ABoidCharacter"), &Z_Registration_Info_UClass_ABoidCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABoidCharacter), 1773364294U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_UnrealAIPlayGround_Exam_Prep_Source_Exam_Prep_Flocking_BoidCharacter_h_1459391048(TEXT("/Script/Exam_Prep"),
	Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_UnrealAIPlayGround_Exam_Prep_Source_Exam_Prep_Flocking_BoidCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_UnrealAIPlayGround_Exam_Prep_Source_Exam_Prep_Flocking_BoidCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
