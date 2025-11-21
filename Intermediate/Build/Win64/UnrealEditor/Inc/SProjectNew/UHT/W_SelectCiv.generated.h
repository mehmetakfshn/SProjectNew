// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "W_SelectCiv.h"

#ifdef SPROJECTNEW_W_SelectCiv_generated_h
#error "W_SelectCiv.generated.h already included, missing '#pragma once' in W_SelectCiv.h"
#endif
#define SPROJECTNEW_W_SelectCiv_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FCivInfo;

// ********** Begin Class UW_SelectCiv *************************************************************
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_W_SelectCiv_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleStartGameClicked); \
	DECLARE_FUNCTION(execOnAICivSelectionChanged); \
	DECLARE_FUNCTION(execOnCivSelected);


SPROJECTNEW_API UClass* Z_Construct_UClass_UW_SelectCiv_NoRegister();

#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_W_SelectCiv_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUW_SelectCiv(); \
	friend struct Z_Construct_UClass_UW_SelectCiv_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SPROJECTNEW_API UClass* Z_Construct_UClass_UW_SelectCiv_NoRegister(); \
public: \
	DECLARE_CLASS2(UW_SelectCiv, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SProjectNew"), Z_Construct_UClass_UW_SelectCiv_NoRegister) \
	DECLARE_SERIALIZER(UW_SelectCiv)


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_W_SelectCiv_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UW_SelectCiv(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UW_SelectCiv(UW_SelectCiv&&) = delete; \
	UW_SelectCiv(const UW_SelectCiv&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UW_SelectCiv); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UW_SelectCiv); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UW_SelectCiv) \
	NO_API virtual ~UW_SelectCiv();


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_W_SelectCiv_h_12_PROLOG
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_W_SelectCiv_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_W_SelectCiv_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_W_SelectCiv_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_W_SelectCiv_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UW_SelectCiv;

// ********** End Class UW_SelectCiv ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_W_SelectCiv_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
