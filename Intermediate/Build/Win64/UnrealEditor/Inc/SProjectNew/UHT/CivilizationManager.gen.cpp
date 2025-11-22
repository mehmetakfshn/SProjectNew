// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CivilizationManager.h"
#include "CivilizationData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCivilizationManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
SPROJECTNEW_API UClass* Z_Construct_UClass_ACity_NoRegister();
SPROJECTNEW_API UClass* Z_Construct_UClass_AUnitBase_NoRegister();
SPROJECTNEW_API UClass* Z_Construct_UClass_UCivilizationData_NoRegister();
SPROJECTNEW_API UClass* Z_Construct_UClass_UCivilizationManager();
SPROJECTNEW_API UClass* Z_Construct_UClass_UCivilizationManager_NoRegister();
SPROJECTNEW_API UScriptStruct* Z_Construct_UScriptStruct_FCivInfo();
UPackage* Z_Construct_UPackage__Script_SProjectNew();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCivilizationManager Function AddCity ************************************
struct Z_Construct_UFunction_UCivilizationManager_AddCity_Statics
{
	struct CivilizationManager_eventAddCity_Parms
	{
		ACity* City;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CivilizationManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_City;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCivilizationManager_AddCity_Statics::NewProp_City = { "City", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CivilizationManager_eventAddCity_Parms, City), Z_Construct_UClass_ACity_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCivilizationManager_AddCity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCivilizationManager_AddCity_Statics::NewProp_City,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCivilizationManager_AddCity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCivilizationManager_AddCity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCivilizationManager, nullptr, "AddCity", Z_Construct_UFunction_UCivilizationManager_AddCity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCivilizationManager_AddCity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCivilizationManager_AddCity_Statics::CivilizationManager_eventAddCity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCivilizationManager_AddCity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCivilizationManager_AddCity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCivilizationManager_AddCity_Statics::CivilizationManager_eventAddCity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCivilizationManager_AddCity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCivilizationManager_AddCity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCivilizationManager::execAddCity)
{
	P_GET_OBJECT(ACity,Z_Param_City);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddCity(Z_Param_City);
	P_NATIVE_END;
}
// ********** End Class UCivilizationManager Function AddCity **************************************

// ********** Begin Class UCivilizationManager Function AddOwnedTile *******************************
struct Z_Construct_UFunction_UCivilizationManager_AddOwnedTile_Statics
{
	struct CivilizationManager_eventAddOwnedTile_Parms
	{
		FIntPoint Tile;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CivilizationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tile;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCivilizationManager_AddOwnedTile_Statics::NewProp_Tile = { "Tile", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CivilizationManager_eventAddOwnedTile_Parms, Tile), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tile_MetaData), NewProp_Tile_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCivilizationManager_AddOwnedTile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCivilizationManager_AddOwnedTile_Statics::NewProp_Tile,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCivilizationManager_AddOwnedTile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCivilizationManager_AddOwnedTile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCivilizationManager, nullptr, "AddOwnedTile", Z_Construct_UFunction_UCivilizationManager_AddOwnedTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCivilizationManager_AddOwnedTile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCivilizationManager_AddOwnedTile_Statics::CivilizationManager_eventAddOwnedTile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCivilizationManager_AddOwnedTile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCivilizationManager_AddOwnedTile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCivilizationManager_AddOwnedTile_Statics::CivilizationManager_eventAddOwnedTile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCivilizationManager_AddOwnedTile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCivilizationManager_AddOwnedTile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCivilizationManager::execAddOwnedTile)
{
	P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_Tile);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddOwnedTile(Z_Param_Out_Tile);
	P_NATIVE_END;
}
// ********** End Class UCivilizationManager Function AddOwnedTile *********************************

