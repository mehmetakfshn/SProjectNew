// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CivSaveGame.h"
#include "HexTileData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCivSaveGame() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
SPROJECTNEW_API UClass* Z_Construct_UClass_UCivSaveGame();
SPROJECTNEW_API UClass* Z_Construct_UClass_UCivSaveGame_NoRegister();
SPROJECTNEW_API UScriptStruct* Z_Construct_UScriptStruct_FHexTileData();
SPROJECTNEW_API UScriptStruct* Z_Construct_UScriptStruct_FUnitSaveData();
UPackage* Z_Construct_UPackage__Script_SProjectNew();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FUnitSaveData *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FUnitSaveData;
class UScriptStruct* FUnitSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FUnitSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FUnitSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUnitSaveData, (UObject*)Z_Construct_UPackage__Script_SProjectNew(), TEXT("UnitSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_FUnitSaveData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FUnitSaveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tek bir birimin kaydedilmesi i\xef\xbf\xbdin k\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdk struct\n" },
#endif
		{ "ModuleRelativePath", "CivSaveGame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tek bir birimin kaydedilmesi i\xef\xbf\xbdin k\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdk struct" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnitClassPath_MetaData[] = {
		{ "Category", "UnitSaveData" },
		{ "ModuleRelativePath", "CivSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[] = {
		{ "Category", "UnitSaveData" },
		{ "ModuleRelativePath", "CivSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridCoords_MetaData[] = {
		{ "Category", "UnitSaveData" },
		{ "ModuleRelativePath", "CivSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMovement_MetaData[] = {
		{ "Category", "UnitSaveData" },
		{ "ModuleRelativePath", "CivSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMovement_MetaData[] = {
		{ "Category", "UnitSaveData" },
		{ "ModuleRelativePath", "CivSaveGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UnitClassPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridCoords;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentMovement;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMovement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUnitSaveData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUnitSaveData_Statics::NewProp_UnitClassPath = { "UnitClassPath", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUnitSaveData, UnitClassPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnitClassPath_MetaData), NewProp_UnitClassPath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUnitSaveData_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUnitSaveData, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldLocation_MetaData), NewProp_WorldLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUnitSaveData_Statics::NewProp_GridCoords = { "GridCoords", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUnitSaveData, GridCoords), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridCoords_MetaData), NewProp_GridCoords_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUnitSaveData_Statics::NewProp_CurrentMovement = { "CurrentMovement", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUnitSaveData, CurrentMovement), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMovement_MetaData), NewProp_CurrentMovement_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUnitSaveData_Statics::NewProp_MaxMovement = { "MaxMovement", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUnitSaveData, MaxMovement), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMovement_MetaData), NewProp_MaxMovement_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUnitSaveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnitSaveData_Statics::NewProp_UnitClassPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnitSaveData_Statics::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnitSaveData_Statics::NewProp_GridCoords,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnitSaveData_Statics::NewProp_CurrentMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnitSaveData_Statics::NewProp_MaxMovement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnitSaveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUnitSaveData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SProjectNew,
	nullptr,
	&NewStructOps,
	"UnitSaveData",
	Z_Construct_UScriptStruct_FUnitSaveData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnitSaveData_Statics::PropPointers),
	sizeof(FUnitSaveData),
	alignof(FUnitSaveData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnitSaveData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUnitSaveData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUnitSaveData()
{
	if (!Z_Registration_Info_UScriptStruct_FUnitSaveData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FUnitSaveData.InnerSingleton, Z_Construct_UScriptStruct_FUnitSaveData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FUnitSaveData.InnerSingleton;
}
// ********** End ScriptStruct FUnitSaveData *******************************************************

// ********** Begin Class UCivSaveGame *************************************************************
void UCivSaveGame::StaticRegisterNativesUCivSaveGame()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCivSaveGame;
UClass* UCivSaveGame::GetPrivateStaticClass()
{
	using TClass = UCivSaveGame;
	if (!Z_Registration_Info_UClass_UCivSaveGame.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CivSaveGame"),
			Z_Registration_Info_UClass_UCivSaveGame.InnerSingleton,
			StaticRegisterNativesUCivSaveGame,
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
	return Z_Registration_Info_UClass_UCivSaveGame.InnerSingleton;
}
UClass* Z_Construct_UClass_UCivSaveGame_NoRegister()
{
	return UCivSaveGame::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCivSaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CivSaveGame.h" },
		{ "ModuleRelativePath", "CivSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedTurnNumber_MetaData[] = {
		{ "Category", "CivSaveGame" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- GENEL OYUN VER\xef\xbf\xbdLER\xef\xbf\xbd ---\n" },
#endif
		{ "ModuleRelativePath", "CivSaveGame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- GENEL OYUN VER\xef\xbf\xbdLER\xef\xbf\xbd ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedGridData_MetaData[] = {
		{ "Category", "CivSaveGame" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- HAR\xef\xbf\xbdTA VER\xef\xbf\xbdLER\xef\xbf\xbd ---\n" },
#endif
		{ "ModuleRelativePath", "CivSaveGame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- HAR\xef\xbf\xbdTA VER\xef\xbf\xbdLER\xef\xbf\xbd ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedUnits_MetaData[] = {
		{ "Category", "CivSaveGame" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- T\xef\xbf\xbdM B\xef\xbf\xbdR\xef\xbf\xbdMLER ---\n" },
#endif
		{ "ModuleRelativePath", "CivSaveGame.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- T\xef\xbf\xbdM B\xef\xbf\xbdR\xef\xbf\xbdMLER ---" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SavedTurnNumber;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedGridData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedGridData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedUnits_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedUnits;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCivSaveGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCivSaveGame_Statics::NewProp_SavedTurnNumber = { "SavedTurnNumber", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCivSaveGame, SavedTurnNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedTurnNumber_MetaData), NewProp_SavedTurnNumber_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCivSaveGame_Statics::NewProp_SavedGridData_Inner = { "SavedGridData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHexTileData, METADATA_PARAMS(0, nullptr) }; // 3892099238
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCivSaveGame_Statics::NewProp_SavedGridData = { "SavedGridData", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCivSaveGame, SavedGridData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedGridData_MetaData), NewProp_SavedGridData_MetaData) }; // 3892099238
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCivSaveGame_Statics::NewProp_SavedUnits_Inner = { "SavedUnits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUnitSaveData, METADATA_PARAMS(0, nullptr) }; // 2844963675
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCivSaveGame_Statics::NewProp_SavedUnits = { "SavedUnits", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCivSaveGame, SavedUnits), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedUnits_MetaData), NewProp_SavedUnits_MetaData) }; // 2844963675
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCivSaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCivSaveGame_Statics::NewProp_SavedTurnNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCivSaveGame_Statics::NewProp_SavedGridData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCivSaveGame_Statics::NewProp_SavedGridData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCivSaveGame_Statics::NewProp_SavedUnits_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCivSaveGame_Statics::NewProp_SavedUnits,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCivSaveGame_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCivSaveGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_SProjectNew,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCivSaveGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCivSaveGame_Statics::ClassParams = {
	&UCivSaveGame::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCivSaveGame_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCivSaveGame_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCivSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UCivSaveGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCivSaveGame()
{
	if (!Z_Registration_Info_UClass_UCivSaveGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCivSaveGame.OuterSingleton, Z_Construct_UClass_UCivSaveGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCivSaveGame.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCivSaveGame);
UCivSaveGame::~UCivSaveGame() {}
// ********** End Class UCivSaveGame ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivSaveGame_h__Script_SProjectNew_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUnitSaveData::StaticStruct, Z_Construct_UScriptStruct_FUnitSaveData_Statics::NewStructOps, TEXT("UnitSaveData"), &Z_Registration_Info_UScriptStruct_FUnitSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUnitSaveData), 2844963675U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCivSaveGame, UCivSaveGame::StaticClass, TEXT("UCivSaveGame"), &Z_Registration_Info_UClass_UCivSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCivSaveGame), 873847242U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivSaveGame_h__Script_SProjectNew_128577511(TEXT("/Script/SProjectNew"),
	Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivSaveGame_h__Script_SProjectNew_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivSaveGame_h__Script_SProjectNew_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivSaveGame_h__Script_SProjectNew_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivSaveGame_h__Script_SProjectNew_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
