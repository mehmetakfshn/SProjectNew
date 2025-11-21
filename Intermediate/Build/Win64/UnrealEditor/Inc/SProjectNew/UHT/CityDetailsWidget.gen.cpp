// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/CityDetailsWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCityDetailsWidget() {}

// ********** Begin Cross Module References ********************************************************
SPROJECTNEW_API UClass* Z_Construct_UClass_ACity_NoRegister();
SPROJECTNEW_API UClass* Z_Construct_UClass_UCityDetailsWidget();
SPROJECTNEW_API UClass* Z_Construct_UClass_UCityDetailsWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_SProjectNew();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCityDetailsWidget Function SetSelectedCity ******************************
struct Z_Construct_UFunction_UCityDetailsWidget_SetSelectedCity_Statics
{
	struct CityDetailsWidget_eventSetSelectedCity_Parms
	{
		ACity* NewCity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "City UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UI'\xef\xbf\xbd belirli bir \xef\xbf\xbd""ehir verisiyle g\xef\xbf\xbdnceller\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/CityDetailsWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UI'\xef\xbf\xbd belirli bir \xef\xbf\xbd""ehir verisiyle g\xef\xbf\xbdnceller" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewCity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCityDetailsWidget_SetSelectedCity_Statics::NewProp_NewCity = { "NewCity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CityDetailsWidget_eventSetSelectedCity_Parms, NewCity), Z_Construct_UClass_ACity_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCityDetailsWidget_SetSelectedCity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCityDetailsWidget_SetSelectedCity_Statics::NewProp_NewCity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCityDetailsWidget_SetSelectedCity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCityDetailsWidget_SetSelectedCity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCityDetailsWidget, nullptr, "SetSelectedCity", Z_Construct_UFunction_UCityDetailsWidget_SetSelectedCity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCityDetailsWidget_SetSelectedCity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCityDetailsWidget_SetSelectedCity_Statics::CityDetailsWidget_eventSetSelectedCity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCityDetailsWidget_SetSelectedCity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCityDetailsWidget_SetSelectedCity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCityDetailsWidget_SetSelectedCity_Statics::CityDetailsWidget_eventSetSelectedCity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCityDetailsWidget_SetSelectedCity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCityDetailsWidget_SetSelectedCity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCityDetailsWidget::execSetSelectedCity)
{
	P_GET_OBJECT(ACity,Z_Param_NewCity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSelectedCity(Z_Param_NewCity);
	P_NATIVE_END;
}
// ********** End Class UCityDetailsWidget Function SetSelectedCity ********************************

// ********** Begin Class UCityDetailsWidget Function UpdateCityUI *********************************
struct Z_Construct_UFunction_UCityDetailsWidget_UpdateCityUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "City UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Verileri ekrana tekrar basar (Turn bitti\xef\xbf\xbdinde \xef\xbf\xbd""a\xef\xbf\xbdr\xef\xbf\xbdlabilir)\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/CityDetailsWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Verileri ekrana tekrar basar (Turn bitti\xef\xbf\xbdinde \xef\xbf\xbd""a\xef\xbf\xbdr\xef\xbf\xbdlabilir)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCityDetailsWidget_UpdateCityUI_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCityDetailsWidget, nullptr, "UpdateCityUI", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCityDetailsWidget_UpdateCityUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCityDetailsWidget_UpdateCityUI_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCityDetailsWidget_UpdateCityUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCityDetailsWidget_UpdateCityUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCityDetailsWidget::execUpdateCityUI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateCityUI();
	P_NATIVE_END;
}
// ********** End Class UCityDetailsWidget Function UpdateCityUI ***********************************

// ********** Begin Class UCityDetailsWidget *******************************************************
void UCityDetailsWidget::StaticRegisterNativesUCityDetailsWidget()
{
	UClass* Class = UCityDetailsWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetSelectedCity", &UCityDetailsWidget::execSetSelectedCity },
		{ "UpdateCityUI", &UCityDetailsWidget::execUpdateCityUI },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCityDetailsWidget;
UClass* UCityDetailsWidget::GetPrivateStaticClass()
{
	using TClass = UCityDetailsWidget;
	if (!Z_Registration_Info_UClass_UCityDetailsWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CityDetailsWidget"),
			Z_Registration_Info_UClass_UCityDetailsWidget.InnerSingleton,
			StaticRegisterNativesUCityDetailsWidget,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UCityDetailsWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UCityDetailsWidget_NoRegister()
{
	return UCityDetailsWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCityDetailsWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xef\xbf\xbd""ehir se\xef\xbf\xbdildi\xef\xbf\xbdinde detaylar\xef\xbf\xbd g\xef\xbf\xbdsteren Widget.\n * Logic tamamen C++ taraf\xef\xbf\xbdndad\xef\xbf\xbdr.\n */" },
#endif
		{ "IncludePath", "UI/CityDetailsWidget.h" },
		{ "ModuleRelativePath", "Public/UI/CityDetailsWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd""ehir se\xef\xbf\xbdildi\xef\xbf\xbdinde detaylar\xef\xbf\xbd g\xef\xbf\xbdsteren Widget.\nLogic tamamen C++ taraf\xef\xbf\xbdndad\xef\xbf\xbdr." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_CityName_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- BIND WIDGETS ---\n// Blueprint'te bu isimlerle TextBlock ve ProgressBar olu\xef\xbf\xbdturmal\xef\xbf\xbds\xef\xbf\xbdn\xef\xbf\xbdz.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CityDetailsWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- BIND WIDGETS ---\nBlueprint'te bu isimlerle TextBlock ve ProgressBar olu\xef\xbf\xbdturmal\xef\xbf\xbds\xef\xbf\xbdn\xef\xbf\xbdz." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_Population_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CityDetailsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_FoodInfo_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CityDetailsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bar_Growth_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbdrn: \"15 / 40\"\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CityDetailsWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdrn: \"15 / 40\"" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_FoodYield_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Yield Bilgileri\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CityDetailsWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Yield Bilgileri" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_ProdYield_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CityDetailsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_GoldYield_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CityDetailsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCity_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbdu an g\xef\xbf\xbdr\xef\xbf\xbdnt\xef\xbf\xbdlenen \xef\xbf\xbd""ehir\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/CityDetailsWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdu an g\xef\xbf\xbdr\xef\xbf\xbdnt\xef\xbf\xbdlenen \xef\xbf\xbd""ehir" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_CityName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_Population;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_FoodInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Bar_Growth;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_FoodYield;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_ProdYield;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_GoldYield;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentCity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCityDetailsWidget_SetSelectedCity, "SetSelectedCity" }, // 672500699
		{ &Z_Construct_UFunction_UCityDetailsWidget_UpdateCityUI, "UpdateCityUI" }, // 1402017711
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCityDetailsWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCityDetailsWidget_Statics::NewProp_Text_CityName = { "Text_CityName", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCityDetailsWidget, Text_CityName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_CityName_MetaData), NewProp_Text_CityName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCityDetailsWidget_Statics::NewProp_Text_Population = { "Text_Population", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCityDetailsWidget, Text_Population), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_Population_MetaData), NewProp_Text_Population_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCityDetailsWidget_Statics::NewProp_Text_FoodInfo = { "Text_FoodInfo", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCityDetailsWidget, Text_FoodInfo), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_FoodInfo_MetaData), NewProp_Text_FoodInfo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCityDetailsWidget_Statics::NewProp_Bar_Growth = { "Bar_Growth", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCityDetailsWidget, Bar_Growth), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bar_Growth_MetaData), NewProp_Bar_Growth_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCityDetailsWidget_Statics::NewProp_Text_FoodYield = { "Text_FoodYield", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCityDetailsWidget, Text_FoodYield), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_FoodYield_MetaData), NewProp_Text_FoodYield_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCityDetailsWidget_Statics::NewProp_Text_ProdYield = { "Text_ProdYield", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCityDetailsWidget, Text_ProdYield), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_ProdYield_MetaData), NewProp_Text_ProdYield_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCityDetailsWidget_Statics::NewProp_Text_GoldYield = { "Text_GoldYield", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCityDetailsWidget, Text_GoldYield), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_GoldYield_MetaData), NewProp_Text_GoldYield_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCityDetailsWidget_Statics::NewProp_CurrentCity = { "CurrentCity", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCityDetailsWidget, CurrentCity), Z_Construct_UClass_ACity_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCity_MetaData), NewProp_CurrentCity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCityDetailsWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCityDetailsWidget_Statics::NewProp_Text_CityName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCityDetailsWidget_Statics::NewProp_Text_Population,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCityDetailsWidget_Statics::NewProp_Text_FoodInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCityDetailsWidget_Statics::NewProp_Bar_Growth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCityDetailsWidget_Statics::NewProp_Text_FoodYield,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCityDetailsWidget_Statics::NewProp_Text_ProdYield,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCityDetailsWidget_Statics::NewProp_Text_GoldYield,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCityDetailsWidget_Statics::NewProp_CurrentCity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCityDetailsWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCityDetailsWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_SProjectNew,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCityDetailsWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCityDetailsWidget_Statics::ClassParams = {
	&UCityDetailsWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCityDetailsWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCityDetailsWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCityDetailsWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UCityDetailsWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCityDetailsWidget()
{
	if (!Z_Registration_Info_UClass_UCityDetailsWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCityDetailsWidget.OuterSingleton, Z_Construct_UClass_UCityDetailsWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCityDetailsWidget.OuterSingleton;
}
UCityDetailsWidget::UCityDetailsWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCityDetailsWidget);
UCityDetailsWidget::~UCityDetailsWidget() {}
// ********** End Class UCityDetailsWidget *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_UI_CityDetailsWidget_h__Script_SProjectNew_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCityDetailsWidget, UCityDetailsWidget::StaticClass, TEXT("UCityDetailsWidget"), &Z_Registration_Info_UClass_UCityDetailsWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCityDetailsWidget), 3941929388U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_UI_CityDetailsWidget_h__Script_SProjectNew_1496434491(TEXT("/Script/SProjectNew"),
	Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_UI_CityDetailsWidget_h__Script_SProjectNew_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_UI_CityDetailsWidget_h__Script_SProjectNew_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
