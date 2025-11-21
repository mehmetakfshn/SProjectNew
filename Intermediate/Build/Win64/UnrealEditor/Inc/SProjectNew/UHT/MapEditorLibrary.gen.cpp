// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MapEditorLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMapEditorLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
SPROJECTNEW_API UClass* Z_Construct_UClass_UMapEditorLibrary();
SPROJECTNEW_API UClass* Z_Construct_UClass_UMapEditorLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_SProjectNew();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMapEditorLibrary Function GetAllMapNames ********************************
struct Z_Construct_UFunction_UMapEditorLibrary_GetAllMapNames_Statics
{
	struct MapEditorLibrary_eventGetAllMapNames_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map Editor|Database" },
		{ "ModuleRelativePath", "Public/MapEditorLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMapEditorLibrary_GetAllMapNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMapEditorLibrary_GetAllMapNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapEditorLibrary_eventGetAllMapNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapEditorLibrary_GetAllMapNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapEditorLibrary_GetAllMapNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapEditorLibrary_GetAllMapNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapEditorLibrary_GetAllMapNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapEditorLibrary_GetAllMapNames_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMapEditorLibrary, nullptr, "GetAllMapNames", Z_Construct_UFunction_UMapEditorLibrary_GetAllMapNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapEditorLibrary_GetAllMapNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapEditorLibrary_GetAllMapNames_Statics::MapEditorLibrary_eventGetAllMapNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapEditorLibrary_GetAllMapNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapEditorLibrary_GetAllMapNames_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMapEditorLibrary_GetAllMapNames_Statics::MapEditorLibrary_eventGetAllMapNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapEditorLibrary_GetAllMapNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapEditorLibrary_GetAllMapNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapEditorLibrary::execGetAllMapNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=UMapEditorLibrary::GetAllMapNames();
	P_NATIVE_END;
}
// ********** End Class UMapEditorLibrary Function GetAllMapNames **********************************

// ********** Begin Class UMapEditorLibrary Function GetSavedMapList *******************************
struct Z_Construct_UFunction_UMapEditorLibrary_GetSavedMapList_Statics
{
	struct MapEditorLibrary_eventGetSavedMapList_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Map Editor" },
		{ "ModuleRelativePath", "Public/MapEditorLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMapEditorLibrary_GetSavedMapList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMapEditorLibrary_GetSavedMapList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MapEditorLibrary_eventGetSavedMapList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMapEditorLibrary_GetSavedMapList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapEditorLibrary_GetSavedMapList_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMapEditorLibrary_GetSavedMapList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapEditorLibrary_GetSavedMapList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMapEditorLibrary_GetSavedMapList_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMapEditorLibrary, nullptr, "GetSavedMapList", Z_Construct_UFunction_UMapEditorLibrary_GetSavedMapList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMapEditorLibrary_GetSavedMapList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMapEditorLibrary_GetSavedMapList_Statics::MapEditorLibrary_eventGetSavedMapList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMapEditorLibrary_GetSavedMapList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMapEditorLibrary_GetSavedMapList_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMapEditorLibrary_GetSavedMapList_Statics::MapEditorLibrary_eventGetSavedMapList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMapEditorLibrary_GetSavedMapList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMapEditorLibrary_GetSavedMapList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMapEditorLibrary::execGetSavedMapList)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=UMapEditorLibrary::GetSavedMapList();
	P_NATIVE_END;
}
// ********** End Class UMapEditorLibrary Function GetSavedMapList *********************************

// ********** Begin Class UMapEditorLibrary ********************************************************
void UMapEditorLibrary::StaticRegisterNativesUMapEditorLibrary()
{
	UClass* Class = UMapEditorLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAllMapNames", &UMapEditorLibrary::execGetAllMapNames },
		{ "GetSavedMapList", &UMapEditorLibrary::execGetSavedMapList },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMapEditorLibrary;
UClass* UMapEditorLibrary::GetPrivateStaticClass()
{
	using TClass = UMapEditorLibrary;
	if (!Z_Registration_Info_UClass_UMapEditorLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MapEditorLibrary"),
			Z_Registration_Info_UClass_UMapEditorLibrary.InnerSingleton,
			StaticRegisterNativesUMapEditorLibrary,
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
	return Z_Registration_Info_UClass_UMapEditorLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UMapEditorLibrary_NoRegister()
{
	return UMapEditorLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMapEditorLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MapEditorLibrary.h" },
		{ "ModuleRelativePath", "Public/MapEditorLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMapEditorLibrary_GetAllMapNames, "GetAllMapNames" }, // 1883757121
		{ &Z_Construct_UFunction_UMapEditorLibrary_GetSavedMapList, "GetSavedMapList" }, // 2254572410
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMapEditorLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMapEditorLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SProjectNew,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMapEditorLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMapEditorLibrary_Statics::ClassParams = {
	&UMapEditorLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMapEditorLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UMapEditorLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMapEditorLibrary()
{
	if (!Z_Registration_Info_UClass_UMapEditorLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMapEditorLibrary.OuterSingleton, Z_Construct_UClass_UMapEditorLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMapEditorLibrary.OuterSingleton;
}
UMapEditorLibrary::UMapEditorLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMapEditorLibrary);
UMapEditorLibrary::~UMapEditorLibrary() {}
// ********** End Class UMapEditorLibrary **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_MapEditorLibrary_h__Script_SProjectNew_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMapEditorLibrary, UMapEditorLibrary::StaticClass, TEXT("UMapEditorLibrary"), &Z_Registration_Info_UClass_UMapEditorLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMapEditorLibrary), 3056920737U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_MapEditorLibrary_h__Script_SProjectNew_4003809805(TEXT("/Script/SProjectNew"),
	Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_MapEditorLibrary_h__Script_SProjectNew_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_MapEditorLibrary_h__Script_SProjectNew_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
