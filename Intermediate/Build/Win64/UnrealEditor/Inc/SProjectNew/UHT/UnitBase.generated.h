// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UnitBase.h"

#ifdef SPROJECTNEW_UnitBase_generated_h
#error "UnitBase.generated.h already included, missing '#pragma once' in UnitBase.h"
#endif
#define SPROJECTNEW_UnitBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UCivilizationManager;
class UPathfindingComponent;
struct FUnitData;

// ********** Begin Class AUnitBase ****************************************************************
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_UnitBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInitUnit); \
	DECLARE_FUNCTION(execMoveAlongPath); \
	DECLARE_FUNCTION(execResetForNewTurn); \
	DECLARE_FUNCTION(execSpendMovement); \
	DECLARE_FUNCTION(execCanMove);


SPROJECTNEW_API UClass* Z_Construct_UClass_AUnitBase_NoRegister();

#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_UnitBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUnitBase(); \
	friend struct Z_Construct_UClass_AUnitBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SPROJECTNEW_API UClass* Z_Construct_UClass_AUnitBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AUnitBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SProjectNew"), Z_Construct_UClass_AUnitBase_NoRegister) \
	DECLARE_SERIALIZER(AUnitBase)


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_UnitBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AUnitBase(AUnitBase&&) = delete; \
	AUnitBase(const AUnitBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnitBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnitBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUnitBase) \
	NO_API virtual ~AUnitBase();


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_UnitBase_h_12_PROLOG
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_UnitBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_UnitBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_UnitBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_UnitBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AUnitBase;

// ********** End Class AUnitBase ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_UnitBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
