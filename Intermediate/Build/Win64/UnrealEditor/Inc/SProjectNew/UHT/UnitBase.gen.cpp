// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnitBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUnitBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
SPROJECTNEW_API UClass* Z_Construct_UClass_AUnitBase();
SPROJECTNEW_API UClass* Z_Construct_UClass_AUnitBase_NoRegister();
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Birimin hareket edip edemeyece\xef\xbf\xbdini kontrol eder */" },
#endif
		{ "ModuleRelativePath", "UnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Birimin hareket edip edemeyece\xef\xbf\xbdini kontrol eder" },
#endif
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

// ********** Begin Class AUnitBase Function ResetForNewTurn ***************************************
struct Z_Construct_UFunction_AUnitBase_ResetForNewTurn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Unit|Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Yeni tur ba\xef\xbf\xbdlad\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdnda puanlar\xef\xbf\xbd yeniler */" },
#endif
		{ "ModuleRelativePath", "UnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Yeni tur ba\xef\xbf\xbdlad\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbdnda puanlar\xef\xbf\xbd yeniler" },
#endif
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

// ********** Begin Class AUnitBase Function SetGridCoord ******************************************
struct Z_Construct_UFunction_AUnitBase_SetGridCoord_Statics
{
	struct UnitBase_eventSetGridCoord_Parms
	{
		FIntPoint NewCoord;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Unit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Bu birimin \xef\xbf\xbdzgara koordinat\xef\xbf\xbdn\xef\xbf\xbd ayarlar (hareket i\xef\xbf\xbdin kullan\xef\xbf\xbdlacak).\n\x09 * @param NewCoord Yeni koordinat.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "UnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bu birimin \xef\xbf\xbdzgara koordinat\xef\xbf\xbdn\xef\xbf\xbd ayarlar (hareket i\xef\xbf\xbdin kullan\xef\xbf\xbdlacak).\n@param NewCoord Yeni koordinat." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewCoord;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUnitBase_SetGridCoord_Statics::NewProp_NewCoord = { "NewCoord", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UnitBase_eventSetGridCoord_Parms, NewCoord), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUnitBase_SetGridCoord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUnitBase_SetGridCoord_Statics::NewProp_NewCoord,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitBase_SetGridCoord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUnitBase_SetGridCoord_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AUnitBase, nullptr, "SetGridCoord", Z_Construct_UFunction_AUnitBase_SetGridCoord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitBase_SetGridCoord_Statics::PropPointers), sizeof(Z_Construct_UFunction_AUnitBase_SetGridCoord_Statics::UnitBase_eventSetGridCoord_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AUnitBase_SetGridCoord_Statics::Function_MetaDataParams), Z_Construct_UFunction_AUnitBase_SetGridCoord_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AUnitBase_SetGridCoord_Statics::UnitBase_eventSetGridCoord_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AUnitBase_SetGridCoord()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUnitBase_SetGridCoord_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AUnitBase::execSetGridCoord)
{
	P_GET_STRUCT(FIntPoint,Z_Param_NewCoord);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGridCoord(Z_Param_NewCoord);
	P_NATIVE_END;
}
// ********** End Class AUnitBase Function SetGridCoord ********************************************

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
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Birim hareket etti\xef\xbf\xbdinde puan\xef\xbf\xbdn\xef\xbf\xbd harcar */" },
#endif
		{ "ModuleRelativePath", "UnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Birim hareket etti\xef\xbf\xbdinde puan\xef\xbf\xbdn\xef\xbf\xbd harcar" },
#endif
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
		{ "ResetForNewTurn", &AUnitBase::execResetForNewTurn },
		{ "SetGridCoord", &AUnitBase::execSetGridCoord },
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
		{ "IncludePath", "UnitBase.h" },
		{ "ModuleRelativePath", "UnitBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnitMesh_MetaData[] = {
		{ "Category", "Unit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Birimin g\xef\xbf\xbdr\xef\xbf\xbdn\xef\xbf\xbdr modeli (mesh) */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Birimin g\xef\xbf\xbdr\xef\xbf\xbdn\xef\xbf\xbdr modeli (mesh)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGridCoord_MetaData[] = {
		{ "Category", "Unit" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Birimin o an bulundu\xef\xbf\xbdu \xef\xbf\xbdzgara koordinat\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "UnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Birimin o an bulundu\xef\xbf\xbdu \xef\xbf\xbdzgara koordinat\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMovementPoints_MetaData[] = {
		{ "Category", "Unit|Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Birimin her tur ba\xef\xbf\xbd\xef\xbf\xbdnda sahip olaca\xef\xbf\xbd\xef\xbf\xbd maksimum puan (\xef\xbf\xbdrn: 2) */" },
#endif
		{ "ModuleRelativePath", "UnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Birimin her tur ba\xef\xbf\xbd\xef\xbf\xbdnda sahip olaca\xef\xbf\xbd\xef\xbf\xbd maksimum puan (\xef\xbf\xbdrn: 2)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMovementPoints_MetaData[] = {
		{ "Category", "Unit|Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Birimin bu turda kalan mevcut puan\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "UnitBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Birimin bu turda kalan mevcut puan\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnitMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentGridCoord;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMovementPoints;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentMovementPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AUnitBase_CanMove, "CanMove" }, // 577122246
		{ &Z_Construct_UFunction_AUnitBase_ResetForNewTurn, "ResetForNewTurn" }, // 2518685514
		{ &Z_Construct_UFunction_AUnitBase_SetGridCoord, "SetGridCoord" }, // 102280807
		{ &Z_Construct_UFunction_AUnitBase_SpendMovement, "SpendMovement" }, // 3463680247
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnitBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnitBase_Statics::NewProp_UnitMesh = { "UnitMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnitBase, UnitMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnitMesh_MetaData), NewProp_UnitMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUnitBase_Statics::NewProp_CurrentGridCoord = { "CurrentGridCoord", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnitBase, CurrentGridCoord), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentGridCoord_MetaData), NewProp_CurrentGridCoord_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AUnitBase_Statics::NewProp_MaxMovementPoints = { "MaxMovementPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnitBase, MaxMovementPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMovementPoints_MetaData), NewProp_MaxMovementPoints_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AUnitBase_Statics::NewProp_CurrentMovementPoints = { "CurrentMovementPoints", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUnitBase, CurrentMovementPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMovementPoints_MetaData), NewProp_CurrentMovementPoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUnitBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnitBase_Statics::NewProp_UnitMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnitBase_Statics::NewProp_CurrentGridCoord,
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
		{ Z_Construct_UClass_AUnitBase, AUnitBase::StaticClass, TEXT("AUnitBase"), &Z_Registration_Info_UClass_AUnitBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnitBase), 2332436095U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_UnitBase_h__Script_SProjectNew_3244589055(TEXT("/Script/SProjectNew"),
	Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_UnitBase_h__Script_SProjectNew_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_UnitBase_h__Script_SProjectNew_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
