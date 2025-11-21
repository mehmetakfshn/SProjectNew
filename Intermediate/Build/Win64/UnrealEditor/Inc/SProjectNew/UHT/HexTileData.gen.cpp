// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HexTileData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHexTileData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
SPROJECTNEW_API UEnum* Z_Construct_UEnum_SProjectNew_ETileType();
SPROJECTNEW_API UScriptStruct* Z_Construct_UScriptStruct_FHexTileData();
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
		{ "ModuleRelativePath", "Public/HexTileData.h" },
		{ "TT_Desert.DisplayName", "Desert" },
		{ "TT_Desert.Name", "ETileType::TT_Desert" },
		{ "TT_Grass.DisplayName", "Grass" },
		{ "TT_Grass.Name", "ETileType::TT_Grass" },
		{ "TT_Mountain.DisplayName", "Mountain" },
		{ "TT_Mountain.Name", "ETileType::TT_Mountain" },
		{ "TT_Plains.DisplayName", "Plains" },
		{ "TT_Plains.Name", "ETileType::TT_Plains" },
		{ "TT_Snow.DisplayName", "Snow" },
		{ "TT_Snow.Name", "ETileType::TT_Snow" },
		{ "TT_Tundra.DisplayName", "Tundra" },
		{ "TT_Tundra.Name", "ETileType::TT_Tundra" },
		{ "TT_Water.DisplayName", "Water" },
		{ "TT_Water.Name", "ETileType::TT_Water" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETileType::TT_Grass", (int64)ETileType::TT_Grass },
		{ "ETileType::TT_Desert", (int64)ETileType::TT_Desert },
		{ "ETileType::TT_Plains", (int64)ETileType::TT_Plains },
		{ "ETileType::TT_Tundra", (int64)ETileType::TT_Tundra },
		{ "ETileType::TT_Snow", (int64)ETileType::TT_Snow },
		{ "ETileType::TT_Mountain", (int64)ETileType::TT_Mountain },
		{ "ETileType::TT_Water", (int64)ETileType::TT_Water },
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

// ********** Begin ScriptStruct FHexTileData ******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FHexTileData;
class UScriptStruct* FHexTileData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FHexTileData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FHexTileData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHexTileData, (UObject*)Z_Construct_UPackage__Script_SProjectNew(), TEXT("HexTileData"));
	}
	return Z_Registration_Info_UScriptStruct_FHexTileData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FHexTileData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HexTileData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Coordinates_MetaData[] = {
		{ "Category", "HexTileData" },
		{ "ModuleRelativePath", "Public/HexTileData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileType_MetaData[] = {
		{ "Category", "HexTileData" },
		{ "ModuleRelativePath", "Public/HexTileData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height01_MetaData[] = {
		{ "Category", "HexTileData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Heightmapten gelen normalize y\xef\xbf\xbdkseklik [0..1]\n" },
#endif
		{ "ModuleRelativePath", "Public/HexTileData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Heightmapten gelen normalize y\xef\xbf\xbdkseklik [0..1]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightLevel_MetaData[] = {
		{ "Category", "HexTileData" },
		{ "ModuleRelativePath", "Public/HexTileData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[] = {
		{ "Category", "HexTileData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// world pos plus Z offset bu structta dursun\n" },
#endif
		{ "ModuleRelativePath", "Public/HexTileData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "world pos plus Z offset bu structta dursun" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cost_MetaData[] = {
		{ "Category", "HexTileData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Pathfinding cost vs.\n" },
#endif
		{ "ModuleRelativePath", "Public/HexTileData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pathfinding cost vs." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCoast_MetaData[] = {
		{ "Category", "HexTileData" },
		{ "ModuleRelativePath", "Public/HexTileData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLake_MetaData[] = {
		{ "Category", "HexTileData" },
		{ "ModuleRelativePath", "Public/HexTileData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsOcean_MetaData[] = {
		{ "Category", "HexTileData" },
		{ "ModuleRelativePath", "Public/HexTileData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsHill_MetaData[] = {
		{ "Category", "HexTileData" },
		{ "ModuleRelativePath", "Public/HexTileData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasCliff_MetaData[] = {
		{ "Category", "HexTileData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Bu tilenin cliff olup olmad\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/HexTileData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bu tilenin cliff olup olmad\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CliffEdges_MetaData[] = {
		{ "Category", "HexTileData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Hangi kenarlarda cliff var? 6 uzunluklu bool dizi\n" },
#endif
		{ "ModuleRelativePath", "Public/HexTileData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hangi kenarlarda cliff var? 6 uzunluklu bool dizi" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RiverEdges_MetaData[] = {
		{ "ModuleRelativePath", "Public/HexTileData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoastEdges_MetaData[] = {
		{ "Category", "HexTileData" },
		{ "ModuleRelativePath", "Public/HexTileData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BiomeColor_MetaData[] = {
		{ "Category", "HexTileData" },
		{ "ModuleRelativePath", "Public/HexTileData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCivIndex_MetaData[] = {
		{ "Category", "HexTileData" },
		{ "ModuleRelativePath", "Public/HexTileData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasCity_MetaData[] = {
		{ "Category", "HexTileData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -1 = bo\xef\xbf\xbd, 0+ = civ index\n" },
#endif
		{ "ModuleRelativePath", "Public/HexTileData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-1 = bo\xef\xbf\xbd, 0+ = civ index" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CityName_MetaData[] = {
		{ "Category", "HexTileData" },
		{ "ModuleRelativePath", "Public/HexTileData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinates;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TileType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TileType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height01;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HeightLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Cost;
	static void NewProp_bIsCoast_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCoast;
	static void NewProp_bIsLake_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLake;
	static void NewProp_bIsOcean_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOcean;
	static void NewProp_bIsHill_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHill;
	static void NewProp_bHasCliff_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasCliff;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CliffEdges_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CliffEdges;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RiverEdges_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RiverEdges;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CoastEdges_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CoastEdges;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BiomeColor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OwnerCivIndex;
	static void NewProp_bHasCity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasCity;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CityName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHexTileData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_Coordinates = { "Coordinates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHexTileData, Coordinates), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Coordinates_MetaData), NewProp_Coordinates_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_TileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_TileType = { "TileType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHexTileData, TileType), Z_Construct_UEnum_SProjectNew_ETileType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileType_MetaData), NewProp_TileType_MetaData) }; // 197667489
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_Height01 = { "Height01", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHexTileData, Height01), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height01_MetaData), NewProp_Height01_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_HeightLevel = { "HeightLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHexTileData, HeightLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightLevel_MetaData), NewProp_HeightLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHexTileData, WorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPosition_MetaData), NewProp_WorldPosition_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_Cost = { "Cost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHexTileData, Cost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cost_MetaData), NewProp_Cost_MetaData) };
void Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_bIsCoast_SetBit(void* Obj)
{
	((FHexTileData*)Obj)->bIsCoast = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_bIsCoast = { "bIsCoast", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHexTileData), &Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_bIsCoast_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCoast_MetaData), NewProp_bIsCoast_MetaData) };
void Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_bIsLake_SetBit(void* Obj)
{
	((FHexTileData*)Obj)->bIsLake = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_bIsLake = { "bIsLake", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHexTileData), &Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_bIsLake_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLake_MetaData), NewProp_bIsLake_MetaData) };
void Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_bIsOcean_SetBit(void* Obj)
{
	((FHexTileData*)Obj)->bIsOcean = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_bIsOcean = { "bIsOcean", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHexTileData), &Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_bIsOcean_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsOcean_MetaData), NewProp_bIsOcean_MetaData) };
void Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_bIsHill_SetBit(void* Obj)
{
	((FHexTileData*)Obj)->bIsHill = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_bIsHill = { "bIsHill", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHexTileData), &Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_bIsHill_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsHill_MetaData), NewProp_bIsHill_MetaData) };
void Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_bHasCliff_SetBit(void* Obj)
{
	((FHexTileData*)Obj)->bHasCliff = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_bHasCliff = { "bHasCliff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHexTileData), &Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_bHasCliff_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasCliff_MetaData), NewProp_bHasCliff_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_CliffEdges_Inner = { "CliffEdges", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_CliffEdges = { "CliffEdges", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHexTileData, CliffEdges), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CliffEdges_MetaData), NewProp_CliffEdges_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_RiverEdges_Inner = { "RiverEdges", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_RiverEdges = { "RiverEdges", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHexTileData, RiverEdges), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RiverEdges_MetaData), NewProp_RiverEdges_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_CoastEdges_Inner = { "CoastEdges", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_CoastEdges = { "CoastEdges", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHexTileData, CoastEdges), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoastEdges_MetaData), NewProp_CoastEdges_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_BiomeColor = { "BiomeColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHexTileData, BiomeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BiomeColor_MetaData), NewProp_BiomeColor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_OwnerCivIndex = { "OwnerCivIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHexTileData, OwnerCivIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerCivIndex_MetaData), NewProp_OwnerCivIndex_MetaData) };
void Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_bHasCity_SetBit(void* Obj)
{
	((FHexTileData*)Obj)->bHasCity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_bHasCity = { "bHasCity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FHexTileData), &Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_bHasCity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasCity_MetaData), NewProp_bHasCity_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_CityName = { "CityName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHexTileData, CityName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CityName_MetaData), NewProp_CityName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHexTileData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_Coordinates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_TileType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_TileType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_Height01,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_HeightLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_WorldPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_Cost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_bIsCoast,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_bIsLake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_bIsOcean,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_bIsHill,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_bHasCliff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_CliffEdges_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_CliffEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_RiverEdges_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_RiverEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_CoastEdges_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_CoastEdges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_BiomeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_OwnerCivIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_bHasCity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHexTileData_Statics::NewProp_CityName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHexTileData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHexTileData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SProjectNew,
	nullptr,
	&NewStructOps,
	"HexTileData",
	Z_Construct_UScriptStruct_FHexTileData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHexTileData_Statics::PropPointers),
	sizeof(FHexTileData),
	alignof(FHexTileData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHexTileData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHexTileData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHexTileData()
{
	if (!Z_Registration_Info_UScriptStruct_FHexTileData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FHexTileData.InnerSingleton, Z_Construct_UScriptStruct_FHexTileData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FHexTileData.InnerSingleton;
}
// ********** End ScriptStruct FHexTileData ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_HexTileData_h__Script_SProjectNew_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETileType_StaticEnum, TEXT("ETileType"), &Z_Registration_Info_UEnum_ETileType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 197667489U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHexTileData::StaticStruct, Z_Construct_UScriptStruct_FHexTileData_Statics::NewStructOps, TEXT("HexTileData"), &Z_Registration_Info_UScriptStruct_FHexTileData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHexTileData), 3529019657U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_HexTileData_h__Script_SProjectNew_1563889623(TEXT("/Script/SProjectNew"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_HexTileData_h__Script_SProjectNew_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_HexTileData_h__Script_SProjectNew_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_HexTileData_h__Script_SProjectNew_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_HexTileData_h__Script_SProjectNew_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
