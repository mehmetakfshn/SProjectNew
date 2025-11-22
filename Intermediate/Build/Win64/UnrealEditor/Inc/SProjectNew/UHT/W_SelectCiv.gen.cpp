// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/W_SelectCiv.h"
#include "CivilizationData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeW_SelectCiv() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESelectInfo();
SPROJECTNEW_API UClass* Z_Construct_UClass_UW_CivEntry_NoRegister();
SPROJECTNEW_API UClass* Z_Construct_UClass_UW_SelectCiv();
SPROJECTNEW_API UClass* Z_Construct_UClass_UW_SelectCiv_NoRegister();
SPROJECTNEW_API UScriptStruct* Z_Construct_UScriptStruct_FCivInfo();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UComboBoxString_NoRegister();
UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_SProjectNew();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UW_SelectCiv Function HandleStartGameClicked *****************************
struct Z_Construct_UFunction_UW_SelectCiv_HandleStartGameClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ba\xef\xbf\xbdlat'a bas\xef\xbf\xbdld\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdnda\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/W_SelectCiv.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ba\xef\xbf\xbdlat'a bas\xef\xbf\xbdld\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdnda" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UW_SelectCiv_HandleStartGameClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UW_SelectCiv, nullptr, "HandleStartGameClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UW_SelectCiv_HandleStartGameClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UW_SelectCiv_HandleStartGameClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UW_SelectCiv_HandleStartGameClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UW_SelectCiv_HandleStartGameClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UW_SelectCiv::execHandleStartGameClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleStartGameClicked();
	P_NATIVE_END;
}
// ********** End Class UW_SelectCiv Function HandleStartGameClicked *******************************

// ********** Begin Class UW_SelectCiv Function OnAICivSelectionChanged ****************************
struct Z_Construct_UFunction_UW_SelectCiv_OnAICivSelectionChanged_Statics
{
	struct W_SelectCiv_eventOnAICivSelectionChanged_Parms
	{
		FCivInfo Info;
		bool bIsSelected;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AI Checkbox de\xef\xbf\xbdi\xef\xbf\xbdti\xef\xbf\xbdinde\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/W_SelectCiv.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI Checkbox de\xef\xbf\xbdi\xef\xbf\xbdti\xef\xbf\xbdinde" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Info_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Info;
	static void NewProp_bIsSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSelected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UW_SelectCiv_OnAICivSelectionChanged_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W_SelectCiv_eventOnAICivSelectionChanged_Parms, Info), Z_Construct_UScriptStruct_FCivInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Info_MetaData), NewProp_Info_MetaData) }; // 2731982406
