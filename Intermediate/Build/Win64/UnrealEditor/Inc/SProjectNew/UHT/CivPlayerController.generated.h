// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CivPlayerController.h"

#ifdef SPROJECTNEW_CivPlayerController_generated_h
#error "CivPlayerController.generated.h already included, missing '#pragma once' in CivPlayerController.h"
#endif
#define SPROJECTNEW_CivPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class AUnitBase;

// ********** Begin Class ACivPlayerController *****************************************************
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivPlayerController_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Server_RequestEndTurn_Implementation(); \
	DECLARE_FUNCTION(execGetSelectedUnit); \
	DECLARE_FUNCTION(execHandleTileClick); \
	DECLARE_FUNCTION(execServer_RequestEndTurn);


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivPlayerController_h_11_CALLBACK_WRAPPERS
SPROJECTNEW_API UClass* Z_Construct_UClass_ACivPlayerController_NoRegister();

#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivPlayerController_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACivPlayerController(); \
	friend struct Z_Construct_UClass_ACivPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SPROJECTNEW_API UClass* Z_Construct_UClass_ACivPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ACivPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SProjectNew"), Z_Construct_UClass_ACivPlayerController_NoRegister) \
	DECLARE_SERIALIZER(ACivPlayerController)


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivPlayerController_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACivPlayerController(ACivPlayerController&&) = delete; \
	ACivPlayerController(const ACivPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACivPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACivPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACivPlayerController) \
	NO_API virtual ~ACivPlayerController();


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivPlayerController_h_8_PROLOG
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivPlayerController_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivPlayerController_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivPlayerController_h_11_CALLBACK_WRAPPERS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivPlayerController_h_11_INCLASS_NO_PURE_DECLS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivPlayerController_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACivPlayerController;

// ********** End Class ACivPlayerController *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
