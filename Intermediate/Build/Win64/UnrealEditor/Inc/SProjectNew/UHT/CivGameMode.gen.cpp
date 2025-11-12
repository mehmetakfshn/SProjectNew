// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CivGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCivGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SPROJECTNEW_API UClass* Z_Construct_UClass_ACivGameMode();
SPROJECTNEW_API UClass* Z_Construct_UClass_ACivGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_SProjectNew();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACivGameMode Function EndPlayerTurn **************************************
struct Z_Construct_UFunction_ACivGameMode_EndPlayerTurn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Oyuncudan (PlayerController) \"S\xef\xbf\xbdram\xef\xbf\xbd bitirdim\" \xef\xbf\xbd""a\xef\xbf\xbdr\xef\xbf\xbds\xef\xbf\xbd geldi\xef\xbf\xbdinde\n\x09 * bu fonksiyonu tetikleyece\xef\xbf\xbdiz.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "CivGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Oyuncudan (PlayerController) \"S\xef\xbf\xbdram\xef\xbf\xbd bitirdim\" \xef\xbf\xbd""a\xef\xbf\xbdr\xef\xbf\xbds\xef\xbf\xbd geldi\xef\xbf\xbdinde\nbu fonksiyonu tetikleyece\xef\xbf\xbdiz." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACivGameMode_EndPlayerTurn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACivGameMode, nullptr, "EndPlayerTurn", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACivGameMode_EndPlayerTurn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACivGameMode_EndPlayerTurn_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACivGameMode_EndPlayerTurn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACivGameMode_EndPlayerTurn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACivGameMode::execEndPlayerTurn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndPlayerTurn();
	P_NATIVE_END;
}
// ********** End Class ACivGameMode Function EndPlayerTurn ****************************************

// ********** Begin Class ACivGameMode *************************************************************
void ACivGameMode::StaticRegisterNativesACivGameMode()
{
	UClass* Class = ACivGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EndPlayerTurn", &ACivGameMode::execEndPlayerTurn },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACivGameMode;
UClass* ACivGameMode::GetPrivateStaticClass()
{
	using TClass = ACivGameMode;
	if (!Z_Registration_Info_UClass_ACivGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CivGameMode"),
			Z_Registration_Info_UClass_ACivGameMode.InnerSingleton,
			StaticRegisterNativesACivGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ACivGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ACivGameMode_NoRegister()
{
	return ACivGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACivGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CivGameMode.h" },
		{ "ModuleRelativePath", "CivGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACivGameMode_EndPlayerTurn, "EndPlayerTurn" }, // 2951496307
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACivGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACivGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SProjectNew,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACivGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACivGameMode_Statics::ClassParams = {
	&ACivGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACivGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACivGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACivGameMode()
{
	if (!Z_Registration_Info_UClass_ACivGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACivGameMode.OuterSingleton, Z_Construct_UClass_ACivGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACivGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACivGameMode);
ACivGameMode::~ACivGameMode() {}
// ********** End Class ACivGameMode ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivGameMode_h__Script_SProjectNew_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACivGameMode, ACivGameMode::StaticClass, TEXT("ACivGameMode"), &Z_Registration_Info_UClass_ACivGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACivGameMode), 288989889U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivGameMode_h__Script_SProjectNew_3080984995(TEXT("/Script/SProjectNew"),
	Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivGameMode_h__Script_SProjectNew_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivGameMode_h__Script_SProjectNew_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
