// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "City.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCity() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
ENGINE_API UClass* Z_Construct_UClass_AActor();
SPROJECTNEW_API UClass* Z_Construct_UClass_ACity();
SPROJECTNEW_API UClass* Z_Construct_UClass_ACity_NoRegister();
UPackage* Z_Construct_UPackage__Script_SProjectNew();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACity ********************************************************************
void ACity::StaticRegisterNativesACity()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACity;
UClass* ACity::GetPrivateStaticClass()
{
	using TClass = ACity;
	if (!Z_Registration_Info_UClass_ACity.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("City"),
			Z_Registration_Info_UClass_ACity.InnerSingleton,
			StaticRegisterNativesACity,
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
	return Z_Registration_Info_UClass_ACity.InnerSingleton;
}
UClass* Z_Construct_UClass_ACity_NoRegister()
{
	return ACity::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "City.h" },
		{ "ModuleRelativePath", "Public/City.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CityName_MetaData[] = {
		{ "Category", "City" },
		{ "ModuleRelativePath", "Public/City.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCivIndex_MetaData[] = {
		{ "Category", "City" },
		{ "ModuleRelativePath", "Public/City.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridCoords_MetaData[] = {
		{ "Category", "City" },
		{ "ModuleRelativePath", "Public/City.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CityName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OwnerCivIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridCoords;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACity>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACity_Statics::NewProp_CityName = { "CityName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACity, CityName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CityName_MetaData), NewProp_CityName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACity_Statics::NewProp_OwnerCivIndex = { "OwnerCivIndex", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACity, OwnerCivIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerCivIndex_MetaData), NewProp_OwnerCivIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACity_Statics::NewProp_GridCoords = { "GridCoords", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACity, GridCoords), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridCoords_MetaData), NewProp_GridCoords_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACity_Statics::NewProp_CityName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACity_Statics::NewProp_OwnerCivIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACity_Statics::NewProp_GridCoords,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACity_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACity_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SProjectNew,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACity_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACity_Statics::ClassParams = {
	&ACity::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACity_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACity_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACity_Statics::Class_MetaDataParams), Z_Construct_UClass_ACity_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACity()
{
	if (!Z_Registration_Info_UClass_ACity.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACity.OuterSingleton, Z_Construct_UClass_ACity_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACity.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACity);
ACity::~ACity() {}
// ********** End Class ACity **********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_City_h__Script_SProjectNew_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACity, ACity::StaticClass, TEXT("ACity"), &Z_Registration_Info_UClass_ACity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACity), 1359237518U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_City_h__Script_SProjectNew_3948249382(TEXT("/Script/SProjectNew"),
	Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_City_h__Script_SProjectNew_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_City_h__Script_SProjectNew_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
