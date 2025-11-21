// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CivilizationManager.h"

#ifdef SPROJECTNEW_CivilizationManager_generated_h
#error "CivilizationManager.generated.h already included, missing '#pragma once' in CivilizationManager.h"
#endif
#define SPROJECTNEW_CivilizationManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ACity;
class AUnitBase;
class UCivilizationData;
struct FCivInfo;

// ********** Begin Class UCivilizationManager *****************************************************
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_CivilizationManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddCity); \
	DECLARE_FUNCTION(execAddUnit); \
	DECLARE_FUNCTION(execOwnsTile); \
	DECLARE_FUNCTION(execAddOwnedTile); \
	DECLARE_FUNCTION(execGetCivilizationData); \
	DECLARE_FUNCTION(execCanProduceUnit); \
	DECLARE_FUNCTION(execInit);


SPROJECTNEW_API UClass* Z_Construct_UClass_UCivilizationManager_NoRegister();

#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_CivilizationManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCivilizationManager(); \
	friend struct Z_Construct_UClass_UCivilizationManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SPROJECTNEW_API UClass* Z_Construct_UClass_UCivilizationManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UCivilizationManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SProjectNew"), Z_Construct_UClass_UCivilizationManager_NoRegister) \
	DECLARE_SERIALIZER(UCivilizationManager)


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_CivilizationManager_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCivilizationManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCivilizationManager(UCivilizationManager&&) = delete; \
	UCivilizationManager(const UCivilizationManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCivilizationManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCivilizationManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCivilizationManager) \
	NO_API virtual ~UCivilizationManager();


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_CivilizationManager_h_13_PROLOG
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_CivilizationManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_CivilizationManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_CivilizationManager_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_CivilizationManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCivilizationManager;

// ********** End Class UCivilizationManager *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_CivilizationManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
