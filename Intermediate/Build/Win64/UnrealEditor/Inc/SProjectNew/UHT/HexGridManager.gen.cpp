// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HexGridManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHexGridManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
SPROJECTNEW_API UClass* Z_Construct_UClass_AHexGridManager();
SPROJECTNEW_API UClass* Z_Construct_UClass_AHexGridManager_NoRegister();
SPROJECTNEW_API UClass* Z_Construct_UClass_AUnitBase_NoRegister();
SPROJECTNEW_API UEnum* Z_Construct_UEnum_SProjectNew_ETileType();
SPROJECTNEW_API UScriptStruct* Z_Construct_UScriptStruct_FTileData();
UPackage* Z_Construct_UPackage__Script_SProjectNew();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ETileType *****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETileType;
static UEnum* ETileType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETileType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETileType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SProjectNew_ETileType, (UObject*)Z_Construct_UPackage__Script_SProjectNew(), TEXT("ETileType"));
	}
	return Z_Registration_Info_UEnum_ETileType.OuterSingleton;
}
template<> SPROJECTNEW_API UEnum* StaticEnum<ETileType>()
{
	return ETileType_StaticEnum();
}
struct Z_Construct_UEnum_SProjectNew_ETileType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ... (FTileData ve ETileType enum'\xef\xbf\xbd ayn\xef\xbf\xbd kal\xef\xbf\xbdyor) ...\n" },
#endif
		{ "ModuleRelativePath", "HexGridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "... (FTileData ve ETileType enum'\xef\xbf\xbd ayn\xef\xbf\xbd kal\xef\xbf\xbdyor) ..." },
#endif
		{ "TT_Desert.DisplayName", "Desert" },
		{ "TT_Desert.Name", "ETileType::TT_Desert" },
		{ "TT_Grass.DisplayName", "Grass" },
		{ "TT_Grass.Name", "ETileType::TT_Grass" },
		{ "TT_Mountain.DisplayName", "Mountain" },
		{ "TT_Mountain.Name", "ETileType::TT_Mountain" },
		{ "TT_Water.DisplayName", "Water" },
		{ "TT_Water.Name", "ETileType::TT_Water" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETileType::TT_Grass", (int64)ETileType::TT_Grass },
		{ "ETileType::TT_Water", (int64)ETileType::TT_Water },
		{ "ETileType::TT_Mountain", (int64)ETileType::TT_Mountain },
		{ "ETileType::TT_Desert", (int64)ETileType::TT_Desert },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SProjectNew_ETileType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SProjectNew,
	nullptr,
	"ETileType",
	"ETileType",
	Z_Construct_UEnum_SProjectNew_ETileType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SProjectNew_ETileType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SProjectNew_ETileType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SProjectNew_ETileType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SProjectNew_ETileType()
{
	if (!Z_Registration_Info_UEnum_ETileType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETileType.InnerSingleton, Z_Construct_UEnum_SProjectNew_ETileType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETileType.InnerSingleton;
}
// ********** End Enum ETileType *******************************************************************

// ********** Begin ScriptStruct FTileData *********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTileData;
class UScriptStruct* FTileData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTileData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTileData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTileData, (UObject*)Z_Construct_UPackage__Script_SProjectNew(), TEXT("TileData"));
	}
	return Z_Registration_Info_UScriptStruct_FTileData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FTileData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "HexGridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridCoordinates_MetaData[] = {
		{ "Category", "Tile Data" },
		{ "ModuleRelativePath", "HexGridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileType_MetaData[] = {
		{ "Category", "Tile Data" },
		{ "ModuleRelativePath", "HexGridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[] = {
		{ "Category", "Tile Data" },
		{ "ModuleRelativePath", "HexGridManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridCoordinates;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TileType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TileType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTileData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTileData_Statics::NewProp_GridCoordinates = { "GridCoordinates", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTileData, GridCoordinates), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridCoordinates_MetaData), NewProp_GridCoordinates_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTileData_Statics::NewProp_TileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTileData_Statics::NewProp_TileType = { "TileType", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTileData, TileType), Z_Construct_UEnum_SProjectNew_ETileType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileType_MetaData), NewProp_TileType_MetaData) }; // 1610785135
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTileData_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTileData, WorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPosition_MetaData), NewProp_WorldPosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTileData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileData_Statics::NewProp_GridCoordinates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileData_Statics::NewProp_TileType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileData_Statics::NewProp_TileType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileData_Statics::NewProp_WorldPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTileData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SProjectNew,
	nullptr,
	&NewStructOps,
	"TileData",
	Z_Construct_UScriptStruct_FTileData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileData_Statics::PropPointers),
	sizeof(FTileData),
	alignof(FTileData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTileData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTileData()
{
	if (!Z_Registration_Info_UScriptStruct_FTileData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTileData.InnerSingleton, Z_Construct_UScriptStruct_FTileData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FTileData.InnerSingleton;
}
// ********** End ScriptStruct FTileData ***********************************************************

// ********** Begin Class AHexGridManager Function GetTileData *************************************
struct Z_Construct_UFunction_AHexGridManager_GetTileData_Statics
{
	struct HexGridManager_eventGetTileData_Parms
	{
		FIntPoint GridCoord;
		FTileData OutData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * YEN\xef\xbf\xbd: Verilen \xef\xbf\xbdzgara koordinat\xef\xbf\xbdndaki karo verisini (FTileData) d\xef\xbf\xbdnd\xef\xbf\xbdr\xef\xbf\xbdr.\n\x09 * @param GridCoord Bilgisi istenen koordinat.\n\x09 * @param OutData (\xef\xbf\xbd\xef\xbf\xbdkt\xef\xbf\xbd) Bulunan karo verisi.\n\x09 * @return Karo bulunursa true, bulunamazsa false.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "HexGridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "YEN\xef\xbf\xbd: Verilen \xef\xbf\xbdzgara koordinat\xef\xbf\xbdndaki karo verisini (FTileData) d\xef\xbf\xbdnd\xef\xbf\xbdr\xef\xbf\xbdr.\n@param GridCoord Bilgisi istenen koordinat.\n@param OutData (\xef\xbf\xbd\xef\xbf\xbdkt\xef\xbf\xbd) Bulunan karo verisi.\n@return Karo bulunursa true, bulunamazsa false." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutData_MetaData[] = {
		{ "DisplayName", "Tile Data" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridCoord;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHexGridManager_GetTileData_Statics::NewProp_GridCoord = { "GridCoord", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HexGridManager_eventGetTileData_Parms, GridCoord), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHexGridManager_GetTileData_Statics::NewProp_OutData = { "OutData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HexGridManager_eventGetTileData_Parms, OutData), Z_Construct_UScriptStruct_FTileData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutData_MetaData), NewProp_OutData_MetaData) }; // 2244857513
void Z_Construct_UFunction_AHexGridManager_GetTileData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HexGridManager_eventGetTileData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHexGridManager_GetTileData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HexGridManager_eventGetTileData_Parms), &Z_Construct_UFunction_AHexGridManager_GetTileData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHexGridManager_GetTileData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHexGridManager_GetTileData_Statics::NewProp_GridCoord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHexGridManager_GetTileData_Statics::NewProp_OutData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHexGridManager_GetTileData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHexGridManager_GetTileData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHexGridManager_GetTileData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHexGridManager, nullptr, "GetTileData", Z_Construct_UFunction_AHexGridManager_GetTileData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHexGridManager_GetTileData_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHexGridManager_GetTileData_Statics::HexGridManager_eventGetTileData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHexGridManager_GetTileData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHexGridManager_GetTileData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHexGridManager_GetTileData_Statics::HexGridManager_eventGetTileData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHexGridManager_GetTileData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHexGridManager_GetTileData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHexGridManager::execGetTileData)
{
	P_GET_STRUCT(FIntPoint,Z_Param_GridCoord);
	P_GET_STRUCT_REF(FTileData,Z_Param_Out_OutData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetTileData(Z_Param_GridCoord,Z_Param_Out_OutData);
	P_NATIVE_END;
}
// ********** End Class AHexGridManager Function GetTileData ***************************************

// ********** Begin Class AHexGridManager Function GetUnitAt ***************************************
struct Z_Construct_UFunction_AHexGridManager_GetUnitAt_Statics
{
	struct HexGridManager_eventGetUnitAt_Parms
	{
		FIntPoint GridCoord;
		AUnitBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Data" },
		{ "ModuleRelativePath", "HexGridManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridCoord;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHexGridManager_GetUnitAt_Statics::NewProp_GridCoord = { "GridCoord", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HexGridManager_eventGetUnitAt_Parms, GridCoord), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHexGridManager_GetUnitAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HexGridManager_eventGetUnitAt_Parms, ReturnValue), Z_Construct_UClass_AUnitBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHexGridManager_GetUnitAt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHexGridManager_GetUnitAt_Statics::NewProp_GridCoord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHexGridManager_GetUnitAt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHexGridManager_GetUnitAt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHexGridManager_GetUnitAt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHexGridManager, nullptr, "GetUnitAt", Z_Construct_UFunction_AHexGridManager_GetUnitAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHexGridManager_GetUnitAt_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHexGridManager_GetUnitAt_Statics::HexGridManager_eventGetUnitAt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHexGridManager_GetUnitAt_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHexGridManager_GetUnitAt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHexGridManager_GetUnitAt_Statics::HexGridManager_eventGetUnitAt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHexGridManager_GetUnitAt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHexGridManager_GetUnitAt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHexGridManager::execGetUnitAt)
{
	P_GET_STRUCT(FIntPoint,Z_Param_GridCoord);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AUnitBase**)Z_Param__Result=P_THIS->GetUnitAt(Z_Param_GridCoord);
	P_NATIVE_END;
}
// ********** End Class AHexGridManager Function GetUnitAt *****************************************

// ********** Begin Class AHexGridManager Function GridToWorld *************************************
struct Z_Construct_UFunction_AHexGridManager_GridToWorld_Statics
{
	struct HexGridManager_eventGridToWorld_Parms
	{
		FIntPoint GridCoord;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid|Conversion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-------------------------------------------------\n// Fonksiyonlar\n//-------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "HexGridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fonksiyonlar" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridCoord;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHexGridManager_GridToWorld_Statics::NewProp_GridCoord = { "GridCoord", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HexGridManager_eventGridToWorld_Parms, GridCoord), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHexGridManager_GridToWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HexGridManager_eventGridToWorld_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHexGridManager_GridToWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHexGridManager_GridToWorld_Statics::NewProp_GridCoord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHexGridManager_GridToWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHexGridManager_GridToWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHexGridManager_GridToWorld_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHexGridManager, nullptr, "GridToWorld", Z_Construct_UFunction_AHexGridManager_GridToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHexGridManager_GridToWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHexGridManager_GridToWorld_Statics::HexGridManager_eventGridToWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHexGridManager_GridToWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHexGridManager_GridToWorld_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHexGridManager_GridToWorld_Statics::HexGridManager_eventGridToWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHexGridManager_GridToWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHexGridManager_GridToWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHexGridManager::execGridToWorld)
{
	P_GET_STRUCT(FIntPoint,Z_Param_GridCoord);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GridToWorld(Z_Param_GridCoord);
	P_NATIVE_END;
}
// ********** End Class AHexGridManager Function GridToWorld ***************************************

// ********** Begin Class AHexGridManager Function MoveUnit ****************************************
struct Z_Construct_UFunction_AHexGridManager_MoveUnit_Statics
{
	struct HexGridManager_eventMoveUnit_Parms
	{
		AUnitBase* UnitToMove;
		FIntPoint TargetCoord;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid|Units" },
		{ "ModuleRelativePath", "HexGridManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnitToMove;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetCoord;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHexGridManager_MoveUnit_Statics::NewProp_UnitToMove = { "UnitToMove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HexGridManager_eventMoveUnit_Parms, UnitToMove), Z_Construct_UClass_AUnitBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHexGridManager_MoveUnit_Statics::NewProp_TargetCoord = { "TargetCoord", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HexGridManager_eventMoveUnit_Parms, TargetCoord), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AHexGridManager_MoveUnit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HexGridManager_eventMoveUnit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHexGridManager_MoveUnit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HexGridManager_eventMoveUnit_Parms), &Z_Construct_UFunction_AHexGridManager_MoveUnit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHexGridManager_MoveUnit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHexGridManager_MoveUnit_Statics::NewProp_UnitToMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHexGridManager_MoveUnit_Statics::NewProp_TargetCoord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHexGridManager_MoveUnit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHexGridManager_MoveUnit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHexGridManager_MoveUnit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHexGridManager, nullptr, "MoveUnit", Z_Construct_UFunction_AHexGridManager_MoveUnit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHexGridManager_MoveUnit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHexGridManager_MoveUnit_Statics::HexGridManager_eventMoveUnit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHexGridManager_MoveUnit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHexGridManager_MoveUnit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHexGridManager_MoveUnit_Statics::HexGridManager_eventMoveUnit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHexGridManager_MoveUnit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHexGridManager_MoveUnit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHexGridManager::execMoveUnit)
{
	P_GET_OBJECT(AUnitBase,Z_Param_UnitToMove);
	P_GET_STRUCT(FIntPoint,Z_Param_TargetCoord);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->MoveUnit(Z_Param_UnitToMove,Z_Param_TargetCoord);
	P_NATIVE_END;
}
// ********** End Class AHexGridManager Function MoveUnit ******************************************

// ********** Begin Class AHexGridManager Function SpawnUnit ***************************************
struct Z_Construct_UFunction_AHexGridManager_SpawnUnit_Statics
{
	struct HexGridManager_eventSpawnUnit_Parms
	{
		FIntPoint GridCoord;
		TSubclassOf<AUnitBase> UnitClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid|Units" },
		{ "ModuleRelativePath", "HexGridManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridCoord;
	static const UECodeGen_Private::FClassPropertyParams NewProp_UnitClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHexGridManager_SpawnUnit_Statics::NewProp_GridCoord = { "GridCoord", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HexGridManager_eventSpawnUnit_Parms, GridCoord), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AHexGridManager_SpawnUnit_Statics::NewProp_UnitClass = { "UnitClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HexGridManager_eventSpawnUnit_Parms, UnitClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AUnitBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHexGridManager_SpawnUnit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHexGridManager_SpawnUnit_Statics::NewProp_GridCoord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHexGridManager_SpawnUnit_Statics::NewProp_UnitClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHexGridManager_SpawnUnit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHexGridManager_SpawnUnit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHexGridManager, nullptr, "SpawnUnit", Z_Construct_UFunction_AHexGridManager_SpawnUnit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHexGridManager_SpawnUnit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHexGridManager_SpawnUnit_Statics::HexGridManager_eventSpawnUnit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHexGridManager_SpawnUnit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHexGridManager_SpawnUnit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHexGridManager_SpawnUnit_Statics::HexGridManager_eventSpawnUnit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHexGridManager_SpawnUnit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHexGridManager_SpawnUnit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHexGridManager::execSpawnUnit)
{
	P_GET_STRUCT(FIntPoint,Z_Param_GridCoord);
	P_GET_OBJECT(UClass,Z_Param_UnitClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnUnit(Z_Param_GridCoord,Z_Param_UnitClass);
	P_NATIVE_END;
}
// ********** End Class AHexGridManager Function SpawnUnit *****************************************

// ********** Begin Class AHexGridManager Function UpdateHighlighter *******************************
struct Z_Construct_UFunction_AHexGridManager_UpdateHighlighter_Statics
{
	struct HexGridManager_eventUpdateHighlighter_Parms
	{
		FIntPoint GridCoord;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "HexGridManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridCoord;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHexGridManager_UpdateHighlighter_Statics::NewProp_GridCoord = { "GridCoord", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HexGridManager_eventUpdateHighlighter_Parms, GridCoord), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHexGridManager_UpdateHighlighter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHexGridManager_UpdateHighlighter_Statics::NewProp_GridCoord,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHexGridManager_UpdateHighlighter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHexGridManager_UpdateHighlighter_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHexGridManager, nullptr, "UpdateHighlighter", Z_Construct_UFunction_AHexGridManager_UpdateHighlighter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHexGridManager_UpdateHighlighter_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHexGridManager_UpdateHighlighter_Statics::HexGridManager_eventUpdateHighlighter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHexGridManager_UpdateHighlighter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHexGridManager_UpdateHighlighter_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHexGridManager_UpdateHighlighter_Statics::HexGridManager_eventUpdateHighlighter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHexGridManager_UpdateHighlighter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHexGridManager_UpdateHighlighter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHexGridManager::execUpdateHighlighter)
{
	P_GET_STRUCT(FIntPoint,Z_Param_GridCoord);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateHighlighter(Z_Param_GridCoord);
	P_NATIVE_END;
}
// ********** End Class AHexGridManager Function UpdateHighlighter *********************************

// ********** Begin Class AHexGridManager Function WorldToGrid *************************************
struct Z_Construct_UFunction_AHexGridManager_WorldToGrid_Statics
{
	struct HexGridManager_eventWorldToGrid_Parms
	{
		FVector WorldCoord;
		FIntPoint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid|Conversion" },
		{ "ModuleRelativePath", "HexGridManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldCoord;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHexGridManager_WorldToGrid_Statics::NewProp_WorldCoord = { "WorldCoord", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HexGridManager_eventWorldToGrid_Parms, WorldCoord), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHexGridManager_WorldToGrid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HexGridManager_eventWorldToGrid_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHexGridManager_WorldToGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHexGridManager_WorldToGrid_Statics::NewProp_WorldCoord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHexGridManager_WorldToGrid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHexGridManager_WorldToGrid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHexGridManager_WorldToGrid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHexGridManager, nullptr, "WorldToGrid", Z_Construct_UFunction_AHexGridManager_WorldToGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHexGridManager_WorldToGrid_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHexGridManager_WorldToGrid_Statics::HexGridManager_eventWorldToGrid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHexGridManager_WorldToGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHexGridManager_WorldToGrid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHexGridManager_WorldToGrid_Statics::HexGridManager_eventWorldToGrid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHexGridManager_WorldToGrid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHexGridManager_WorldToGrid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHexGridManager::execWorldToGrid)
{
	P_GET_STRUCT(FVector,Z_Param_WorldCoord);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntPoint*)Z_Param__Result=P_THIS->WorldToGrid(Z_Param_WorldCoord);
	P_NATIVE_END;
}
// ********** End Class AHexGridManager Function WorldToGrid ***************************************

// ********** Begin Class AHexGridManager **********************************************************
void AHexGridManager::StaticRegisterNativesAHexGridManager()
{
	UClass* Class = AHexGridManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTileData", &AHexGridManager::execGetTileData },
		{ "GetUnitAt", &AHexGridManager::execGetUnitAt },
		{ "GridToWorld", &AHexGridManager::execGridToWorld },
		{ "MoveUnit", &AHexGridManager::execMoveUnit },
		{ "SpawnUnit", &AHexGridManager::execSpawnUnit },
		{ "UpdateHighlighter", &AHexGridManager::execUpdateHighlighter },
		{ "WorldToGrid", &AHexGridManager::execWorldToGrid },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AHexGridManager;
UClass* AHexGridManager::GetPrivateStaticClass()
{
	using TClass = AHexGridManager;
	if (!Z_Registration_Info_UClass_AHexGridManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HexGridManager"),
			Z_Registration_Info_UClass_AHexGridManager.InnerSingleton,
			StaticRegisterNativesAHexGridManager,
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
	return Z_Registration_Info_UClass_AHexGridManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AHexGridManager_NoRegister()
{
	return AHexGridManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHexGridManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ... (FTileData ve ETileType enum'\xef\xbf\xbd ayn\xef\xbf\xbd kal\xef\xbf\xbdyor) ...\n" },
#endif
		{ "IncludePath", "HexGridManager.h" },
		{ "ModuleRelativePath", "HexGridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "... (FTileData ve ETileType enum'\xef\xbf\xbd ayn\xef\xbf\xbd kal\xef\xbf\xbdyor) ..." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridWidth_MetaData[] = {
		{ "Category", "Grid Settings" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-------------------------------------------------\n// Harita Ayarlar\xef\xbf\xbd\n//-------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "HexGridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Harita Ayarlar\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridHeight_MetaData[] = {
		{ "Category", "Grid Settings" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "HexGridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[] = {
		{ "Category", "Grid Settings" },
		{ "ClampMin", "10.0" },
		{ "ModuleRelativePath", "HexGridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileMeshes_MetaData[] = {
		{ "Category", "Grid Settings|Visuals" },
		{ "ModuleRelativePath", "HexGridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighlighterMesh_MetaData[] = {
		{ "Category", "Grid Settings|Visuals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** * YEN\xef\xbf\xbd: Se\xef\xbf\xbdili karoyu vurgulamak i\xef\xbf\xbdin kullan\xef\xbf\xbdlacak mesh.\n\x09 * Bunu Blueprint'te (BP_HexGridManager) atayaca\xef\xbf\xbd\xef\xbf\xbdz.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "HexGridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "YEN\xef\xbf\xbd: Se\xef\xbf\xbdili karoyu vurgulamak i\xef\xbf\xbdin kullan\xef\xbf\xbdlacak mesh.\nBunu Blueprint'te (BP_HexGridManager) atayaca\xef\xbf\xbd\xef\xbf\xbdz." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTestUnitClass_MetaData[] = {
		{ "Category", "Grid Settings|Units" },
		{ "ModuleRelativePath", "HexGridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridData_MetaData[] = {
		{ "Category", "Grid Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-------------------------------------------------\n// Harita Veri Deposu ve Bile\xef\xbf\xbd""enler\n//-------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "HexGridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Harita Veri Deposu ve Bile\xef\xbf\xbd""enler" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnitData_MetaData[] = {
		{ "Category", "Grid Data" },
		{ "ModuleRelativePath", "HexGridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileISMs_MetaData[] = {
		{ "Category", "Grid Visuals" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HexGridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionHighlighter_MetaData[] = {
		{ "Category", "Grid Visuals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * YEN\xef\xbf\xbd: Se\xef\xbf\xbdili karoyu g\xef\xbf\xbdsteren tekil mesh bile\xef\xbf\xbd""eni.\n\x09 * ISM kullanm\xef\xbf\xbdyoruz \xef\xbf\xbd\xef\xbf\xbdnk\xef\xbf\xbd ayn\xef\xbf\xbd anda sadece 1 tane olacak.\n\x09 */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HexGridManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "YEN\xef\xbf\xbd: Se\xef\xbf\xbdili karoyu g\xef\xbf\xbdsteren tekil mesh bile\xef\xbf\xbd""eni.\nISM kullanm\xef\xbf\xbdyoruz \xef\xbf\xbd\xef\xbf\xbdnk\xef\xbf\xbd ayn\xef\xbf\xbd anda sadece 1 tane olacak." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TileSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TileMeshes_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TileMeshes_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TileMeshes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TileMeshes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HighlighterMesh;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultTestUnitClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridData_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_GridData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnitData_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UnitData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_UnitData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TileISMs_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TileISMs_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TileISMs_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TileISMs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectionHighlighter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AHexGridManager_GetTileData, "GetTileData" }, // 1240079888
		{ &Z_Construct_UFunction_AHexGridManager_GetUnitAt, "GetUnitAt" }, // 3886802833
		{ &Z_Construct_UFunction_AHexGridManager_GridToWorld, "GridToWorld" }, // 1603956484
		{ &Z_Construct_UFunction_AHexGridManager_MoveUnit, "MoveUnit" }, // 894691175
		{ &Z_Construct_UFunction_AHexGridManager_SpawnUnit, "SpawnUnit" }, // 4160804028
		{ &Z_Construct_UFunction_AHexGridManager_UpdateHighlighter, "UpdateHighlighter" }, // 3590634181
		{ &Z_Construct_UFunction_AHexGridManager_WorldToGrid, "WorldToGrid" }, // 286051175
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHexGridManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHexGridManager_Statics::NewProp_GridWidth = { "GridWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHexGridManager, GridWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridWidth_MetaData), NewProp_GridWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHexGridManager_Statics::NewProp_GridHeight = { "GridHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHexGridManager, GridHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridHeight_MetaData), NewProp_GridHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHexGridManager_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHexGridManager, TileSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileSize_MetaData), NewProp_TileSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHexGridManager_Statics::NewProp_TileMeshes_ValueProp = { "TileMeshes", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHexGridManager_Statics::NewProp_TileMeshes_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AHexGridManager_Statics::NewProp_TileMeshes_Key_KeyProp = { "TileMeshes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SProjectNew_ETileType, METADATA_PARAMS(0, nullptr) }; // 1610785135
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AHexGridManager_Statics::NewProp_TileMeshes = { "TileMeshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHexGridManager, TileMeshes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileMeshes_MetaData), NewProp_TileMeshes_MetaData) }; // 1610785135
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHexGridManager_Statics::NewProp_HighlighterMesh = { "HighlighterMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHexGridManager, HighlighterMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlighterMesh_MetaData), NewProp_HighlighterMesh_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHexGridManager_Statics::NewProp_DefaultTestUnitClass = { "DefaultTestUnitClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHexGridManager, DefaultTestUnitClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AUnitBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultTestUnitClass_MetaData), NewProp_DefaultTestUnitClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHexGridManager_Statics::NewProp_GridData_ValueProp = { "GridData", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTileData, METADATA_PARAMS(0, nullptr) }; // 2244857513
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHexGridManager_Statics::NewProp_GridData_Key_KeyProp = { "GridData_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AHexGridManager_Statics::NewProp_GridData = { "GridData", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHexGridManager, GridData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridData_MetaData), NewProp_GridData_MetaData) }; // 2244857513
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHexGridManager_Statics::NewProp_UnitData_ValueProp = { "UnitData", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AUnitBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHexGridManager_Statics::NewProp_UnitData_Key_KeyProp = { "UnitData_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AHexGridManager_Statics::NewProp_UnitData = { "UnitData", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHexGridManager, UnitData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnitData_MetaData), NewProp_UnitData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHexGridManager_Statics::NewProp_TileISMs_ValueProp = { "TileISMs", nullptr, (EPropertyFlags)0x00000000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHexGridManager_Statics::NewProp_TileISMs_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AHexGridManager_Statics::NewProp_TileISMs_Key_KeyProp = { "TileISMs_Key", nullptr, (EPropertyFlags)0x00000000000a0009, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SProjectNew_ETileType, METADATA_PARAMS(0, nullptr) }; // 1610785135
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AHexGridManager_Statics::NewProp_TileISMs = { "TileISMs", nullptr, (EPropertyFlags)0x0010008000020009, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHexGridManager, TileISMs), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileISMs_MetaData), NewProp_TileISMs_MetaData) }; // 1610785135
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHexGridManager_Statics::NewProp_SelectionHighlighter = { "SelectionHighlighter", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHexGridManager, SelectionHighlighter), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionHighlighter_MetaData), NewProp_SelectionHighlighter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHexGridManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridManager_Statics::NewProp_GridWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridManager_Statics::NewProp_GridHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridManager_Statics::NewProp_TileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridManager_Statics::NewProp_TileMeshes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridManager_Statics::NewProp_TileMeshes_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridManager_Statics::NewProp_TileMeshes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridManager_Statics::NewProp_TileMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridManager_Statics::NewProp_HighlighterMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridManager_Statics::NewProp_DefaultTestUnitClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridManager_Statics::NewProp_GridData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridManager_Statics::NewProp_GridData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridManager_Statics::NewProp_GridData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridManager_Statics::NewProp_UnitData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridManager_Statics::NewProp_UnitData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridManager_Statics::NewProp_UnitData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridManager_Statics::NewProp_TileISMs_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridManager_Statics::NewProp_TileISMs_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridManager_Statics::NewProp_TileISMs_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridManager_Statics::NewProp_TileISMs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridManager_Statics::NewProp_SelectionHighlighter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHexGridManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHexGridManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SProjectNew,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHexGridManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHexGridManager_Statics::ClassParams = {
	&AHexGridManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AHexGridManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AHexGridManager_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHexGridManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AHexGridManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHexGridManager()
{
	if (!Z_Registration_Info_UClass_AHexGridManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHexGridManager.OuterSingleton, Z_Construct_UClass_AHexGridManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHexGridManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHexGridManager);
AHexGridManager::~AHexGridManager() {}
// ********** End Class AHexGridManager ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_HexGridManager_h__Script_SProjectNew_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETileType_StaticEnum, TEXT("ETileType"), &Z_Registration_Info_UEnum_ETileType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1610785135U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTileData::StaticStruct, Z_Construct_UScriptStruct_FTileData_Statics::NewStructOps, TEXT("TileData"), &Z_Registration_Info_UScriptStruct_FTileData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTileData), 2244857513U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHexGridManager, AHexGridManager::StaticClass, TEXT("AHexGridManager"), &Z_Registration_Info_UClass_AHexGridManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHexGridManager), 860441775U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_HexGridManager_h__Script_SProjectNew_2516338824(TEXT("/Script/SProjectNew"),
	Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_HexGridManager_h__Script_SProjectNew_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_HexGridManager_h__Script_SProjectNew_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_HexGridManager_h__Script_SProjectNew_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_HexGridManager_h__Script_SProjectNew_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_HexGridManager_h__Script_SProjectNew_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_HexGridManager_h__Script_SProjectNew_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
