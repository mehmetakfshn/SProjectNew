// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HexEnums.h"

#ifdef SPROJECTNEW_HexEnums_generated_h
#error "HexEnums.generated.h already included, missing '#pragma once' in HexEnums.h"
#endif
#define SPROJECTNEW_HexEnums_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_HexEnums_h

// ********** Begin Enum ERiverEdge ****************************************************************
#define FOREACH_ENUM_ERIVEREDGE(op) \
	op(ERiverEdge::NE) \
	op(ERiverEdge::E) \
	op(ERiverEdge::SE) \
	op(ERiverEdge::SW) \
	op(ERiverEdge::W) \
	op(ERiverEdge::NW) 

enum class ERiverEdge : uint8;
template<> struct TIsUEnumClass<ERiverEdge> { enum { Value = true }; };
template<> SPROJECTNEW_API UEnum* StaticEnum<ERiverEdge>();
// ********** End Enum ERiverEdge ******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
