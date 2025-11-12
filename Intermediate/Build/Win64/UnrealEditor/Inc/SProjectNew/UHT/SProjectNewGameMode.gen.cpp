// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SProjectNewGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSProjectNewGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SPROJECTNEW_API UClass* Z_Construct_UClass_ASProjectNewGameMode();
SPROJECTNEW_API UClass* Z_Construct_UClass_ASProjectNewGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_SProjectNew();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASProjectNewGameMode *****************************************************
void ASProjectNewGameMode::StaticRegisterNativesASProjectNewGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASProjectNewGameMode;
UClass* ASProjectNewGameMode::GetPrivateStaticClass()
{
	using TClass = ASProjectNewGameMode;
	if (!Z_Registration_Info_UClass_ASProjectNewGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SProjectNewGameMode"),
			Z_Registration_Info_UClass_ASProjectNewGameMode.InnerSingleton,
			StaticRegisterNativesASProjectNewGameMode,
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
	return Z_Registration_Info_UClass_ASProjectNewGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ASProjectNewGameMode_NoRegister()
{
	return ASProjectNewGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASProjectNewGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple Game Mode for a top-down perspective game\n *  Sets the default gameplay framework classes\n *  Check the Blueprint derived class for the set values\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SProjectNewGameMode.h" },
		{ "ModuleRelativePath", "SProjectNewGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple Game Mode for a top-down perspective game\nSets the default gameplay framework classes\nCheck the Blueprint derived class for the set values" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASProjectNewGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASProjectNewGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SProjectNew,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASProjectNewGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASProjectNewGameMode_Statics::ClassParams = {
	&ASProjectNewGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASProjectNewGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASProjectNewGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASProjectNewGameMode()
{
	if (!Z_Registration_Info_UClass_ASProjectNewGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASProjectNewGameMode.OuterSingleton, Z_Construct_UClass_ASProjectNewGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASProjectNewGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASProjectNewGameMode);
ASProjectNewGameMode::~ASProjectNewGameMode() {}
// ********** End Class ASProjectNewGameMode *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_SProjectNewGameMode_h__Script_SProjectNew_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASProjectNewGameMode, ASProjectNewGameMode::StaticClass, TEXT("ASProjectNewGameMode"), &Z_Registration_Info_UClass_ASProjectNewGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASProjectNewGameMode), 2645783184U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_SProjectNewGameMode_h__Script_SProjectNew_1696984707(TEXT("/Script/SProjectNew"),
	Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_SProjectNewGameMode_h__Script_SProjectNew_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_SProjectNewGameMode_h__Script_SProjectNew_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
