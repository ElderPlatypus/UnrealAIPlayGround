// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Exam_Prep/Tracker/Tracking_TargetPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTracking_TargetPoint() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ATargetPoint();
EXAM_PREP_API UClass* Z_Construct_UClass_ATracking_TargetPoint();
EXAM_PREP_API UClass* Z_Construct_UClass_ATracking_TargetPoint_NoRegister();
UPackage* Z_Construct_UPackage__Script_Exam_Prep();
// End Cross Module References

// Begin Class ATracking_TargetPoint
void ATracking_TargetPoint::StaticRegisterNativesATracking_TargetPoint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATracking_TargetPoint);
UClass* Z_Construct_UClass_ATracking_TargetPoint_NoRegister()
{
	return ATracking_TargetPoint::StaticClass();
}
struct Z_Construct_UClass_ATracking_TargetPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Tracker/Tracking_TargetPoint.h" },
		{ "ModuleRelativePath", "Tracker/Tracking_TargetPoint.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATracking_TargetPoint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATracking_TargetPoint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ATargetPoint,
	(UObject* (*)())Z_Construct_UPackage__Script_Exam_Prep,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATracking_TargetPoint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATracking_TargetPoint_Statics::ClassParams = {
	&ATracking_TargetPoint::StaticClass,
	"Engine",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATracking_TargetPoint_Statics::Class_MetaDataParams), Z_Construct_UClass_ATracking_TargetPoint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATracking_TargetPoint()
{
	if (!Z_Registration_Info_UClass_ATracking_TargetPoint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATracking_TargetPoint.OuterSingleton, Z_Construct_UClass_ATracking_TargetPoint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATracking_TargetPoint.OuterSingleton;
}
template<> EXAM_PREP_API UClass* StaticClass<ATracking_TargetPoint>()
{
	return ATracking_TargetPoint::StaticClass();
}
ATracking_TargetPoint::ATracking_TargetPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATracking_TargetPoint);
ATracking_TargetPoint::~ATracking_TargetPoint() {}
// End Class ATracking_TargetPoint

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_UnrealAIPlayGround_Exam_Prep_Source_Exam_Prep_Tracker_Tracking_TargetPoint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATracking_TargetPoint, ATracking_TargetPoint::StaticClass, TEXT("ATracking_TargetPoint"), &Z_Registration_Info_UClass_ATracking_TargetPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATracking_TargetPoint), 964473076U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_UnrealAIPlayGround_Exam_Prep_Source_Exam_Prep_Tracker_Tracking_TargetPoint_h_3502608696(TEXT("/Script/Exam_Prep"),
	Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_UnrealAIPlayGround_Exam_Prep_Source_Exam_Prep_Tracker_Tracking_TargetPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_UnrealAIPlayGround_Exam_Prep_Source_Exam_Prep_Tracker_Tracking_TargetPoint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
