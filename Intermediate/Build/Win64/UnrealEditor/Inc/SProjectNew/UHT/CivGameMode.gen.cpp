// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CivGameMode.h"
#include "Database/DatabaseReader.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCivGameMode() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SPROJECTNEW_API UClass* Z_Construct_UClass_ACivGameMode();
SPROJECTNEW_API UClass* Z_Construct_UClass_ACivGameMode_NoRegister();
SPROJECTNEW_API UClass* Z_Construct_UClass_AUnitBase_NoRegister();
SPROJECTNEW_API UClass* Z_Construct_UClass_UCivilizationManager_NoRegister();
SPROJECTNEW_API UClass* Z_Construct_UClass_UDatabaseReader_NoRegister();
SPROJECTNEW_API UClass* Z_Construct_UClass_UUnitFactory_NoRegister();
SPROJECTNEW_API UClass* Z_Construct_UClass_UUnitManager_NoRegister();
SPROJECTNEW_API UScriptStruct* Z_Construct_UScriptStruct_FCivInfo();
UPackage* Z_Construct_UPackage__Script_SProjectNew();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACivGameMode Function EndPlayerTurn **************************************
struct Z_Construct_UFunction_ACivGameMode_EndPlayerTurn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
		{ "ModuleRelativePath", "CivGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACivGameMode_EndPlayerTurn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACivGameMode, nullptr, "EndPlayerTurn", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACivGameMode_EndPlayerTurn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACivGameMode_EndPlayerTurn_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACivGameMode_EndPlayerTurn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACivGameMode_EndPlayerTurn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACivGameMode::execEndPlayerTurn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndPlayerTurn();
	P_NATIVE_END;
}
// ********** End Class ACivGameMode Function EndPlayerTurn ****************************************

// ********** Begin Class ACivGameMode Function LoadGameFromSlot ***********************************
struct Z_Construct_UFunction_ACivGameMode_LoadGameFromSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveLoad" },
		{ "ModuleRelativePath", "CivGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACivGameMode_LoadGameFromSlot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACivGameMode, nullptr, "LoadGameFromSlot", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACivGameMode_LoadGameFromSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACivGameMode_LoadGameFromSlot_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACivGameMode_LoadGameFromSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACivGameMode_LoadGameFromSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACivGameMode::execLoadGameFromSlot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadGameFromSlot();
	P_NATIVE_END;
}
// ********** End Class ACivGameMode Function LoadGameFromSlot *************************************

// ********** Begin Class ACivGameMode Function SaveGameToSlot *************************************
struct Z_Construct_UFunction_ACivGameMode_SaveGameToSlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveLoad" },
		{ "ModuleRelativePath", "CivGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACivGameMode_SaveGameToSlot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACivGameMode, nullptr, "SaveGameToSlot", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACivGameMode_SaveGameToSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACivGameMode_SaveGameToSlot_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACivGameMode_SaveGameToSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACivGameMode_SaveGameToSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACivGameMode::execSaveGameToSlot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveGameToSlot();
	P_NATIVE_END;
}
// ********** End Class ACivGameMode Function SaveGameToSlot ***************************************

// ********** Begin Class ACivGameMode Function SpawnUnitAtTile ************************************
struct Z_Construct_UFunction_ACivGameMode_SpawnUnitAtTile_Statics
{
	struct CivGameMode_eventSpawnUnitAtTile_Parms
	{
		TSubclassOf<AUnitBase> UnitClass;
		FIntPoint GridCoords;
		AUnitBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Units" },
		{ "ModuleRelativePath", "CivGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_UnitClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridCoords;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ACivGameMode_SpawnUnitAtTile_Statics::NewProp_UnitClass = { "UnitClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CivGameMode_eventSpawnUnitAtTile_Parms, UnitClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AUnitBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACivGameMode_SpawnUnitAtTile_Statics::NewProp_GridCoords = { "GridCoords", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CivGameMode_eventSpawnUnitAtTile_Parms, GridCoords), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACivGameMode_SpawnUnitAtTile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CivGameMode_eventSpawnUnitAtTile_Parms, ReturnValue), Z_Construct_UClass_AUnitBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACivGameMode_SpawnUnitAtTile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACivGameMode_SpawnUnitAtTile_Statics::NewProp_UnitClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACivGameMode_SpawnUnitAtTile_Statics::NewProp_GridCoords,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACivGameMode_SpawnUnitAtTile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACivGameMode_SpawnUnitAtTile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACivGameMode_SpawnUnitAtTile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACivGameMode, nullptr, "SpawnUnitAtTile", Z_Construct_UFunction_ACivGameMode_SpawnUnitAtTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACivGameMode_SpawnUnitAtTile_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACivGameMode_SpawnUnitAtTile_Statics::CivGameMode_eventSpawnUnitAtTile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACivGameMode_SpawnUnitAtTile_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACivGameMode_SpawnUnitAtTile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACivGameMode_SpawnUnitAtTile_Statics::CivGameMode_eventSpawnUnitAtTile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACivGameMode_SpawnUnitAtTile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACivGameMode_SpawnUnitAtTile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACivGameMode::execSpawnUnitAtTile)
{
	P_GET_OBJECT(UClass,Z_Param_UnitClass);
	P_GET_STRUCT(FIntPoint,Z_Param_GridCoords);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AUnitBase**)Z_Param__Result=P_THIS->SpawnUnitAtTile(Z_Param_UnitClass,Z_Param_GridCoords);
	P_NATIVE_END;
}
// ********** End Class ACivGameMode Function SpawnUnitAtTile **************************************

