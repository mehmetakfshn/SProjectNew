// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HexGridComponent.h"
#include "HexTileData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHexGridComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
SPROJECTNEW_API UClass* Z_Construct_UClass_UHexGridComponent();
SPROJECTNEW_API UClass* Z_Construct_UClass_UHexGridComponent_NoRegister();
SPROJECTNEW_API UEnum* Z_Construct_UEnum_SProjectNew_ERiverEdge();
SPROJECTNEW_API UEnum* Z_Construct_UEnum_SProjectNew_ETileType();
SPROJECTNEW_API UScriptStruct* Z_Construct_UScriptStruct_FHexTileData();
UPackage* Z_Construct_UPackage__Script_SProjectNew();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHexGridComponent Function AddTileHeightLevel ****************************
struct Z_Construct_UFunction_UHexGridComponent_AddTileHeightLevel_Statics
{
	struct HexGridComponent_eventAddTileHeightLevel_Parms
	{
		int32 X;
		int32 Y;
		int32 DeltaLevels;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hex Grid|Editor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** HeightLevel'i delta kadar art\xef\xbf\xbdr\xef\xbf\xbdr/azalt\xef\xbf\xbdr. */" },
#endif
		{ "ModuleRelativePath", "Public/HexGridComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HeightLevel'i delta kadar art\xef\xbf\xbdr\xef\xbf\xbdr/azalt\xef\xbf\xbdr." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DeltaLevels;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHexGridComponent_AddTileHeightLevel_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HexGridComponent_eventAddTileHeightLevel_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHexGridComponent_AddTileHeightLevel_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HexGridComponent_eventAddTileHeightLevel_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHexGridComponent_AddTileHeightLevel_Statics::NewProp_DeltaLevels = { "DeltaLevels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HexGridComponent_eventAddTileHeightLevel_Parms, DeltaLevels), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHexGridComponent_AddTileHeightLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexGridComponent_AddTileHeightLevel_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexGridComponent_AddTileHeightLevel_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexGridComponent_AddTileHeightLevel_Statics::NewProp_DeltaLevels,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHexGridComponent_AddTileHeightLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHexGridComponent_AddTileHeightLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHexGridComponent, nullptr, "AddTileHeightLevel", Z_Construct_UFunction_UHexGridComponent_AddTileHeightLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHexGridComponent_AddTileHeightLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHexGridComponent_AddTileHeightLevel_Statics::HexGridComponent_eventAddTileHeightLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHexGridComponent_AddTileHeightLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHexGridComponent_AddTileHeightLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHexGridComponent_AddTileHeightLevel_Statics::HexGridComponent_eventAddTileHeightLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHexGridComponent_AddTileHeightLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHexGridComponent_AddTileHeightLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHexGridComponent::execAddTileHeightLevel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_GET_PROPERTY(FIntProperty,Z_Param_DeltaLevels);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddTileHeightLevel(Z_Param_X,Z_Param_Y,Z_Param_DeltaLevels);
	P_NATIVE_END;
}
// ********** End Class UHexGridComponent Function AddTileHeightLevel ******************************

// ********** Begin Class UHexGridComponent Function GenerateGrid **********************************
struct Z_Construct_UFunction_UHexGridComponent_GenerateGrid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hex Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** GridData dizisini doldurur */" },
#endif
		{ "ModuleRelativePath", "Public/HexGridComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GridData dizisini doldurur" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHexGridComponent_GenerateGrid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHexGridComponent, nullptr, "GenerateGrid", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHexGridComponent_GenerateGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHexGridComponent_GenerateGrid_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UHexGridComponent_GenerateGrid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHexGridComponent_GenerateGrid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHexGridComponent::execGenerateGrid)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateGrid();
	P_NATIVE_END;
}
// ********** End Class UHexGridComponent Function GenerateGrid ************************************

// ********** Begin Class UHexGridComponent Function GetTileData ***********************************
struct Z_Construct_UFunction_UHexGridComponent_GetTileData_Statics
{
	struct HexGridComponent_eventGetTileData_Parms
	{
		int32 X;
		int32 Y;
		FHexTileData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hex Grid|Editor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tek bir tile datas\xef\xbf\xbdn\xef\xbf\xbd kopya olarak d\xef\xbf\xbdner. */" },
#endif
		{ "ModuleRelativePath", "Public/HexGridComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tek bir tile datas\xef\xbf\xbdn\xef\xbf\xbd kopya olarak d\xef\xbf\xbdner." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHexGridComponent_GetTileData_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HexGridComponent_eventGetTileData_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHexGridComponent_GetTileData_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HexGridComponent_eventGetTileData_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHexGridComponent_GetTileData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HexGridComponent_eventGetTileData_Parms, ReturnValue), Z_Construct_UScriptStruct_FHexTileData, METADATA_PARAMS(0, nullptr) }; // 3892099238
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHexGridComponent_GetTileData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexGridComponent_GetTileData_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexGridComponent_GetTileData_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexGridComponent_GetTileData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHexGridComponent_GetTileData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHexGridComponent_GetTileData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHexGridComponent, nullptr, "GetTileData", Z_Construct_UFunction_UHexGridComponent_GetTileData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHexGridComponent_GetTileData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHexGridComponent_GetTileData_Statics::HexGridComponent_eventGetTileData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHexGridComponent_GetTileData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHexGridComponent_GetTileData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHexGridComponent_GetTileData_Statics::HexGridComponent_eventGetTileData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHexGridComponent_GetTileData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHexGridComponent_GetTileData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHexGridComponent::execGetTileData)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FHexTileData*)Z_Param__Result=P_THIS->GetTileData(Z_Param_X,Z_Param_Y);
	P_NATIVE_END;
}
// ********** End Class UHexGridComponent Function GetTileData *************************************

