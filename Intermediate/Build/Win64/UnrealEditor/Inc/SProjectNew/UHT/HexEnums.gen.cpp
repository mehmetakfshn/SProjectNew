// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HexEnums.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHexEnums() {}

// ********** Begin Cross Module References ********************************************************
SPROJECTNEW_API UEnum* Z_Construct_UEnum_SProjectNew_ERiverEdge();
UPackage* Z_Construct_UPackage__Script_SProjectNew();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ERiverEdge ****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERiverEdge;
static UEnum* ERiverEdge_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERiverEdge.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERiverEdge.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SProjectNew_ERiverEdge, (UObject*)Z_Construct_UPackage__Script_SProjectNew(), TEXT("ERiverEdge"));
	}
	return Z_Registration_Info_UEnum_ERiverEdge.OuterSingleton;
}
template<> SPROJECTNEW_API UEnum* StaticEnum<ERiverEdge>()
{
	return ERiverEdge_StaticEnum();
}
struct Z_Construct_UEnum_SProjectNew_ERiverEdge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "E.DisplayName", "East" },
		{ "E.Name", "ERiverEdge::E" },
		{ "ModuleRelativePath", "Public/HexEnums.h" },
		{ "NE.DisplayName", "NorthEast" },
		{ "NE.Name", "ERiverEdge::NE" },
		{ "NW.DisplayName", "NorthWest" },
		{ "NW.Name", "ERiverEdge::NW" },
		{ "SE.DisplayName", "SouthEast" },
		{ "SE.Name", "ERiverEdge::SE" },
		{ "SW.DisplayName", "SouthWest" },
		{ "SW.Name", "ERiverEdge::SW" },
		{ "W.DisplayName", "West" },
		{ "W.Name", "ERiverEdge::W" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERiverEdge::NE", (int64)ERiverEdge::NE },
		{ "ERiverEdge::E", (int64)ERiverEdge::E },
		{ "ERiverEdge::SE", (int64)ERiverEdge::SE },
		{ "ERiverEdge::SW", (int64)ERiverEdge::SW },
		{ "ERiverEdge::W", (int64)ERiverEdge::W },
		{ "ERiverEdge::NW", (int64)ERiverEdge::NW },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SProjectNew_ERiverEdge_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SProjectNew,
	nullptr,
	"ERiverEdge",
	"ERiverEdge",
	Z_Construct_UEnum_SProjectNew_ERiverEdge_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SProjectNew_ERiverEdge_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SProjectNew_ERiverEdge_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SProjectNew_ERiverEdge_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SProjectNew_ERiverEdge()
{
	if (!Z_Registration_Info_UEnum_ERiverEdge.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERiverEdge.InnerSingleton, Z_Construct_UEnum_SProjectNew_ERiverEdge_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERiverEdge.InnerSingleton;
}
// ********** End Enum ERiverEdge ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_HexEnums_h__Script_SProjectNew_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERiverEdge_StaticEnum, TEXT("ERiverEdge"), &Z_Registration_Info_UEnum_ERiverEdge, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1881906328U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_HexEnums_h__Script_SProjectNew_280450113(TEXT("/Script/SProjectNew"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_HexEnums_h__Script_SProjectNew_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_HexEnums_h__Script_SProjectNew_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
