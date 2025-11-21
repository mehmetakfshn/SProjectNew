// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "W_SelectCiv.h"
#include "Database/DatabaseReader.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeW_SelectCiv() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
SPROJECTNEW_API UClass* Z_Construct_UClass_UW_CivEntry_NoRegister();
SPROJECTNEW_API UClass* Z_Construct_UClass_UW_SelectCiv();
SPROJECTNEW_API UClass* Z_Construct_UClass_UW_SelectCiv_NoRegister();
SPROJECTNEW_API UScriptStruct* Z_Construct_UScriptStruct_FCivInfo();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
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
		{ "Comment", "// StartGame butonuna bas\xef\xbf\xbdl\xef\xbf\xbdrsa\n" },
#endif
		{ "ModuleRelativePath", "Public/W_SelectCiv.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "StartGame butonuna bas\xef\xbf\xbdl\xef\xbf\xbdrsa" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UW_SelectCiv_HandleStartGameClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UW_SelectCiv, nullptr, "HandleStartGameClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UW_SelectCiv_HandleStartGameClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UW_SelectCiv_HandleStartGameClicked_Statics::Function_MetaDataParams)},  };
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
		{ "Comment", "// YEN\xef\xbf\xbd: Entry'deki AI checkbox de\xef\xbf\xbdi\xef\xbf\xbdince\n" },
#endif
		{ "ModuleRelativePath", "Public/W_SelectCiv.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "YEN\xef\xbf\xbd: Entry'deki AI checkbox de\xef\xbf\xbdi\xef\xbf\xbdince" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UW_SelectCiv_OnAICivSelectionChanged_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W_SelectCiv_eventOnAICivSelectionChanged_Parms, Info), Z_Construct_UScriptStruct_FCivInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Info_MetaData), NewProp_Info_MetaData) }; // 1142681011
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UW_SelectCiv_OnAICivSelectionChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UW_SelectCiv, nullptr, "OnAICivSelectionChanged", Z_Construct_UFunction_UW_SelectCiv_OnAICivSelectionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UW_SelectCiv_OnAICivSelectionChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UW_SelectCiv_OnAICivSelectionChanged_Statics::W_SelectCiv_eventOnAICivSelectionChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UW_SelectCiv_OnAICivSelectionChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UW_SelectCiv_OnAICivSelectionChanged_Statics::Function_MetaDataParams)},  };
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
		{ "Comment", "// Bir entry t\xef\xbf\xbdklan\xef\xbf\xbdnca (player civ se\xef\xbf\xbdimi)\n" },
#endif
		{ "ModuleRelativePath", "Public/W_SelectCiv.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bir entry t\xef\xbf\xbdklan\xef\xbf\xbdnca (player civ se\xef\xbf\xbdimi)" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UW_SelectCiv_OnCivSelected_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W_SelectCiv_eventOnCivSelected_Parms, Info), Z_Construct_UScriptStruct_FCivInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Info_MetaData), NewProp_Info_MetaData) }; // 1142681011
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UW_SelectCiv_OnCivSelected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW_SelectCiv_OnCivSelected_Statics::NewProp_Info,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UW_SelectCiv_OnCivSelected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UW_SelectCiv_OnCivSelected_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UW_SelectCiv, nullptr, "OnCivSelected", Z_Construct_UFunction_UW_SelectCiv_OnCivSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UW_SelectCiv_OnCivSelected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UW_SelectCiv_OnCivSelected_Statics::W_SelectCiv_eventOnCivSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UW_SelectCiv_OnCivSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UW_SelectCiv_OnCivSelected_Statics::Function_MetaDataParams)},  };
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

