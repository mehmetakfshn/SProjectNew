// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MapEditorLibrary.h"

#ifdef SPROJECTNEW_MapEditorLibrary_generated_h
#error "MapEditorLibrary.generated.h already included, missing '#pragma once' in MapEditorLibrary.h"
#endif
#define SPROJECTNEW_MapEditorLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMapEditorLibrary ********************************************************
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_MapEditorLibrary_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAllMapNames); \
	DECLARE_FUNCTION(execGetSavedMapList);


SPROJECTNEW_API UClass* Z_Construct_UClass_UMapEditorLibrary_NoRegister();

#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_MapEditorLibrary_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMapEditorLibrary(); \
	friend struct Z_Construct_UClass_UMapEditorLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SPROJECTNEW_API UClass* Z_Construct_UClass_UMapEditorLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMapEditorLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SProjectNew"), Z_Construct_UClass_UMapEditorLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMapEditorLibrary)


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_MapEditorLibrary_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMapEditorLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMapEditorLibrary(UMapEditorLibrary&&) = delete; \
	UMapEditorLibrary(const UMapEditorLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapEditorLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapEditorLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMapEditorLibrary) \
	NO_API virtual ~UMapEditorLibrary();


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_MapEditorLibrary_h_6_PROLOG
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_MapEditorLibrary_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_MapEditorLibrary_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_MapEditorLibrary_h_9_INCLASS_NO_PURE_DECLS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_MapEditorLibrary_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMapEditorLibrary;

// ********** End Class UMapEditorLibrary **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_MapEditorLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
