// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CivilizationData.h"
#include "Database/DatabaseReader.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCivilizationData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
SPROJECTNEW_API UClass* Z_Construct_UClass_UCivilizationData();
SPROJECTNEW_API UClass* Z_Construct_UClass_UCivilizationData_NoRegister();
SPROJECTNEW_API UScriptStruct* Z_Construct_UScriptStruct_FCivInfo();
UPackage* Z_Construct_UPackage__Script_SProjectNew();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCivilizationData ********************************************************
void UCivilizationData::StaticRegisterNativesUCivilizationData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCivilizationData;
UClass* UCivilizationData::GetPrivateStaticClass()
{
	using TClass = UCivilizationData;
	if (!Z_Registration_Info_UClass_UCivilizationData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CivilizationData"),
			Z_Registration_Info_UClass_UCivilizationData.InnerSingleton,
			StaticRegisterNativesUCivilizationData,
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
	return Z_Registration_Info_UClass_UCivilizationData.InnerSingleton;
}
UClass* Z_Construct_UClass_UCivilizationData_NoRegister()
{
	return UCivilizationData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCivilizationData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CivilizationData.h" },
		{ "ModuleRelativePath", "Public/CivilizationData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseInfo_MetaData[] = {
		{ "Category", "CivilizationData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// SQL'den gelen ham civ bilgisi\n" },
#endif
		{ "ModuleRelativePath", "Public/CivilizationData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SQL'den gelen ham civ bilgisi" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CivColor_MetaData[] = {
		{ "Category", "CivilizationData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ana ve ikincil renk (UI i\xef\xbf\xbdin)\n" },
#endif
		{ "ModuleRelativePath", "Public/CivilizationData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ana ve ikincil renk (UI i\xef\xbf\xbdin)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CivSecondaryColor_MetaData[] = {
		{ "Category", "CivilizationData" },
		{ "ModuleRelativePath", "Public/CivilizationData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapitalName_MetaData[] = {
		{ "Category", "CivilizationData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbdleride dolduraca\xef\xbf\xbd\xef\xbf\xbdm\xef\xbf\xbdz alanlar (\xef\xbf\xbdimdilik bo\xef\xbf\xbd kals\xef\xbf\xbdn)\n" },
#endif
		{ "ModuleRelativePath", "Public/CivilizationData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdleride dolduraca\xef\xbf\xbd\xef\xbf\xbdm\xef\xbf\xbdz alanlar (\xef\xbf\xbdimdilik bo\xef\xbf\xbd kals\xef\xbf\xbdn)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CityNames_MetaData[] = {
		{ "Category", "CivilizationData" },
		{ "ModuleRelativePath", "Public/CivilizationData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowedUnitTypes_MetaData[] = {
		{ "Category", "CivilizationData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Bu civin \xef\xbf\xbdretebilece\xef\xbf\xbdi unit t\xef\xbf\xbdrleri (CivUnits tablosundan)\n" },
#endif
		{ "ModuleRelativePath", "Public/CivilizationData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bu civin \xef\xbf\xbdretebilece\xef\xbf\xbdi unit t\xef\xbf\xbdrleri (CivUnits tablosundan)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CivColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CivSecondaryColor;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CapitalName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CityNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CityNames;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AllowedUnitTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedUnitTypes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCivilizationData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCivilizationData_Statics::NewProp_BaseInfo = { "BaseInfo", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCivilizationData, BaseInfo), Z_Construct_UScriptStruct_FCivInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseInfo_MetaData), NewProp_BaseInfo_MetaData) }; // 1142681011
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCivilizationData_Statics::NewProp_CivColor = { "CivColor", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCivilizationData, CivColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CivColor_MetaData), NewProp_CivColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCivilizationData_Statics::NewProp_CivSecondaryColor = { "CivSecondaryColor", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCivilizationData, CivSecondaryColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CivSecondaryColor_MetaData), NewProp_CivSecondaryColor_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCivilizationData_Statics::NewProp_CapitalName = { "CapitalName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCivilizationData, CapitalName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapitalName_MetaData), NewProp_CapitalName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCivilizationData_Statics::NewProp_CityNames_Inner = { "CityNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCivilizationData_Statics::NewProp_CityNames = { "CityNames", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCivilizationData, CityNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CityNames_MetaData), NewProp_CityNames_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCivilizationData_Statics::NewProp_AllowedUnitTypes_Inner = { "AllowedUnitTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCivilizationData_Statics::NewProp_AllowedUnitTypes = { "AllowedUnitTypes", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCivilizationData, AllowedUnitTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowedUnitTypes_MetaData), NewProp_AllowedUnitTypes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCivilizationData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCivilizationData_Statics::NewProp_BaseInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCivilizationData_Statics::NewProp_CivColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCivilizationData_Statics::NewProp_CivSecondaryColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCivilizationData_Statics::NewProp_CapitalName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCivilizationData_Statics::NewProp_CityNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCivilizationData_Statics::NewProp_CityNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCivilizationData_Statics::NewProp_AllowedUnitTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCivilizationData_Statics::NewProp_AllowedUnitTypes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCivilizationData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCivilizationData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SProjectNew,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCivilizationData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCivilizationData_Statics::ClassParams = {
	&UCivilizationData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCivilizationData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCivilizationData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCivilizationData_Statics::Class_MetaDataParams), Z_Construct_UClass_UCivilizationData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCivilizationData()
{
	if (!Z_Registration_Info_UClass_UCivilizationData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCivilizationData.OuterSingleton, Z_Construct_UClass_UCivilizationData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCivilizationData.OuterSingleton;
}
UCivilizationData::UCivilizationData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCivilizationData);
UCivilizationData::~UCivilizationData() {}
// ********** End Class UCivilizationData **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_CivilizationData_h__Script_SProjectNew_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCivilizationData, UCivilizationData::StaticClass, TEXT("UCivilizationData"), &Z_Registration_Info_UClass_UCivilizationData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCivilizationData), 3876442135U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_CivilizationData_h__Script_SProjectNew_3623124130(TEXT("/Script/SProjectNew"),
	Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_CivilizationData_h__Script_SProjectNew_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_CivilizationData_h__Script_SProjectNew_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
