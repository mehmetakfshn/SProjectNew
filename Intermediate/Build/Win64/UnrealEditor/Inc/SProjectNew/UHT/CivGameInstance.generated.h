// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CivGameInstance.h"

#ifdef SPROJECTNEW_CivGameInstance_generated_h
#error "CivGameInstance.generated.h already included, missing '#pragma once' in CivGameInstance.h"
#endif
#define SPROJECTNEW_CivGameInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCivGameInstance *********************************************************
SPROJECTNEW_API UClass* Z_Construct_UClass_UCivGameInstance_NoRegister();

#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_CivGameInstance_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCivGameInstance(); \
	friend struct Z_Construct_UClass_UCivGameInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SPROJECTNEW_API UClass* Z_Construct_UClass_UCivGameInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UCivGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SProjectNew"), Z_Construct_UClass_UCivGameInstance_NoRegister) \
	DECLARE_SERIALIZER(UCivGameInstance)


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_CivGameInstance_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCivGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCivGameInstance(UCivGameInstance&&) = delete; \
	UCivGameInstance(const UCivGameInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCivGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCivGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCivGameInstance) \
	NO_API virtual ~UCivGameInstance();


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_CivGameInstance_h_8_PROLOG
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_CivGameInstance_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_CivGameInstance_h_11_INCLASS_NO_PURE_DECLS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_CivGameInstance_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCivGameInstance;

// ********** End Class UCivGameInstance ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_CivGameInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