// ********** Begin Class UHexGridComponent Function GetTileYieldAt ********************************
struct Z_Construct_UFunction_UHexGridComponent_GetTileYieldAt_Statics
{
	struct HexGridComponent_eventGetTileYieldAt_Parms
	{
		int32 X;
		int32 Y;
		int32 OutFood;
		int32 OutProduction;
		int32 OutGold;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hex Grid|Yield" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Belirli bir tile i\xef\xbf\xbdin BaseFood/BaseProduction/BaseGold hesaplar\n" },
#endif
		{ "ModuleRelativePath", "Public/HexGridComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Belirli bir tile i\xef\xbf\xbdin BaseFood/BaseProduction/BaseGold hesaplar" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutFood;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutProduction;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutGold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHexGridComponent_GetTileYieldAt_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HexGridComponent_eventGetTileYieldAt_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHexGridComponent_GetTileYieldAt_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HexGridComponent_eventGetTileYieldAt_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHexGridComponent_GetTileYieldAt_Statics::NewProp_OutFood = { "OutFood", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HexGridComponent_eventGetTileYieldAt_Parms, OutFood), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHexGridComponent_GetTileYieldAt_Statics::NewProp_OutProduction = { "OutProduction", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HexGridComponent_eventGetTileYieldAt_Parms, OutProduction), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHexGridComponent_GetTileYieldAt_Statics::NewProp_OutGold = { "OutGold", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HexGridComponent_eventGetTileYieldAt_Parms, OutGold), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHexGridComponent_GetTileYieldAt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexGridComponent_GetTileYieldAt_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexGridComponent_GetTileYieldAt_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexGridComponent_GetTileYieldAt_Statics::NewProp_OutFood,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexGridComponent_GetTileYieldAt_Statics::NewProp_OutProduction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexGridComponent_GetTileYieldAt_Statics::NewProp_OutGold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHexGridComponent_GetTileYieldAt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHexGridComponent_GetTileYieldAt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHexGridComponent, nullptr, "GetTileYieldAt", Z_Construct_UFunction_UHexGridComponent_GetTileYieldAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHexGridComponent_GetTileYieldAt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHexGridComponent_GetTileYieldAt_Statics::HexGridComponent_eventGetTileYieldAt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHexGridComponent_GetTileYieldAt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHexGridComponent_GetTileYieldAt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHexGridComponent_GetTileYieldAt_Statics::HexGridComponent_eventGetTileYieldAt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHexGridComponent_GetTileYieldAt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHexGridComponent_GetTileYieldAt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHexGridComponent::execGetTileYieldAt)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutFood);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutProduction);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutGold);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetTileYieldAt(Z_Param_X,Z_Param_Y,Z_Param_Out_OutFood,Z_Param_Out_OutProduction,Z_Param_Out_OutGold);
	P_NATIVE_END;
}
// ********** End Class UHexGridComponent Function GetTileYieldAt **********************************

