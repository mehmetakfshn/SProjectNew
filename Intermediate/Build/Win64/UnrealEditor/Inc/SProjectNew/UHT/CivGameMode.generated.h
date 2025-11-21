// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CivGameMode.h"

#ifdef SPROJECTNEW_CivGameMode_generated_h
#error "CivGameMode.generated.h already included, missing '#pragma once' in CivGameMode.h"
#endif
#define SPROJECTNEW_CivGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AUnitBase;

// ********** Begin Class ACivGameMode *************************************************************
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivGameMode_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSpawnUnitAtTile); \
	DECLARE_FUNCTION(execLoadGameFromSlot); \
	DECLARE_FUNCTION(execSaveGameToSlot); \
	DECLARE_FUNCTION(execEndPlayerTurn);


SPROJECTNEW_API UClass* Z_Construct_UClass_ACivGameMode_NoRegister();

#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivGameMode_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACivGameMode(); \
	friend struct Z_Construct_UClass_ACivGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SPROJECTNEW_API UClass* Z_Construct_UClass_ACivGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ACivGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SProjectNew"), Z_Construct_UClass_ACivGameMode_NoRegister) \
	DECLARE_SERIALIZER(ACivGameMode)


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivGameMode_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACivGameMode(ACivGameMode&&) = delete; \
	ACivGameMode(const ACivGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACivGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACivGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACivGameMode) \
	NO_API virtual ~ACivGameMode();


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivGameMode_h_17_PROLOG
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivGameMode_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivGameMode_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivGameMode_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivGameMode_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACivGameMode;

// ********** End Class ACivGameMode ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
