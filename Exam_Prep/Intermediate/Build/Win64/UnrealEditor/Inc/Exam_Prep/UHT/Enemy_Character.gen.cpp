// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Exam_Prep/Enemy/Enemy_Character.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_Character() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
EXAM_PREP_API UClass* Z_Construct_UClass_AEnemy_Character();
EXAM_PREP_API UClass* Z_Construct_UClass_AEnemy_Character_NoRegister();
EXAM_PREP_API UClass* Z_Construct_UClass_AEnemy_TargetPoint_NoRegister();
UPackage* Z_Construct_UPackage__Script_Exam_Prep();
// End Cross Module References

// Begin Class AEnemy_Character
void AEnemy_Character::StaticRegisterNativesAEnemy_Character()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemy_Character);
UClass* Z_Construct_UClass_AEnemy_Character_NoRegister()
{
	return AEnemy_Character::StaticClass();
}
struct Z_Construct_UClass_AEnemy_Character_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemy/Enemy_Character.h" },
		{ "ModuleRelativePath", "Enemy/Enemy_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mRetriveObjects_MetaData[] = {
		{ "Category", "Targets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Properties\n" },
#endif
		{ "ModuleRelativePath", "Enemy/Enemy_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Properties" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mRetriveTargets_MetaData[] = {
		{ "Category", "Targets" },
		{ "ModuleRelativePath", "Enemy/Enemy_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mStartPos_MetaData[] = {
		{ "Category", "Targets" },
		{ "ModuleRelativePath", "Enemy/Enemy_Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mRetriveObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_mRetriveObjects;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mRetriveTargets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_mRetriveTargets;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mStartPos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy_Character>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Character_Statics::NewProp_mRetriveObjects_Inner = { "mRetriveObjects", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemy_Character_Statics::NewProp_mRetriveObjects = { "mRetriveObjects", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy_Character, mRetriveObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mRetriveObjects_MetaData), NewProp_mRetriveObjects_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Character_Statics::NewProp_mRetriveTargets_Inner = { "mRetriveTargets", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AEnemy_TargetPoint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemy_Character_Statics::NewProp_mRetriveTargets = { "mRetriveTargets", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy_Character, mRetriveTargets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mRetriveTargets_MetaData), NewProp_mRetriveTargets_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Character_Statics::NewProp_mStartPos = { "mStartPos", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy_Character, mStartPos), Z_Construct_UClass_AEnemy_TargetPoint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mStartPos_MetaData), NewProp_mStartPos_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemy_Character_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Character_Statics::NewProp_mRetriveObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Character_Statics::NewProp_mRetriveObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Character_Statics::NewProp_mRetriveTargets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Character_Statics::NewProp_mRetriveTargets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Character_Statics::NewProp_mStartPos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Character_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemy_Character_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Exam_Prep,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Character_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_Character_Statics::ClassParams = {
	&AEnemy_Character::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEnemy_Character_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Character_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Character_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemy_Character_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemy_Character()
{
	if (!Z_Registration_Info_UClass_AEnemy_Character.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemy_Character.OuterSingleton, Z_Construct_UClass_AEnemy_Character_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemy_Character.OuterSingleton;
}
template<> EXAM_PREP_API UClass* StaticClass<AEnemy_Character>()
{
	return AEnemy_Character::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy_Character);
AEnemy_Character::~AEnemy_Character() {}
// End Class AEnemy_Character

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_Exam_Prep_Source_Exam_Prep_Enemy_Enemy_Character_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemy_Character, AEnemy_Character::StaticClass, TEXT("AEnemy_Character"), &Z_Registration_Info_UClass_AEnemy_Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy_Character), 3498403807U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_Exam_Prep_Source_Exam_Prep_Enemy_Enemy_Character_h_4138752216(TEXT("/Script/Exam_Prep"),
	Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_Exam_Prep_Source_Exam_Prep_Enemy_Enemy_Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_Exam_Prep_Source_Exam_Prep_Enemy_Enemy_Character_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
