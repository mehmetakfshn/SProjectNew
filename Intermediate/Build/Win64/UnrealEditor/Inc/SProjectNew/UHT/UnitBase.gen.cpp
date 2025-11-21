// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnitBase.h"
#include "UnitData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUnitBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
SPROJECTNEW_API UClass* Z_Construct_UClass_AUnitBase();
SPROJECTNEW_API UClass* Z_Construct_UClass_AUnitBase_NoRegister();
SPROJECTNEW_API UClass* Z_Construct_UClass_UCivilizationManager_NoRegister();
SPROJECTNEW_API UClass* Z_Construct_UClass_UPathfindingComponent_NoRegister();
SPROJECTNEW_API UScriptStruct* Z_Construct_UScriptStruct_FUnitData();
UPackage* Z_Construct_UPackage__Script_SProjectNew();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AUnitBase Function CanMove ***********************************************
struct Z_Construct_UFunction_AUnitBase_CanMove_Statics
{
	struct UnitBase_eventCanMove_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Unit|Stats" },
		{ "ModuleRelativePath", "UnitBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AUnitBase_CanMove_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UnitBase_eventCanMove_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUnitBase_CanMove_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UnitBase_eventCanMove_Parms), &Z_Construct_UFunction_AUnitBase_CanMove_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnitBase_CanMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnitBase_CanMove_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitBase_CanMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnitBase_CanMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUnitBase, nullptr, "CanMove", Z_Construct_UFunction_AUnitBase_CanMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitBase_CanMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUnitBase_CanMove_Statics::UnitBase_eventCanMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitBase_CanMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUnitBase_CanMove_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUnitBase_CanMove_Statics::UnitBase_eventCanMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUnitBase_CanMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnitBase_CanMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUnitBase::execCanMove)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanMove();
	P_NATIVE_END;
}
// ********** End Class AUnitBase Function CanMove *************************************************

// ********** Begin Class AUnitBase Function InitUnit **********************************************
struct Z_Construct_UFunction_AUnitBase_InitUnit_Statics
{
	struct UnitBase_eventInitUnit_Parms
	{
		UCivilizationManager* OwnerCiv;
		FUnitData Data;
		FIntPoint GridPos;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UnitBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridPos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerCiv;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridPos;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUnitBase_InitUnit_Statics::NewProp_OwnerCiv = { "OwnerCiv", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnitBase_eventInitUnit_Parms, OwnerCiv), Z_Construct_UClass_UCivilizationManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUnitBase_InitUnit_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnitBase_eventInitUnit_Parms, Data), Z_Construct_UScriptStruct_FUnitData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3709516540
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUnitBase_InitUnit_Statics::NewProp_GridPos = { "GridPos", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnitBase_eventInitUnit_Parms, GridPos), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridPos_MetaData), NewProp_GridPos_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnitBase_InitUnit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnitBase_InitUnit_Statics::NewProp_OwnerCiv,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnitBase_InitUnit_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnitBase_InitUnit_Statics::NewProp_GridPos,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitBase_InitUnit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnitBase_InitUnit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUnitBase, nullptr, "InitUnit", Z_Construct_UFunction_AUnitBase_InitUnit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitBase_InitUnit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUnitBase_InitUnit_Statics::UnitBase_eventInitUnit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitBase_InitUnit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUnitBase_InitUnit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUnitBase_InitUnit_Statics::UnitBase_eventInitUnit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUnitBase_InitUnit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnitBase_InitUnit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUnitBase::execInitUnit)
{
	P_GET_OBJECT(UCivilizationManager,Z_Param_OwnerCiv);
	P_GET_STRUCT_REF(FUnitData,Z_Param_Out_Data);
	P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_GridPos);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitUnit(Z_Param_OwnerCiv,Z_Param_Out_Data,Z_Param_Out_GridPos);
	P_NATIVE_END;
}
// ********** End Class AUnitBase Function InitUnit ************************************************

