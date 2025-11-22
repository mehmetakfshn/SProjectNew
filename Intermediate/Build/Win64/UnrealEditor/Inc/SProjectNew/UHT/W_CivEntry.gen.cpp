// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "W_CivEntry.h"
#include "CivilizationData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeW_CivEntry() {}

// ********** Begin Cross Module References ********************************************************
SPROJECTNEW_API UClass* Z_Construct_UClass_UW_CivEntry();
SPROJECTNEW_API UClass* Z_Construct_UClass_UW_CivEntry_NoRegister();
SPROJECTNEW_API UFunction* Z_Construct_UDelegateFunction_SProjectNew_CivAISelectionChangedSignature__DelegateSignature();
SPROJECTNEW_API UFunction* Z_Construct_UDelegateFunction_SProjectNew_CivSelectedSignature__DelegateSignature();
SPROJECTNEW_API UScriptStruct* Z_Construct_UScriptStruct_FCivInfo();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UCheckBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_SProjectNew();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FCivSelectedSignature *************************************************
struct Z_Construct_UDelegateFunction_SProjectNew_CivSelectedSignature__DelegateSignature_Statics
{
	struct _Script_SProjectNew_eventCivSelectedSignature_Parms
	{
		FCivInfo Info;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Zaten mevcut olmas\xef\xbf\xbd muhtemel, ama yoksa ekle:\n" },
#endif
		{ "ModuleRelativePath", "Public/W_CivEntry.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Zaten mevcut olmas\xef\xbf\xbd muhtemel, ama yoksa ekle:" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Info_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Info;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SProjectNew_CivSelectedSignature__DelegateSignature_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SProjectNew_eventCivSelectedSignature_Parms, Info), Z_Construct_UScriptStruct_FCivInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Info_MetaData), NewProp_Info_MetaData) }; // 2731982406
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SProjectNew_CivSelectedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SProjectNew_CivSelectedSignature__DelegateSignature_Statics::NewProp_Info,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SProjectNew_CivSelectedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SProjectNew_CivSelectedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SProjectNew, nullptr, "CivSelectedSignature__DelegateSignature", Z_Construct_UDelegateFunction_SProjectNew_CivSelectedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SProjectNew_CivSelectedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SProjectNew_CivSelectedSignature__DelegateSignature_Statics::_Script_SProjectNew_eventCivSelectedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SProjectNew_CivSelectedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SProjectNew_CivSelectedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SProjectNew_CivSelectedSignature__DelegateSignature_Statics::_Script_SProjectNew_eventCivSelectedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SProjectNew_CivSelectedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SProjectNew_CivSelectedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCivSelectedSignature_DelegateWrapper(const FMulticastScriptDelegate& CivSelectedSignature, FCivInfo const& Info)
{
	struct _Script_SProjectNew_eventCivSelectedSignature_Parms
	{
		FCivInfo Info;
	};
	_Script_SProjectNew_eventCivSelectedSignature_Parms Parms;
	Parms.Info=Info;
	CivSelectedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FCivSelectedSignature ***************************************************

// ********** Begin Delegate FCivAISelectionChangedSignature ***************************************
struct Z_Construct_UDelegateFunction_SProjectNew_CivAISelectionChangedSignature__DelegateSignature_Statics
{
	struct _Script_SProjectNew_eventCivAISelectionChangedSignature_Parms
	{
		FCivInfo Info;
		bool bIsSelected;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// YEN\xef\xbf\xbd: AI se\xef\xbf\xbdimi de\xef\xbf\xbdi\xef\xbf\xbdti\xef\xbf\xbdinde kullan\xef\xbf\xbdlacak delegate\n" },
#endif
		{ "ModuleRelativePath", "Public/W_CivEntry.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "YEN\xef\xbf\xbd: AI se\xef\xbf\xbdimi de\xef\xbf\xbdi\xef\xbf\xbdti\xef\xbf\xbdinde kullan\xef\xbf\xbdlacak delegate" },
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
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SProjectNew_CivAISelectionChangedSignature__DelegateSignature_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SProjectNew_eventCivAISelectionChangedSignature_Parms, Info), Z_Construct_UScriptStruct_FCivInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Info_MetaData), NewProp_Info_MetaData) }; // 2731982406
void Z_Construct_UDelegateFunction_SProjectNew_CivAISelectionChangedSignature__DelegateSignature_Statics::NewProp_bIsSelected_SetBit(void* Obj)
{
	((_Script_SProjectNew_eventCivAISelectionChangedSignature_Parms*)Obj)->bIsSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SProjectNew_CivAISelectionChangedSignature__DelegateSignature_Statics::NewProp_bIsSelected = { "bIsSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SProjectNew_eventCivAISelectionChangedSignature_Parms), &Z_Construct_UDelegateFunction_SProjectNew_CivAISelectionChangedSignature__DelegateSignature_Statics::NewProp_bIsSelected_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SProjectNew_CivAISelectionChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SProjectNew_CivAISelectionChangedSignature__DelegateSignature_Statics::NewProp_Info,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SProjectNew_CivAISelectionChangedSignature__DelegateSignature_Statics::NewProp_bIsSelected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SProjectNew_CivAISelectionChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_SProjectNew_CivAISelectionChangedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_SProjectNew, nullptr, "CivAISelectionChangedSignature__DelegateSignature", Z_Construct_UDelegateFunction_SProjectNew_CivAISelectionChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SProjectNew_CivAISelectionChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SProjectNew_CivAISelectionChangedSignature__DelegateSignature_Statics::_Script_SProjectNew_eventCivAISelectionChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SProjectNew_CivAISelectionChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SProjectNew_CivAISelectionChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_SProjectNew_CivAISelectionChangedSignature__DelegateSignature_Statics::_Script_SProjectNew_eventCivAISelectionChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SProjectNew_CivAISelectionChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SProjectNew_CivAISelectionChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCivAISelectionChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& CivAISelectionChangedSignature, FCivInfo const& Info, bool bIsSelected)
{
	struct _Script_SProjectNew_eventCivAISelectionChangedSignature_Parms
	{
		FCivInfo Info;
		bool bIsSelected;
	};
	_Script_SProjectNew_eventCivAISelectionChangedSignature_Parms Parms;
	Parms.Info=Info;
	Parms.bIsSelected=bIsSelected ? true : false;
	CivAISelectionChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FCivAISelectionChangedSignature *****************************************

// ********** Begin Class UW_CivEntry Function HandleAICheckChanged ********************************
struct Z_Construct_UFunction_UW_CivEntry_HandleAICheckChanged_Statics
{
	struct W_CivEntry_eventHandleAICheckChanged_Parms
	{
		bool bIsChecked;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// YEN\xef\xbf\xbd: Checkbox de\xef\xbf\xbdi\xef\xbf\xbdince \xef\xbf\xbd""a\xef\xbf\xbdr\xef\xbf\xbdlacak fonksiyon\n" },
#endif
		{ "ModuleRelativePath", "Public/W_CivEntry.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "YEN\xef\xbf\xbd: Checkbox de\xef\xbf\xbdi\xef\xbf\xbdince \xef\xbf\xbd""a\xef\xbf\xbdr\xef\xbf\xbdlacak fonksiyon" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIsChecked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsChecked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UW_CivEntry_HandleAICheckChanged_Statics::NewProp_bIsChecked_SetBit(void* Obj)
{
	((W_CivEntry_eventHandleAICheckChanged_Parms*)Obj)->bIsChecked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UW_CivEntry_HandleAICheckChanged_Statics::NewProp_bIsChecked = { "bIsChecked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(W_CivEntry_eventHandleAICheckChanged_Parms), &Z_Construct_UFunction_UW_CivEntry_HandleAICheckChanged_Statics::NewProp_bIsChecked_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UW_CivEntry_HandleAICheckChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW_CivEntry_HandleAICheckChanged_Statics::NewProp_bIsChecked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UW_CivEntry_HandleAICheckChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UW_CivEntry_HandleAICheckChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UW_CivEntry, nullptr, "HandleAICheckChanged", Z_Construct_UFunction_UW_CivEntry_HandleAICheckChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UW_CivEntry_HandleAICheckChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UW_CivEntry_HandleAICheckChanged_Statics::W_CivEntry_eventHandleAICheckChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UW_CivEntry_HandleAICheckChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UW_CivEntry_HandleAICheckChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UW_CivEntry_HandleAICheckChanged_Statics::W_CivEntry_eventHandleAICheckChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UW_CivEntry_HandleAICheckChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UW_CivEntry_HandleAICheckChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UW_CivEntry::execHandleAICheckChanged)
{
	P_GET_UBOOL(Z_Param_bIsChecked);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleAICheckChanged(Z_Param_bIsChecked);
	P_NATIVE_END;
}
// ********** End Class UW_CivEntry Function HandleAICheckChanged **********************************

// ********** Begin Class UW_CivEntry Function HandleClick *****************************************
struct Z_Construct_UFunction_UW_CivEntry_HandleClick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd t\xef\xbf\xbdklama fonksiyonu (Select butonu)\n" },
#endif
		{ "ModuleRelativePath", "Public/W_CivEntry.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd t\xef\xbf\xbdklama fonksiyonu (Select butonu)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UW_CivEntry_HandleClick_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UW_CivEntry, nullptr, "HandleClick", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UW_CivEntry_HandleClick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UW_CivEntry_HandleClick_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UW_CivEntry_HandleClick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UW_CivEntry_HandleClick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UW_CivEntry::execHandleClick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleClick();
	P_NATIVE_END;
}
// ********** End Class UW_CivEntry Function HandleClick *******************************************

// ********** Begin Class UW_CivEntry Function SetCiv **********************************************
struct Z_Construct_UFunction_UW_CivEntry_SetCiv_Statics
{
	struct W_CivEntry_eventSetCiv_Parms
	{
		FCivInfo Info;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// C++ taraf\xef\xbf\xbdndan CivInfo atamak i\xef\xbf\xbdin kullan\xef\xbf\xbdlan fonksiyon\n" },
#endif
		{ "ModuleRelativePath", "Public/W_CivEntry.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "C++ taraf\xef\xbf\xbdndan CivInfo atamak i\xef\xbf\xbdin kullan\xef\xbf\xbdlan fonksiyon" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UW_CivEntry_SetCiv_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(W_CivEntry_eventSetCiv_Parms, Info), Z_Construct_UScriptStruct_FCivInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Info_MetaData), NewProp_Info_MetaData) }; // 2731982406
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UW_CivEntry_SetCiv_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UW_CivEntry_SetCiv_Statics::NewProp_Info,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UW_CivEntry_SetCiv_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UW_CivEntry_SetCiv_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UW_CivEntry, nullptr, "SetCiv", Z_Construct_UFunction_UW_CivEntry_SetCiv_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UW_CivEntry_SetCiv_Statics::PropPointers), sizeof(Z_Construct_UFunction_UW_CivEntry_SetCiv_Statics::W_CivEntry_eventSetCiv_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UW_CivEntry_SetCiv_Statics::Function_MetaDataParams), Z_Construct_UFunction_UW_CivEntry_SetCiv_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UW_CivEntry_SetCiv_Statics::W_CivEntry_eventSetCiv_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UW_CivEntry_SetCiv()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UW_CivEntry_SetCiv_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UW_CivEntry::execSetCiv)
{
	P_GET_STRUCT_REF(FCivInfo,Z_Param_Out_Info);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCiv(Z_Param_Out_Info);
	P_NATIVE_END;
}
// ********** End Class UW_CivEntry Function SetCiv ************************************************

// ********** Begin Class UW_CivEntry **************************************************************
void UW_CivEntry::StaticRegisterNativesUW_CivEntry()
{
	UClass* Class = UW_CivEntry::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleAICheckChanged", &UW_CivEntry::execHandleAICheckChanged },
		{ "HandleClick", &UW_CivEntry::execHandleClick },
		{ "SetCiv", &UW_CivEntry::execSetCiv },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UW_CivEntry;
UClass* UW_CivEntry::GetPrivateStaticClass()
{
	using TClass = UW_CivEntry;
	if (!Z_Registration_Info_UClass_UW_CivEntry.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("W_CivEntry"),
			Z_Registration_Info_UClass_UW_CivEntry.InnerSingleton,
			StaticRegisterNativesUW_CivEntry,
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
	return Z_Registration_Info_UClass_UW_CivEntry.InnerSingleton;
}
UClass* Z_Construct_UClass_UW_CivEntry_NoRegister()
{
	return UW_CivEntry::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UW_CivEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "W_CivEntry.h" },
		{ "ModuleRelativePath", "Public/W_CivEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CivInfo_MetaData[] = {
		{ "Category", "W_CivEntry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Entry'deki Civ bilgisini tutar\n" },
#endif
		{ "ModuleRelativePath", "Public/W_CivEntry.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Entry'deki Civ bilgisini tutar" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCivSelected_MetaData[] = {
		{ "Category", "Civ" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Oyuncu kendi civini se\xef\xbf\xbdti\xef\xbf\xbdinde tetiklenir\n" },
#endif
		{ "ModuleRelativePath", "Public/W_CivEntry.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Oyuncu kendi civini se\xef\xbf\xbdti\xef\xbf\xbdinde tetiklenir" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAISelectionChanged_MetaData[] = {
		{ "Category", "Civ" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Bu civ AI listesine eklenip/\xef\xbf\xbd\xef\xbf\xbdkar\xef\xbf\xbdld\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdnda tetiklenir\n" },
#endif
		{ "ModuleRelativePath", "Public/W_CivEntry.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bu civ AI listesine eklenip/\xef\xbf\xbd\xef\xbf\xbdkar\xef\xbf\xbdld\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdnda tetiklenir" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_Select_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blueprint ile bind edilecek UI elemanlar\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/W_CivEntry.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint ile bind edilecek UI elemanlar\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_CivName_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/W_CivEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckBox_IsAI_MetaData[] = {
		{ "BindWidgetOptional", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// YEN\xef\xbf\xbd: Bu sat\xef\xbf\xbdr\xef\xbf\xbd AI i\xef\xbf\xbdin i\xef\xbf\xbd""aretlemek amac\xef\xbf\xbdyla kullanaca\xef\xbf\xbd\xef\xbf\xbdz\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/W_CivEntry.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "YEN\xef\xbf\xbd: Bu sat\xef\xbf\xbdr\xef\xbf\xbd AI i\xef\xbf\xbdin i\xef\xbf\xbd""aretlemek amac\xef\xbf\xbdyla kullanaca\xef\xbf\xbd\xef\xbf\xbdz" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CivInfo;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCivSelected;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAISelectionChanged;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_Select;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_CivName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CheckBox_IsAI;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UW_CivEntry_HandleAICheckChanged, "HandleAICheckChanged" }, // 19638530
		{ &Z_Construct_UFunction_UW_CivEntry_HandleClick, "HandleClick" }, // 726486944
		{ &Z_Construct_UFunction_UW_CivEntry_SetCiv, "SetCiv" }, // 1435289790
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UW_CivEntry>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UW_CivEntry_Statics::NewProp_CivInfo = { "CivInfo", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_CivEntry, CivInfo), Z_Construct_UScriptStruct_FCivInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CivInfo_MetaData), NewProp_CivInfo_MetaData) }; // 2731982406
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UW_CivEntry_Statics::NewProp_OnCivSelected = { "OnCivSelected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_CivEntry, OnCivSelected), Z_Construct_UDelegateFunction_SProjectNew_CivSelectedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCivSelected_MetaData), NewProp_OnCivSelected_MetaData) }; // 1538097429
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UW_CivEntry_Statics::NewProp_OnAISelectionChanged = { "OnAISelectionChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_CivEntry, OnAISelectionChanged), Z_Construct_UDelegateFunction_SProjectNew_CivAISelectionChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAISelectionChanged_MetaData), NewProp_OnAISelectionChanged_MetaData) }; // 2690910648
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_CivEntry_Statics::NewProp_Button_Select = { "Button_Select", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_CivEntry, Button_Select), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_Select_MetaData), NewProp_Button_Select_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_CivEntry_Statics::NewProp_Text_CivName = { "Text_CivName", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_CivEntry, Text_CivName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_CivName_MetaData), NewProp_Text_CivName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_CivEntry_Statics::NewProp_CheckBox_IsAI = { "CheckBox_IsAI", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_CivEntry, CheckBox_IsAI), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckBox_IsAI_MetaData), NewProp_CheckBox_IsAI_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UW_CivEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_CivEntry_Statics::NewProp_CivInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_CivEntry_Statics::NewProp_OnCivSelected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_CivEntry_Statics::NewProp_OnAISelectionChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_CivEntry_Statics::NewProp_Button_Select,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_CivEntry_Statics::NewProp_Text_CivName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_CivEntry_Statics::NewProp_CheckBox_IsAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UW_CivEntry_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UW_CivEntry_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_SProjectNew,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UW_CivEntry_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UW_CivEntry_Statics::ClassParams = {
	&UW_CivEntry::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UW_CivEntry_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UW_CivEntry_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UW_CivEntry_Statics::Class_MetaDataParams), Z_Construct_UClass_UW_CivEntry_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UW_CivEntry()
{
	if (!Z_Registration_Info_UClass_UW_CivEntry.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UW_CivEntry.OuterSingleton, Z_Construct_UClass_UW_CivEntry_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UW_CivEntry.OuterSingleton;
}
UW_CivEntry::UW_CivEntry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UW_CivEntry);
UW_CivEntry::~UW_CivEntry() {}
// ********** End Class UW_CivEntry ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_W_CivEntry_h__Script_SProjectNew_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UW_CivEntry, UW_CivEntry::StaticClass, TEXT("UW_CivEntry"), &Z_Registration_Info_UClass_UW_CivEntry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UW_CivEntry), 2287958581U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_W_CivEntry_h__Script_SProjectNew_1182571263(TEXT("/Script/SProjectNew"),
	Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_W_CivEntry_h__Script_SProjectNew_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_W_CivEntry_h__Script_SProjectNew_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
