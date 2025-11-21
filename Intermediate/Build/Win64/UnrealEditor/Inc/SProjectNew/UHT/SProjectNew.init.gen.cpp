// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSProjectNew_init() {}
	SPROJECTNEW_API UFunction* Z_Construct_UDelegateFunction_SProjectNew_CivAISelectionChangedSignature__DelegateSignature();
	SPROJECTNEW_API UFunction* Z_Construct_UDelegateFunction_SProjectNew_CivSelectedSignature__DelegateSignature();
	SPROJECTNEW_API UFunction* Z_Construct_UDelegateFunction_SProjectNew_OnUnitMoveCompletedDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SProjectNew;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SProjectNew()
	{
		if (!Z_Registration_Info_UPackage__Script_SProjectNew.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SProjectNew_CivAISelectionChangedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SProjectNew_CivSelectedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SProjectNew_OnUnitMoveCompletedDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SProjectNew",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x74BBA380,
				0xF66E541A,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SProjectNew.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SProjectNew.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SProjectNew(Z_Construct_UPackage__Script_SProjectNew, TEXT("/Script/SProjectNew"), Z_Registration_Info_UPackage__Script_SProjectNew, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x74BBA380, 0xF66E541A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
