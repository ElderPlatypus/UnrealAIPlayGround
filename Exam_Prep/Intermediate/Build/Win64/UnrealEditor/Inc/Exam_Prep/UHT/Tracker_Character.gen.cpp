// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Exam_Prep/Tracker/Tracker_Character.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTracker_Character() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
EXAM_PREP_API UClass* Z_Construct_UClass_ATracker_Character();
EXAM_PREP_API UClass* Z_Construct_UClass_ATracker_Character_NoRegister();
UPackage* Z_Construct_UPackage__Script_Exam_Prep();
// End Cross Module References

// Begin Class ATracker_Character
void ATracker_Character::StaticRegisterNativesATracker_Character()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATracker_Character);
UClass* Z_Construct_UClass_ATracker_Character_NoRegister()
{
	return ATracker_Character::StaticClass();
}
struct Z_Construct_UClass_ATracker_Character_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Tracker/Tracker_Character.h" },
		{ "ModuleRelativePath", "Tracker/Tracker_Character.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATracker_Character>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATracker_Character_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Exam_Prep,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATracker_Character_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATracker_Character_Statics::ClassParams = {
	&ATracker_Character::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATracker_Character_Statics::Class_MetaDataParams), Z_Construct_UClass_ATracker_Character_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATracker_Character()
{
	if (!Z_Registration_Info_UClass_ATracker_Character.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATracker_Character.OuterSingleton, Z_Construct_UClass_ATracker_Character_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATracker_Character.OuterSingleton;
}
template<> EXAM_PREP_API UClass* StaticClass<ATracker_Character>()
{
	return ATracker_Character::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATracker_Character);
ATracker_Character::~ATracker_Character() {}
// End Class ATracker_Character

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_UnrealAIPlayGround_Exam_Prep_Source_Exam_Prep_Tracker_Tracker_Character_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATracker_Character, ATracker_Character::StaticClass, TEXT("ATracker_Character"), &Z_Registration_Info_UClass_ATracker_Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATracker_Character), 1084760207U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_UnrealAIPlayGround_Exam_Prep_Source_Exam_Prep_Tracker_Tracker_Character_h_694924618(TEXT("/Script/Exam_Prep"),
	Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_UnrealAIPlayGround_Exam_Prep_Source_Exam_Prep_Tracker_Tracker_Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_UnrealAIPlayGround_Exam_Prep_Source_Exam_Prep_Tracker_Tracker_Character_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
