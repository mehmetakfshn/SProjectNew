// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "City.h"

#ifdef SPROJECTNEW_City_generated_h
#error "City.generated.h already included, missing '#pragma once' in City.h"
#endif
#define SPROJECTNEW_City_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UHexGridComponent;

// ********** Begin Class ACity ********************************************************************
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_City_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetGrowthProgress); \
	DECLARE_FUNCTION(execProcessTurn); \
	DECLARE_FUNCTION(execGetTotalYield);


SPROJECTNEW_API UClass* Z_Construct_UClass_ACity_NoRegister();

#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_City_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACity(); \
	friend struct Z_Construct_UClass_ACity_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SPROJECTNEW_API UClass* Z_Construct_UClass_ACity_NoRegister(); \
public: \
	DECLARE_CLASS2(ACity, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SProjectNew"), Z_Construct_UClass_ACity_NoRegister) \
	DECLARE_SERIALIZER(ACity)


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_City_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACity(ACity&&) = delete; \
	ACity(const ACity&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACity); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACity); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACity) \
	NO_API virtual ~ACity();


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_City_h_8_PROLOG
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_City_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_City_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_City_h_11_INCLASS_NO_PURE_DECLS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_City_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACity;

// ********** End Class ACity **********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_City_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
