// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CivHUDWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCivHUDWidget() {}

// ********** Begin Cross Module References ********************************************************
SPROJECTNEW_API UClass* Z_Construct_UClass_UCivHUDWidget();
SPROJECTNEW_API UClass* Z_Construct_UClass_UCivHUDWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_SProjectNew();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCivHUDWidget Function GetTurnText ***************************************
struct Z_Construct_UFunction_UCivHUDWidget_GetTurnText_Statics
{
	struct CivHUDWidget_eventGetTurnText_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// YEN\xef\xbf\xbd: UMG'de Text Bind ile kullanaca\xef\xbf\xbd\xef\xbf\xbdm\xef\xbf\xbdz fonksiyon\n" },
#endif
		{ "ModuleRelativePath", "CivHUDWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "YEN\xef\xbf\xbd: UMG'de Text Bind ile kullanaca\xef\xbf\xbd\xef\xbf\xbdm\xef\xbf\xbdz fonksiyon" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCivHUDWidget_GetTurnText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CivHUDWidget_eventGetTurnText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCivHUDWidget_GetTurnText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCivHUDWidget_GetTurnText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCivHUDWidget_GetTurnText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCivHUDWidget_GetTurnText_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCivHUDWidget, nullptr, "GetTurnText", Z_Construct_UFunction_UCivHUDWidget_GetTurnText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCivHUDWidget_GetTurnText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCivHUDWidget_GetTurnText_Statics::CivHUDWidget_eventGetTurnText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCivHUDWidget_GetTurnText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCivHUDWidget_GetTurnText_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCivHUDWidget_GetTurnText_Statics::CivHUDWidget_eventGetTurnText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCivHUDWidget_GetTurnText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCivHUDWidget_GetTurnText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCivHUDWidget::execGetTurnText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetTurnText();
	P_NATIVE_END;
}
// ********** End Class UCivHUDWidget Function GetTurnText *****************************************

// ********** Begin Class UCivHUDWidget Function OnNextTurnClicked *********************************
struct Z_Construct_UFunction_UCivHUDWidget_OnNextTurnClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** NextTurnButton'a t\xef\xbf\xbdkland\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdnda bu fonksiyon \xef\xbf\xbd""al\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdr */" },
#endif
		{ "ModuleRelativePath", "CivHUDWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NextTurnButton'a t\xef\xbf\xbdkland\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdnda bu fonksiyon \xef\xbf\xbd""al\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdr" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCivHUDWidget_OnNextTurnClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCivHUDWidget, nullptr, "OnNextTurnClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCivHUDWidget_OnNextTurnClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCivHUDWidget_OnNextTurnClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UCivHUDWidget_OnNextTurnClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCivHUDWidget_OnNextTurnClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCivHUDWidget::execOnNextTurnClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnNextTurnClicked();
	P_NATIVE_END;
}
// ********** End Class UCivHUDWidget Function OnNextTurnClicked ***********************************

// ********** Begin Class UCivHUDWidget ************************************************************
void UCivHUDWidget::StaticRegisterNativesUCivHUDWidget()
{
	UClass* Class = UCivHUDWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTurnText", &UCivHUDWidget::execGetTurnText },
		{ "OnNextTurnClicked", &UCivHUDWidget::execOnNextTurnClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCivHUDWidget;
UClass* UCivHUDWidget::GetPrivateStaticClass()
{
	using TClass = UCivHUDWidget;
	if (!Z_Registration_Info_UClass_UCivHUDWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CivHUDWidget"),
			Z_Registration_Info_UClass_UCivHUDWidget.InnerSingleton,
			StaticRegisterNativesUCivHUDWidget,
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
	return Z_Registration_Info_UClass_UCivHUDWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UCivHUDWidget_NoRegister()
{
	return UCivHUDWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCivHUDWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CivHUDWidget.h" },
		{ "ModuleRelativePath", "CivHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextTurnButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CivHUDWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CivHUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NextTurnButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurnText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCivHUDWidget_GetTurnText, "GetTurnText" }, // 2809503446
		{ &Z_Construct_UFunction_UCivHUDWidget_OnNextTurnClicked, "OnNextTurnClicked" }, // 3202859150
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCivHUDWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCivHUDWidget_Statics::NewProp_NextTurnButton = { "NextTurnButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCivHUDWidget, NextTurnButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextTurnButton_MetaData), NewProp_NextTurnButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCivHUDWidget_Statics::NewProp_TurnText = { "TurnText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCivHUDWidget, TurnText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnText_MetaData), NewProp_TurnText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCivHUDWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCivHUDWidget_Statics::NewProp_NextTurnButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCivHUDWidget_Statics::NewProp_TurnText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCivHUDWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCivHUDWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_SProjectNew,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCivHUDWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCivHUDWidget_Statics::ClassParams = {
	&UCivHUDWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCivHUDWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCivHUDWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCivHUDWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UCivHUDWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCivHUDWidget()
{
	if (!Z_Registration_Info_UClass_UCivHUDWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCivHUDWidget.OuterSingleton, Z_Construct_UClass_UCivHUDWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCivHUDWidget.OuterSingleton;
}
UCivHUDWidget::UCivHUDWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCivHUDWidget);
UCivHUDWidget::~UCivHUDWidget() {}
// ********** End Class UCivHUDWidget **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivHUDWidget_h__Script_SProjectNew_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCivHUDWidget, UCivHUDWidget::StaticClass, TEXT("UCivHUDWidget"), &Z_Registration_Info_UClass_UCivHUDWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCivHUDWidget), 2203976497U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivHUDWidget_h__Script_SProjectNew_4197305919(TEXT("/Script/SProjectNew"),
	Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivHUDWidget_h__Script_SProjectNew_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivHUDWidget_h__Script_SProjectNew_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