// ********** Begin Class UW_SelectCiv *************************************************************
void UW_SelectCiv::StaticRegisterNativesUW_SelectCiv()
{
	UClass* Class = UW_SelectCiv::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleStartGameClicked", &UW_SelectCiv::execHandleStartGameClicked },
		{ "OnAICivSelectionChanged", &UW_SelectCiv::execOnAICivSelectionChanged },
		{ "OnCivSelected", &UW_SelectCiv::execOnCivSelected },
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
		{ "IncludePath", "W_SelectCiv.h" },
		{ "ModuleRelativePath", "Public/W_SelectCiv.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedCiv_MetaData[] = {
		{ "Category", "W_SelectCiv" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Se\xef\xbf\xbdilen oyuncu civ'i\n" },
#endif
		{ "ModuleRelativePath", "Public/W_SelectCiv.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Se\xef\xbf\xbdilen oyuncu civ'i" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedAICivs_MetaData[] = {
		{ "Category", "W_SelectCiv" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Se\xef\xbf\xbdilen AI civ listesi (checkbox'tan gelir)\n" },
#endif
		{ "ModuleRelativePath", "Public/W_SelectCiv.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Se\xef\xbf\xbdilen AI civ listesi (checkbox'tan gelir)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CivEntryClass_MetaData[] = {
		{ "Category", "Civ" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Civ entry i\xef\xbf\xbdin widget class (zaten b\xef\xbf\xbdy\xef\xbf\xbdk ihtimalle var)\n" },
#endif
		{ "ModuleRelativePath", "Public/W_SelectCiv.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Civ entry i\xef\xbf\xbdin widget class (zaten b\xef\xbf\xbdy\xef\xbf\xbdk ihtimalle var)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScrollBox_Civs_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Civ listesinin dolduruldu\xef\xbf\xbdu ScrollBox (zaten muhtemelen var)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/W_SelectCiv.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Civ listesinin dolduruldu\xef\xbf\xbdu ScrollBox (zaten muhtemelen var)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_StartGame_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Start Game butonu\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/W_SelectCiv.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start Game butonu" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedCiv;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedAICivs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedAICivs;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CivEntryClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScrollBox_Civs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_StartGame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UW_SelectCiv_HandleStartGameClicked, "HandleStartGameClicked" }, // 2154077649
		{ &Z_Construct_UFunction_UW_SelectCiv_OnAICivSelectionChanged, "OnAICivSelectionChanged" }, // 2979188386
		{ &Z_Construct_UFunction_UW_SelectCiv_OnCivSelected, "OnCivSelected" }, // 1320425646
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UW_SelectCiv>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UW_SelectCiv_Statics::NewProp_SelectedCiv = { "SelectedCiv", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_SelectCiv, SelectedCiv), Z_Construct_UScriptStruct_FCivInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedCiv_MetaData), NewProp_SelectedCiv_MetaData) }; // 1142681011
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UW_SelectCiv_Statics::NewProp_SelectedAICivs_Inner = { "SelectedAICivs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCivInfo, METADATA_PARAMS(0, nullptr) }; // 1142681011
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UW_SelectCiv_Statics::NewProp_SelectedAICivs = { "SelectedAICivs", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_SelectCiv, SelectedAICivs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedAICivs_MetaData), NewProp_SelectedAICivs_MetaData) }; // 1142681011
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UW_SelectCiv_Statics::NewProp_CivEntryClass = { "CivEntryClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_SelectCiv, CivEntryClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UW_CivEntry_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CivEntryClass_MetaData), NewProp_CivEntryClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_SelectCiv_Statics::NewProp_ScrollBox_Civs = { "ScrollBox_Civs", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_SelectCiv, ScrollBox_Civs), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScrollBox_Civs_MetaData), NewProp_ScrollBox_Civs_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_SelectCiv_Statics::NewProp_Button_StartGame = { "Button_StartGame", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_SelectCiv, Button_StartGame), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_StartGame_MetaData), NewProp_Button_StartGame_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UW_SelectCiv_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_SelectCiv_Statics::NewProp_SelectedCiv,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_SelectCiv_Statics::NewProp_SelectedAICivs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_SelectCiv_Statics::NewProp_SelectedAICivs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_SelectCiv_Statics::NewProp_CivEntryClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_SelectCiv_Statics::NewProp_ScrollBox_Civs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_SelectCiv_Statics::NewProp_Button_StartGame,
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
struct Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_W_SelectCiv_h__Script_SProjectNew_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UW_SelectCiv, UW_SelectCiv::StaticClass, TEXT("UW_SelectCiv"), &Z_Registration_Info_UClass_UW_SelectCiv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UW_SelectCiv), 4266914489U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_W_SelectCiv_h__Script_SProjectNew_867323608(TEXT("/Script/SProjectNew"),
	Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_W_SelectCiv_h__Script_SProjectNew_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_W_SelectCiv_h__Script_SProjectNew_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
