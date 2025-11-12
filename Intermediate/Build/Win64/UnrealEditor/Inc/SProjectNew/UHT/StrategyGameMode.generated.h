// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variant_Strategy/StrategyGameMode.h"

#ifdef SPROJECTNEW_StrategyGameMode_generated_h
#error "StrategyGameMode.generated.h already included, missing '#pragma once' in StrategyGameMode.h"
#endif
#define SPROJECTNEW_StrategyGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AStrategyGameMode ********************************************************
SPROJECTNEW_API UClass* Z_Construct_UClass_AStrategyGameMode_NoRegister();

#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Variant_Strategy_StrategyGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStrategyGameMode(); \
	friend struct Z_Construct_UClass_AStrategyGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SPROJECTNEW_API UClass* Z_Construct_UClass_AStrategyGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AStrategyGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SProjectNew"), Z_Construct_UClass_AStrategyGameMode_NoRegister) \
	DECLARE_SERIALIZER(AStrategyGameMode)


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Variant_Strategy_StrategyGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStrategyGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AStrategyGameMode(AStrategyGameMode&&) = delete; \
	AStrategyGameMode(const AStrategyGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStrategyGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStrategyGameMode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStrategyGameMode) \
	NO_API virtual ~AStrategyGameMode();


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Variant_Strategy_StrategyGameMode_h_12_PROLOG
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Variant_Strategy_StrategyGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Variant_Strategy_StrategyGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Variant_Strategy_StrategyGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AStrategyGameMode;

// ********** End Class AStrategyGameMode **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Variant_Strategy_StrategyGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
