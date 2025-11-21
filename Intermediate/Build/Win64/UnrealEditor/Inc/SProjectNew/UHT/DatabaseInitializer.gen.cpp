// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Database/DatabaseInitializer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDatabaseInitializer() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
SPROJECTNEW_API UClass* Z_Construct_UClass_UDatabaseInitializer();
SPROJECTNEW_API UClass* Z_Construct_UClass_UDatabaseInitializer_NoRegister();
UPackage* Z_Construct_UPackage__Script_SProjectNew();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDatabaseInitializer *****************************************************
void UDatabaseInitializer::StaticRegisterNativesUDatabaseInitializer()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDatabaseInitializer;
UClass* UDatabaseInitializer::GetPrivateStaticClass()
{
	using TClass = UDatabaseInitializer;
	if (!Z_Registration_Info_UClass_UDatabaseInitializer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DatabaseInitializer"),
			Z_Registration_Info_UClass_UDatabaseInitializer.InnerSingleton,
			StaticRegisterNativesUDatabaseInitializer,
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
	return Z_Registration_Info_UClass_UDatabaseInitializer.InnerSingleton;
}
UClass* Z_Construct_UClass_UDatabaseInitializer_NoRegister()
{
	return UDatabaseInitializer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDatabaseInitializer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Database/DatabaseInitializer.h" },
		{ "ModuleRelativePath", "Database/DatabaseInitializer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatabaseInitializer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDatabaseInitializer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SProjectNew,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseInitializer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatabaseInitializer_Statics::ClassParams = {
	&UDatabaseInitializer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDatabaseInitializer_Statics::Class_MetaDataParams), Z_Construct_UClass_UDatabaseInitializer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDatabaseInitializer()
{
	if (!Z_Registration_Info_UClass_UDatabaseInitializer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatabaseInitializer.OuterSingleton, Z_Construct_UClass_UDatabaseInitializer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDatabaseInitializer.OuterSingleton;
}
UDatabaseInitializer::UDatabaseInitializer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDatabaseInitializer);
UDatabaseInitializer::~UDatabaseInitializer() {}
// ********** End Class UDatabaseInitializer *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Database_DatabaseInitializer_h__Script_SProjectNew_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDatabaseInitializer, UDatabaseInitializer::StaticClass, TEXT("UDatabaseInitializer"), &Z_Registration_Info_UClass_UDatabaseInitializer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatabaseInitializer), 3320261201U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Database_DatabaseInitializer_h__Script_SProjectNew_516549986(TEXT("/Script/SProjectNew"),
	Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Database_DatabaseInitializer_h__Script_SProjectNew_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Database_DatabaseInitializer_h__Script_SProjectNew_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
