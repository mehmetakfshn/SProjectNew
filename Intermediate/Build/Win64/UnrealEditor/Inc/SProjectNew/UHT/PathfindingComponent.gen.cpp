// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PathfindingComponent.h"
#include "HexTileData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePathfindingComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SPROJECTNEW_API UClass* Z_Construct_UClass_UPathfindingComponent();
SPROJECTNEW_API UClass* Z_Construct_UClass_UPathfindingComponent_NoRegister();
SPROJECTNEW_API UScriptStruct* Z_Construct_UScriptStruct_FHexTileData();
UPackage* Z_Construct_UPackage__Script_SProjectNew();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPathfindingComponent Function FindPath **********************************
struct Z_Construct_UFunction_UPathfindingComponent_FindPath_Statics
{
	struct PathfindingComponent_eventFindPath_Parms
	{
		TArray<FHexTileData> GridDataArray;
		FIntPoint Start;
		FIntPoint End;
		TArray<FIntPoint> OutPath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pathfinding" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * A* algoritmas\xef\xbf\xbdn\xef\xbf\xbd \xef\xbf\xbd""al\xef\xbf\xbd\xef\xbf\xbdt\xef\xbf\xbdran ana fonksiyon.\n\x09 * Blueprint'ten gelen Dizi'yi (TArray) al\xef\xbf\xbdr.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "PathfindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A* algoritmas\xef\xbf\xbdn\xef\xbf\xbd \xef\xbf\xbd""al\xef\xbf\xbd\xef\xbf\xbdt\xef\xbf\xbdran ana fonksiyon.\nBlueprint'ten gelen Dizi'yi (TArray) al\xef\xbf\xbdr." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridDataArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridDataArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GridDataArray;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPath_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPath;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPathfindingComponent_FindPath_Statics::NewProp_GridDataArray_Inner = { "GridDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHexTileData, METADATA_PARAMS(0, nullptr) }; // 3892099238
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPathfindingComponent_FindPath_Statics::NewProp_GridDataArray = { "GridDataArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathfindingComponent_eventFindPath_Parms, GridDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridDataArray_MetaData), NewProp_GridDataArray_MetaData) }; // 3892099238
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPathfindingComponent_FindPath_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathfindingComponent_eventFindPath_Parms, Start), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPathfindingComponent_FindPath_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathfindingComponent_eventFindPath_Parms, End), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPathfindingComponent_FindPath_Statics::NewProp_OutPath_Inner = { "OutPath", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPathfindingComponent_FindPath_Statics::NewProp_OutPath = { "OutPath", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathfindingComponent_eventFindPath_Parms, OutPath), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPathfindingComponent_FindPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PathfindingComponent_eventFindPath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPathfindingComponent_FindPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PathfindingComponent_eventFindPath_Parms), &Z_Construct_UFunction_UPathfindingComponent_FindPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPathfindingComponent_FindPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathfindingComponent_FindPath_Statics::NewProp_GridDataArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathfindingComponent_FindPath_Statics::NewProp_GridDataArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathfindingComponent_FindPath_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathfindingComponent_FindPath_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathfindingComponent_FindPath_Statics::NewProp_OutPath_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathfindingComponent_FindPath_Statics::NewProp_OutPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathfindingComponent_FindPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathfindingComponent_FindPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPathfindingComponent_FindPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPathfindingComponent, nullptr, "FindPath", Z_Construct_UFunction_UPathfindingComponent_FindPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPathfindingComponent_FindPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPathfindingComponent_FindPath_Statics::PathfindingComponent_eventFindPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathfindingComponent_FindPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPathfindingComponent_FindPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPathfindingComponent_FindPath_Statics::PathfindingComponent_eventFindPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPathfindingComponent_FindPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPathfindingComponent_FindPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPathfindingComponent::execFindPath)
{
	P_GET_TARRAY_REF(FHexTileData,Z_Param_Out_GridDataArray);
	P_GET_STRUCT(FIntPoint,Z_Param_Start);
	P_GET_STRUCT(FIntPoint,Z_Param_End);
	P_GET_TARRAY_REF(FIntPoint,Z_Param_Out_OutPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->FindPath(Z_Param_Out_GridDataArray,Z_Param_Start,Z_Param_End,Z_Param_Out_OutPath);
	P_NATIVE_END;
}
// ********** End Class UPathfindingComponent Function FindPath ************************************

// ********** Begin Class UPathfindingComponent Function GridToWorld *******************************
struct Z_Construct_UFunction_UPathfindingComponent_GridToWorld_Statics
{
	struct PathfindingComponent_eventGridToWorld_Parms
	{
		FIntPoint GridCoord;
		float TileSize;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pathfinding|Conversion" },
		{ "ModuleRelativePath", "PathfindingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridCoord;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TileSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPathfindingComponent_GridToWorld_Statics::NewProp_GridCoord = { "GridCoord", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathfindingComponent_eventGridToWorld_Parms, GridCoord), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPathfindingComponent_GridToWorld_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathfindingComponent_eventGridToWorld_Parms, TileSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPathfindingComponent_GridToWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathfindingComponent_eventGridToWorld_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPathfindingComponent_GridToWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathfindingComponent_GridToWorld_Statics::NewProp_GridCoord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathfindingComponent_GridToWorld_Statics::NewProp_TileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathfindingComponent_GridToWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathfindingComponent_GridToWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPathfindingComponent_GridToWorld_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPathfindingComponent, nullptr, "GridToWorld", Z_Construct_UFunction_UPathfindingComponent_GridToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPathfindingComponent_GridToWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPathfindingComponent_GridToWorld_Statics::PathfindingComponent_eventGridToWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathfindingComponent_GridToWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPathfindingComponent_GridToWorld_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPathfindingComponent_GridToWorld_Statics::PathfindingComponent_eventGridToWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPathfindingComponent_GridToWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPathfindingComponent_GridToWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPathfindingComponent::execGridToWorld)
{
	P_GET_STRUCT(FIntPoint,Z_Param_GridCoord);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TileSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GridToWorld(Z_Param_GridCoord,Z_Param_TileSize);
	P_NATIVE_END;
}
// ********** End Class UPathfindingComponent Function GridToWorld *********************************

// ********** Begin Class UPathfindingComponent Function WorldToGrid *******************************
struct Z_Construct_UFunction_UPathfindingComponent_WorldToGrid_Statics
{
	struct PathfindingComponent_eventWorldToGrid_Parms
	{
		FVector WorldLocation;
		float TileSize;
		FIntPoint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pathfinding|Conversion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- HAR\xef\xbf\xbdTA MATEMAT\xef\xbf\xbdK ARA\xef\xbf\xbdLARI (Blueprint'te Kullan\xef\xbf\xbdlacak) ---\n// Bu fonksiyonlar, o sinir bozucu bo\xef\xbf\xbdluk sorununu \xef\xbf\xbd\xef\xbf\xbdzer.\n" },
#endif
		{ "ModuleRelativePath", "PathfindingComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- HAR\xef\xbf\xbdTA MATEMAT\xef\xbf\xbdK ARA\xef\xbf\xbdLARI (Blueprint'te Kullan\xef\xbf\xbdlacak) ---\nBu fonksiyonlar, o sinir bozucu bo\xef\xbf\xbdluk sorununu \xef\xbf\xbd\xef\xbf\xbdzer." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TileSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPathfindingComponent_WorldToGrid_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathfindingComponent_eventWorldToGrid_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldLocation_MetaData), NewProp_WorldLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPathfindingComponent_WorldToGrid_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathfindingComponent_eventWorldToGrid_Parms, TileSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPathfindingComponent_WorldToGrid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathfindingComponent_eventWorldToGrid_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPathfindingComponent_WorldToGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathfindingComponent_WorldToGrid_Statics::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathfindingComponent_WorldToGrid_Statics::NewProp_TileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathfindingComponent_WorldToGrid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathfindingComponent_WorldToGrid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPathfindingComponent_WorldToGrid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPathfindingComponent, nullptr, "WorldToGrid", Z_Construct_UFunction_UPathfindingComponent_WorldToGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPathfindingComponent_WorldToGrid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPathfindingComponent_WorldToGrid_Statics::PathfindingComponent_eventWorldToGrid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathfindingComponent_WorldToGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPathfindingComponent_WorldToGrid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPathfindingComponent_WorldToGrid_Statics::PathfindingComponent_eventWorldToGrid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPathfindingComponent_WorldToGrid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPathfindingComponent_WorldToGrid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPathfindingComponent::execWorldToGrid)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TileSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntPoint*)Z_Param__Result=P_THIS->WorldToGrid(Z_Param_Out_WorldLocation,Z_Param_TileSize);
	P_NATIVE_END;
}
// ********** End Class UPathfindingComponent Function WorldToGrid *********************************

// ********** Begin Class UPathfindingComponent ****************************************************
void UPathfindingComponent::StaticRegisterNativesUPathfindingComponent()
{
	UClass* Class = UPathfindingComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindPath", &UPathfindingComponent::execFindPath },
		{ "GridToWorld", &UPathfindingComponent::execGridToWorld },
		{ "WorldToGrid", &UPathfindingComponent::execWorldToGrid },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPathfindingComponent;
UClass* UPathfindingComponent::GetPrivateStaticClass()
{
	using TClass = UPathfindingComponent;
	if (!Z_Registration_Info_UClass_UPathfindingComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PathfindingComponent"),
			Z_Registration_Info_UClass_UPathfindingComponent.InnerSingleton,
			StaticRegisterNativesUPathfindingComponent,
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
	return Z_Registration_Info_UClass_UPathfindingComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UPathfindingComponent_NoRegister()
{
	return UPathfindingComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPathfindingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PathfindingComponent.h" },
		{ "ModuleRelativePath", "PathfindingComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPathfindingComponent_FindPath, "FindPath" }, // 1288103903
		{ &Z_Construct_UFunction_UPathfindingComponent_GridToWorld, "GridToWorld" }, // 1839559903
		{ &Z_Construct_UFunction_UPathfindingComponent_WorldToGrid, "WorldToGrid" }, // 1517249691
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPathfindingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPathfindingComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SProjectNew,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPathfindingComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPathfindingComponent_Statics::ClassParams = {
	&UPathfindingComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPathfindingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPathfindingComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPathfindingComponent()
{
	if (!Z_Registration_Info_UClass_UPathfindingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPathfindingComponent.OuterSingleton, Z_Construct_UClass_UPathfindingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPathfindingComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPathfindingComponent);
UPathfindingComponent::~UPathfindingComponent() {}
// ********** End Class UPathfindingComponent ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_PathfindingComponent_h__Script_SProjectNew_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPathfindingComponent, UPathfindingComponent::StaticClass, TEXT("UPathfindingComponent"), &Z_Registration_Info_UClass_UPathfindingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPathfindingComponent), 2461595389U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_PathfindingComponent_h__Script_SProjectNew_1814502428(TEXT("/Script/SProjectNew"),
	Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_PathfindingComponent_h__Script_SProjectNew_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_PathfindingComponent_h__Script_SProjectNew_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
