// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MapEditorPlayerController.h"

#ifdef SPROJECTNEW_MapEditorPlayerController_generated_h
#error "MapEditorPlayerController.generated.h already included, missing '#pragma once' in MapEditorPlayerController.h"
#endif
#define SPROJECTNEW_MapEditorPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class ETileType : uint8;

// ********** Begin Class AMapEditorPlayerController ***********************************************
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_MapEditorPlayerController_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLoadMap); \
	DECLARE_FUNCTION(execGetSavedMapList); \
	DECLARE_FUNCTION(execSaveMapWithName); \
	DECLARE_FUNCTION(execSetRiverDrawMode); \
	DECLARE_FUNCTION(execSetCurrentHeightDelta); \
	DECLARE_FUNCTION(execSetCurrentTileType);


SPROJECTNEW_API UClass* Z_Construct_UClass_AMapEditorPlayerController_NoRegister();

#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_MapEditorPlayerController_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMapEditorPlayerController(); \
	friend struct Z_Construct_UClass_AMapEditorPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SPROJECTNEW_API UClass* Z_Construct_UClass_AMapEditorPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AMapEditorPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SProjectNew"), Z_Construct_UClass_AMapEditorPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AMapEditorPlayerController)


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_MapEditorPlayerController_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMapEditorPlayerController(AMapEditorPlayerController&&) = delete; \
	AMapEditorPlayerController(const AMapEditorPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMapEditorPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMapEditorPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMapEditorPlayerController) \
	NO_API virtual ~AMapEditorPlayerController();


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_MapEditorPlayerController_h_9_PROLOG
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_MapEditorPlayerController_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_MapEditorPlayerController_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_MapEditorPlayerController_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_MapEditorPlayerController_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMapEditorPlayerController;

// ********** End Class AMapEditorPlayerController *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_MapEditorPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
