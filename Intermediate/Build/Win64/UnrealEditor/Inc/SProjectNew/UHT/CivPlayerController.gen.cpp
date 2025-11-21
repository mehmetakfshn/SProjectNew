// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CivPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCivPlayerController() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
SPROJECTNEW_API UClass* Z_Construct_UClass_ACivPlayerController();
SPROJECTNEW_API UClass* Z_Construct_UClass_ACivPlayerController_NoRegister();
SPROJECTNEW_API UClass* Z_Construct_UClass_AUnitBase_NoRegister();
SPROJECTNEW_API UClass* Z_Construct_UClass_UCivHUDWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_SProjectNew();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACivPlayerController Function GetSelectedUnit ****************************
struct Z_Construct_UFunction_ACivPlayerController_GetSelectedUnit_Statics
{
	struct CivPlayerController_eventGetSelectedUnit_Parms
	{
		AUnitBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Civ|Entegrasyon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** YEN\xef\xbf\xbd: Haritan\xef\xbf\xbdn (BP) vurgulay\xef\xbf\xbd""c\xef\xbf\xbdy\xef\xbf\xbd ayarlayabilmesi i\xef\xbf\xbdin */" },
#endif
		{ "ModuleRelativePath", "CivPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "YEN\xef\xbf\xbd: Haritan\xef\xbf\xbdn (BP) vurgulay\xef\xbf\xbd""c\xef\xbf\xbdy\xef\xbf\xbd ayarlayabilmesi i\xef\xbf\xbdin" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACivPlayerController_GetSelectedUnit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CivPlayerController_eventGetSelectedUnit_Parms, ReturnValue), Z_Construct_UClass_AUnitBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACivPlayerController_GetSelectedUnit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACivPlayerController_GetSelectedUnit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACivPlayerController_GetSelectedUnit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACivPlayerController_GetSelectedUnit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACivPlayerController, nullptr, "GetSelectedUnit", Z_Construct_UFunction_ACivPlayerController_GetSelectedUnit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACivPlayerController_GetSelectedUnit_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACivPlayerController_GetSelectedUnit_Statics::CivPlayerController_eventGetSelectedUnit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACivPlayerController_GetSelectedUnit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACivPlayerController_GetSelectedUnit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACivPlayerController_GetSelectedUnit_Statics::CivPlayerController_eventGetSelectedUnit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACivPlayerController_GetSelectedUnit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACivPlayerController_GetSelectedUnit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACivPlayerController::execGetSelectedUnit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AUnitBase**)Z_Param__Result=P_THIS->GetSelectedUnit();
	P_NATIVE_END;
}
// ********** End Class ACivPlayerController Function GetSelectedUnit ******************************

// ********** Begin Class ACivPlayerController Function HandleTileClick ****************************
struct Z_Construct_UFunction_ACivPlayerController_HandleTileClick_Statics
{
	struct CivPlayerController_eventHandleTileClick_Parms
	{
		AActor* ActorOnTile;
		FVector TileWorldLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Civ|Entegrasyon" },
		{ "ModuleRelativePath", "CivPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileWorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorOnTile;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileWorldLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACivPlayerController_HandleTileClick_Statics::NewProp_ActorOnTile = { "ActorOnTile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CivPlayerController_eventHandleTileClick_Parms, ActorOnTile), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACivPlayerController_HandleTileClick_Statics::NewProp_TileWorldLocation = { "TileWorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CivPlayerController_eventHandleTileClick_Parms, TileWorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileWorldLocation_MetaData), NewProp_TileWorldLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACivPlayerController_HandleTileClick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACivPlayerController_HandleTileClick_Statics::NewProp_ActorOnTile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACivPlayerController_HandleTileClick_Statics::NewProp_TileWorldLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACivPlayerController_HandleTileClick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACivPlayerController_HandleTileClick_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACivPlayerController, nullptr, "HandleTileClick", Z_Construct_UFunction_ACivPlayerController_HandleTileClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACivPlayerController_HandleTileClick_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACivPlayerController_HandleTileClick_Statics::CivPlayerController_eventHandleTileClick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACivPlayerController_HandleTileClick_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACivPlayerController_HandleTileClick_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACivPlayerController_HandleTileClick_Statics::CivPlayerController_eventHandleTileClick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACivPlayerController_HandleTileClick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACivPlayerController_HandleTileClick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACivPlayerController::execHandleTileClick)
{
	P_GET_OBJECT(AActor,Z_Param_ActorOnTile);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_TileWorldLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleTileClick(Z_Param_ActorOnTile,Z_Param_Out_TileWorldLocation);
	P_NATIVE_END;
}
// ********** End Class ACivPlayerController Function HandleTileClick ******************************

// ********** Begin Class ACivPlayerController Function Server_RequestEndTurn **********************
static FName NAME_ACivPlayerController_Server_RequestEndTurn = FName(TEXT("Server_RequestEndTurn"));
void ACivPlayerController::Server_RequestEndTurn()
{
	UFunction* Func = FindFunctionChecked(NAME_ACivPlayerController_Server_RequestEndTurn);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ACivPlayerController_Server_RequestEndTurn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CivPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACivPlayerController_Server_RequestEndTurn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACivPlayerController, nullptr, "Server_RequestEndTurn", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACivPlayerController_Server_RequestEndTurn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACivPlayerController_Server_RequestEndTurn_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACivPlayerController_Server_RequestEndTurn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACivPlayerController_Server_RequestEndTurn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACivPlayerController::execServer_RequestEndTurn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Server_RequestEndTurn_Implementation();
	P_NATIVE_END;
}
// ********** End Class ACivPlayerController Function Server_RequestEndTurn ************************

// ********** Begin Class ACivPlayerController *****************************************************
void ACivPlayerController::StaticRegisterNativesACivPlayerController()
{
	UClass* Class = ACivPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSelectedUnit", &ACivPlayerController::execGetSelectedUnit },
		{ "HandleTileClick", &ACivPlayerController::execHandleTileClick },
		{ "Server_RequestEndTurn", &ACivPlayerController::execServer_RequestEndTurn },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACivPlayerController;
UClass* ACivPlayerController::GetPrivateStaticClass()
{
	using TClass = ACivPlayerController;
	if (!Z_Registration_Info_UClass_ACivPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CivPlayerController"),
			Z_Registration_Info_UClass_ACivPlayerController.InnerSingleton,
			StaticRegisterNativesACivPlayerController,
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
	return Z_Registration_Info_UClass_ACivPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_ACivPlayerController_NoRegister()
{
	return ACivPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACivPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "CivPlayerController.h" },
		{ "ModuleRelativePath", "CivPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "CivPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetInstance_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CivPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseMenuClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "CivPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedUnit_MetaData[] = {
		{ "Category", "Selection" },
		{ "ModuleRelativePath", "CivPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_HUDWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HUDWidgetInstance;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PauseMenuClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedUnit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACivPlayerController_GetSelectedUnit, "GetSelectedUnit" }, // 2735775292
		{ &Z_Construct_UFunction_ACivPlayerController_HandleTileClick, "HandleTileClick" }, // 1734738051
		{ &Z_Construct_UFunction_ACivPlayerController_Server_RequestEndTurn, "Server_RequestEndTurn" }, // 477603746
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACivPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACivPlayerController_Statics::NewProp_HUDWidgetClass = { "HUDWidgetClass", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACivPlayerController, HUDWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCivHUDWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDWidgetClass_MetaData), NewProp_HUDWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACivPlayerController_Statics::NewProp_HUDWidgetInstance = { "HUDWidgetInstance", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACivPlayerController, HUDWidgetInstance), Z_Construct_UClass_UCivHUDWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HUDWidgetInstance_MetaData), NewProp_HUDWidgetInstance_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACivPlayerController_Statics::NewProp_PauseMenuClass = { "PauseMenuClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACivPlayerController, PauseMenuClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseMenuClass_MetaData), NewProp_PauseMenuClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACivPlayerController_Statics::NewProp_SelectedUnit = { "SelectedUnit", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACivPlayerController, SelectedUnit), Z_Construct_UClass_AUnitBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedUnit_MetaData), NewProp_SelectedUnit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACivPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACivPlayerController_Statics::NewProp_HUDWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACivPlayerController_Statics::NewProp_HUDWidgetInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACivPlayerController_Statics::NewProp_PauseMenuClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACivPlayerController_Statics::NewProp_SelectedUnit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACivPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACivPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_SProjectNew,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACivPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACivPlayerController_Statics::ClassParams = {
	&ACivPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACivPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACivPlayerController_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACivPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ACivPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACivPlayerController()
{
	if (!Z_Registration_Info_UClass_ACivPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACivPlayerController.OuterSingleton, Z_Construct_UClass_ACivPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACivPlayerController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACivPlayerController);
ACivPlayerController::~ACivPlayerController() {}
// ********** End Class ACivPlayerController *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivPlayerController_h__Script_SProjectNew_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACivPlayerController, ACivPlayerController::StaticClass, TEXT("ACivPlayerController"), &Z_Registration_Info_UClass_ACivPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACivPlayerController), 3822615919U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivPlayerController_h__Script_SProjectNew_1264984335(TEXT("/Script/SProjectNew"),
	Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivPlayerController_h__Script_SProjectNew_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivPlayerController_h__Script_SProjectNew_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
