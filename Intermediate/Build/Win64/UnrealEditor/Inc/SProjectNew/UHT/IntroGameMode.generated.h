// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IntroGameMode.h"

#ifdef SPROJECTNEW_IntroGameMode_generated_h
#error "IntroGameMode.generated.h already included, missing '#pragma once' in IntroGameMode.h"
#endif
#define SPROJECTNEW_IntroGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AIntroGameMode ***********************************************************
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_IntroGameMode_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnVideoFinished);


SPROJECTNEW_API UClass* Z_Construct_UClass_AIntroGameMode_NoRegister();

#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_IntroGameMode_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIntroGameMode(); \
	friend struct Z_Construct_UClass_AIntroGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SPROJECTNEW_API UClass* Z_Construct_UClass_AIntroGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AIntroGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SProjectNew"), Z_Construct_UClass_AIntroGameMode_NoRegister) \
	DECLARE_SERIALIZER(AIntroGameMode)


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_IntroGameMode_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AIntroGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AIntroGameMode(AIntroGameMode&&) = delete; \
	AIntroGameMode(const AIntroGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIntroGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIntroGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AIntroGameMode) \
	NO_API virtual ~AIntroGameMode();


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_IntroGameMode_h_7_PROLOG
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_IntroGameMode_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_IntroGameMode_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_IntroGameMode_h_10_INCLASS_NO_PURE_DECLS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_IntroGameMode_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AIntroGameMode;

// ********** End Class AIntroGameMode *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_IntroGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
