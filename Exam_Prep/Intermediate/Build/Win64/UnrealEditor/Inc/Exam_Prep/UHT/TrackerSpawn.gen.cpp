// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Exam_Prep/Tracker/TrackerSpawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrackerSpawn() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
EXAM_PREP_API UClass* Z_Construct_UClass_ATracker_Character_NoRegister();
EXAM_PREP_API UClass* Z_Construct_UClass_ATrackerSpawn();
EXAM_PREP_API UClass* Z_Construct_UClass_ATrackerSpawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_Exam_Prep();
// End Cross Module References

// Begin Class ATrackerSpawn
void ATrackerSpawn::StaticRegisterNativesATrackerSpawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATrackerSpawn);
UClass* Z_Construct_UClass_ATrackerSpawn_NoRegister()
{
	return ATrackerSpawn::StaticClass();
}
struct Z_Construct_UClass_ATrackerSpawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tracker/TrackerSpawn.h" },
		{ "ModuleRelativePath", "Tracker/TrackerSpawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubTracker_MetaData[] = {
		{ "Category", "Spawn Object" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//_____________Spawner & Parameters_____________\n" },
#endif
		{ "ModuleRelativePath", "Tracker/TrackerSpawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "_____________Spawner & Parameters_____________" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumTrackers_MetaData[] = {
		{ "Category", "Spawn Member" },
		{ "ModuleRelativePath", "Tracker/TrackerSpawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnOrigin_MetaData[] = {
		{ "Category", "Spawn Member" },
		{ "ModuleRelativePath", "Tracker/TrackerSpawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLim_MetaData[] = {
		{ "Category", "Spawn Member" },
		{ "ModuleRelativePath", "Tracker/TrackerSpawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSpeed_MetaData[] = {
		{ "Category", "Spawn Member" },
		{ "ModuleRelativePath", "Tracker/TrackerSpawn.h" },
		{ "UIMax", "500" },
		{ "UIMin", "100" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "Spawn Member" },
		{ "ModuleRelativePath", "Tracker/TrackerSpawn.h" },
		{ "UIMax", "500" },
		{ "UIMin", "100" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_SubTracker;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumTrackers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnOrigin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnLim;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATrackerSpawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATrackerSpawn_Statics::NewProp_SubTracker = { "SubTracker", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrackerSpawn, SubTracker), Z_Construct_UClass_UClass, Z_Construct_UClass_ATracker_Character_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubTracker_MetaData), NewProp_SubTracker_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATrackerSpawn_Statics::NewProp_NumTrackers = { "NumTrackers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrackerSpawn, NumTrackers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumTrackers_MetaData), NewProp_NumTrackers_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATrackerSpawn_Statics::NewProp_SpawnOrigin = { "SpawnOrigin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrackerSpawn, SpawnOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnOrigin_MetaData), NewProp_SpawnOrigin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATrackerSpawn_Statics::NewProp_SpawnLim = { "SpawnLim", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrackerSpawn, SpawnLim), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnLim_MetaData), NewProp_SpawnLim_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrackerSpawn_Statics::NewProp_MinSpeed = { "MinSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrackerSpawn, MinSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSpeed_MetaData), NewProp_MinSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrackerSpawn_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrackerSpawn, MaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpeed_MetaData), NewProp_MaxSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATrackerSpawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrackerSpawn_Statics::NewProp_SubTracker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrackerSpawn_Statics::NewProp_NumTrackers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrackerSpawn_Statics::NewProp_SpawnOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrackerSpawn_Statics::NewProp_SpawnLim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrackerSpawn_Statics::NewProp_MinSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrackerSpawn_Statics::NewProp_MaxSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATrackerSpawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATrackerSpawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Exam_Prep,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATrackerSpawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATrackerSpawn_Statics::ClassParams = {
	&ATrackerSpawn::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATrackerSpawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATrackerSpawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrackerSpawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ATrackerSpawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATrackerSpawn()
{
	if (!Z_Registration_Info_UClass_ATrackerSpawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATrackerSpawn.OuterSingleton, Z_Construct_UClass_ATrackerSpawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATrackerSpawn.OuterSingleton;
}
template<> EXAM_PREP_API UClass* StaticClass<ATrackerSpawn>()
{
	return ATrackerSpawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATrackerSpawn);
ATrackerSpawn::~ATrackerSpawn() {}
// End Class ATrackerSpawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_UnrealAIPlayGround_Exam_Prep_Source_Exam_Prep_Tracker_TrackerSpawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATrackerSpawn, ATrackerSpawn::StaticClass, TEXT("ATrackerSpawn"), &Z_Registration_Info_UClass_ATrackerSpawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATrackerSpawn), 1625940228U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_UnrealAIPlayGround_Exam_Prep_Source_Exam_Prep_Tracker_TrackerSpawn_h_504666850(TEXT("/Script/Exam_Prep"),
	Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_UnrealAIPlayGround_Exam_Prep_Source_Exam_Prep_Tracker_TrackerSpawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_UnrealAIPlayGround_Exam_Prep_Source_Exam_Prep_Tracker_TrackerSpawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
