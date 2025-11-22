// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Database/DatabaseReader.h"

#ifdef SPROJECTNEW_DatabaseReader_generated_h
#error "DatabaseReader.generated.h already included, missing '#pragma once' in DatabaseReader.h"
#endif
#define SPROJECTNEW_DatabaseReader_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FCivInfo;

// ********** Begin Class UDatabaseReader **********************************************************
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Database_DatabaseReader_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetUnitsForCiv); \
	DECLARE_FUNCTION(execBP_GetAllCivilizations);


SPROJECTNEW_API UClass* Z_Construct_UClass_UDatabaseReader_NoRegister();

#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Database_DatabaseReader_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDatabaseReader(); \
	friend struct Z_Construct_UClass_UDatabaseReader_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SPROJECTNEW_API UClass* Z_Construct_UClass_UDatabaseReader_NoRegister(); \
public: \
	DECLARE_CLASS2(UDatabaseReader, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SProjectNew"), Z_Construct_UClass_UDatabaseReader_NoRegister) \
	DECLARE_SERIALIZER(UDatabaseReader)


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Database_DatabaseReader_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDatabaseReader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDatabaseReader(UDatabaseReader&&) = delete; \
	UDatabaseReader(const UDatabaseReader&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDatabaseReader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDatabaseReader); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDatabaseReader) \
	NO_API virtual ~UDatabaseReader();


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Database_DatabaseReader_h_9_PROLOG
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Database_DatabaseReader_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Database_DatabaseReader_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Database_DatabaseReader_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Database_DatabaseReader_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDatabaseReader;

// ********** End Class UDatabaseReader ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Database_DatabaseReader_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
