// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HexTileData.h"

#ifdef SPROJECTNEW_HexTileData_generated_h
#error "HexTileData.generated.h already included, missing '#pragma once' in HexTileData.h"
#endif
#define SPROJECTNEW_HexTileData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FHexTileData ******************************************************
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_HexTileData_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHexTileData_Statics; \
	SPROJECTNEW_API static class UScriptStruct* StaticStruct();


struct FHexTileData;
// ********** End ScriptStruct FHexTileData ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_HexTileData_h

// ********** Begin Enum ETileType *****************************************************************
#define FOREACH_ENUM_ETILETYPE(op) \
	op(ETileType::TT_Grass) \
	op(ETileType::TT_Desert) \
	op(ETileType::TT_Plains) \
	op(ETileType::TT_Tundra) \
	op(ETileType::TT_Snow) \
	op(ETileType::TT_Mountain) \
	op(ETileType::TT_Water) 

enum class ETileType : uint8;
template<> struct TIsUEnumClass<ETileType> { enum { Value = true }; };
template<> SPROJECTNEW_API UEnum* StaticEnum<ETileType>();
// ********** End Enum ETileType *******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
