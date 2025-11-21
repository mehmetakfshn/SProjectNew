// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HexGridVisualActor.h"
#include "HexTileData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHexGridVisualActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
SPROJECTNEW_API UClass* Z_Construct_UClass_AHexGridVisualActor();
SPROJECTNEW_API UClass* Z_Construct_UClass_AHexGridVisualActor_NoRegister();
SPROJECTNEW_API UScriptStruct* Z_Construct_UScriptStruct_FHexTileData();
UPackage* Z_Construct_UPackage__Script_SProjectNew();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AHexGridVisualActor Function BuildFromGridData ***************************
struct Z_Construct_UFunction_AHexGridVisualActor_BuildFromGridData_Statics
{
	struct HexGridVisualActor_eventBuildFromGridData_Parms
	{
		TArray<FHexTileData> GridData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hex Grid" },
		{ "ModuleRelativePath", "Public/HexGridVisualActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GridData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHexGridVisualActor_BuildFromGridData_Statics::NewProp_GridData_Inner = { "GridData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHexTileData, METADATA_PARAMS(0, nullptr) }; // 3529019657
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AHexGridVisualActor_BuildFromGridData_Statics::NewProp_GridData = { "GridData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HexGridVisualActor_eventBuildFromGridData_Parms, GridData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridData_MetaData), NewProp_GridData_MetaData) }; // 3529019657
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHexGridVisualActor_BuildFromGridData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHexGridVisualActor_BuildFromGridData_Statics::NewProp_GridData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHexGridVisualActor_BuildFromGridData_Statics::NewProp_GridData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHexGridVisualActor_BuildFromGridData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHexGridVisualActor_BuildFromGridData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHexGridVisualActor, nullptr, "BuildFromGridData", Z_Construct_UFunction_AHexGridVisualActor_BuildFromGridData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHexGridVisualActor_BuildFromGridData_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHexGridVisualActor_BuildFromGridData_Statics::HexGridVisualActor_eventBuildFromGridData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHexGridVisualActor_BuildFromGridData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHexGridVisualActor_BuildFromGridData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHexGridVisualActor_BuildFromGridData_Statics::HexGridVisualActor_eventBuildFromGridData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHexGridVisualActor_BuildFromGridData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHexGridVisualActor_BuildFromGridData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHexGridVisualActor::execBuildFromGridData)
{
	P_GET_TARRAY_REF(FHexTileData,Z_Param_Out_GridData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BuildFromGridData(Z_Param_Out_GridData);
	P_NATIVE_END;
}
// ********** End Class AHexGridVisualActor Function BuildFromGridData *****************************

// ********** Begin Class AHexGridVisualActor ******************************************************
void AHexGridVisualActor::StaticRegisterNativesAHexGridVisualActor()
{
	UClass* Class = AHexGridVisualActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BuildFromGridData", &AHexGridVisualActor::execBuildFromGridData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AHexGridVisualActor;
UClass* AHexGridVisualActor::GetPrivateStaticClass()
{
	using TClass = AHexGridVisualActor;
	if (!Z_Registration_Info_UClass_AHexGridVisualActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HexGridVisualActor"),
			Z_Registration_Info_UClass_AHexGridVisualActor.InnerSingleton,
			StaticRegisterNativesAHexGridVisualActor,
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
	return Z_Registration_Info_UClass_AHexGridVisualActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AHexGridVisualActor_NoRegister()
{
	return AHexGridVisualActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHexGridVisualActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HexGridVisualActor.h" },
		{ "ModuleRelativePath", "Public/HexGridVisualActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Hex Grid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HexGridVisualActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RiverSplineMeshes_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HexGridVisualActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrassISM_MetaData[] = {
		{ "Category", "Hex Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ============================================================\n//  MESH COMPONENTS (RENK / TERRAIN KATMANLARI)\n// ============================================================\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HexGridVisualActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MESH COMPONENTS (RENK / TERRAIN KATMANLARI)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesertISM_MetaData[] = {
		{ "Category", "Hex Grid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HexGridVisualActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MountainISM_MetaData[] = {
		{ "Category", "Hex Grid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HexGridVisualActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterISM_MetaData[] = {
		{ "Category", "Hex Grid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HexGridVisualActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlainsISM_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "HexGrid|Visual" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HexGridVisualActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TundraISM_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "HexGrid|Visual" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HexGridVisualActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnowISM_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "HexGrid|Visual" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HexGridVisualActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoastISM_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "HexGrid|Visual" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HexGridVisualActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LakeISM_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "HexGrid|Visual" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HexGridVisualActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OceanISM_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "HexGrid|Visual" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HexGridVisualActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HillISM_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "HexGrid|Visual" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HexGridVisualActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CliffISM_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "HexGrid|Visual" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HexGridVisualActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RiverMesh_MetaData[] = {
		{ "Category", "HexGrid|Visual|River" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// RIVER VISUAL\n" },
#endif
		{ "ModuleRelativePath", "Public/HexGridVisualActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RIVER VISUAL" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RiverMaterial_MetaData[] = {
		{ "Category", "HexGrid|Visual|River" },
		{ "ModuleRelativePath", "Public/HexGridVisualActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridWidth_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Grid boyutlar\xef\xbf\xbd (HexGridActor'dan al\xef\xbf\xbdn\xef\xbf\xbdr)\n" },
#endif
		{ "ModuleRelativePath", "Public/HexGridVisualActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grid boyutlar\xef\xbf\xbd (HexGridActor'dan al\xef\xbf\xbdn\xef\xbf\xbdr)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridHeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/HexGridVisualActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoordToIndex_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// (Y * GridWidth + X) GridData Index\n" },
#endif
		{ "ModuleRelativePath", "Public/HexGridVisualActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "(Y * GridWidth + X) GridData Index" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileScale_MetaData[] = {
		{ "Category", "Hex Grid" },
		{ "ModuleRelativePath", "Public/HexGridVisualActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePerInstanceBiome_MetaData[] = {
		{ "Category", "HexGridVisualActor" },
		{ "ModuleRelativePath", "Public/HexGridVisualActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RiverSplineMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RiverSplineMeshes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrassISM;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DesertISM;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MountainISM;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WaterISM;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlainsISM;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TundraISM;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SnowISM;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CoastISM;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LakeISM;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OceanISM;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HillISM;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CliffISM;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RiverMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RiverMaterial;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CoordToIndex_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CoordToIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TileScale;
	static void NewProp_bEnablePerInstanceBiome_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePerInstanceBiome;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AHexGridVisualActor_BuildFromGridData, "BuildFromGridData" }, // 2987920278
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHexGridVisualActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHexGridVisualActor, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_RiverSplineMeshes_Inner = { "RiverSplineMeshes", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_RiverSplineMeshes = { "RiverSplineMeshes", nullptr, (EPropertyFlags)0x0020088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHexGridVisualActor, RiverSplineMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RiverSplineMeshes_MetaData), NewProp_RiverSplineMeshes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_GrassISM = { "GrassISM", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHexGridVisualActor, GrassISM), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrassISM_MetaData), NewProp_GrassISM_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_DesertISM = { "DesertISM", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHexGridVisualActor, DesertISM), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesertISM_MetaData), NewProp_DesertISM_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_MountainISM = { "MountainISM", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHexGridVisualActor, MountainISM), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MountainISM_MetaData), NewProp_MountainISM_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_WaterISM = { "WaterISM", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHexGridVisualActor, WaterISM), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterISM_MetaData), NewProp_WaterISM_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_PlainsISM = { "PlainsISM", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHexGridVisualActor, PlainsISM), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlainsISM_MetaData), NewProp_PlainsISM_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_TundraISM = { "TundraISM", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHexGridVisualActor, TundraISM), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TundraISM_MetaData), NewProp_TundraISM_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_SnowISM = { "SnowISM", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHexGridVisualActor, SnowISM), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnowISM_MetaData), NewProp_SnowISM_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_CoastISM = { "CoastISM", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHexGridVisualActor, CoastISM), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoastISM_MetaData), NewProp_CoastISM_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_LakeISM = { "LakeISM", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHexGridVisualActor, LakeISM), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LakeISM_MetaData), NewProp_LakeISM_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_OceanISM = { "OceanISM", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHexGridVisualActor, OceanISM), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OceanISM_MetaData), NewProp_OceanISM_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_HillISM = { "HillISM", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHexGridVisualActor, HillISM), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HillISM_MetaData), NewProp_HillISM_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_CliffISM = { "CliffISM", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHexGridVisualActor, CliffISM), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CliffISM_MetaData), NewProp_CliffISM_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_RiverMesh = { "RiverMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHexGridVisualActor, RiverMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RiverMesh_MetaData), NewProp_RiverMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_RiverMaterial = { "RiverMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHexGridVisualActor, RiverMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RiverMaterial_MetaData), NewProp_RiverMaterial_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_GridWidth = { "GridWidth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHexGridVisualActor, GridWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridWidth_MetaData), NewProp_GridWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_GridHeight = { "GridHeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHexGridVisualActor, GridHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridHeight_MetaData), NewProp_GridHeight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_CoordToIndex_Inner = { "CoordToIndex", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_CoordToIndex = { "CoordToIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHexGridVisualActor, CoordToIndex), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoordToIndex_MetaData), NewProp_CoordToIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_TileScale = { "TileScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHexGridVisualActor, TileScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileScale_MetaData), NewProp_TileScale_MetaData) };
void Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_bEnablePerInstanceBiome_SetBit(void* Obj)
{
	((AHexGridVisualActor*)Obj)->bEnablePerInstanceBiome = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_bEnablePerInstanceBiome = { "bEnablePerInstanceBiome", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHexGridVisualActor), &Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_bEnablePerInstanceBiome_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnablePerInstanceBiome_MetaData), NewProp_bEnablePerInstanceBiome_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHexGridVisualActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_RiverSplineMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_RiverSplineMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_GrassISM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_DesertISM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_MountainISM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_WaterISM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_PlainsISM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_TundraISM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_SnowISM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_CoastISM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_LakeISM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_OceanISM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_HillISM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_CliffISM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_RiverMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_RiverMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_GridWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_GridHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_CoordToIndex_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_CoordToIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_TileScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridVisualActor_Statics::NewProp_bEnablePerInstanceBiome,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHexGridVisualActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHexGridVisualActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SProjectNew,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHexGridVisualActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHexGridVisualActor_Statics::ClassParams = {
	&AHexGridVisualActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AHexGridVisualActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AHexGridVisualActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHexGridVisualActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AHexGridVisualActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHexGridVisualActor()
{
	if (!Z_Registration_Info_UClass_AHexGridVisualActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHexGridVisualActor.OuterSingleton, Z_Construct_UClass_AHexGridVisualActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHexGridVisualActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHexGridVisualActor);
AHexGridVisualActor::~AHexGridVisualActor() {}
// ********** End Class AHexGridVisualActor ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_HexGridVisualActor_h__Script_SProjectNew_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHexGridVisualActor, AHexGridVisualActor::StaticClass, TEXT("AHexGridVisualActor"), &Z_Registration_Info_UClass_AHexGridVisualActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHexGridVisualActor), 3665305142U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_HexGridVisualActor_h__Script_SProjectNew_757761026(TEXT("/Script/SProjectNew"),
	Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_HexGridVisualActor_h__Script_SProjectNew_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_HexGridVisualActor_h__Script_SProjectNew_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
