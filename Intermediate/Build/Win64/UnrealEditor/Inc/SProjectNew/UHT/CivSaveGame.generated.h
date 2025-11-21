// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CivSaveGame.h"

#ifdef SPROJECTNEW_CivSaveGame_generated_h
#error "CivSaveGame.generated.h already included, missing '#pragma once' in CivSaveGame.h"
#endif
#define SPROJECTNEW_CivSaveGame_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FUnitSaveData *****************************************************
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivSaveGame_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUnitSaveData_Statics; \
	SPROJECTNEW_API static class UScriptStruct* StaticStruct();


struct FUnitSaveData;
// ********** End ScriptStruct FUnitSaveData *******************************************************

// ********** Begin Class UCivSaveGame *************************************************************
SPROJECTNEW_API UClass* Z_Construct_UClass_UCivSaveGame_NoRegister();

#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivSaveGame_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCivSaveGame(); \
	friend struct Z_Construct_UClass_UCivSaveGame_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SPROJECTNEW_API UClass* Z_Construct_UClass_UCivSaveGame_NoRegister(); \
public: \
	DECLARE_CLASS2(UCivSaveGame, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SProjectNew"), Z_Construct_UClass_UCivSaveGame_NoRegister) \
	DECLARE_SERIALIZER(UCivSaveGame)


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivSaveGame_h_42_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCivSaveGame(UCivSaveGame&&) = delete; \
	UCivSaveGame(const UCivSaveGame&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCivSaveGame); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCivSaveGame); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCivSaveGame) \
	NO_API virtual ~UCivSaveGame();


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivSaveGame_h_39_PROLOG
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivSaveGame_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivSaveGame_h_42_INCLASS_NO_PURE_DECLS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivSaveGame_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCivSaveGame;

// ********** End Class UCivSaveGame ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivSaveGame_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
