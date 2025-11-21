// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "W_CivEntry.h"

#ifdef SPROJECTNEW_W_CivEntry_generated_h
#error "W_CivEntry.generated.h already included, missing '#pragma once' in W_CivEntry.h"
#endif
#define SPROJECTNEW_W_CivEntry_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FCivInfo;

// ********** Begin Delegate FCivSelectedSignature *************************************************
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_W_CivEntry_h_9_DELEGATE \
SPROJECTNEW_API void FCivSelectedSignature_DelegateWrapper(const FMulticastScriptDelegate& CivSelectedSignature, FCivInfo const& Info);


// ********** End Delegate FCivSelectedSignature ***************************************************

// ********** Begin Delegate FCivAISelectionChangedSignature ***************************************
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_W_CivEntry_h_12_DELEGATE \
SPROJECTNEW_API void FCivAISelectionChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& CivAISelectionChangedSignature, FCivInfo const& Info, bool bIsSelected);


// ********** End Delegate FCivAISelectionChangedSignature *****************************************

// ********** Begin Class UW_CivEntry **************************************************************
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_W_CivEntry_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleAICheckChanged); \
	DECLARE_FUNCTION(execHandleClick); \
	DECLARE_FUNCTION(execSetCiv);


SPROJECTNEW_API UClass* Z_Construct_UClass_UW_CivEntry_NoRegister();

#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_W_CivEntry_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUW_CivEntry(); \
	friend struct Z_Construct_UClass_UW_CivEntry_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SPROJECTNEW_API UClass* Z_Construct_UClass_UW_CivEntry_NoRegister(); \
public: \
	DECLARE_CLASS2(UW_CivEntry, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SProjectNew"), Z_Construct_UClass_UW_CivEntry_NoRegister) \
	DECLARE_SERIALIZER(UW_CivEntry)


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_W_CivEntry_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UW_CivEntry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UW_CivEntry(UW_CivEntry&&) = delete; \
	UW_CivEntry(const UW_CivEntry&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UW_CivEntry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UW_CivEntry); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UW_CivEntry) \
	NO_API virtual ~UW_CivEntry();


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_W_CivEntry_h_14_PROLOG
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_W_CivEntry_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_W_CivEntry_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_W_CivEntry_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_W_CivEntry_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UW_CivEntry;

// ********** End Class UW_CivEntry ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_W_CivEntry_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
