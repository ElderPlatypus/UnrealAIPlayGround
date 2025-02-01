// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Exam_Prep/Enemy/BT_DropItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBT_DropItem() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
EXAM_PREP_API UClass* Z_Construct_UClass_UBT_DropItem();
EXAM_PREP_API UClass* Z_Construct_UClass_UBT_DropItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_Exam_Prep();
// End Cross Module References

// Begin Class UBT_DropItem
void UBT_DropItem::StaticRegisterNativesUBT_DropItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBT_DropItem);
UClass* Z_Construct_UClass_UBT_DropItem_NoRegister()
{
	return UBT_DropItem::StaticClass();
}
struct Z_Construct_UClass_UBT_DropItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Enemy/BT_DropItem.h" },
		{ "ModuleRelativePath", "Enemy/BT_DropItem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBT_DropItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBT_DropItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Exam_Prep,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBT_DropItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBT_DropItem_Statics::ClassParams = {
	&UBT_DropItem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBT_DropItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UBT_DropItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBT_DropItem()
{
	if (!Z_Registration_Info_UClass_UBT_DropItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBT_DropItem.OuterSingleton, Z_Construct_UClass_UBT_DropItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBT_DropItem.OuterSingleton;
}
template<> EXAM_PREP_API UClass* StaticClass<UBT_DropItem>()
{
	return UBT_DropItem::StaticClass();
}
UBT_DropItem::UBT_DropItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBT_DropItem);
UBT_DropItem::~UBT_DropItem() {}
// End Class UBT_DropItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_Exam_Prep_Source_Exam_Prep_Enemy_BT_DropItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBT_DropItem, UBT_DropItem::StaticClass, TEXT("UBT_DropItem"), &Z_Registration_Info_UClass_UBT_DropItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBT_DropItem), 867907099U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_Exam_Prep_Source_Exam_Prep_Enemy_BT_DropItem_h_2280270594(TEXT("/Script/Exam_Prep"),
	Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_Exam_Prep_Source_Exam_Prep_Enemy_BT_DropItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_Projects_Exam_Prep_Source_Exam_Prep_Enemy_BT_DropItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
