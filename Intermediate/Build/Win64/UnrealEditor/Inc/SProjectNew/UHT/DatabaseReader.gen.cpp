// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Database/DatabaseReader.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDatabaseReader() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
SPROJECTNEW_API UClass* Z_Construct_UClass_UDatabaseReader();
SPROJECTNEW_API UClass* Z_Construct_UClass_UDatabaseReader_NoRegister();
SPROJECTNEW_API UScriptStruct* Z_Construct_UScriptStruct_FCivInfo();
UPackage* Z_Construct_UPackage__Script_SProjectNew();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FCivInfo **********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCivInfo;
class UScriptStruct* FCivInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCivInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCivInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCivInfo, (UObject*)Z_Construct_UPackage__Script_SProjectNew(), TEXT("CivInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FCivInfo.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCivInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Database/DatabaseReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "CivInfo" },
		{ "ModuleRelativePath", "Database/DatabaseReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Leader_MetaData[] = {
		{ "Category", "CivInfo" },
		{ "ModuleRelativePath", "Database/DatabaseReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorPrimary_MetaData[] = {
		{ "Category", "CivInfo" },
		{ "ModuleRelativePath", "Database/DatabaseReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorSecondary_MetaData[] = {
		{ "Category", "CivInfo" },
		{ "ModuleRelativePath", "Database/DatabaseReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingTech_MetaData[] = {
		{ "Category", "CivInfo" },
		{ "ModuleRelativePath", "Database/DatabaseReader.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Leader;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ColorPrimary;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ColorSecondary;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StartingTech;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCivInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCivInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCivInfo, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCivInfo_Statics::NewProp_Leader = { "Leader", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCivInfo, Leader), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Leader_MetaData), NewProp_Leader_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCivInfo_Statics::NewProp_ColorPrimary = { "ColorPrimary", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCivInfo, ColorPrimary), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorPrimary_MetaData), NewProp_ColorPrimary_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCivInfo_Statics::NewProp_ColorSecondary = { "ColorSecondary", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCivInfo, ColorSecondary), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorSecondary_MetaData), NewProp_ColorSecondary_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCivInfo_Statics::NewProp_StartingTech = { "StartingTech", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCivInfo, StartingTech), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingTech_MetaData), NewProp_StartingTech_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCivInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCivInfo_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCivInfo_Statics::NewProp_Leader,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCivInfo_Statics::NewProp_ColorPrimary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCivInfo_Statics::NewProp_ColorSecondary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCivInfo_Statics::NewProp_StartingTech,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCivInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCivInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SProjectNew,
	nullptr,
	&NewStructOps,
	"CivInfo",
	Z_Construct_UScriptStruct_FCivInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCivInfo_Statics::PropPointers),
	sizeof(FCivInfo),
	alignof(FCivInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCivInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCivInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCivInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FCivInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCivInfo.InnerSingleton, Z_Construct_UScriptStruct_FCivInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCivInfo.InnerSingleton;
}
// ********** End ScriptStruct FCivInfo ************************************************************

// ********** Begin Class UDatabaseReader Function BP_GetAllCivilizations **************************
struct Z_Construct_UFunction_UDatabaseReader_BP_GetAllCivilizations_Statics
{
	struct DatabaseReader_eventBP_GetAllCivilizations_Parms
	{
		TArray<FCivInfo> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Database" },
		{ "ModuleRelativePath", "Database/DatabaseReader.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDatabaseReader_BP_GetAllCivilizations_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCivInfo, METADATA_PARAMS(0, nullptr) }; // 1142681011
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDatabaseReader_BP_GetAllCivilizations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DatabaseReader_eventBP_GetAllCivilizations_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1142681011
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatabaseReader_BP_GetAllCivilizations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseReader_BP_GetAllCivilizations_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseReader_BP_GetAllCivilizations_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseReader_BP_GetAllCivilizations_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabaseReader_BP_GetAllCivilizations_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDatabaseReader, nullptr, "BP_GetAllCivilizations", Z_Construct_UFunction_UDatabaseReader_BP_GetAllCivilizations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseReader_BP_GetAllCivilizations_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDatabaseReader_BP_GetAllCivilizations_Statics::DatabaseReader_eventBP_GetAllCivilizations_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseReader_BP_GetAllCivilizations_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDatabaseReader_BP_GetAllCivilizations_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDatabaseReader_BP_GetAllCivilizations_Statics::DatabaseReader_eventBP_GetAllCivilizations_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDatabaseReader_BP_GetAllCivilizations()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatabaseReader_BP_GetAllCivilizations_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDatabaseReader::execBP_GetAllCivilizations)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FCivInfo>*)Z_Param__Result=UDatabaseReader::BP_GetAllCivilizations();
	P_NATIVE_END;
}
// ********** End Class UDatabaseReader Function BP_GetAllCivilizations ****************************

// ********** Begin Class UDatabaseReader Function GetUnitsForCiv **********************************
struct Z_Construct_UFunction_UDatabaseReader_GetUnitsForCiv_Statics
{
	struct DatabaseReader_eventGetUnitsForCiv_Parms
	{
		FString CivName;
		TArray<FString> OutUnitTypes;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Database|Civilizations" },
		{ "ModuleRelativePath", "Database/DatabaseReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CivName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CivName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutUnitTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutUnitTypes;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatabaseReader_GetUnitsForCiv_Statics::NewProp_CivName = { "CivName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DatabaseReader_eventGetUnitsForCiv_Parms, CivName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CivName_MetaData), NewProp_CivName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatabaseReader_GetUnitsForCiv_Statics::NewProp_OutUnitTypes_Inner = { "OutUnitTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDatabaseReader_GetUnitsForCiv_Statics::NewProp_OutUnitTypes = { "OutUnitTypes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DatabaseReader_eventGetUnitsForCiv_Parms, OutUnitTypes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDatabaseReader_GetUnitsForCiv_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DatabaseReader_eventGetUnitsForCiv_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDatabaseReader_GetUnitsForCiv_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DatabaseReader_eventGetUnitsForCiv_Parms), &Z_Construct_UFunction_UDatabaseReader_GetUnitsForCiv_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatabaseReader_GetUnitsForCiv_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseReader_GetUnitsForCiv_Statics::NewProp_CivName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseReader_GetUnitsForCiv_Statics::NewProp_OutUnitTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseReader_GetUnitsForCiv_Statics::NewProp_OutUnitTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatabaseReader_GetUnitsForCiv_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseReader_GetUnitsForCiv_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatabaseReader_GetUnitsForCiv_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDatabaseReader, nullptr, "GetUnitsForCiv", Z_Construct_UFunction_UDatabaseReader_GetUnitsForCiv_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseReader_GetUnitsForCiv_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDatabaseReader_GetUnitsForCiv_Statics::DatabaseReader_eventGetUnitsForCiv_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDatabaseReader_GetUnitsForCiv_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDatabaseReader_GetUnitsForCiv_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDatabaseReader_GetUnitsForCiv_Statics::DatabaseReader_eventGetUnitsForCiv_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDatabaseReader_GetUnitsForCiv()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatabaseReader_GetUnitsForCiv_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDatabaseReader::execGetUnitsForCiv)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CivName);
	P_GET_TARRAY_REF(FString,Z_Param_Out_OutUnitTypes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetUnitsForCiv(Z_Param_CivName,Z_Param_Out_OutUnitTypes);
	P_NATIVE_END;
}
// ********** End Class UDatabaseReader Function GetUnitsForCiv ************************************

// ********** Begin Class UDatabaseReader **********************************************************
void UDatabaseReader::StaticRegisterNativesUDatabaseReader()
{
	UClass* Class = UDatabaseReader::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BP_GetAllCivilizations", &UDatabaseReader::execBP_GetAllCivilizations },
		{ "GetUnitsForCiv", &UDatabaseReader::execGetUnitsForCiv },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDatabaseReader;
UClass* UDatabaseReader::GetPrivateStaticClass()
{
	using TClass = UDatabaseReader;
	if (!Z_Registration_Info_UClass_UDatabaseReader.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DatabaseReader"),
			Z_Registration_Info_UClass_UDatabaseReader.InnerSingleton,
			StaticRegisterNativesUDatabaseReader,
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
	return Z_Registration_Info_UClass_UDatabaseReader.InnerSingleton;
}
UClass* Z_Construct_UClass_UDatabaseReader_NoRegister()
{
	return UDatabaseReader::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDatabaseReader_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Database/DatabaseReader.h" },
		{ "ModuleRelativePath", "Database/DatabaseReader.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDatabaseReader_BP_GetAllCivilizations, "BP_GetAllCivilizations" }, // 515906072
		{ &Z_Construct_UFunction_UDatabaseReader_GetUnitsForCiv, "GetUnitsForCiv" }, // 2273460558
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatabaseReader>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDatabaseReader_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SProjectNew,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseReader_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatabaseReader_Statics::ClassParams = {
	&UDatabaseReader::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseReader_Statics::Class_MetaDataParams), Z_Construct_UClass_UDatabaseReader_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDatabaseReader()
{
	if (!Z_Registration_Info_UClass_UDatabaseReader.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatabaseReader.OuterSingleton, Z_Construct_UClass_UDatabaseReader_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDatabaseReader.OuterSingleton;
}
UDatabaseReader::UDatabaseReader(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDatabaseReader);
UDatabaseReader::~UDatabaseReader() {}
// ********** End Class UDatabaseReader ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Database_DatabaseReader_h__Script_SProjectNew_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCivInfo::StaticStruct, Z_Construct_UScriptStruct_FCivInfo_Statics::NewStructOps, TEXT("CivInfo"), &Z_Registration_Info_UScriptStruct_FCivInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCivInfo), 1142681011U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDatabaseReader, UDatabaseReader::StaticClass, TEXT("UDatabaseReader"), &Z_Registration_Info_UClass_UDatabaseReader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatabaseReader), 1429267644U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Database_DatabaseReader_h__Script_SProjectNew_961853557(TEXT("/Script/SProjectNew"),
	Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Database_DatabaseReader_h__Script_SProjectNew_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Database_DatabaseReader_h__Script_SProjectNew_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Database_DatabaseReader_h__Script_SProjectNew_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Database_DatabaseReader_h__Script_SProjectNew_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