// ********** Begin Class UHexGridComponent Function GridToWorld ***********************************
struct Z_Construct_UFunction_UHexGridComponent_GridToWorld_Statics
{
	struct HexGridComponent_eventGridToWorld_Parms
	{
		int32 X;
		int32 Y;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hex Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Axial grid koordinat\xef\xbf\xbdn\xef\xbf\xbd d\xef\xbf\xbdnyadaki noktaya \xef\xbf\xbd""evirir */" },
#endif
		{ "ModuleRelativePath", "Public/HexGridComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Axial grid koordinat\xef\xbf\xbdn\xef\xbf\xbd d\xef\xbf\xbdnyadaki noktaya \xef\xbf\xbd""evirir" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHexGridComponent_GridToWorld_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HexGridComponent_eventGridToWorld_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHexGridComponent_GridToWorld_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HexGridComponent_eventGridToWorld_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHexGridComponent_GridToWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HexGridComponent_eventGridToWorld_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHexGridComponent_GridToWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexGridComponent_GridToWorld_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexGridComponent_GridToWorld_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexGridComponent_GridToWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHexGridComponent_GridToWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHexGridComponent_GridToWorld_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHexGridComponent, nullptr, "GridToWorld", Z_Construct_UFunction_UHexGridComponent_GridToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHexGridComponent_GridToWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHexGridComponent_GridToWorld_Statics::HexGridComponent_eventGridToWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHexGridComponent_GridToWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHexGridComponent_GridToWorld_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHexGridComponent_GridToWorld_Statics::HexGridComponent_eventGridToWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHexGridComponent_GridToWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHexGridComponent_GridToWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHexGridComponent::execGridToWorld)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GridToWorld(Z_Param_X,Z_Param_Y);
	P_NATIVE_END;
}
// ********** End Class UHexGridComponent Function GridToWorld *************************************

// ********** Begin Class UHexGridComponent Function InitializeEditorGrid **************************
struct Z_Construct_UFunction_UHexGridComponent_InitializeEditorGrid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hex Grid|Editor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** 120x96 sabit edit\xef\xbf\xbdr grid'i olu\xef\xbf\xbdturur (t\xef\xbf\xbdm\xef\xbf\xbd Grass, height=0). */" },
#endif
		{ "ModuleRelativePath", "Public/HexGridComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "120x96 sabit edit\xef\xbf\xbdr grid'i olu\xef\xbf\xbdturur (t\xef\xbf\xbdm\xef\xbf\xbd Grass, height=0)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHexGridComponent_InitializeEditorGrid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHexGridComponent, nullptr, "InitializeEditorGrid", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHexGridComponent_InitializeEditorGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHexGridComponent_InitializeEditorGrid_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UHexGridComponent_InitializeEditorGrid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHexGridComponent_InitializeEditorGrid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHexGridComponent::execInitializeEditorGrid)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeEditorGrid();
	P_NATIVE_END;
}
// ********** End Class UHexGridComponent Function InitializeEditorGrid ****************************

// ********** Begin Class UHexGridComponent Function IsValidCoords *********************************
struct Z_Construct_UFunction_UHexGridComponent_IsValidCoords_Statics
{
	struct HexGridComponent_eventIsValidCoords_Parms
	{
		int32 X;
		int32 Y;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hex Grid|Editor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Grid s\xef\xbf\xbdn\xef\xbf\xbdrlar\xef\xbf\xbd i\xef\xbf\xbdinde mi? */" },
#endif
		{ "ModuleRelativePath", "Public/HexGridComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grid s\xef\xbf\xbdn\xef\xbf\xbdrlar\xef\xbf\xbd i\xef\xbf\xbdinde mi?" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHexGridComponent_IsValidCoords_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HexGridComponent_eventIsValidCoords_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHexGridComponent_IsValidCoords_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HexGridComponent_eventIsValidCoords_Parms, Y), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHexGridComponent_IsValidCoords_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HexGridComponent_eventIsValidCoords_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHexGridComponent_IsValidCoords_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HexGridComponent_eventIsValidCoords_Parms), &Z_Construct_UFunction_UHexGridComponent_IsValidCoords_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHexGridComponent_IsValidCoords_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexGridComponent_IsValidCoords_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexGridComponent_IsValidCoords_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexGridComponent_IsValidCoords_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHexGridComponent_IsValidCoords_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHexGridComponent_IsValidCoords_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHexGridComponent, nullptr, "IsValidCoords", Z_Construct_UFunction_UHexGridComponent_IsValidCoords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHexGridComponent_IsValidCoords_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHexGridComponent_IsValidCoords_Statics::HexGridComponent_eventIsValidCoords_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHexGridComponent_IsValidCoords_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHexGridComponent_IsValidCoords_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHexGridComponent_IsValidCoords_Statics::HexGridComponent_eventIsValidCoords_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHexGridComponent_IsValidCoords()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHexGridComponent_IsValidCoords_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHexGridComponent::execIsValidCoords)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValidCoords(Z_Param_X,Z_Param_Y);
	P_NATIVE_END;
}
// ********** End Class UHexGridComponent Function IsValidCoords ***********************************

// ********** Begin Class UHexGridComponent Function RecalculateAllTileYields **********************
struct Z_Construct_UFunction_UHexGridComponent_RecalculateAllTileYields_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hex Grid|Yield" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// GridData i\xef\xbf\xbdindeki t\xef\xbf\xbdm tile'lar\xef\xbf\xbdn yield'lerini TileType + flag'lere g\xef\xbf\xbdre yeniden hesaplar\n" },
#endif
		{ "ModuleRelativePath", "Public/HexGridComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GridData i\xef\xbf\xbdindeki t\xef\xbf\xbdm tile'lar\xef\xbf\xbdn yield'lerini TileType + flag'lere g\xef\xbf\xbdre yeniden hesaplar" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHexGridComponent_RecalculateAllTileYields_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHexGridComponent, nullptr, "RecalculateAllTileYields", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHexGridComponent_RecalculateAllTileYields_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHexGridComponent_RecalculateAllTileYields_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UHexGridComponent_RecalculateAllTileYields()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHexGridComponent_RecalculateAllTileYields_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHexGridComponent::execRecalculateAllTileYields)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RecalculateAllTileYields();
	P_NATIVE_END;
}
// ********** End Class UHexGridComponent Function RecalculateAllTileYields ************************

