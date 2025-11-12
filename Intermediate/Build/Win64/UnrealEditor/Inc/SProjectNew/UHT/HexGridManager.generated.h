// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HexGridManager.h"

#ifdef SPROJECTNEW_HexGridManager_generated_h
#error "HexGridManager.generated.h already included, missing '#pragma once' in HexGridManager.h"
#endif
#define SPROJECTNEW_HexGridManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AUnitBase;
struct FTileData;

// ********** Begin ScriptStruct FTileData *********************************************************
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_HexGridManager_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTileData_Statics; \
	SPROJECTNEW_API static class UScriptStruct* StaticStruct();


struct FTileData;
// ********** End ScriptStruct FTileData ***********************************************************

// ********** Begin Class AHexGridManager **********************************************************
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_HexGridManager_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMoveUnit); \
	DECLARE_FUNCTION(execSpawnUnit); \
	DECLARE_FUNCTION(execUpdateHighlighter); \
	DECLARE_FUNCTION(execGetUnitAt); \
	DECLARE_FUNCTION(execGetTileData); \
	DECLARE_FUNCTION(execWorldToGrid); \
	DECLARE_FUNCTION(execGridToWorld);


SPROJECTNEW_API UClass* Z_Construct_UClass_AHexGridManager_NoRegister();

#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_HexGridManager_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHexGridManager(); \
	friend struct Z_Construct_UClass_AHexGridManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SPROJECTNEW_API UClass* Z_Construct_UClass_AHexGridManager_NoRegister(); \
public: \
	DECLARE_CLASS2(AHexGridManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SProjectNew"), Z_Construct_UClass_AHexGridManager_NoRegister) \
	DECLARE_SERIALIZER(AHexGridManager)


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_HexGridManager_h_43_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AHexGridManager(AHexGridManager&&) = delete; \
	AHexGridManager(const AHexGridManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHexGridManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHexGridManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHexGridManager) \
	NO_API virtual ~AHexGridManager();


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_HexGridManager_h_40_PROLOG
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_HexGridManager_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_HexGridManager_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_HexGridManager_h_43_INCLASS_NO_PURE_DECLS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_HexGridManager_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AHexGridManager;

// ********** End Class AHexGridManager ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_HexGridManager_h

// ********** Begin Enum ETileType *****************************************************************
#define FOREACH_ENUM_ETILETYPE(op) \
	op(ETileType::TT_Grass) \
	op(ETileType::TT_Water) \
	op(ETileType::TT_Mountain) \
	op(ETileType::TT_Desert) 

enum class ETileType : uint8;
template<> struct TIsUEnumClass<ETileType> { enum { Value = true }; };
template<> SPROJECTNEW_API UEnum* StaticEnum<ETileType>();
// ********** End Enum ETileType *******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