// ********** Begin Class ACivGameMode *************************************************************
void ACivGameMode::StaticRegisterNativesACivGameMode()
{
	UClass* Class = ACivGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EndPlayerTurn", &ACivGameMode::execEndPlayerTurn },
		{ "LoadGameFromSlot", &ACivGameMode::execLoadGameFromSlot },
		{ "SaveGameToSlot", &ACivGameMode::execSaveGameToSlot },
		{ "SpawnUnitAtTile", &ACivGameMode::execSpawnUnitAtTile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACivGameMode;
UClass* ACivGameMode::GetPrivateStaticClass()
{
	using TClass = ACivGameMode;
	if (!Z_Registration_Info_UClass_ACivGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CivGameMode"),
			Z_Registration_Info_UClass_ACivGameMode.InnerSingleton,
			StaticRegisterNativesACivGameMode,
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
	return Z_Registration_Info_UClass_ACivGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ACivGameMode_NoRegister()
{
	return ACivGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACivGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CivGameMode.h" },
		{ "ModuleRelativePath", "CivGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultUnitClass_MetaData[] = {
		{ "Category", "Units" },
		{ "ModuleRelativePath", "CivGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DBReader_MetaData[] = {
		{ "ModuleRelativePath", "CivGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnitManager_MetaData[] = {
		{ "ModuleRelativePath", "CivGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveCiv_MetaData[] = {
		{ "Category", "CivGameMode" },
		{ "ModuleRelativePath", "CivGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CivManager_MetaData[] = {
		{ "ModuleRelativePath", "CivGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivePlayerCiv_MetaData[] = {
		{ "ModuleRelativePath", "CivGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AICivs_MetaData[] = {
		{ "ModuleRelativePath", "CivGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnitBlueprintClass_MetaData[] = {
		{ "Category", "Units" },
		{ "ModuleRelativePath", "CivGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCivManager_MetaData[] = {
		{ "ModuleRelativePath", "CivGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AICivManagers_MetaData[] = {
		{ "ModuleRelativePath", "CivGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnitFactory_MetaData[] = {
		{ "ModuleRelativePath", "CivGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllCivs_MetaData[] = {
		{ "ModuleRelativePath", "CivGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultUnitClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DBReader;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnitManager;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveCiv;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CivManager;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActivePlayerCiv;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AICivs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AICivs;
	static const UECodeGen_Private::FClassPropertyParams NewProp_UnitBlueprintClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCivManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AICivManagers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AICivManagers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnitFactory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllCivs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllCivs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACivGameMode_EndPlayerTurn, "EndPlayerTurn" }, // 3892837187
		{ &Z_Construct_UFunction_ACivGameMode_LoadGameFromSlot, "LoadGameFromSlot" }, // 3087733064
		{ &Z_Construct_UFunction_ACivGameMode_SaveGameToSlot, "SaveGameToSlot" }, // 4061698983
		{ &Z_Construct_UFunction_ACivGameMode_SpawnUnitAtTile, "SpawnUnitAtTile" }, // 2789158326
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACivGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACivGameMode_Statics::NewProp_DefaultUnitClass = { "DefaultUnitClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACivGameMode, DefaultUnitClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AUnitBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultUnitClass_MetaData), NewProp_DefaultUnitClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACivGameMode_Statics::NewProp_DBReader = { "DBReader", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACivGameMode, DBReader), Z_Construct_UClass_UDatabaseReader_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DBReader_MetaData), NewProp_DBReader_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACivGameMode_Statics::NewProp_UnitManager = { "UnitManager", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACivGameMode, UnitManager), Z_Construct_UClass_UUnitManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnitManager_MetaData), NewProp_UnitManager_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACivGameMode_Statics::NewProp_ActiveCiv = { "ActiveCiv", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACivGameMode, ActiveCiv), Z_Construct_UScriptStruct_FCivInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveCiv_MetaData), NewProp_ActiveCiv_MetaData) }; // 1142681011
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACivGameMode_Statics::NewProp_CivManager = { "CivManager", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACivGameMode, CivManager), Z_Construct_UClass_UCivilizationManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CivManager_MetaData), NewProp_CivManager_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACivGameMode_Statics::NewProp_ActivePlayerCiv = { "ActivePlayerCiv", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACivGameMode, ActivePlayerCiv), Z_Construct_UScriptStruct_FCivInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivePlayerCiv_MetaData), NewProp_ActivePlayerCiv_MetaData) }; // 1142681011
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACivGameMode_Statics::NewProp_AICivs_Inner = { "AICivs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCivInfo, METADATA_PARAMS(0, nullptr) }; // 1142681011
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACivGameMode_Statics::NewProp_AICivs = { "AICivs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACivGameMode, AICivs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AICivs_MetaData), NewProp_AICivs_MetaData) }; // 1142681011
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACivGameMode_Statics::NewProp_UnitBlueprintClass = { "UnitBlueprintClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACivGameMode, UnitBlueprintClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AUnitBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnitBlueprintClass_MetaData), NewProp_UnitBlueprintClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACivGameMode_Statics::NewProp_PlayerCivManager = { "PlayerCivManager", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACivGameMode, PlayerCivManager), Z_Construct_UClass_UCivilizationManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCivManager_MetaData), NewProp_PlayerCivManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACivGameMode_Statics::NewProp_AICivManagers_Inner = { "AICivManagers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCivilizationManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACivGameMode_Statics::NewProp_AICivManagers = { "AICivManagers", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACivGameMode, AICivManagers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AICivManagers_MetaData), NewProp_AICivManagers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACivGameMode_Statics::NewProp_UnitFactory = { "UnitFactory", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACivGameMode, UnitFactory), Z_Construct_UClass_UUnitFactory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnitFactory_MetaData), NewProp_UnitFactory_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACivGameMode_Statics::NewProp_AllCivs_Inner = { "AllCivs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCivilizationManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACivGameMode_Statics::NewProp_AllCivs = { "AllCivs", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACivGameMode, AllCivs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllCivs_MetaData), NewProp_AllCivs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACivGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACivGameMode_Statics::NewProp_DefaultUnitClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACivGameMode_Statics::NewProp_DBReader,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACivGameMode_Statics::NewProp_UnitManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACivGameMode_Statics::NewProp_ActiveCiv,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACivGameMode_Statics::NewProp_CivManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACivGameMode_Statics::NewProp_ActivePlayerCiv,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACivGameMode_Statics::NewProp_AICivs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACivGameMode_Statics::NewProp_AICivs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACivGameMode_Statics::NewProp_UnitBlueprintClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACivGameMode_Statics::NewProp_PlayerCivManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACivGameMode_Statics::NewProp_AICivManagers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACivGameMode_Statics::NewProp_AICivManagers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACivGameMode_Statics::NewProp_UnitFactory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACivGameMode_Statics::NewProp_AllCivs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACivGameMode_Statics::NewProp_AllCivs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACivGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACivGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SProjectNew,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACivGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACivGameMode_Statics::ClassParams = {
	&ACivGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACivGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACivGameMode_Statics::PropPointers),
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACivGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACivGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACivGameMode()
{
	if (!Z_Registration_Info_UClass_ACivGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACivGameMode.OuterSingleton, Z_Construct_UClass_ACivGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACivGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACivGameMode);
ACivGameMode::~ACivGameMode() {}
// ********** End Class ACivGameMode ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivGameMode_h__Script_SProjectNew_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACivGameMode, ACivGameMode::StaticClass, TEXT("ACivGameMode"), &Z_Registration_Info_UClass_ACivGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACivGameMode), 3705718571U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivGameMode_h__Script_SProjectNew_3728705935(TEXT("/Script/SProjectNew"),
	Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivGameMode_h__Script_SProjectNew_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivGameMode_h__Script_SProjectNew_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
