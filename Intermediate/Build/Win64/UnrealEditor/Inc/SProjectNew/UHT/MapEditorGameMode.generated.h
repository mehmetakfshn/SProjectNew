// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MapEditorGameMode.h"

#ifdef SPROJECTNEW_MapEditorGameMode_generated_h
#error "MapEditorGameMode.generated.h already included, missing '#pragma once' in MapEditorGameMode.h"
#endif
#define SPROJECTNEW_MapEditorGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMapEditorGameMode *******************************************************
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_MapEditorGameMode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSaveCurrentMap);


SPROJECTNEW_API UClass* Z_Construct_UClass_AMapEditorGameMode_NoRegister();

#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_MapEditorGameMode_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMapEditorGameMode(); \
	friend struct Z_Construct_UClass_AMapEditorGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SPROJECTNEW_API UClass* Z_Construct_UClass_AMapEditorGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AMapEditorGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SProjectNew"), Z_Construct_UClass_AMapEditorGameMode_NoRegister) \
	DECLARE_SERIALIZER(AMapEditorGameMode)


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_MapEditorGameMode_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMapEditorGameMode(AMapEditorGameMode&&) = delete; \
	AMapEditorGameMode(const AMapEditorGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapEditorGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapEditorGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMapEditorGameMode) \
	NO_API virtual ~AMapEditorGameMode();


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_MapEditorGameMode_h_10_PROLOG
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_MapEditorGameMode_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_MapEditorGameMode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_MapEditorGameMode_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_MapEditorGameMode_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMapEditorGameMode;

// ********** End Class AMapEditorGameMode *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_MapEditorGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
