// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MapEditorPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMapEditorPlayerController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
SPROJECTNEW_API UClass* Z_Construct_UClass_AMapEditorPlayerController();
SPROJECTNEW_API UClass* Z_Construct_UClass_AMapEditorPlayerController_NoRegister();
SPROJECTNEW_API UEnum* Z_Construct_UEnum_SProjectNew_ETileType();
UPackage* Z_Construct_UPackage__Script_SProjectNew();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMapEditorPlayerController Function GetSavedMapList **********************
struct Z_Construct_UFunction_AMapEditorPlayerController_GetSavedMapList_Statics
{
	struct MapEditorPlayerController_eventGetSavedMapList_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map Editor" },
		{ "ModuleRelativePath", "Public/MapEditorPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMapEditorPlayerController_GetSavedMapList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMapEditorPlayerController_GetSavedMapList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapEditorPlayerController_eventGetSavedMapList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapEditorPlayerController_GetSavedMapList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapEditorPlayerController_GetSavedMapList_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapEditorPlayerController_GetSavedMapList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapEditorPlayerController_GetSavedMapList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapEditorPlayerController_GetSavedMapList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapEditorPlayerController, nullptr, "GetSavedMapList", Z_Construct_UFunction_AMapEditorPlayerController_GetSavedMapList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapEditorPlayerController_GetSavedMapList_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapEditorPlayerController_GetSavedMapList_Statics::MapEditorPlayerController_eventGetSavedMapList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapEditorPlayerController_GetSavedMapList_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapEditorPlayerController_GetSavedMapList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMapEditorPlayerController_GetSavedMapList_Statics::MapEditorPlayerController_eventGetSavedMapList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapEditorPlayerController_GetSavedMapList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapEditorPlayerController_GetSavedMapList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapEditorPlayerController::execGetSavedMapList)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetSavedMapList();
	P_NATIVE_END;
}
// ********** End Class AMapEditorPlayerController Function GetSavedMapList ************************

// ********** Begin Class AMapEditorPlayerController Function LoadMap ******************************
struct Z_Construct_UFunction_AMapEditorPlayerController_LoadMap_Statics
{
	struct MapEditorPlayerController_eventLoadMap_Parms
	{
		FString MapName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map Editor" },
		{ "ModuleRelativePath", "Public/MapEditorPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MapName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMapEditorPlayerController_LoadMap_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapEditorPlayerController_eventLoadMap_Parms, MapName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapName_MetaData), NewProp_MapName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapEditorPlayerController_LoadMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapEditorPlayerController_LoadMap_Statics::NewProp_MapName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapEditorPlayerController_LoadMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapEditorPlayerController_LoadMap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapEditorPlayerController, nullptr, "LoadMap", Z_Construct_UFunction_AMapEditorPlayerController_LoadMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapEditorPlayerController_LoadMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapEditorPlayerController_LoadMap_Statics::MapEditorPlayerController_eventLoadMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapEditorPlayerController_LoadMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapEditorPlayerController_LoadMap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMapEditorPlayerController_LoadMap_Statics::MapEditorPlayerController_eventLoadMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapEditorPlayerController_LoadMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapEditorPlayerController_LoadMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapEditorPlayerController::execLoadMap)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MapName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadMap(Z_Param_MapName);
	P_NATIVE_END;
}
// ********** End Class AMapEditorPlayerController Function LoadMap ********************************

// ********** Begin Class AMapEditorPlayerController Function SaveMapWithName **********************
struct Z_Construct_UFunction_AMapEditorPlayerController_SaveMapWithName_Statics
{
	struct MapEditorPlayerController_eventSaveMapWithName_Parms
	{
		FString MapName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MapEditorPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MapName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMapEditorPlayerController_SaveMapWithName_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapEditorPlayerController_eventSaveMapWithName_Parms, MapName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapName_MetaData), NewProp_MapName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapEditorPlayerController_SaveMapWithName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapEditorPlayerController_SaveMapWithName_Statics::NewProp_MapName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapEditorPlayerController_SaveMapWithName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapEditorPlayerController_SaveMapWithName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapEditorPlayerController, nullptr, "SaveMapWithName", Z_Construct_UFunction_AMapEditorPlayerController_SaveMapWithName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapEditorPlayerController_SaveMapWithName_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapEditorPlayerController_SaveMapWithName_Statics::MapEditorPlayerController_eventSaveMapWithName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapEditorPlayerController_SaveMapWithName_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapEditorPlayerController_SaveMapWithName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMapEditorPlayerController_SaveMapWithName_Statics::MapEditorPlayerController_eventSaveMapWithName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapEditorPlayerController_SaveMapWithName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapEditorPlayerController_SaveMapWithName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapEditorPlayerController::execSaveMapWithName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MapName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveMapWithName(Z_Param_MapName);
	P_NATIVE_END;
}
// ********** End Class AMapEditorPlayerController Function SaveMapWithName ************************

// ********** Begin Class AMapEditorPlayerController Function SetCurrentHeightDelta ****************
struct Z_Construct_UFunction_AMapEditorPlayerController_SetCurrentHeightDelta_Statics
{
	struct MapEditorPlayerController_eventSetCurrentHeightDelta_Parms
	{
		int32 NewDelta;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map Editor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UMG'den \xef\xbf\xbd""a\xef\xbf\xbdr\xef\xbf\xbdlacak: y\xef\xbf\xbdkseklik delta (+1 / -1)\n" },
#endif
		{ "ModuleRelativePath", "Public/MapEditorPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UMG'den \xef\xbf\xbd""a\xef\xbf\xbdr\xef\xbf\xbdlacak: y\xef\xbf\xbdkseklik delta (+1 / -1)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewDelta;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapEditorPlayerController_SetCurrentHeightDelta_Statics::NewProp_NewDelta = { "NewDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapEditorPlayerController_eventSetCurrentHeightDelta_Parms, NewDelta), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapEditorPlayerController_SetCurrentHeightDelta_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapEditorPlayerController_SetCurrentHeightDelta_Statics::NewProp_NewDelta,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapEditorPlayerController_SetCurrentHeightDelta_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapEditorPlayerController_SetCurrentHeightDelta_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapEditorPlayerController, nullptr, "SetCurrentHeightDelta", Z_Construct_UFunction_AMapEditorPlayerController_SetCurrentHeightDelta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapEditorPlayerController_SetCurrentHeightDelta_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapEditorPlayerController_SetCurrentHeightDelta_Statics::MapEditorPlayerController_eventSetCurrentHeightDelta_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapEditorPlayerController_SetCurrentHeightDelta_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapEditorPlayerController_SetCurrentHeightDelta_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMapEditorPlayerController_SetCurrentHeightDelta_Statics::MapEditorPlayerController_eventSetCurrentHeightDelta_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapEditorPlayerController_SetCurrentHeightDelta()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapEditorPlayerController_SetCurrentHeightDelta_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapEditorPlayerController::execSetCurrentHeightDelta)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewDelta);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentHeightDelta(Z_Param_NewDelta);
	P_NATIVE_END;
}
// ********** End Class AMapEditorPlayerController Function SetCurrentHeightDelta ******************

// ********** Begin Class AMapEditorPlayerController Function SetCurrentTileType *******************
struct Z_Construct_UFunction_AMapEditorPlayerController_SetCurrentTileType_Statics
{
	struct MapEditorPlayerController_eventSetCurrentTileType_Parms
	{
		ETileType NewType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map Editor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UMG'den \xef\xbf\xbd""a\xef\xbf\xbdr\xef\xbf\xbdlacak: aktif tile tipi\n" },
#endif
		{ "ModuleRelativePath", "Public/MapEditorPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UMG'den \xef\xbf\xbd""a\xef\xbf\xbdr\xef\xbf\xbdlacak: aktif tile tipi" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMapEditorPlayerController_SetCurrentTileType_Statics::NewProp_NewType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMapEditorPlayerController_SetCurrentTileType_Statics::NewProp_NewType = { "NewType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapEditorPlayerController_eventSetCurrentTileType_Parms, NewType), Z_Construct_UEnum_SProjectNew_ETileType, METADATA_PARAMS(0, nullptr) }; // 197667489
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapEditorPlayerController_SetCurrentTileType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapEditorPlayerController_SetCurrentTileType_Statics::NewProp_NewType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapEditorPlayerController_SetCurrentTileType_Statics::NewProp_NewType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapEditorPlayerController_SetCurrentTileType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapEditorPlayerController_SetCurrentTileType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapEditorPlayerController, nullptr, "SetCurrentTileType", Z_Construct_UFunction_AMapEditorPlayerController_SetCurrentTileType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapEditorPlayerController_SetCurrentTileType_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapEditorPlayerController_SetCurrentTileType_Statics::MapEditorPlayerController_eventSetCurrentTileType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapEditorPlayerController_SetCurrentTileType_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapEditorPlayerController_SetCurrentTileType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMapEditorPlayerController_SetCurrentTileType_Statics::MapEditorPlayerController_eventSetCurrentTileType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapEditorPlayerController_SetCurrentTileType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapEditorPlayerController_SetCurrentTileType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapEditorPlayerController::execSetCurrentTileType)
{
	P_GET_ENUM(ETileType,Z_Param_NewType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentTileType(ETileType(Z_Param_NewType));
	P_NATIVE_END;
}
// ********** End Class AMapEditorPlayerController Function SetCurrentTileType *********************

// ********** Begin Class AMapEditorPlayerController Function SetRiverDrawMode *********************
struct Z_Construct_UFunction_AMapEditorPlayerController_SetRiverDrawMode_Statics
{
	struct MapEditorPlayerController_eventSetRiverDrawMode_Parms
	{
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map Editor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UMG'den \xef\xbf\xbd""a\xef\xbf\xbdr\xef\xbf\xbdlacak: nehir \xef\xbf\xbdizme modu\n" },
#endif
		{ "ModuleRelativePath", "Public/MapEditorPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UMG'den \xef\xbf\xbd""a\xef\xbf\xbdr\xef\xbf\xbdlacak: nehir \xef\xbf\xbdizme modu" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMapEditorPlayerController_SetRiverDrawMode_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((MapEditorPlayerController_eventSetRiverDrawMode_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapEditorPlayerController_SetRiverDrawMode_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MapEditorPlayerController_eventSetRiverDrawMode_Parms), &Z_Construct_UFunction_AMapEditorPlayerController_SetRiverDrawMode_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapEditorPlayerController_SetRiverDrawMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapEditorPlayerController_SetRiverDrawMode_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapEditorPlayerController_SetRiverDrawMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapEditorPlayerController_SetRiverDrawMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapEditorPlayerController, nullptr, "SetRiverDrawMode", Z_Construct_UFunction_AMapEditorPlayerController_SetRiverDrawMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapEditorPlayerController_SetRiverDrawMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMapEditorPlayerController_SetRiverDrawMode_Statics::MapEditorPlayerController_eventSetRiverDrawMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapEditorPlayerController_SetRiverDrawMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapEditorPlayerController_SetRiverDrawMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMapEditorPlayerController_SetRiverDrawMode_Statics::MapEditorPlayerController_eventSetRiverDrawMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMapEditorPlayerController_SetRiverDrawMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapEditorPlayerController_SetRiverDrawMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapEditorPlayerController::execSetRiverDrawMode)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRiverDrawMode(Z_Param_bEnable);
	P_NATIVE_END;
}
// ********** End Class AMapEditorPlayerController Function SetRiverDrawMode ***********************

// ********** Begin Class AMapEditorPlayerController ***********************************************
void AMapEditorPlayerController::StaticRegisterNativesAMapEditorPlayerController()
{
	UClass* Class = AMapEditorPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSavedMapList", &AMapEditorPlayerController::execGetSavedMapList },
		{ "LoadMap", &AMapEditorPlayerController::execLoadMap },
		{ "SaveMapWithName", &AMapEditorPlayerController::execSaveMapWithName },
		{ "SetCurrentHeightDelta", &AMapEditorPlayerController::execSetCurrentHeightDelta },
		{ "SetCurrentTileType", &AMapEditorPlayerController::execSetCurrentTileType },
		{ "SetRiverDrawMode", &AMapEditorPlayerController::execSetRiverDrawMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMapEditorPlayerController;
UClass* AMapEditorPlayerController::GetPrivateStaticClass()
{
	using TClass = AMapEditorPlayerController;
	if (!Z_Registration_Info_UClass_AMapEditorPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MapEditorPlayerController"),
			Z_Registration_Info_UClass_AMapEditorPlayerController.InnerSingleton,
			StaticRegisterNativesAMapEditorPlayerController,
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
	return Z_Registration_Info_UClass_AMapEditorPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_AMapEditorPlayerController_NoRegister()
{
	return AMapEditorPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMapEditorPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "MapEditorPlayerController.h" },
		{ "ModuleRelativePath", "Public/MapEditorPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPaintTileType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Map Editor" },
		{ "ModuleRelativePath", "Public/MapEditorPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHeightDelta_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Map Editor" },
		{ "ModuleRelativePath", "Public/MapEditorPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRiverMode_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Map Editor" },
		{ "ModuleRelativePath", "Public/MapEditorPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentPaintTileType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentPaintTileType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentHeightDelta;
	static void NewProp_bRiverMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRiverMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMapEditorPlayerController_GetSavedMapList, "GetSavedMapList" }, // 1400496033
		{ &Z_Construct_UFunction_AMapEditorPlayerController_LoadMap, "LoadMap" }, // 350235291
		{ &Z_Construct_UFunction_AMapEditorPlayerController_SaveMapWithName, "SaveMapWithName" }, // 2399524400
		{ &Z_Construct_UFunction_AMapEditorPlayerController_SetCurrentHeightDelta, "SetCurrentHeightDelta" }, // 3903553973
		{ &Z_Construct_UFunction_AMapEditorPlayerController_SetCurrentTileType, "SetCurrentTileType" }, // 551278691
		{ &Z_Construct_UFunction_AMapEditorPlayerController_SetRiverDrawMode, "SetRiverDrawMode" }, // 2903792452
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapEditorPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMapEditorPlayerController_Statics::NewProp_CurrentPaintTileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMapEditorPlayerController_Statics::NewProp_CurrentPaintTileType = { "CurrentPaintTileType", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapEditorPlayerController, CurrentPaintTileType), Z_Construct_UEnum_SProjectNew_ETileType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPaintTileType_MetaData), NewProp_CurrentPaintTileType_MetaData) }; // 197667489
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMapEditorPlayerController_Statics::NewProp_CurrentHeightDelta = { "CurrentHeightDelta", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapEditorPlayerController, CurrentHeightDelta), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHeightDelta_MetaData), NewProp_CurrentHeightDelta_MetaData) };
void Z_Construct_UClass_AMapEditorPlayerController_Statics::NewProp_bRiverMode_SetBit(void* Obj)
{
	((AMapEditorPlayerController*)Obj)->bRiverMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMapEditorPlayerController_Statics::NewProp_bRiverMode = { "bRiverMode", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMapEditorPlayerController), &Z_Construct_UClass_AMapEditorPlayerController_Statics::NewProp_bRiverMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRiverMode_MetaData), NewProp_bRiverMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMapEditorPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapEditorPlayerController_Statics::NewProp_CurrentPaintTileType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapEditorPlayerController_Statics::NewProp_CurrentPaintTileType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapEditorPlayerController_Statics::NewProp_CurrentHeightDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapEditorPlayerController_Statics::NewProp_bRiverMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapEditorPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMapEditorPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_SProjectNew,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapEditorPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMapEditorPlayerController_Statics::ClassParams = {
	&AMapEditorPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMapEditorPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMapEditorPlayerController_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMapEditorPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMapEditorPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMapEditorPlayerController()
{
	if (!Z_Registration_Info_UClass_AMapEditorPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMapEditorPlayerController.OuterSingleton, Z_Construct_UClass_AMapEditorPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMapEditorPlayerController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMapEditorPlayerController);
AMapEditorPlayerController::~AMapEditorPlayerController() {}
// ********** End Class AMapEditorPlayerController *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_MapEditorPlayerController_h__Script_SProjectNew_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMapEditorPlayerController, AMapEditorPlayerController::StaticClass, TEXT("AMapEditorPlayerController"), &Z_Registration_Info_UClass_AMapEditorPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMapEditorPlayerController), 181364447U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_MapEditorPlayerController_h__Script_SProjectNew_1088902269(TEXT("/Script/SProjectNew"),
	Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_MapEditorPlayerController_h__Script_SProjectNew_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_MapEditorPlayerController_h__Script_SProjectNew_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