// ********** Begin Class UHexGridComponent Function RequestRebuildVisual **************************
struct Z_Construct_UFunction_UHexGridComponent_RequestRebuildVisual_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hex Grid|Editor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** HexGridActor \xef\xbf\xbdzerinden g\xef\xbf\xbdrsel rebuild talebi. */" },
#endif
		{ "ModuleRelativePath", "Public/HexGridComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HexGridActor \xef\xbf\xbdzerinden g\xef\xbf\xbdrsel rebuild talebi." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHexGridComponent_RequestRebuildVisual_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHexGridComponent, nullptr, "RequestRebuildVisual", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHexGridComponent_RequestRebuildVisual_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHexGridComponent_RequestRebuildVisual_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UHexGridComponent_RequestRebuildVisual()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHexGridComponent_RequestRebuildVisual_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHexGridComponent::execRequestRebuildVisual)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestRebuildVisual();
	P_NATIVE_END;
}
// ********** End Class UHexGridComponent Function RequestRebuildVisual ****************************

// ********** Begin Class UHexGridComponent Function SetRiverAtEdge ********************************
struct Z_Construct_UFunction_UHexGridComponent_SetRiverAtEdge_Statics
{
	struct HexGridComponent_eventSetRiverAtEdge_Parms
	{
		int32 X;
		int32 Y;
		ERiverEdge Edge;
		bool bHasRiver;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hex Grid|Editor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Belirli bir kenarda nehir var/yok ayarlama. */" },
#endif
		{ "ModuleRelativePath", "Public/HexGridComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Belirli bir kenarda nehir var/yok ayarlama." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Edge_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Edge;
	static void NewProp_bHasRiver_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRiver;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHexGridComponent_SetRiverAtEdge_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HexGridComponent_eventSetRiverAtEdge_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHexGridComponent_SetRiverAtEdge_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HexGridComponent_eventSetRiverAtEdge_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHexGridComponent_SetRiverAtEdge_Statics::NewProp_Edge_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHexGridComponent_SetRiverAtEdge_Statics::NewProp_Edge = { "Edge", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HexGridComponent_eventSetRiverAtEdge_Parms, Edge), Z_Construct_UEnum_SProjectNew_ERiverEdge, METADATA_PARAMS(0, nullptr) }; // 1881906328
void Z_Construct_UFunction_UHexGridComponent_SetRiverAtEdge_Statics::NewProp_bHasRiver_SetBit(void* Obj)
{
	((HexGridComponent_eventSetRiverAtEdge_Parms*)Obj)->bHasRiver = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHexGridComponent_SetRiverAtEdge_Statics::NewProp_bHasRiver = { "bHasRiver", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HexGridComponent_eventSetRiverAtEdge_Parms), &Z_Construct_UFunction_UHexGridComponent_SetRiverAtEdge_Statics::NewProp_bHasRiver_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHexGridComponent_SetRiverAtEdge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexGridComponent_SetRiverAtEdge_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexGridComponent_SetRiverAtEdge_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexGridComponent_SetRiverAtEdge_Statics::NewProp_Edge_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexGridComponent_SetRiverAtEdge_Statics::NewProp_Edge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexGridComponent_SetRiverAtEdge_Statics::NewProp_bHasRiver,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHexGridComponent_SetRiverAtEdge_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHexGridComponent_SetRiverAtEdge_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHexGridComponent, nullptr, "SetRiverAtEdge", Z_Construct_UFunction_UHexGridComponent_SetRiverAtEdge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHexGridComponent_SetRiverAtEdge_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHexGridComponent_SetRiverAtEdge_Statics::HexGridComponent_eventSetRiverAtEdge_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHexGridComponent_SetRiverAtEdge_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHexGridComponent_SetRiverAtEdge_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHexGridComponent_SetRiverAtEdge_Statics::HexGridComponent_eventSetRiverAtEdge_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHexGridComponent_SetRiverAtEdge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHexGridComponent_SetRiverAtEdge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHexGridComponent::execSetRiverAtEdge)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_GET_ENUM(ERiverEdge,Z_Param_Edge);
	P_GET_UBOOL(Z_Param_bHasRiver);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRiverAtEdge(Z_Param_X,Z_Param_Y,ERiverEdge(Z_Param_Edge),Z_Param_bHasRiver);
	P_NATIVE_END;
}
// ********** End Class UHexGridComponent Function SetRiverAtEdge **********************************

// ********** Begin Class UHexGridComponent Function SetTileHeightLevel ****************************
struct Z_Construct_UFunction_UHexGridComponent_SetTileHeightLevel_Statics
{
	struct HexGridComponent_eventSetTileHeightLevel_Parms
	{
		int32 X;
		int32 Y;
		int32 NewHeightLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hex Grid|Editor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Y\xef\xbf\xbdkseklik seviyesini do\xef\xbf\xbdrudan ayarlar. */" },
#endif
		{ "ModuleRelativePath", "Public/HexGridComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Y\xef\xbf\xbdkseklik seviyesini do\xef\xbf\xbdrudan ayarlar." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewHeightLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHexGridComponent_SetTileHeightLevel_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HexGridComponent_eventSetTileHeightLevel_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHexGridComponent_SetTileHeightLevel_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HexGridComponent_eventSetTileHeightLevel_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHexGridComponent_SetTileHeightLevel_Statics::NewProp_NewHeightLevel = { "NewHeightLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HexGridComponent_eventSetTileHeightLevel_Parms, NewHeightLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHexGridComponent_SetTileHeightLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexGridComponent_SetTileHeightLevel_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexGridComponent_SetTileHeightLevel_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexGridComponent_SetTileHeightLevel_Statics::NewProp_NewHeightLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHexGridComponent_SetTileHeightLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHexGridComponent_SetTileHeightLevel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHexGridComponent, nullptr, "SetTileHeightLevel", Z_Construct_UFunction_UHexGridComponent_SetTileHeightLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHexGridComponent_SetTileHeightLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHexGridComponent_SetTileHeightLevel_Statics::HexGridComponent_eventSetTileHeightLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHexGridComponent_SetTileHeightLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHexGridComponent_SetTileHeightLevel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHexGridComponent_SetTileHeightLevel_Statics::HexGridComponent_eventSetTileHeightLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHexGridComponent_SetTileHeightLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHexGridComponent_SetTileHeightLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHexGridComponent::execSetTileHeightLevel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewHeightLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTileHeightLevel(Z_Param_X,Z_Param_Y,Z_Param_NewHeightLevel);
	P_NATIVE_END;
}
// ********** End Class UHexGridComponent Function SetTileHeightLevel ******************************

// ********** Begin Class UHexGridComponent Function SetTileTypeAt *********************************
struct Z_Construct_UFunction_UHexGridComponent_SetTileTypeAt_Statics
{
	struct HexGridComponent_eventSetTileTypeAt_Parms
	{
		int32 X;
		int32 Y;
		ETileType NewType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hex Grid|Editor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sadece tile t\xef\xbf\xbdr\xef\xbf\xbdn\xef\xbf\xbd de\xef\xbf\xbdi\xef\xbf\xbdtirir (Grass, Desert, Water vs.). */" },
#endif
		{ "ModuleRelativePath", "Public/HexGridComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sadece tile t\xef\xbf\xbdr\xef\xbf\xbdn\xef\xbf\xbd de\xef\xbf\xbdi\xef\xbf\xbdtirir (Grass, Desert, Water vs.)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHexGridComponent_SetTileTypeAt_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HexGridComponent_eventSetTileTypeAt_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHexGridComponent_SetTileTypeAt_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HexGridComponent_eventSetTileTypeAt_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHexGridComponent_SetTileTypeAt_Statics::NewProp_NewType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHexGridComponent_SetTileTypeAt_Statics::NewProp_NewType = { "NewType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HexGridComponent_eventSetTileTypeAt_Parms, NewType), Z_Construct_UEnum_SProjectNew_ETileType, METADATA_PARAMS(0, nullptr) }; // 197667489
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHexGridComponent_SetTileTypeAt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexGridComponent_SetTileTypeAt_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexGridComponent_SetTileTypeAt_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexGridComponent_SetTileTypeAt_Statics::NewProp_NewType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexGridComponent_SetTileTypeAt_Statics::NewProp_NewType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHexGridComponent_SetTileTypeAt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHexGridComponent_SetTileTypeAt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHexGridComponent, nullptr, "SetTileTypeAt", Z_Construct_UFunction_UHexGridComponent_SetTileTypeAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHexGridComponent_SetTileTypeAt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHexGridComponent_SetTileTypeAt_Statics::HexGridComponent_eventSetTileTypeAt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHexGridComponent_SetTileTypeAt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHexGridComponent_SetTileTypeAt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHexGridComponent_SetTileTypeAt_Statics::HexGridComponent_eventSetTileTypeAt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHexGridComponent_SetTileTypeAt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHexGridComponent_SetTileTypeAt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHexGridComponent::execSetTileTypeAt)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_GET_ENUM(ETileType,Z_Param_NewType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTileTypeAt(Z_Param_X,Z_Param_Y,ETileType(Z_Param_NewType));
	P_NATIVE_END;
}
// ********** End Class UHexGridComponent Function SetTileTypeAt ***********************************

// ********** Begin Class UHexGridComponent Function WorldToGrid ***********************************
struct Z_Construct_UFunction_UHexGridComponent_WorldToGrid_Statics
{
	struct HexGridComponent_eventWorldToGrid_Parms
	{
		FVector WorldLocation;
		FIntPoint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hex Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** D\xef\xbf\xbdnya koordinat\xef\xbf\xbdndan grid koordinat\xef\xbf\xbdna \xef\xbf\xbd""evirir */" },
#endif
		{ "ModuleRelativePath", "Public/HexGridComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "D\xef\xbf\xbdnya koordinat\xef\xbf\xbdndan grid koordinat\xef\xbf\xbdna \xef\xbf\xbd""evirir" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHexGridComponent_WorldToGrid_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HexGridComponent_eventWorldToGrid_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldLocation_MetaData), NewProp_WorldLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHexGridComponent_WorldToGrid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HexGridComponent_eventWorldToGrid_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHexGridComponent_WorldToGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexGridComponent_WorldToGrid_Statics::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHexGridComponent_WorldToGrid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHexGridComponent_WorldToGrid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHexGridComponent_WorldToGrid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHexGridComponent, nullptr, "WorldToGrid", Z_Construct_UFunction_UHexGridComponent_WorldToGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHexGridComponent_WorldToGrid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHexGridComponent_WorldToGrid_Statics::HexGridComponent_eventWorldToGrid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHexGridComponent_WorldToGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHexGridComponent_WorldToGrid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHexGridComponent_WorldToGrid_Statics::HexGridComponent_eventWorldToGrid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHexGridComponent_WorldToGrid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHexGridComponent_WorldToGrid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHexGridComponent::execWorldToGrid)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntPoint*)Z_Param__Result=P_THIS->WorldToGrid(Z_Param_Out_WorldLocation);
	P_NATIVE_END;
}
// ********** End Class UHexGridComponent Function WorldToGrid *************************************

// ********** Begin Class UHexGridComponent ********************************************************
void UHexGridComponent::StaticRegisterNativesUHexGridComponent()
{
	UClass* Class = UHexGridComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddTileHeightLevel", &UHexGridComponent::execAddTileHeightLevel },
		{ "GenerateGrid", &UHexGridComponent::execGenerateGrid },
		{ "GetTileData", &UHexGridComponent::execGetTileData },
		{ "GetTileYieldAt", &UHexGridComponent::execGetTileYieldAt },
		{ "GridToWorld", &UHexGridComponent::execGridToWorld },
		{ "InitializeEditorGrid", &UHexGridComponent::execInitializeEditorGrid },
		{ "IsValidCoords", &UHexGridComponent::execIsValidCoords },
		{ "RecalculateAllTileYields", &UHexGridComponent::execRecalculateAllTileYields },
		{ "RequestRebuildVisual", &UHexGridComponent::execRequestRebuildVisual },
		{ "SetRiverAtEdge", &UHexGridComponent::execSetRiverAtEdge },
		{ "SetTileHeightLevel", &UHexGridComponent::execSetTileHeightLevel },
		{ "SetTileTypeAt", &UHexGridComponent::execSetTileTypeAt },
		{ "WorldToGrid", &UHexGridComponent::execWorldToGrid },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHexGridComponent;
UClass* UHexGridComponent::GetPrivateStaticClass()
{
	using TClass = UHexGridComponent;
	if (!Z_Registration_Info_UClass_UHexGridComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HexGridComponent"),
			Z_Registration_Info_UClass_UHexGridComponent.InnerSingleton,
			StaticRegisterNativesUHexGridComponent,
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
	return Z_Registration_Info_UClass_UHexGridComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UHexGridComponent_NoRegister()
{
	return UHexGridComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHexGridComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "HexGridComponent.h" },
		{ "ModuleRelativePath", "Public/HexGridComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridWidth_MetaData[] = {
		{ "Category", "Hex Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ==============================\n// GRID PARAMETERS\n// ==============================\n" },
#endif
		{ "ModuleRelativePath", "Public/HexGridComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GRID PARAMETERS" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridHeight_MetaData[] = {
		{ "Category", "Hex Grid" },
		{ "ModuleRelativePath", "Public/HexGridComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseEarthHeightmap_MetaData[] = {
		{ "Category", "Earth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Bu a\xef\xbf\xbd\xef\xbf\xbdkken GenerateGrid, normal rastgele/flat grid yerine Earth heightmap'inden \xef\xbf\xbdretir.\n" },
#endif
		{ "ModuleRelativePath", "Public/HexGridComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bu a\xef\xbf\xbd\xef\xbf\xbdkken GenerateGrid, normal rastgele/flat grid yerine Earth heightmap'inden \xef\xbf\xbdretir." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EarthHeightmapTexture_MetaData[] = {
		{ "Category", "Earth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Equirectangular Earth heightmap (grayscale, R kanal\xef\xbf\xbd y\xef\xbf\xbdkseklik gibi d\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdn\xef\xbf\xbdlebilir)\n" },
#endif
		{ "EditCondition", "bUseEarthHeightmap" },
		{ "ModuleRelativePath", "Public/HexGridComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Equirectangular Earth heightmap (grayscale, R kanal\xef\xbf\xbd y\xef\xbf\xbdkseklik gibi d\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdn\xef\xbf\xbdlebilir)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeaLevelThreshold_MetaData[] = {
		{ "Category", "Earth" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 0\xef\xbf\xbd""1 aras\xef\xbf\xbd: bunun alt\xef\xbf\xbd deniz\n" },
#endif
		{ "EditCondition", "bUseEarthHeightmap" },
		{ "ModuleRelativePath", "Public/HexGridComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "0\xef\xbf\xbd""1 aras\xef\xbf\xbd: bunun alt\xef\xbf\xbd deniz" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MountainThreshold_MetaData[] = {
		{ "Category", "Earth" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 0\xef\xbf\xbd""1 aras\xef\xbf\xbd: bunun \xef\xbf\xbdst\xef\xbf\xbd da\xef\xbf\xbd\n" },
#endif
		{ "EditCondition", "bUseEarthHeightmap" },
		{ "ModuleRelativePath", "Public/HexGridComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "0\xef\xbf\xbd""1 aras\xef\xbf\xbd: bunun \xef\xbf\xbdst\xef\xbf\xbd da\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesertLatitude_MetaData[] = {
		{ "Category", "Earth" },
		{ "ClampMax", "90.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ekvatora yak\xef\xbf\xbdn enlemler \xef\xbf\xbd\xef\xbf\xbdl olsun diye kullan\xef\xbf\xbdlan e\xef\xbf\xbdik (derece)\n" },
#endif
		{ "EditCondition", "bUseEarthHeightmap" },
		{ "ModuleRelativePath", "Public/HexGridComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ekvatora yak\xef\xbf\xbdn enlemler \xef\xbf\xbd\xef\xbf\xbdl olsun diye kullan\xef\xbf\xbdlan e\xef\xbf\xbdik (derece)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridData_MetaData[] = {
		{ "Category", "Hex Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ==============================\n// GRID DATA STORAGE\n// ==============================\n" },
#endif
		{ "ModuleRelativePath", "Public/HexGridComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GRID DATA STORAGE" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileScale_MetaData[] = {
		{ "Category", "HexGridComponent" },
		{ "ModuleRelativePath", "Public/HexGridComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDatabaseCache_MetaData[] = {
		{ "Category", "Earth|Database" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Grid'i her seferinde heightmap'ten \xef\xbf\xbdretmek yerine\n// bir kez SQL'e kaydedip sonra hep ordan okuyal\xef\xbf\xbdm.\n" },
#endif
		{ "ModuleRelativePath", "Public/HexGridComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grid'i her seferinde heightmap'ten \xef\xbf\xbdretmek yerine\nbir kez SQL'e kaydedip sonra hep ordan okuyal\xef\xbf\xbdm." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[] = {
		{ "Category", "Earth|Database" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbdleride farkl\xef\xbf\xbd map'ler olursa ay\xef\xbf\xbdrmak i\xef\xbf\xbdin kullanabiliriz.\n// \xef\xbf\xbdimdilik tek Earth haritas\xef\xbf\xbd oldu\xef\xbf\xbdundan sadece bilgi ama\xef\xbf\xbdl\xef\xbf\xbd.\n" },
#endif
		{ "ModuleRelativePath", "Public/HexGridComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdleride farkl\xef\xbf\xbd map'ler olursa ay\xef\xbf\xbdrmak i\xef\xbf\xbdin kullanabiliriz.\n\xef\xbf\xbdimdilik tek Earth haritas\xef\xbf\xbd oldu\xef\xbf\xbdundan sadece bilgi ama\xef\xbf\xbdl\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightmapTexture_MetaData[] = {
		{ "Category", "Terrain" },
		{ "ModuleRelativePath", "Public/HexGridComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridHeight;
	static void NewProp_bUseEarthHeightmap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseEarthHeightmap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EarthHeightmapTexture;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SeaLevelThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MountainThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DesertLatitude;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GridData;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TileScale;
	static void NewProp_bUseDatabaseCache_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDatabaseCache;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MapName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeightmapTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHexGridComponent_AddTileHeightLevel, "AddTileHeightLevel" }, // 2873296767
		{ &Z_Construct_UFunction_UHexGridComponent_GenerateGrid, "GenerateGrid" }, // 684746355
		{ &Z_Construct_UFunction_UHexGridComponent_GetTileData, "GetTileData" }, // 2481321851
		{ &Z_Construct_UFunction_UHexGridComponent_GetTileYieldAt, "GetTileYieldAt" }, // 656164117
		{ &Z_Construct_UFunction_UHexGridComponent_GridToWorld, "GridToWorld" }, // 739618849
		{ &Z_Construct_UFunction_UHexGridComponent_InitializeEditorGrid, "InitializeEditorGrid" }, // 260932655
		{ &Z_Construct_UFunction_UHexGridComponent_IsValidCoords, "IsValidCoords" }, // 2196182018
		{ &Z_Construct_UFunction_UHexGridComponent_RecalculateAllTileYields, "RecalculateAllTileYields" }, // 3042057806
		{ &Z_Construct_UFunction_UHexGridComponent_RequestRebuildVisual, "RequestRebuildVisual" }, // 1278831046
		{ &Z_Construct_UFunction_UHexGridComponent_SetRiverAtEdge, "SetRiverAtEdge" }, // 310872534
		{ &Z_Construct_UFunction_UHexGridComponent_SetTileHeightLevel, "SetTileHeightLevel" }, // 3713904173
		{ &Z_Construct_UFunction_UHexGridComponent_SetTileTypeAt, "SetTileTypeAt" }, // 2882869823
		{ &Z_Construct_UFunction_UHexGridComponent_WorldToGrid, "WorldToGrid" }, // 3370769976
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHexGridComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHexGridComponent_Statics::NewProp_GridWidth = { "GridWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHexGridComponent, GridWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridWidth_MetaData), NewProp_GridWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHexGridComponent_Statics::NewProp_GridHeight = { "GridHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHexGridComponent, GridHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridHeight_MetaData), NewProp_GridHeight_MetaData) };
void Z_Construct_UClass_UHexGridComponent_Statics::NewProp_bUseEarthHeightmap_SetBit(void* Obj)
{
	((UHexGridComponent*)Obj)->bUseEarthHeightmap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHexGridComponent_Statics::NewProp_bUseEarthHeightmap = { "bUseEarthHeightmap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHexGridComponent), &Z_Construct_UClass_UHexGridComponent_Statics::NewProp_bUseEarthHeightmap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseEarthHeightmap_MetaData), NewProp_bUseEarthHeightmap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHexGridComponent_Statics::NewProp_EarthHeightmapTexture = { "EarthHeightmapTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHexGridComponent, EarthHeightmapTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EarthHeightmapTexture_MetaData), NewProp_EarthHeightmapTexture_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHexGridComponent_Statics::NewProp_SeaLevelThreshold = { "SeaLevelThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHexGridComponent, SeaLevelThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeaLevelThreshold_MetaData), NewProp_SeaLevelThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHexGridComponent_Statics::NewProp_MountainThreshold = { "MountainThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHexGridComponent, MountainThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MountainThreshold_MetaData), NewProp_MountainThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHexGridComponent_Statics::NewProp_DesertLatitude = { "DesertLatitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHexGridComponent, DesertLatitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesertLatitude_MetaData), NewProp_DesertLatitude_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHexGridComponent_Statics::NewProp_GridData_Inner = { "GridData", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHexTileData, METADATA_PARAMS(0, nullptr) }; // 3892099238
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHexGridComponent_Statics::NewProp_GridData = { "GridData", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHexGridComponent, GridData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridData_MetaData), NewProp_GridData_MetaData) }; // 3892099238
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHexGridComponent_Statics::NewProp_TileScale = { "TileScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHexGridComponent, TileScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileScale_MetaData), NewProp_TileScale_MetaData) };
void Z_Construct_UClass_UHexGridComponent_Statics::NewProp_bUseDatabaseCache_SetBit(void* Obj)
{
	((UHexGridComponent*)Obj)->bUseDatabaseCache = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHexGridComponent_Statics::NewProp_bUseDatabaseCache = { "bUseDatabaseCache", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHexGridComponent), &Z_Construct_UClass_UHexGridComponent_Statics::NewProp_bUseDatabaseCache_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDatabaseCache_MetaData), NewProp_bUseDatabaseCache_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHexGridComponent_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHexGridComponent, MapName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapName_MetaData), NewProp_MapName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHexGridComponent_Statics::NewProp_HeightmapTexture = { "HeightmapTexture", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHexGridComponent, HeightmapTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightmapTexture_MetaData), NewProp_HeightmapTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHexGridComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHexGridComponent_Statics::NewProp_GridWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHexGridComponent_Statics::NewProp_GridHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHexGridComponent_Statics::NewProp_bUseEarthHeightmap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHexGridComponent_Statics::NewProp_EarthHeightmapTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHexGridComponent_Statics::NewProp_SeaLevelThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHexGridComponent_Statics::NewProp_MountainThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHexGridComponent_Statics::NewProp_DesertLatitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHexGridComponent_Statics::NewProp_GridData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHexGridComponent_Statics::NewProp_GridData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHexGridComponent_Statics::NewProp_TileScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHexGridComponent_Statics::NewProp_bUseDatabaseCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHexGridComponent_Statics::NewProp_MapName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHexGridComponent_Statics::NewProp_HeightmapTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHexGridComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHexGridComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SProjectNew,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHexGridComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHexGridComponent_Statics::ClassParams = {
	&UHexGridComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHexGridComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHexGridComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHexGridComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHexGridComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHexGridComponent()
{
	if (!Z_Registration_Info_UClass_UHexGridComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHexGridComponent.OuterSingleton, Z_Construct_UClass_UHexGridComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHexGridComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHexGridComponent);
UHexGridComponent::~UHexGridComponent() {}
// ********** End Class UHexGridComponent **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_HexGridComponent_h__Script_SProjectNew_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHexGridComponent, UHexGridComponent::StaticClass, TEXT("UHexGridComponent"), &Z_Registration_Info_UClass_UHexGridComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHexGridComponent), 1318634724U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_HexGridComponent_h__Script_SProjectNew_2101402034(TEXT("/Script/SProjectNew"),
	Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_HexGridComponent_h__Script_SProjectNew_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_HexGridComponent_h__Script_SProjectNew_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
