// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variant_Strategy/UI/StrategyUI.h"

#ifdef SPROJECTNEW_StrategyUI_generated_h
#error "StrategyUI.generated.h already included, missing '#pragma once' in StrategyUI.h"
#endif
#define SPROJECTNEW_StrategyUI_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStrategyUI **************************************************************
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Variant_Strategy_UI_StrategyUI_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSelectedUnitsCount);


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Variant_Strategy_UI_StrategyUI_h_16_CALLBACK_WRAPPERS
SPROJECTNEW_API UClass* Z_Construct_UClass_UStrategyUI_NoRegister();

#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Variant_Strategy_UI_StrategyUI_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStrategyUI(); \
	friend struct Z_Construct_UClass_UStrategyUI_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SPROJECTNEW_API UClass* Z_Construct_UClass_UStrategyUI_NoRegister(); \
public: \
	DECLARE_CLASS2(UStrategyUI, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SProjectNew"), Z_Construct_UClass_UStrategyUI_NoRegister) \
	DECLARE_SERIALIZER(UStrategyUI)


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Variant_Strategy_UI_StrategyUI_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStrategyUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStrategyUI(UStrategyUI&&) = delete; \
	UStrategyUI(const UStrategyUI&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStrategyUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStrategyUI); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStrategyUI) \
	NO_API virtual ~UStrategyUI();


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Variant_Strategy_UI_StrategyUI_h_13_PROLOG
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Variant_Strategy_UI_StrategyUI_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Variant_Strategy_UI_StrategyUI_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Variant_Strategy_UI_StrategyUI_h_16_CALLBACK_WRAPPERS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Variant_Strategy_UI_StrategyUI_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Variant_Strategy_UI_StrategyUI_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStrategyUI;

// ********** End Class UStrategyUI ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Variant_Strategy_UI_StrategyUI_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
