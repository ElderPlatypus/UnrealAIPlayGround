// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Exam_Prep/Flocking/BoidSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoidSpawner() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
EXAM_PREP_API UClass* Z_Construct_UClass_ABoidCharacter_NoRegister();
EXAM_PREP_API UClass* Z_Construct_UClass_ABoidSpawner();
EXAM_PREP_API UClass* Z_Construct_UClass_ABoidSpawner_NoRegister();
UPackage* Z_Construct_UPackage__Script_Exam_Prep();
// End Cross Module References

// Begin Class ABoidSpawner
void ABoidSpawner::StaticRegisterNativesABoidSpawner()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABoidSpawner);
UClass* Z_Construct_UClass_ABoidSpawner_NoRegister()
{
	return ABoidSpawner::StaticClass();
}
struct Z_Construct_UClass_ABoidSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Flocking/BoidSpawner.h" },
		{ "ModuleRelativePath", "Flocking/BoidSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubBoid_MetaData[] = {
		{ "Category", "Spawn Object" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//_____________Spawner & Parameters_____________\n" },
#endif
		{ "ModuleRelativePath", "Flocking/BoidSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "_____________Spawner & Parameters_____________" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumBoids_MetaData[] = {
		{ "Category", "Spawn Member" },
		{ "ModuleRelativePath", "Flocking/BoidSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnOrigin_MetaData[] = {
		{ "Category", "Spawn Member" },
		{ "ModuleRelativePath", "Flocking/BoidSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwimLimits_MetaData[] = {
		{ "Category", "Spawn Member" },
		{ "ModuleRelativePath", "Flocking/BoidSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSpeed_MetaData[] = {
		{ "Category", "Spawn Member" },
		{ "ModuleRelativePath", "Flocking/BoidSpawner.h" },
		{ "UIMax", "500" },
		{ "UIMin", "100" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "Spawn Member" },
		{ "ModuleRelativePath", "Flocking/BoidSpawner.h" },
		{ "UIMax", "500" },
		{ "UIMin", "100" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_SubBoid;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumBoids;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnOrigin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SwimLimits;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoidSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABoidSpawner_Statics::NewProp_SubBoid = { "SubBoid", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoidSpawner, SubBoid), Z_Construct_UClass_UClass, Z_Construct_UClass_ABoidCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubBoid_MetaData), NewProp_SubBoid_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABoidSpawner_Statics::NewProp_NumBoids = { "NumBoids", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoidSpawner, NumBoids), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumBoids_MetaData), NewProp_NumBoids_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABoidSpawner_Statics::NewProp_SpawnOrigin = { "SpawnOrigin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoidSpawner, SpawnOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnOrigin_MetaData), NewProp_SpawnOrigin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABoidSpawner_Statics::NewProp_SwimLimits = { "SwimLimits", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoidSpawner, SwimLimits), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwimLimits_MetaData), NewProp_SwimLimits_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABoidSpawner_Statics::NewProp_MinSpeed = { "MinSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoidSpawner, MinSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSpeed_MetaData), NewProp_MinSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABoidSpawner_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoidSpawner, MaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpeed_MetaData), NewProp_MaxSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoidSpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidSpawner_Statics::NewProp_SubBoid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidSpawner_Statics::NewProp_NumBoids,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidSpawner_Statics::NewProp_SpawnOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidSpawner_Statics::NewProp_SwimLimits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidSpawner_Statics::NewProp_MinSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoidSpawner_Statics::NewProp_MaxSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidSpawner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABoidSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Exam_Prep,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABoidSpawner_Statics::ClassParams = {
	&ABoidSpawner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABoidSpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABoidSpawner_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoidSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_ABoidSpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABoidSpawner()
{
	if (!Z_Registration_Info_UClass_ABoidSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABoidSpawner.OuterSingleton, Z_Construct_UClass_ABoidSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABoidSpawner.OuterSingleton;
}
template<> EXAM_PREP_API UClass* StaticClass<ABoidSpawner>()
{
	return ABoidSpawner::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABoidSpawner);
ABoidSpawner::~ABoidSpawner() {}
// End Class ABoidSpawner

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_UnrealAIPlayGround_Exam_Prep_Source_Exam_Prep_Flocking_BoidSpawner_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABoidSpawner, ABoidSpawner::StaticClass, TEXT("ABoidSpawner"), &Z_Registration_Info_UClass_ABoidSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABoidSpawner), 1855003493U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_UnrealAIPlayGround_Exam_Prep_Source_Exam_Prep_Flocking_BoidSpawner_h_1722280216(TEXT("/Script/Exam_Prep"),
	Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_UnrealAIPlayGround_Exam_Prep_Source_Exam_Prep_Flocking_BoidSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_UnrealAIPlayGround_Exam_Prep_Source_Exam_Prep_Flocking_BoidSpawner_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