void Z_Construct_UFunction_UW_SelectCiv_OnAICivSelectionChanged_Statics::NewProp_bIsSelected_SetBit(void* Obj)
{
	((W_SelectCiv_eventOnAICivSelectionChanged_Parms*)Obj)->bIsSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UW_SelectCiv_OnAICivSelectionChanged_Statics::NewProp_bIsSelected = { "bIsSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(W_SelectCiv_eventOnAICivSelectionChanged_Parms), &Z_Construct_UFunction_UW_SelectCiv_OnAICivSelectionChanged_Statics::NewProp_bIsSelected_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UW_SelectCiv_OnAICivSelectionChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW_SelectCiv_OnAICivSelectionChanged_Statics::NewProp_Info,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW_SelectCiv_OnAICivSelectionChanged_Statics::NewProp_bIsSelected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UW_SelectCiv_OnAICivSelectionChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UW_SelectCiv_OnAICivSelectionChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UW_SelectCiv, nullptr, "OnAICivSelectionChanged", Z_Construct_UFunction_UW_SelectCiv_OnAICivSelectionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UW_SelectCiv_OnAICivSelectionChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UW_SelectCiv_OnAICivSelectionChanged_Statics::W_SelectCiv_eventOnAICivSelectionChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UW_SelectCiv_OnAICivSelectionChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UW_SelectCiv_OnAICivSelectionChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UW_SelectCiv_OnAICivSelectionChanged_Statics::W_SelectCiv_eventOnAICivSelectionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UW_SelectCiv_OnAICivSelectionChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UW_SelectCiv_OnAICivSelectionChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UW_SelectCiv::execOnAICivSelectionChanged)
{
	P_GET_STRUCT_REF(FCivInfo,Z_Param_Out_Info);
	P_GET_UBOOL(Z_Param_bIsSelected);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAICivSelectionChanged(Z_Param_Out_Info,Z_Param_bIsSelected);
	P_NATIVE_END;
}
// ********** End Class UW_SelectCiv Function OnAICivSelectionChanged ******************************

// ********** Begin Class UW_SelectCiv Function OnCivSelected **************************************
struct Z_Construct_UFunction_UW_SelectCiv_OnCivSelected_Statics
{
	struct W_SelectCiv_eventOnCivSelected_Parms
	{
		FCivInfo Info;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Oyuncu bir Civ se\xef\xbf\xbdti\xef\xbf\xbdinde\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/W_SelectCiv.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Oyuncu bir Civ se\xef\xbf\xbdti\xef\xbf\xbdinde" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Info_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Info;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UW_SelectCiv_OnCivSelected_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W_SelectCiv_eventOnCivSelected_Parms, Info), Z_Construct_UScriptStruct_FCivInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Info_MetaData), NewProp_Info_MetaData) }; // 2731982406
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UW_SelectCiv_OnCivSelected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW_SelectCiv_OnCivSelected_Statics::NewProp_Info,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UW_SelectCiv_OnCivSelected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UW_SelectCiv_OnCivSelected_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UW_SelectCiv, nullptr, "OnCivSelected", Z_Construct_UFunction_UW_SelectCiv_OnCivSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UW_SelectCiv_OnCivSelected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UW_SelectCiv_OnCivSelected_Statics::W_SelectCiv_eventOnCivSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UW_SelectCiv_OnCivSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UW_SelectCiv_OnCivSelected_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UW_SelectCiv_OnCivSelected_Statics::W_SelectCiv_eventOnCivSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UW_SelectCiv_OnCivSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UW_SelectCiv_OnCivSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UW_SelectCiv::execOnCivSelected)
{
	P_GET_STRUCT_REF(FCivInfo,Z_Param_Out_Info);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCivSelected(Z_Param_Out_Info);
	P_NATIVE_END;
}
// ********** End Class UW_SelectCiv Function OnCivSelected ****************************************

// ********** Begin Class UW_SelectCiv Function OnMapSelectionChanged ******************************
struct Z_Construct_UFunction_UW_SelectCiv_OnMapSelectionChanged_Statics
{
	struct W_SelectCiv_eventOnMapSelectionChanged_Parms
	{
		FString SelectedItem;
		TEnumAsByte<ESelectInfo::Type> SelectionType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Harita de\xef\xbf\xbdi\xef\xbf\xbdti\xef\xbf\xbdinde\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/W_SelectCiv.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Harita de\xef\xbf\xbdi\xef\xbf\xbdti\xef\xbf\xbdinde" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedItem;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UW_SelectCiv_OnMapSelectionChanged_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W_SelectCiv_eventOnMapSelectionChanged_Parms, SelectedItem), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UW_SelectCiv_OnMapSelectionChanged_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W_SelectCiv_eventOnMapSelectionChanged_Parms, SelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(0, nullptr) }; // 4040429206
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UW_SelectCiv_OnMapSelectionChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW_SelectCiv_OnMapSelectionChanged_Statics::NewProp_SelectedItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW_SelectCiv_OnMapSelectionChanged_Statics::NewProp_SelectionType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UW_SelectCiv_OnMapSelectionChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UW_SelectCiv_OnMapSelectionChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UW_SelectCiv, nullptr, "OnMapSelectionChanged", Z_Construct_UFunction_UW_SelectCiv_OnMapSelectionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UW_SelectCiv_OnMapSelectionChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UW_SelectCiv_OnMapSelectionChanged_Statics::W_SelectCiv_eventOnMapSelectionChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UW_SelectCiv_OnMapSelectionChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UW_SelectCiv_OnMapSelectionChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UW_SelectCiv_OnMapSelectionChanged_Statics::W_SelectCiv_eventOnMapSelectionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UW_SelectCiv_OnMapSelectionChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UW_SelectCiv_OnMapSelectionChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UW_SelectCiv::execOnMapSelectionChanged)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SelectedItem);
	P_GET_PROPERTY(FByteProperty,Z_Param_SelectionType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMapSelectionChanged(Z_Param_SelectedItem,ESelectInfo::Type(Z_Param_SelectionType));
	P_NATIVE_END;
}
// ********** End Class UW_SelectCiv Function OnMapSelectionChanged ********************************

// ********** Begin Class UW_SelectCiv *************************************************************
void UW_SelectCiv::StaticRegisterNativesUW_SelectCiv()
{
	UClass* Class = UW_SelectCiv::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleStartGameClicked", &UW_SelectCiv::execHandleStartGameClicked },
		{ "OnAICivSelectionChanged", &UW_SelectCiv::execOnAICivSelectionChanged },
		{ "OnCivSelected", &UW_SelectCiv::execOnCivSelected },
		{ "OnMapSelectionChanged", &UW_SelectCiv::execOnMapSelectionChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UW_SelectCiv;
UClass* UW_SelectCiv::GetPrivateStaticClass()
{
	using TClass = UW_SelectCiv;
	if (!Z_Registration_Info_UClass_UW_SelectCiv.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("W_SelectCiv"),
			Z_Registration_Info_UClass_UW_SelectCiv.InnerSingleton,
			StaticRegisterNativesUW_SelectCiv,
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
	return Z_Registration_Info_UClass_UW_SelectCiv.InnerSingleton;
}
UClass* Z_Construct_UClass_UW_SelectCiv_NoRegister()
{
	return UW_SelectCiv::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UW_SelectCiv_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/W_SelectCiv.h" },
		{ "ModuleRelativePath", "Public/UI/W_SelectCiv.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_StartGame_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Oyunu Ba\xef\xbf\xbdlat Butonu\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/W_SelectCiv.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Oyunu Ba\xef\xbf\xbdlat Butonu" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScrollBox_Civs_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Medeniyetlerin listelenece\xef\xbf\xbdi kutu\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/W_SelectCiv.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Medeniyetlerin listelenece\xef\xbf\xbdi kutu" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapSelector_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// [YEN\xef\xbf\xbd] Harita Se\xef\xbf\xbdimi i\xef\xbf\xbdin A\xef\xbf\xbd\xef\xbf\xbdl\xef\xbf\xbdr Liste\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/W_SelectCiv.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "[YEN\xef\xbf\xbd] Harita Se\xef\xbf\xbdimi i\xef\xbf\xbdin A\xef\xbf\xbd\xef\xbf\xbdl\xef\xbf\xbdr Liste" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CivEntryClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Entry Widget S\xef\xbf\xbdn\xef\xbf\xbd""f\xef\xbf\xbd (Edit\xef\xbf\xbdrden WBP_CivEntry se\xef\xbf\xbdilmeli)\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/W_SelectCiv.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Entry Widget S\xef\xbf\xbdn\xef\xbf\xbd""f\xef\xbf\xbd (Edit\xef\xbf\xbdrden WBP_CivEntry se\xef\xbf\xbdilmeli)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_StartGame;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScrollBox_Civs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapSelector;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CivEntryClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UW_SelectCiv_HandleStartGameClicked, "HandleStartGameClicked" }, // 1878325186
		{ &Z_Construct_UFunction_UW_SelectCiv_OnAICivSelectionChanged, "OnAICivSelectionChanged" }, // 3085536822
		{ &Z_Construct_UFunction_UW_SelectCiv_OnCivSelected, "OnCivSelected" }, // 1803074587
		{ &Z_Construct_UFunction_UW_SelectCiv_OnMapSelectionChanged, "OnMapSelectionChanged" }, // 2140558465
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UW_SelectCiv>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_SelectCiv_Statics::NewProp_Button_StartGame = { "Button_StartGame", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_SelectCiv, Button_StartGame), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_StartGame_MetaData), NewProp_Button_StartGame_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_SelectCiv_Statics::NewProp_ScrollBox_Civs = { "ScrollBox_Civs", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_SelectCiv, ScrollBox_Civs), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScrollBox_Civs_MetaData), NewProp_ScrollBox_Civs_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_SelectCiv_Statics::NewProp_MapSelector = { "MapSelector", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_SelectCiv, MapSelector), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapSelector_MetaData), NewProp_MapSelector_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UW_SelectCiv_Statics::NewProp_CivEntryClass = { "CivEntryClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_SelectCiv, CivEntryClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UW_CivEntry_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CivEntryClass_MetaData), NewProp_CivEntryClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UW_SelectCiv_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_SelectCiv_Statics::NewProp_Button_StartGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_SelectCiv_Statics::NewProp_ScrollBox_Civs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_SelectCiv_Statics::NewProp_MapSelector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_SelectCiv_Statics::NewProp_CivEntryClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UW_SelectCiv_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UW_SelectCiv_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_SProjectNew,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UW_SelectCiv_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UW_SelectCiv_Statics::ClassParams = {
	&UW_SelectCiv::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UW_SelectCiv_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UW_SelectCiv_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UW_SelectCiv_Statics::Class_MetaDataParams), Z_Construct_UClass_UW_SelectCiv_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UW_SelectCiv()
{
	if (!Z_Registration_Info_UClass_UW_SelectCiv.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UW_SelectCiv.OuterSingleton, Z_Construct_UClass_UW_SelectCiv_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UW_SelectCiv.OuterSingleton;
}
UW_SelectCiv::UW_SelectCiv(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UW_SelectCiv);
UW_SelectCiv::~UW_SelectCiv() {}
// ********** End Class UW_SelectCiv ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_UI_W_SelectCiv_h__Script_SProjectNew_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UW_SelectCiv, UW_SelectCiv::StaticClass, TEXT("UW_SelectCiv"), &Z_Registration_Info_UClass_UW_SelectCiv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UW_SelectCiv), 1347207602U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_UI_W_SelectCiv_h__Script_SProjectNew_2191852827(TEXT("/Script/SProjectNew"),
	Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_UI_W_SelectCiv_h__Script_SProjectNew_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_UI_W_SelectCiv_h__Script_SProjectNew_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
