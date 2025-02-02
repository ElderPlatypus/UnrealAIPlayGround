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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isFollowing_MetaData[] = {
		{ "Category", "Spawn Member" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//_____________Follow Player_____________\n" },
#endif
		{ "ModuleRelativePath", "Tracker/Tracker_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "_____________Follow Player_____________" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isTurning_MetaData[] = {
		{ "Category", "Spawn Member" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//_____________Follow Player_____________\n" },
#endif
		{ "ModuleRelativePath", "Tracker/Tracker_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "_____________Follow Player_____________" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_speedControl_MetaData[] = {
		{ "Category", "Spawn Member" },
		{ "ModuleRelativePath", "Tracker/Tracker_Character.h" },
	};
#endif // WITH_METADATA
	static void NewProp_isFollowing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isFollowing;
	static void NewProp_isTurning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isTurning;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_speedControl;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATracker_Character>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ATracker_Character_Statics::NewProp_isFollowing_SetBit(void* Obj)
{
	((ATracker_Character*)Obj)->isFollowing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATracker_Character_Statics::NewProp_isFollowing = { "isFollowing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATracker_Character), &Z_Construct_UClass_ATracker_Character_Statics::NewProp_isFollowing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isFollowing_MetaData), NewProp_isFollowing_MetaData) };
void Z_Construct_UClass_ATracker_Character_Statics::NewProp_isTurning_SetBit(void* Obj)
{
	((ATracker_Character*)Obj)->isTurning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATracker_Character_Statics::NewProp_isTurning = { "isTurning", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATracker_Character), &Z_Construct_UClass_ATracker_Character_Statics::NewProp_isTurning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isTurning_MetaData), NewProp_isTurning_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATracker_Character_Statics::NewProp_speedControl = { "speedControl", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATracker_Character, speedControl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_speedControl_MetaData), NewProp_speedControl_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATracker_Character_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATracker_Character_Statics::NewProp_isFollowing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATracker_Character_Statics::NewProp_isTurning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATracker_Character_Statics::NewProp_speedControl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATracker_Character_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_ATracker_Character_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATracker_Character_Statics::PropPointers),
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
		{ Z_Construct_UClass_ATracker_Character, ATracker_Character::StaticClass, TEXT("ATracker_Character"), &Z_Registration_Info_UClass_ATracker_Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATracker_Character), 3927075058U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_UnrealAIPlayGround_Exam_Prep_Source_Exam_Prep_Tracker_Tracker_Character_h_2305078890(TEXT("/Script/Exam_Prep"),
	Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_UnrealAIPlayGround_Exam_Prep_Source_Exam_Prep_Tracker_Tracker_Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_UnrealAIPlayGround_Exam_Prep_Source_Exam_Prep_Tracker_Tracker_Character_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
