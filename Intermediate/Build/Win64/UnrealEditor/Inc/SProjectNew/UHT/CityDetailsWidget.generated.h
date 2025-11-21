// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/CityDetailsWidget.h"

#ifdef SPROJECTNEW_CityDetailsWidget_generated_h
#error "CityDetailsWidget.generated.h already included, missing '#pragma once' in CityDetailsWidget.h"
#endif
#define SPROJECTNEW_CityDetailsWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ACity;

// ********** Begin Class UCityDetailsWidget *******************************************************
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_UI_CityDetailsWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateCityUI); \
	DECLARE_FUNCTION(execSetSelectedCity);


SPROJECTNEW_API UClass* Z_Construct_UClass_UCityDetailsWidget_NoRegister();

#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_UI_CityDetailsWidget_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCityDetailsWidget(); \
	friend struct Z_Construct_UClass_UCityDetailsWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SPROJECTNEW_API UClass* Z_Construct_UClass_UCityDetailsWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UCityDetailsWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SProjectNew"), Z_Construct_UClass_UCityDetailsWidget_NoRegister) \
	DECLARE_SERIALIZER(UCityDetailsWidget)


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_UI_CityDetailsWidget_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCityDetailsWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCityDetailsWidget(UCityDetailsWidget&&) = delete; \
	UCityDetailsWidget(const UCityDetailsWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCityDetailsWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCityDetailsWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCityDetailsWidget) \
	NO_API virtual ~UCityDetailsWidget();


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_UI_CityDetailsWidget_h_17_PROLOG
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_UI_CityDetailsWidget_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_UI_CityDetailsWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_UI_CityDetailsWidget_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_UI_CityDetailsWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCityDetailsWidget;

// ********** End Class UCityDetailsWidget *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_UI_CityDetailsWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
