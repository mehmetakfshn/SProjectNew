// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MapEditorGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMapEditorGameMode() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SPROJECTNEW_API UClass* Z_Construct_UClass_AHexGridActor_NoRegister();
SPROJECTNEW_API UClass* Z_Construct_UClass_AMapEditorGameMode();
SPROJECTNEW_API UClass* Z_Construct_UClass_AMapEditorGameMode_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_SProjectNew();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMapEditorGameMode Function SaveCurrentMap *******************************
struct Z_Construct_UFunction_AMapEditorGameMode_SaveCurrentMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map Editor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Haritay\xef\xbf\xbd veritaban\xef\xbf\xbdna kaydet (GameData.db / Tiles tablosu). */" },
#endif
		{ "ModuleRelativePath", "MapEditorGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Haritay\xef\xbf\xbd veritaban\xef\xbf\xbdna kaydet (GameData.db / Tiles tablosu)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapEditorGameMode_SaveCurrentMap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMapEditorGameMode, nullptr, "SaveCurrentMap", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMapEditorGameMode_SaveCurrentMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMapEditorGameMode_SaveCurrentMap_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMapEditorGameMode_SaveCurrentMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapEditorGameMode_SaveCurrentMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMapEditorGameMode::execSaveCurrentMap)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveCurrentMap();
	P_NATIVE_END;
}
// ********** End Class AMapEditorGameMode Function SaveCurrentMap *********************************

// ********** Begin Class AMapEditorGameMode *******************************************************
void AMapEditorGameMode::StaticRegisterNativesAMapEditorGameMode()
{
	UClass* Class = AMapEditorGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SaveCurrentMap", &AMapEditorGameMode::execSaveCurrentMap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMapEditorGameMode;
UClass* AMapEditorGameMode::GetPrivateStaticClass()
{
	using TClass = AMapEditorGameMode;
	if (!Z_Registration_Info_UClass_AMapEditorGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MapEditorGameMode"),
			Z_Registration_Info_UClass_AMapEditorGameMode.InnerSingleton,
			StaticRegisterNativesAMapEditorGameMode,
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
	return Z_Registration_Info_UClass_AMapEditorGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AMapEditorGameMode_NoRegister()
{
	return AMapEditorGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMapEditorGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MapEditorGameMode.h" },
		{ "ModuleRelativePath", "MapEditorGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapEditorWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Editor HUD widget blueprint'i (WBP_MapEditorHUD) */" },
#endif
		{ "ModuleRelativePath", "MapEditorGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Editor HUD widget blueprint'i (WBP_MapEditorHUD)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridActor_MetaData[] = {
		{ "ModuleRelativePath", "MapEditorGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapEditorWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MapEditorGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_MapEditorWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapEditorWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMapEditorGameMode_SaveCurrentMap, "SaveCurrentMap" }, // 1273680988
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapEditorGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMapEditorGameMode_Statics::NewProp_MapEditorWidgetClass = { "MapEditorWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapEditorGameMode, MapEditorWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapEditorWidgetClass_MetaData), NewProp_MapEditorWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapEditorGameMode_Statics::NewProp_GridActor = { "GridActor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapEditorGameMode, GridActor), Z_Construct_UClass_AHexGridActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridActor_MetaData), NewProp_GridActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapEditorGameMode_Statics::NewProp_MapEditorWidget = { "MapEditorWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMapEditorGameMode, MapEditorWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapEditorWidget_MetaData), NewProp_MapEditorWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMapEditorGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapEditorGameMode_Statics::NewProp_MapEditorWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapEditorGameMode_Statics::NewProp_GridActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapEditorGameMode_Statics::NewProp_MapEditorWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapEditorGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMapEditorGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SProjectNew,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMapEditorGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMapEditorGameMode_Statics::ClassParams = {
	&AMapEditorGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMapEditorGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMapEditorGameMode_Statics::PropPointers),
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMapEditorGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMapEditorGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMapEditorGameMode()
{
	if (!Z_Registration_Info_UClass_AMapEditorGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMapEditorGameMode.OuterSingleton, Z_Construct_UClass_AMapEditorGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMapEditorGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMapEditorGameMode);
AMapEditorGameMode::~AMapEditorGameMode() {}
// ********** End Class AMapEditorGameMode *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_MapEditorGameMode_h__Script_SProjectNew_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMapEditorGameMode, AMapEditorGameMode::StaticClass, TEXT("AMapEditorGameMode"), &Z_Registration_Info_UClass_AMapEditorGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMapEditorGameMode), 1418145447U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_MapEditorGameMode_h__Script_SProjectNew_1395660453(TEXT("/Script/SProjectNew"),
	Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_MapEditorGameMode_h__Script_SProjectNew_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_MapEditorGameMode_h__Script_SProjectNew_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
