// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnitData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUnitData() {}

// ********** Begin Cross Module References ********************************************************
SPROJECTNEW_API UScriptStruct* Z_Construct_UScriptStruct_FUnitData();
UPackage* Z_Construct_UPackage__Script_SProjectNew();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FUnitData *********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FUnitData;
class UScriptStruct* FUnitData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FUnitData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FUnitData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUnitData, (UObject*)Z_Construct_UPackage__Script_SProjectNew(), TEXT("UnitData"));
	}
	return Z_Registration_Info_UScriptStruct_FUnitData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FUnitData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UnitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "UnitData" },
		{ "ModuleRelativePath", "Public/UnitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "UnitData" },
		{ "ModuleRelativePath", "Public/UnitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "UnitData" },
		{ "ModuleRelativePath", "Public/UnitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatStrength_MetaData[] = {
		{ "Category", "UnitData" },
		{ "ModuleRelativePath", "Public/UnitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangedStrength_MetaData[] = {
		{ "Category", "UnitData" },
		{ "ModuleRelativePath", "Public/UnitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Movement_MetaData[] = {
		{ "Category", "UnitData" },
		{ "ModuleRelativePath", "Public/UnitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cost_MetaData[] = {
		{ "Category", "UnitData" },
		{ "ModuleRelativePath", "Public/UnitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredTech_MetaData[] = {
		{ "Category", "UnitData" },
		{ "ModuleRelativePath", "Public/UnitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredResource_MetaData[] = {
		{ "Category", "UnitData" },
		{ "ModuleRelativePath", "Public/UnitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshPath_MetaData[] = {
		{ "Category", "UnitData" },
		{ "ModuleRelativePath", "Public/UnitData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconPath_MetaData[] = {
		{ "Category", "UnitData" },
		{ "ModuleRelativePath", "Public/UnitData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CombatStrength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RangedStrength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Movement;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Cost;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RequiredTech;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RequiredResource;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MeshPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IconPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUnitData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUnitData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUnitData, Type), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUnitData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUnitData, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUnitData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUnitData, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUnitData_Statics::NewProp_CombatStrength = { "CombatStrength", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUnitData, CombatStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatStrength_MetaData), NewProp_CombatStrength_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUnitData_Statics::NewProp_RangedStrength = { "RangedStrength", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUnitData, RangedStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangedStrength_MetaData), NewProp_RangedStrength_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUnitData_Statics::NewProp_Movement = { "Movement", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUnitData, Movement), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Movement_MetaData), NewProp_Movement_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUnitData_Statics::NewProp_Cost = { "Cost", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUnitData, Cost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cost_MetaData), NewProp_Cost_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUnitData_Statics::NewProp_RequiredTech = { "RequiredTech", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUnitData, RequiredTech), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredTech_MetaData), NewProp_RequiredTech_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUnitData_Statics::NewProp_RequiredResource = { "RequiredResource", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUnitData, RequiredResource), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredResource_MetaData), NewProp_RequiredResource_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUnitData_Statics::NewProp_MeshPath = { "MeshPath", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUnitData, MeshPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshPath_MetaData), NewProp_MeshPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUnitData_Statics::NewProp_IconPath = { "IconPath", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUnitData, IconPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconPath_MetaData), NewProp_IconPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUnitData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnitData_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnitData_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnitData_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnitData_Statics::NewProp_CombatStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnitData_Statics::NewProp_RangedStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnitData_Statics::NewProp_Movement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnitData_Statics::NewProp_Cost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnitData_Statics::NewProp_RequiredTech,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnitData_Statics::NewProp_RequiredResource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnitData_Statics::NewProp_MeshPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnitData_Statics::NewProp_IconPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnitData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUnitData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SProjectNew,
	nullptr,
	&NewStructOps,
	"UnitData",
	Z_Construct_UScriptStruct_FUnitData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnitData_Statics::PropPointers),
	sizeof(FUnitData),
	alignof(FUnitData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnitData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUnitData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUnitData()
{
	if (!Z_Registration_Info_UScriptStruct_FUnitData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FUnitData.InnerSingleton, Z_Construct_UScriptStruct_FUnitData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FUnitData.InnerSingleton;
}
// ********** End ScriptStruct FUnitData ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_UnitData_h__Script_SProjectNew_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUnitData::StaticStruct, Z_Construct_UScriptStruct_FUnitData_Statics::NewStructOps, TEXT("UnitData"), &Z_Registration_Info_UScriptStruct_FUnitData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUnitData), 3709516540U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_UnitData_h__Script_SProjectNew_2790330278(TEXT("/Script/SProjectNew"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_UnitData_h__Script_SProjectNew_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_UnitData_h__Script_SProjectNew_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
