// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CivilizationData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCivilizationData() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
SPROJECTNEW_API UClass* Z_Construct_UClass_UCivilizationData();
SPROJECTNEW_API UClass* Z_Construct_UClass_UCivilizationData_NoRegister();
SPROJECTNEW_API UScriptStruct* Z_Construct_UScriptStruct_FCivInfo();
UPackage* Z_Construct_UPackage__Script_SProjectNew();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FCivInfo **********************************************************
static_assert(std::is_polymorphic<FCivInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCivInfo cannot be polymorphic unless super FTableRowBase is polymorphic");
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Medeniyet verilerini tutan ana yap\xef\xbf\xbd.\n */" },
#endif
		{ "ModuleRelativePath", "Public/CivilizationData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Medeniyet verilerini tutan ana yap\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "Category", "CivInfo" },
		{ "ModuleRelativePath", "Public/CivilizationData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "CivInfo" },
		{ "ModuleRelativePath", "Public/CivilizationData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Leader_MetaData[] = {
		{ "Category", "CivInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbdrn: \"Republic of Turkey\"\n" },
#endif
		{ "ModuleRelativePath", "Public/CivilizationData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdrn: \"Republic of Turkey\"" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "CivInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbdrn: \"Mustafa Kemal Ataturk\"\n" },
#endif
		{ "ModuleRelativePath", "Public/CivilizationData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdrn: \"Mustafa Kemal Ataturk\"" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorPrimary_MetaData[] = {
		{ "Category", "CivInfo" },
		{ "ModuleRelativePath", "Public/CivilizationData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorSecondary_MetaData[] = {
		{ "Category", "CivInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Hex Kodu (String olarak: \"#FF0000\")\n" },
#endif
		{ "ModuleRelativePath", "Public/CivilizationData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hex Kodu (String olarak: \"#FF0000\")" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingTech_MetaData[] = {
		{ "Category", "CivInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Hex Kodu\n" },
#endif
		{ "ModuleRelativePath", "Public/CivilizationData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hex Kodu" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlagIcon_MetaData[] = {
		{ "Category", "CivInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- G\xef\xbf\xbdRSEL \xef\xbf\xbd\xef\xbf\xbd""ELER (YEN\xef\xbf\xbd) ---\n" },
#endif
		{ "ModuleRelativePath", "Public/CivilizationData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- G\xef\xbf\xbdRSEL \xef\xbf\xbd\xef\xbf\xbd""ELER (YEN\xef\xbf\xbd) ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaderPortrait_MetaData[] = {
		{ "Category", "CivInfo" },
		{ "ModuleRelativePath", "Public/CivilizationData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryColor_MetaData[] = {
		{ "Category", "CivInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbdlenmi\xef\xbf\xbd Renk (UI'da direkt kullanmak i\xef\xbf\xbdin)\n" },
#endif
		{ "ModuleRelativePath", "Public/CivilizationData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbdlenmi\xef\xbf\xbd Renk (UI'da direkt kullanmak i\xef\xbf\xbdin)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Leader;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ColorPrimary;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ColorSecondary;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StartingTech;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlagIcon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeaderPortrait;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCivInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCivInfo_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCivInfo, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCivInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCivInfo, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCivInfo_Statics::NewProp_Leader = { "Leader", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCivInfo, Leader), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Leader_MetaData), NewProp_Leader_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCivInfo_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCivInfo, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCivInfo_Statics::NewProp_ColorPrimary = { "ColorPrimary", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCivInfo, ColorPrimary), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorPrimary_MetaData), NewProp_ColorPrimary_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCivInfo_Statics::NewProp_ColorSecondary = { "ColorSecondary", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCivInfo, ColorSecondary), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorSecondary_MetaData), NewProp_ColorSecondary_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCivInfo_Statics::NewProp_StartingTech = { "StartingTech", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCivInfo, StartingTech), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingTech_MetaData), NewProp_StartingTech_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCivInfo_Statics::NewProp_FlagIcon = { "FlagIcon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCivInfo, FlagIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlagIcon_MetaData), NewProp_FlagIcon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCivInfo_Statics::NewProp_LeaderPortrait = { "LeaderPortrait", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCivInfo, LeaderPortrait), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaderPortrait_MetaData), NewProp_LeaderPortrait_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCivInfo_Statics::NewProp_PrimaryColor = { "PrimaryColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCivInfo, PrimaryColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrimaryColor_MetaData), NewProp_PrimaryColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCivInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCivInfo_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCivInfo_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCivInfo_Statics::NewProp_Leader,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCivInfo_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCivInfo_Statics::NewProp_ColorPrimary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCivInfo_Statics::NewProp_ColorSecondary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCivInfo_Statics::NewProp_StartingTech,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCivInfo_Statics::NewProp_FlagIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCivInfo_Statics::NewProp_LeaderPortrait,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCivInfo_Statics::NewProp_PrimaryColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCivInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCivInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SProjectNew,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"CivInfo",
	Z_Construct_UScriptStruct_FCivInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCivInfo_Statics::PropPointers),
	sizeof(FCivInfo),
	alignof(FCivInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Oyun i\xef\xbf\xbdinde aktif olarak kullan\xef\xbf\xbdlan Runtime Objesi\n */" },
#endif
		{ "IncludePath", "CivilizationData.h" },
		{ "ModuleRelativePath", "Public/CivilizationData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Oyun i\xef\xbf\xbdinde aktif olarak kullan\xef\xbf\xbdlan Runtime Objesi" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseInfo_MetaData[] = {
		{ "Category", "CivilizationData" },
		{ "ModuleRelativePath", "Public/CivilizationData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CivColor_MetaData[] = {
		{ "Category", "CivilizationData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ana Renk (FLinearColor hali)\n" },
#endif
		{ "ModuleRelativePath", "Public/CivilizationData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ana Renk (FLinearColor hali)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CivSecondaryColor_MetaData[] = {
		{ "Category", "CivilizationData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbdkincil Renk\n" },
#endif
		{ "ModuleRelativePath", "Public/CivilizationData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdkincil Renk" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CityNames_MetaData[] = {
		{ "Category", "CivilizationData" },
		{ "ModuleRelativePath", "Public/CivilizationData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowedUnitTypes_MetaData[] = {
		{ "Category", "CivilizationData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// CivGameMode.cpp bunu kullan\xef\xbf\xbdyor\n" },
#endif
		{ "ModuleRelativePath", "Public/CivilizationData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CivGameMode.cpp bunu kullan\xef\xbf\xbdyor" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CivColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CivSecondaryColor;
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCivilizationData_Statics::NewProp_BaseInfo = { "BaseInfo", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCivilizationData, BaseInfo), Z_Construct_UScriptStruct_FCivInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseInfo_MetaData), NewProp_BaseInfo_MetaData) }; // 2731982406
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCivilizationData_Statics::NewProp_CivColor = { "CivColor", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCivilizationData, CivColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CivColor_MetaData), NewProp_CivColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCivilizationData_Statics::NewProp_CivSecondaryColor = { "CivSecondaryColor", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCivilizationData, CivSecondaryColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CivSecondaryColor_MetaData), NewProp_CivSecondaryColor_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCivilizationData_Statics::NewProp_CityNames_Inner = { "CityNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCivilizationData_Statics::NewProp_CityNames = { "CityNames", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCivilizationData, CityNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CityNames_MetaData), NewProp_CityNames_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCivilizationData_Statics::NewProp_AllowedUnitTypes_Inner = { "AllowedUnitTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCivilizationData_Statics::NewProp_AllowedUnitTypes = { "AllowedUnitTypes", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCivilizationData, AllowedUnitTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowedUnitTypes_MetaData), NewProp_AllowedUnitTypes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCivilizationData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCivilizationData_Statics::NewProp_BaseInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCivilizationData_Statics::NewProp_CivColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCivilizationData_Statics::NewProp_CivSecondaryColor,
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
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCivInfo::StaticStruct, Z_Construct_UScriptStruct_FCivInfo_Statics::NewStructOps, TEXT("CivInfo"), &Z_Registration_Info_UScriptStruct_FCivInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCivInfo), 2731982406U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCivilizationData, UCivilizationData::StaticClass, TEXT("UCivilizationData"), &Z_Registration_Info_UClass_UCivilizationData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCivilizationData), 2720327362U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_CivilizationData_h__Script_SProjectNew_1296211919(TEXT("/Script/SProjectNew"),
	Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_CivilizationData_h__Script_SProjectNew_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_CivilizationData_h__Script_SProjectNew_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_CivilizationData_h__Script_SProjectNew_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_CivilizationData_h__Script_SProjectNew_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
