// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variant_Strategy/StrategyUnit.h"

#ifdef SPROJECTNEW_StrategyUnit_generated_h
#error "StrategyUnit.generated.h already included, missing '#pragma once' in StrategyUnit.h"
#endif
#define SPROJECTNEW_StrategyUnit_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AStrategyUnit;

// ********** Begin Delegate FOnUnitMoveCompletedDelegate ******************************************
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Variant_Strategy_StrategyUnit_h_13_DELEGATE \
SPROJECTNEW_API void FOnUnitMoveCompletedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnUnitMoveCompletedDelegate, AStrategyUnit* Unit);


// ********** End Delegate FOnUnitMoveCompletedDelegate ********************************************

// ********** Begin Class AStrategyUnit ************************************************************
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Variant_Strategy_StrategyUnit_h_22_CALLBACK_WRAPPERS
SPROJECTNEW_API UClass* Z_Construct_UClass_AStrategyUnit_NoRegister();

#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Variant_Strategy_StrategyUnit_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStrategyUnit(); \
	friend struct Z_Construct_UClass_AStrategyUnit_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SPROJECTNEW_API UClass* Z_Construct_UClass_AStrategyUnit_NoRegister(); \
public: \
	DECLARE_CLASS2(AStrategyUnit, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/SProjectNew"), Z_Construct_UClass_AStrategyUnit_NoRegister) \
	DECLARE_SERIALIZER(AStrategyUnit)


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Variant_Strategy_StrategyUnit_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AStrategyUnit(AStrategyUnit&&) = delete; \
	AStrategyUnit(const AStrategyUnit&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStrategyUnit); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStrategyUnit); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AStrategyUnit) \
	NO_API virtual ~AStrategyUnit();


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Variant_Strategy_StrategyUnit_h_19_PROLOG
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Variant_Strategy_StrategyUnit_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Variant_Strategy_StrategyUnit_h_22_CALLBACK_WRAPPERS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Variant_Strategy_StrategyUnit_h_22_INCLASS_NO_PURE_DECLS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Variant_Strategy_StrategyUnit_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AStrategyUnit;

// ********** End Class AStrategyUnit **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Variant_Strategy_StrategyUnit_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
