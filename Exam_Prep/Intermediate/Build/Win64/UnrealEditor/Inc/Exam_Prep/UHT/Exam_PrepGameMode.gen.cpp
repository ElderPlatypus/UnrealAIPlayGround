// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Exam_Prep/Exam_PrepGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExam_PrepGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
EXAM_PREP_API UClass* Z_Construct_UClass_AExam_PrepGameMode();
EXAM_PREP_API UClass* Z_Construct_UClass_AExam_PrepGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Exam_Prep();
// End Cross Module References

// Begin Class AExam_PrepGameMode
void AExam_PrepGameMode::StaticRegisterNativesAExam_PrepGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AExam_PrepGameMode);
UClass* Z_Construct_UClass_AExam_PrepGameMode_NoRegister()
{
	return AExam_PrepGameMode::StaticClass();
}
struct Z_Construct_UClass_AExam_PrepGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Exam_PrepGameMode.h" },
		{ "ModuleRelativePath", "Exam_PrepGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExam_PrepGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AExam_PrepGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Exam_Prep,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AExam_PrepGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AExam_PrepGameMode_Statics::ClassParams = {
	&AExam_PrepGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AExam_PrepGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AExam_PrepGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AExam_PrepGameMode()
{
	if (!Z_Registration_Info_UClass_AExam_PrepGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AExam_PrepGameMode.OuterSingleton, Z_Construct_UClass_AExam_PrepGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AExam_PrepGameMode.OuterSingleton;
}
template<> EXAM_PREP_API UClass* StaticClass<AExam_PrepGameMode>()
{
	return AExam_PrepGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AExam_PrepGameMode);
AExam_PrepGameMode::~AExam_PrepGameMode() {}
// End Class AExam_PrepGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_UnrealAIPlayGround_Exam_Prep_Source_Exam_Prep_Exam_PrepGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AExam_PrepGameMode, AExam_PrepGameMode::StaticClass, TEXT("AExam_PrepGameMode"), &Z_Registration_Info_UClass_AExam_PrepGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AExam_PrepGameMode), 2853195679U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_UnrealAIPlayGround_Exam_Prep_Source_Exam_Prep_Exam_PrepGameMode_h_1752297338(TEXT("/Script/Exam_Prep"),
	Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_UnrealAIPlayGround_Exam_Prep_Source_Exam_Prep_Exam_PrepGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_UnrealAIPlayGround_Exam_Prep_Source_Exam_Prep_Exam_PrepGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