// ********** Begin Class AUnitBase Function MoveAlongPath *****************************************
struct Z_Construct_UFunction_AUnitBase_MoveAlongPath_Statics
{
	struct UnitBase_eventMoveAlongPath_Parms
	{
		TArray<FIntPoint> PathCoordinates;
		UPathfindingComponent* PathfindingComponent;
		float TileSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Unit|Movement" },
		{ "ModuleRelativePath", "UnitBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathCoordinates_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathfindingComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PathCoordinates_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PathCoordinates;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PathfindingComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TileSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUnitBase_MoveAlongPath_Statics::NewProp_PathCoordinates_Inner = { "PathCoordinates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUnitBase_MoveAlongPath_Statics::NewProp_PathCoordinates = { "PathCoordinates", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnitBase_eventMoveAlongPath_Parms, PathCoordinates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathCoordinates_MetaData), NewProp_PathCoordinates_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUnitBase_MoveAlongPath_Statics::NewProp_PathfindingComponent = { "PathfindingComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnitBase_eventMoveAlongPath_Parms, PathfindingComponent), Z_Construct_UClass_UPathfindingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathfindingComponent_MetaData), NewProp_PathfindingComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUnitBase_MoveAlongPath_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnitBase_eventMoveAlongPath_Parms, TileSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnitBase_MoveAlongPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnitBase_MoveAlongPath_Statics::NewProp_PathCoordinates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnitBase_MoveAlongPath_Statics::NewProp_PathCoordinates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnitBase_MoveAlongPath_Statics::NewProp_PathfindingComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnitBase_MoveAlongPath_Statics::NewProp_TileSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitBase_MoveAlongPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnitBase_MoveAlongPath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUnitBase, nullptr, "MoveAlongPath", Z_Construct_UFunction_AUnitBase_MoveAlongPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitBase_MoveAlongPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUnitBase_MoveAlongPath_Statics::UnitBase_eventMoveAlongPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitBase_MoveAlongPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUnitBase_MoveAlongPath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUnitBase_MoveAlongPath_Statics::UnitBase_eventMoveAlongPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUnitBase_MoveAlongPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnitBase_MoveAlongPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUnitBase::execMoveAlongPath)
{
	P_GET_TARRAY_REF(FIntPoint,Z_Param_Out_PathCoordinates);
	P_GET_OBJECT(UPathfindingComponent,Z_Param_PathfindingComponent);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TileSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveAlongPath(Z_Param_Out_PathCoordinates,Z_Param_PathfindingComponent,Z_Param_TileSize);
	P_NATIVE_END;
}
// ********** End Class AUnitBase Function MoveAlongPath *******************************************

// ********** Begin Class AUnitBase Function ResetForNewTurn ***************************************
struct Z_Construct_UFunction_AUnitBase_ResetForNewTurn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Unit|Stats" },
		{ "ModuleRelativePath", "UnitBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnitBase_ResetForNewTurn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUnitBase, nullptr, "ResetForNewTurn", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitBase_ResetForNewTurn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUnitBase_ResetForNewTurn_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AUnitBase_ResetForNewTurn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnitBase_ResetForNewTurn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUnitBase::execResetForNewTurn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetForNewTurn();
	P_NATIVE_END;
}
// ********** End Class AUnitBase Function ResetForNewTurn *****************************************

// ********** Begin Class AUnitBase Function SpendMovement *****************************************
struct Z_Construct_UFunction_AUnitBase_SpendMovement_Statics
{
	struct UnitBase_eventSpendMovement_Parms
	{
		int32 Cost;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Unit|Stats" },
		{ "ModuleRelativePath", "UnitBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Cost;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUnitBase_SpendMovement_Statics::NewProp_Cost = { "Cost", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnitBase_eventSpendMovement_Parms, Cost), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnitBase_SpendMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnitBase_SpendMovement_Statics::NewProp_Cost,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitBase_SpendMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnitBase_SpendMovement_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUnitBase, nullptr, "SpendMovement", Z_Construct_UFunction_AUnitBase_SpendMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitBase_SpendMovement_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUnitBase_SpendMovement_Statics::UnitBase_eventSpendMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitBase_SpendMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUnitBase_SpendMovement_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUnitBase_SpendMovement_Statics::UnitBase_eventSpendMovement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUnitBase_SpendMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnitBase_SpendMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUnitBase::execSpendMovement)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Cost);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpendMovement(Z_Param_Cost);
	P_NATIVE_END;
}
// ********** End Class AUnitBase Function SpendMovement *******************************************

// ********** Begin Class AUnitBase ****************************************************************
void AUnitBase::StaticRegisterNativesAUnitBase()
{
	UClass* Class = AUnitBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanMove", &AUnitBase::execCanMove },
		{ "InitUnit", &AUnitBase::execInitUnit },
		{ "MoveAlongPath", &AUnitBase::execMoveAlongPath },
		{ "ResetForNewTurn", &AUnitBase::execResetForNewTurn },
		{ "SpendMovement", &AUnitBase::execSpendMovement },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AUnitBase;
UClass* AUnitBase::GetPrivateStaticClass()
{
	using TClass = AUnitBase;
	if (!Z_Registration_Info_UClass_AUnitBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UnitBase"),
			Z_Registration_Info_UClass_AUnitBase.InnerSingleton,
			StaticRegisterNativesAUnitBase,
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
	return Z_Registration_Info_UClass_AUnitBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AUnitBase_NoRegister()
{
	return AUnitBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AUnitBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UnitBase.h" },
		{ "ModuleRelativePath", "UnitBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCivilization_MetaData[] = {
		{ "ModuleRelativePath", "UnitBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnitData_MetaData[] = {
		{ "ModuleRelativePath", "UnitBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridPosition_MetaData[] = {
		{ "ModuleRelativePath", "UnitBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnitMesh_MetaData[] = {
		{ "Category", "Unit" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnitBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGridCoords_MetaData[] = {
		{ "Category", "Unit" },
		{ "ModuleRelativePath", "UnitBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Unit|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Birimin hareket h\xef\xbf\xbdz\xef\xbf\xbd (VInterpTo i\xef\xbf\xbdin) */" },
#endif
		{ "ModuleRelativePath", "UnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Birimin hareket h\xef\xbf\xbdz\xef\xbf\xbd (VInterpTo i\xef\xbf\xbdin)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMovementPoints_MetaData[] = {
		{ "Category", "Unit|Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- \xef\xbf\xbdstatistikler (De\xef\xbf\xbdi\xef\xbf\xbdiklik Yok) ---\n" },
#endif
		{ "ModuleRelativePath", "UnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- \xef\xbf\xbdstatistikler (De\xef\xbf\xbdi\xef\xbf\xbdiklik Yok) ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMovementPoints_MetaData[] = {
		{ "Category", "Unit|Stats" },
		{ "ModuleRelativePath", "UnitBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerCivilization;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UnitData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridPosition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnitMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentGridCoords;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMovementPoints;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentMovementPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AUnitBase_CanMove, "CanMove" }, // 138296648
		{ &Z_Construct_UFunction_AUnitBase_InitUnit, "InitUnit" }, // 3486575662
		{ &Z_Construct_UFunction_AUnitBase_MoveAlongPath, "MoveAlongPath" }, // 492341362
		{ &Z_Construct_UFunction_AUnitBase_ResetForNewTurn, "ResetForNewTurn" }, // 4129347669
		{ &Z_Construct_UFunction_AUnitBase_SpendMovement, "SpendMovement" }, // 1232644309
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnitBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnitBase_Statics::NewProp_OwnerCivilization = { "OwnerCivilization", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnitBase, OwnerCivilization), Z_Construct_UClass_UCivilizationManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerCivilization_MetaData), NewProp_OwnerCivilization_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUnitBase_Statics::NewProp_UnitData = { "UnitData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnitBase, UnitData), Z_Construct_UScriptStruct_FUnitData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnitData_MetaData), NewProp_UnitData_MetaData) }; // 3709516540
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUnitBase_Statics::NewProp_GridPosition = { "GridPosition", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnitBase, GridPosition), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridPosition_MetaData), NewProp_GridPosition_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnitBase_Statics::NewProp_UnitMesh = { "UnitMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnitBase, UnitMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnitMesh_MetaData), NewProp_UnitMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUnitBase_Statics::NewProp_CurrentGridCoords = { "CurrentGridCoords", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnitBase, CurrentGridCoords), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentGridCoords_MetaData), NewProp_CurrentGridCoords_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUnitBase_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnitBase, MovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementSpeed_MetaData), NewProp_MovementSpeed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AUnitBase_Statics::NewProp_MaxMovementPoints = { "MaxMovementPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnitBase, MaxMovementPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMovementPoints_MetaData), NewProp_MaxMovementPoints_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AUnitBase_Statics::NewProp_CurrentMovementPoints = { "CurrentMovementPoints", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnitBase, CurrentMovementPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMovementPoints_MetaData), NewProp_CurrentMovementPoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUnitBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnitBase_Statics::NewProp_OwnerCivilization,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnitBase_Statics::NewProp_UnitData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnitBase_Statics::NewProp_GridPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnitBase_Statics::NewProp_UnitMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnitBase_Statics::NewProp_CurrentGridCoords,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnitBase_Statics::NewProp_MovementSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnitBase_Statics::NewProp_MaxMovementPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnitBase_Statics::NewProp_CurrentMovementPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUnitBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AUnitBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SProjectNew,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUnitBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUnitBase_Statics::ClassParams = {
	&AUnitBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AUnitBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AUnitBase_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUnitBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AUnitBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUnitBase()
{
	if (!Z_Registration_Info_UClass_AUnitBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUnitBase.OuterSingleton, Z_Construct_UClass_AUnitBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUnitBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUnitBase);
AUnitBase::~AUnitBase() {}
// ********** End Class AUnitBase ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_UnitBase_h__Script_SProjectNew_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUnitBase, AUnitBase::StaticClass, TEXT("AUnitBase"), &Z_Registration_Info_UClass_AUnitBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnitBase), 587107221U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_UnitBase_h__Script_SProjectNew_1582082307(TEXT("/Script/SProjectNew"),
	Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_UnitBase_h__Script_SProjectNew_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_UnitBase_h__Script_SProjectNew_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