// ********** Begin Class UCivilizationManager Function AddUnit ************************************
struct Z_Construct_UFunction_UCivilizationManager_AddUnit_Statics
{
	struct CivilizationManager_eventAddUnit_Parms
	{
		AUnitBase* Unit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CivilizationManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Unit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCivilizationManager_AddUnit_Statics::NewProp_Unit = { "Unit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CivilizationManager_eventAddUnit_Parms, Unit), Z_Construct_UClass_AUnitBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCivilizationManager_AddUnit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCivilizationManager_AddUnit_Statics::NewProp_Unit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCivilizationManager_AddUnit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCivilizationManager_AddUnit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCivilizationManager, nullptr, "AddUnit", Z_Construct_UFunction_UCivilizationManager_AddUnit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCivilizationManager_AddUnit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCivilizationManager_AddUnit_Statics::CivilizationManager_eventAddUnit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCivilizationManager_AddUnit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCivilizationManager_AddUnit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCivilizationManager_AddUnit_Statics::CivilizationManager_eventAddUnit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCivilizationManager_AddUnit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCivilizationManager_AddUnit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCivilizationManager::execAddUnit)
{
	P_GET_OBJECT(AUnitBase,Z_Param_Unit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddUnit(Z_Param_Unit);
	P_NATIVE_END;
}
// ********** End Class UCivilizationManager Function AddUnit **************************************

// ********** Begin Class UCivilizationManager Function CanProduceUnit *****************************
struct Z_Construct_UFunction_UCivilizationManager_CanProduceUnit_Statics
{
	struct CivilizationManager_eventCanProduceUnit_Parms
	{
		FString UnitType;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CivilizationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnitType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UnitType;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCivilizationManager_CanProduceUnit_Statics::NewProp_UnitType = { "UnitType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CivilizationManager_eventCanProduceUnit_Parms, UnitType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnitType_MetaData), NewProp_UnitType_MetaData) };
void Z_Construct_UFunction_UCivilizationManager_CanProduceUnit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CivilizationManager_eventCanProduceUnit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCivilizationManager_CanProduceUnit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CivilizationManager_eventCanProduceUnit_Parms), &Z_Construct_UFunction_UCivilizationManager_CanProduceUnit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCivilizationManager_CanProduceUnit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCivilizationManager_CanProduceUnit_Statics::NewProp_UnitType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCivilizationManager_CanProduceUnit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCivilizationManager_CanProduceUnit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCivilizationManager_CanProduceUnit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCivilizationManager, nullptr, "CanProduceUnit", Z_Construct_UFunction_UCivilizationManager_CanProduceUnit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCivilizationManager_CanProduceUnit_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCivilizationManager_CanProduceUnit_Statics::CivilizationManager_eventCanProduceUnit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCivilizationManager_CanProduceUnit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCivilizationManager_CanProduceUnit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCivilizationManager_CanProduceUnit_Statics::CivilizationManager_eventCanProduceUnit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCivilizationManager_CanProduceUnit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCivilizationManager_CanProduceUnit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCivilizationManager::execCanProduceUnit)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UnitType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanProduceUnit(Z_Param_UnitType);
	P_NATIVE_END;
}
// ********** End Class UCivilizationManager Function CanProduceUnit *******************************

// ********** Begin Class UCivilizationManager Function GetCivilizationData ************************
struct Z_Construct_UFunction_UCivilizationManager_GetCivilizationData_Statics
{
	struct CivilizationManager_eventGetCivilizationData_Parms
	{
		UCivilizationData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CivilizationManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCivilizationManager_GetCivilizationData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CivilizationManager_eventGetCivilizationData_Parms, ReturnValue), Z_Construct_UClass_UCivilizationData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCivilizationManager_GetCivilizationData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCivilizationManager_GetCivilizationData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCivilizationManager_GetCivilizationData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCivilizationManager_GetCivilizationData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCivilizationManager, nullptr, "GetCivilizationData", Z_Construct_UFunction_UCivilizationManager_GetCivilizationData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCivilizationManager_GetCivilizationData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCivilizationManager_GetCivilizationData_Statics::CivilizationManager_eventGetCivilizationData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCivilizationManager_GetCivilizationData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCivilizationManager_GetCivilizationData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCivilizationManager_GetCivilizationData_Statics::CivilizationManager_eventGetCivilizationData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCivilizationManager_GetCivilizationData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCivilizationManager_GetCivilizationData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCivilizationManager::execGetCivilizationData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCivilizationData**)Z_Param__Result=P_THIS->GetCivilizationData();
	P_NATIVE_END;
}
// ********** End Class UCivilizationManager Function GetCivilizationData **************************

// ********** Begin Class UCivilizationManager Function Init ***************************************
struct Z_Construct_UFunction_UCivilizationManager_Init_Statics
{
	struct CivilizationManager_eventInit_Parms
	{
		FCivInfo SelectedCiv;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CivilizationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedCiv_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedCiv;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCivilizationManager_Init_Statics::NewProp_SelectedCiv = { "SelectedCiv", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CivilizationManager_eventInit_Parms, SelectedCiv), Z_Construct_UScriptStruct_FCivInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedCiv_MetaData), NewProp_SelectedCiv_MetaData) }; // 2731982406
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCivilizationManager_Init_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCivilizationManager_Init_Statics::NewProp_SelectedCiv,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCivilizationManager_Init_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCivilizationManager_Init_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCivilizationManager, nullptr, "Init", Z_Construct_UFunction_UCivilizationManager_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCivilizationManager_Init_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCivilizationManager_Init_Statics::CivilizationManager_eventInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCivilizationManager_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCivilizationManager_Init_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCivilizationManager_Init_Statics::CivilizationManager_eventInit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCivilizationManager_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCivilizationManager_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCivilizationManager::execInit)
{
	P_GET_STRUCT_REF(FCivInfo,Z_Param_Out_SelectedCiv);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Init(Z_Param_Out_SelectedCiv);
	P_NATIVE_END;
}
// ********** End Class UCivilizationManager Function Init *****************************************

// ********** Begin Class UCivilizationManager Function OwnsTile ***********************************
struct Z_Construct_UFunction_UCivilizationManager_OwnsTile_Statics
{
	struct CivilizationManager_eventOwnsTile_Parms
	{
		FIntPoint Tile;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CivilizationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tile;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCivilizationManager_OwnsTile_Statics::NewProp_Tile = { "Tile", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CivilizationManager_eventOwnsTile_Parms, Tile), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tile_MetaData), NewProp_Tile_MetaData) };
