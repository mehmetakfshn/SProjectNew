// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CivGameState.h"

#ifdef SPROJECTNEW_CivGameState_generated_h
#error "CivGameState.generated.h already included, missing '#pragma once' in CivGameState.h"
#endif
#define SPROJECTNEW_CivGameState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACivGameState ************************************************************
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivGameState_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCurrentTurn); \
	DECLARE_FUNCTION(execGetCurrentDateText); \
	DECLARE_FUNCTION(execGetCurrentTurn);


SPROJECTNEW_API UClass* Z_Construct_UClass_ACivGameState_NoRegister();

#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivGameState_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACivGameState(); \
	friend struct Z_Construct_UClass_ACivGameState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SPROJECTNEW_API UClass* Z_Construct_UClass_ACivGameState_NoRegister(); \
public: \
	DECLARE_CLASS2(ACivGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SProjectNew"), Z_Construct_UClass_ACivGameState_NoRegister) \
	DECLARE_SERIALIZER(ACivGameState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentTurnNumber=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentTurnNumber	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivGameState_h_10_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACivGameState(ACivGameState&&) = delete; \
	ACivGameState(const ACivGameState&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACivGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACivGameState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACivGameState) \
	NO_API virtual ~ACivGameState();


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivGameState_h_7_PROLOG
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivGameState_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivGameState_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivGameState_h_10_INCLASS_NO_PURE_DECLS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivGameState_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACivGameState;

// ********** End Class ACivGameState **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivGameState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
