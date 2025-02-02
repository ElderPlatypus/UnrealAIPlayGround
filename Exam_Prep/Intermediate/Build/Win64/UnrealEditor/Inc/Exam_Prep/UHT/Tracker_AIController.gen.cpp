// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Exam_Prep/Tracker/Tracker_AIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTracker_AIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
EXAM_PREP_API UClass* Z_Construct_UClass_ATracker_AIController();
EXAM_PREP_API UClass* Z_Construct_UClass_ATracker_AIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Exam_Prep();
// End Cross Module References

// Begin Class ATracker_AIController
void ATracker_AIController::StaticRegisterNativesATracker_AIController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATracker_AIController);
UClass* Z_Construct_UClass_ATracker_AIController_NoRegister()
{
	return ATracker_AIController::StaticClass();
}
struct Z_Construct_UClass_ATracker_AIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Tracker/Tracker_AIController.h" },
		{ "ModuleRelativePath", "Tracker/Tracker_AIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mEnemyBT_MetaData[] = {
		{ "Category", "AI Controller" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//___________Behaviour Tree_________________\n" },
#endif
		{ "ModuleRelativePath", "Tracker/Tracker_AIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "___________Behaviour Tree_________________" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mEnemyBTC_MetaData[] = {
		{ "Category", "AI Controller" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Tracker/Tracker_AIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mEnemyBBC_MetaData[] = {
		{ "Category", "AI Controller" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Tracker/Tracker_AIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mEnemyBT;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mEnemyBTC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mEnemyBBC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATracker_AIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATracker_AIController_Statics::NewProp_mEnemyBT = { "mEnemyBT", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATracker_AIController, mEnemyBT), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mEnemyBT_MetaData), NewProp_mEnemyBT_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATracker_AIController_Statics::NewProp_mEnemyBTC = { "mEnemyBTC", nullptr, (EPropertyFlags)0x01140000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATracker_AIController, mEnemyBTC), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mEnemyBTC_MetaData), NewProp_mEnemyBTC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATracker_AIController_Statics::NewProp_mEnemyBBC = { "mEnemyBBC", nullptr, (EPropertyFlags)0x01140000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATracker_AIController, mEnemyBBC), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mEnemyBBC_MetaData), NewProp_mEnemyBBC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATracker_AIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATracker_AIController_Statics::NewProp_mEnemyBT,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATracker_AIController_Statics::NewProp_mEnemyBTC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATracker_AIController_Statics::NewProp_mEnemyBBC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATracker_AIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATracker_AIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_Exam_Prep,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATracker_AIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATracker_AIController_Statics::ClassParams = {
	&ATracker_AIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATracker_AIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATracker_AIController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATracker_AIController_Statics::Class_MetaDataParams), Z_Construct_UClass_ATracker_AIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATracker_AIController()
{
	if (!Z_Registration_Info_UClass_ATracker_AIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATracker_AIController.OuterSingleton, Z_Construct_UClass_ATracker_AIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATracker_AIController.OuterSingleton;
}
template<> EXAM_PREP_API UClass* StaticClass<ATracker_AIController>()
{
	return ATracker_AIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATracker_AIController);
ATracker_AIController::~ATracker_AIController() {}
// End Class ATracker_AIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_UnrealAIPlayGround_Exam_Prep_Source_Exam_Prep_Tracker_Tracker_AIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATracker_AIController, ATracker_AIController::StaticClass, TEXT("ATracker_AIController"), &Z_Registration_Info_UClass_ATracker_AIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATracker_AIController), 2753334947U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_UnrealAIPlayGround_Exam_Prep_Source_Exam_Prep_Tracker_Tracker_AIController_h_1269435978(TEXT("/Script/Exam_Prep"),
	Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_UnrealAIPlayGround_Exam_Prep_Source_Exam_Prep_Tracker_Tracker_AIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_UnrealAIPlayGround_Exam_Prep_Source_Exam_Prep_Tracker_Tracker_AIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
