// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGoodTools/Public/MyEditorUtilityWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyEditorUtilityWidget() {}

// Begin Cross Module References
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
THEGOODTOOLS_API UClass* Z_Construct_UClass_UMyEditorUtilityWidget();
THEGOODTOOLS_API UClass* Z_Construct_UClass_UMyEditorUtilityWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheGoodTools();
// End Cross Module References

// Begin Class UMyEditorUtilityWidget Function DeleteNullSMActors
struct Z_Construct_UFunction_UMyEditorUtilityWidget_DeleteNullSMActors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "CleanUp" },
		{ "ModuleRelativePath", "Public/MyEditorUtilityWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyEditorUtilityWidget_DeleteNullSMActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyEditorUtilityWidget, nullptr, "DeleteNullSMActors", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyEditorUtilityWidget_DeleteNullSMActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyEditorUtilityWidget_DeleteNullSMActors_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyEditorUtilityWidget_DeleteNullSMActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyEditorUtilityWidget_DeleteNullSMActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyEditorUtilityWidget::execDeleteNullSMActors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeleteNullSMActors();
	P_NATIVE_END;
}
// End Class UMyEditorUtilityWidget Function DeleteNullSMActors

// Begin Class UMyEditorUtilityWidget Function OrganizeWorldOutliner
struct Z_Construct_UFunction_UMyEditorUtilityWidget_OrganizeWorldOutliner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "CleanUp" },
		{ "ModuleRelativePath", "Public/MyEditorUtilityWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyEditorUtilityWidget_OrganizeWorldOutliner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyEditorUtilityWidget, nullptr, "OrganizeWorldOutliner", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyEditorUtilityWidget_OrganizeWorldOutliner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyEditorUtilityWidget_OrganizeWorldOutliner_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyEditorUtilityWidget_OrganizeWorldOutliner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyEditorUtilityWidget_OrganizeWorldOutliner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyEditorUtilityWidget::execOrganizeWorldOutliner)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OrganizeWorldOutliner();
	P_NATIVE_END;
}
// End Class UMyEditorUtilityWidget Function OrganizeWorldOutliner

// Begin Class UMyEditorUtilityWidget
void UMyEditorUtilityWidget::StaticRegisterNativesUMyEditorUtilityWidget()
{
	UClass* Class = UMyEditorUtilityWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DeleteNullSMActors", &UMyEditorUtilityWidget::execDeleteNullSMActors },
		{ "OrganizeWorldOutliner", &UMyEditorUtilityWidget::execOrganizeWorldOutliner },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyEditorUtilityWidget);
UClass* Z_Construct_UClass_UMyEditorUtilityWidget_NoRegister()
{
	return UMyEditorUtilityWidget::StaticClass();
}
struct Z_Construct_UClass_UMyEditorUtilityWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyEditorUtilityWidget.h" },
		{ "ModuleRelativePath", "Public/MyEditorUtilityWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FolderMap_MetaData[] = {
		{ "Category", "OrganizeWorldOutliner" },
		{ "ModuleRelativePath", "Public/MyEditorUtilityWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_FolderMap_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_FolderMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_FolderMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyEditorUtilityWidget_DeleteNullSMActors, "DeleteNullSMActors" }, // 456341663
		{ &Z_Construct_UFunction_UMyEditorUtilityWidget_OrganizeWorldOutliner, "OrganizeWorldOutliner" }, // 1857902631
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyEditorUtilityWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMyEditorUtilityWidget_Statics::NewProp_FolderMap_ValueProp = { "FolderMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMyEditorUtilityWidget_Statics::NewProp_FolderMap_Key_KeyProp = { "FolderMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMyEditorUtilityWidget_Statics::NewProp_FolderMap = { "FolderMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyEditorUtilityWidget, FolderMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FolderMap_MetaData), NewProp_FolderMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyEditorUtilityWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyEditorUtilityWidget_Statics::NewProp_FolderMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyEditorUtilityWidget_Statics::NewProp_FolderMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyEditorUtilityWidget_Statics::NewProp_FolderMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyEditorUtilityWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyEditorUtilityWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_TheGoodTools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyEditorUtilityWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyEditorUtilityWidget_Statics::ClassParams = {
	&UMyEditorUtilityWidget::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMyEditorUtilityWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyEditorUtilityWidget_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyEditorUtilityWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyEditorUtilityWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyEditorUtilityWidget()
{
	if (!Z_Registration_Info_UClass_UMyEditorUtilityWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyEditorUtilityWidget.OuterSingleton, Z_Construct_UClass_UMyEditorUtilityWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyEditorUtilityWidget.OuterSingleton;
}
template<> THEGOODTOOLS_API UClass* StaticClass<UMyEditorUtilityWidget>()
{
	return UMyEditorUtilityWidget::StaticClass();
}
UMyEditorUtilityWidget::UMyEditorUtilityWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyEditorUtilityWidget);
UMyEditorUtilityWidget::~UMyEditorUtilityWidget() {}
// End Class UMyEditorUtilityWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_PlugIns_TheGoodTools_HostProject_Plugins_TheGoodTools_Source_TheGoodTools_Public_MyEditorUtilityWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyEditorUtilityWidget, UMyEditorUtilityWidget::StaticClass, TEXT("UMyEditorUtilityWidget"), &Z_Registration_Info_UClass_UMyEditorUtilityWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyEditorUtilityWidget), 3674680614U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PlugIns_TheGoodTools_HostProject_Plugins_TheGoodTools_Source_TheGoodTools_Public_MyEditorUtilityWidget_h_3718483943(TEXT("/Script/TheGoodTools"),
	Z_CompiledInDeferFile_FID_PlugIns_TheGoodTools_HostProject_Plugins_TheGoodTools_Source_TheGoodTools_Public_MyEditorUtilityWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PlugIns_TheGoodTools_HostProject_Plugins_TheGoodTools_Source_TheGoodTools_Public_MyEditorUtilityWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