void Z_Construct_UFunction_UCivilizationManager_OwnsTile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CivilizationManager_eventOwnsTile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCivilizationManager_OwnsTile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CivilizationManager_eventOwnsTile_Parms), &Z_Construct_UFunction_UCivilizationManager_OwnsTile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCivilizationManager_OwnsTile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCivilizationManager_OwnsTile_Statics::NewProp_Tile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCivilizationManager_OwnsTile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCivilizationManager_OwnsTile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCivilizationManager_OwnsTile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCivilizationManager, nullptr, "OwnsTile", Z_Construct_UFunction_UCivilizationManager_OwnsTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCivilizationManager_OwnsTile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCivilizationManager_OwnsTile_Statics::CivilizationManager_eventOwnsTile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCivilizationManager_OwnsTile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCivilizationManager_OwnsTile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UCivilizationManager_OwnsTile_Statics::CivilizationManager_eventOwnsTile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCivilizationManager_OwnsTile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCivilizationManager_OwnsTile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCivilizationManager::execOwnsTile)
{
	P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_Tile);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OwnsTile(Z_Param_Out_Tile);
	P_NATIVE_END;
}
// ********** End Class UCivilizationManager Function OwnsTile *************************************

// ********** Begin Class UCivilizationManager *****************************************************
void UCivilizationManager::StaticRegisterNativesUCivilizationManager()
{
	UClass* Class = UCivilizationManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddCity", &UCivilizationManager::execAddCity },
		{ "AddOwnedTile", &UCivilizationManager::execAddOwnedTile },
		{ "AddUnit", &UCivilizationManager::execAddUnit },
		{ "CanProduceUnit", &UCivilizationManager::execCanProduceUnit },
		{ "GetCivilizationData", &UCivilizationManager::execGetCivilizationData },
		{ "Init", &UCivilizationManager::execInit },
		{ "OwnsTile", &UCivilizationManager::execOwnsTile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCivilizationManager;
UClass* UCivilizationManager::GetPrivateStaticClass()
{
	using TClass = UCivilizationManager;
	if (!Z_Registration_Info_UClass_UCivilizationManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CivilizationManager"),
			Z_Registration_Info_UClass_UCivilizationManager.InnerSingleton,
			StaticRegisterNativesUCivilizationManager,
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
	return Z_Registration_Info_UClass_UCivilizationManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UCivilizationManager_NoRegister()
{
	return UCivilizationManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCivilizationManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CivilizationManager.h" },
		{ "ModuleRelativePath", "Public/CivilizationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CivData_MetaData[] = {
		{ "Category", "CivilizationManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// CIV DATA\n" },
#endif
		{ "ModuleRelativePath", "Public/CivilizationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CIV DATA" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gold_MetaData[] = {
		{ "Category", "CivilizationManager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// === RUNTIME STATE ===\n" },
#endif
		{ "ModuleRelativePath", "Public/CivilizationManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "=== RUNTIME STATE ===" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Science_MetaData[] = {
		{ "Category", "CivilizationManager" },
		{ "ModuleRelativePath", "Public/CivilizationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Culture_MetaData[] = {
		{ "Category", "CivilizationManager" },
		{ "ModuleRelativePath", "Public/CivilizationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnedTiles_MetaData[] = {
		{ "Category", "CivilizationManager" },
		{ "ModuleRelativePath", "Public/CivilizationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Units_MetaData[] = {
		{ "Category", "CivilizationManager" },
		{ "ModuleRelativePath", "Public/CivilizationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cities_MetaData[] = {
		{ "Category", "CivilizationManager" },
		{ "ModuleRelativePath", "Public/CivilizationManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CivData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Gold;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Science;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Culture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OwnedTiles_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_OwnedTiles;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Units_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Units;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Cities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Cities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCivilizationManager_AddCity, "AddCity" }, // 2561529716
		{ &Z_Construct_UFunction_UCivilizationManager_AddOwnedTile, "AddOwnedTile" }, // 1305736093
		{ &Z_Construct_UFunction_UCivilizationManager_AddUnit, "AddUnit" }, // 2447645214
		{ &Z_Construct_UFunction_UCivilizationManager_CanProduceUnit, "CanProduceUnit" }, // 2377039083
		{ &Z_Construct_UFunction_UCivilizationManager_GetCivilizationData, "GetCivilizationData" }, // 3566621672
		{ &Z_Construct_UFunction_UCivilizationManager_Init, "Init" }, // 3830299421
		{ &Z_Construct_UFunction_UCivilizationManager_OwnsTile, "OwnsTile" }, // 963163048
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCivilizationManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCivilizationManager_Statics::NewProp_CivData = { "CivData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCivilizationManager, CivData), Z_Construct_UClass_UCivilizationData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CivData_MetaData), NewProp_CivData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCivilizationManager_Statics::NewProp_Gold = { "Gold", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCivilizationManager, Gold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gold_MetaData), NewProp_Gold_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCivilizationManager_Statics::NewProp_Science = { "Science", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCivilizationManager, Science), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Science_MetaData), NewProp_Science_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCivilizationManager_Statics::NewProp_Culture = { "Culture", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCivilizationManager, Culture), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Culture_MetaData), NewProp_Culture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCivilizationManager_Statics::NewProp_OwnedTiles_ElementProp = { "OwnedTiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
static_assert(TModels_V<CGetTypeHashable, FIntPoint>, "The structure 'FIntPoint' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UCivilizationManager_Statics::NewProp_OwnedTiles = { "OwnedTiles", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCivilizationManager, OwnedTiles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnedTiles_MetaData), NewProp_OwnedTiles_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCivilizationManager_Statics::NewProp_Units_Inner = { "Units", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AUnitBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCivilizationManager_Statics::NewProp_Units = { "Units", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCivilizationManager, Units), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Units_MetaData), NewProp_Units_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCivilizationManager_Statics::NewProp_Cities_Inner = { "Cities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ACity_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCivilizationManager_Statics::NewProp_Cities = { "Cities", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCivilizationManager, Cities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cities_MetaData), NewProp_Cities_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCivilizationManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCivilizationManager_Statics::NewProp_CivData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCivilizationManager_Statics::NewProp_Gold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCivilizationManager_Statics::NewProp_Science,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCivilizationManager_Statics::NewProp_Culture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCivilizationManager_Statics::NewProp_OwnedTiles_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCivilizationManager_Statics::NewProp_OwnedTiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCivilizationManager_Statics::NewProp_Units_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCivilizationManager_Statics::NewProp_Units,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCivilizationManager_Statics::NewProp_Cities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCivilizationManager_Statics::NewProp_Cities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCivilizationManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCivilizationManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SProjectNew,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCivilizationManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCivilizationManager_Statics::ClassParams = {
	&UCivilizationManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCivilizationManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCivilizationManager_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCivilizationManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UCivilizationManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCivilizationManager()
{
	if (!Z_Registration_Info_UClass_UCivilizationManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCivilizationManager.OuterSingleton, Z_Construct_UClass_UCivilizationManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCivilizationManager.OuterSingleton;
}
UCivilizationManager::UCivilizationManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCivilizationManager);
UCivilizationManager::~UCivilizationManager() {}
// ********** End Class UCivilizationManager *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_CivilizationManager_h__Script_SProjectNew_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCivilizationManager, UCivilizationManager::StaticClass, TEXT("UCivilizationManager"), &Z_Registration_Info_UClass_UCivilizationManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCivilizationManager), 862344091U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_CivilizationManager_h__Script_SProjectNew_3177850658(TEXT("/Script/SProjectNew"),
	Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_CivilizationManager_h__Script_SProjectNew_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_CivilizationManager_h__Script_SProjectNew_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
