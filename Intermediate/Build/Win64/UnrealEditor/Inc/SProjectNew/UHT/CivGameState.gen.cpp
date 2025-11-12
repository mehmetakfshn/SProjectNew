// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CivGameState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCivGameState() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
SPROJECTNEW_API UClass* Z_Construct_UClass_ACivGameState();
SPROJECTNEW_API UClass* Z_Construct_UClass_ACivGameState_NoRegister();
UPackage* Z_Construct_UPackage__Script_SProjectNew();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACivGameState Function GetCurrentTurn ************************************
struct Z_Construct_UFunction_ACivGameState_GetCurrentTurn_Statics
{
	struct CivGameState_eventGetCurrentTurn_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Her yerden (\xef\xbf\xbdzellikle UI'dan) mevcut tur say\xef\xbf\xbds\xef\xbf\xbdn\xef\xbf\xbd g\xef\xbf\xbdvenle almak i\xef\xbf\xbdin.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "CivGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Her yerden (\xef\xbf\xbdzellikle UI'dan) mevcut tur say\xef\xbf\xbds\xef\xbf\xbdn\xef\xbf\xbd g\xef\xbf\xbdvenle almak i\xef\xbf\xbdin." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACivGameState_GetCurrentTurn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CivGameState_eventGetCurrentTurn_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACivGameState_GetCurrentTurn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACivGameState_GetCurrentTurn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACivGameState_GetCurrentTurn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACivGameState_GetCurrentTurn_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACivGameState, nullptr, "GetCurrentTurn", Z_Construct_UFunction_ACivGameState_GetCurrentTurn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACivGameState_GetCurrentTurn_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACivGameState_GetCurrentTurn_Statics::CivGameState_eventGetCurrentTurn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACivGameState_GetCurrentTurn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACivGameState_GetCurrentTurn_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACivGameState_GetCurrentTurn_Statics::CivGameState_eventGetCurrentTurn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACivGameState_GetCurrentTurn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACivGameState_GetCurrentTurn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACivGameState::execGetCurrentTurn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentTurn();
	P_NATIVE_END;
}
// ********** End Class ACivGameState Function GetCurrentTurn **************************************

// ********** Begin Class ACivGameState ************************************************************
void ACivGameState::StaticRegisterNativesACivGameState()
{
	UClass* Class = ACivGameState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentTurn", &ACivGameState::execGetCurrentTurn },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACivGameState;
UClass* ACivGameState::GetPrivateStaticClass()
{
	using TClass = ACivGameState;
	if (!Z_Registration_Info_UClass_ACivGameState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CivGameState"),
			Z_Registration_Info_UClass_ACivGameState.InnerSingleton,
			StaticRegisterNativesACivGameState,
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
	return Z_Registration_Info_UClass_ACivGameState.InnerSingleton;
}
UClass* Z_Construct_UClass_ACivGameState_NoRegister()
{
	return ACivGameState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACivGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CivGameState.h" },
		{ "ModuleRelativePath", "CivGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTurnNumber_MetaData[] = {
		{ "Category", "Turn System" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Mevcut tur say\xef\xbf\xbds\xef\xbf\xbd.\n\x09 * \"Replicated\" (\xef\xbf\xbdo\xef\xbf\xbd""alt\xef\xbf\xbdlm\xef\xbf\xbd\xef\xbf\xbd) olarak i\xef\xbf\xbd""aretlendi, b\xef\xbf\xbdylece sunucuda de\xef\xbf\xbdi\xef\xbf\xbdti\xef\xbf\xbdinde\n\x09 * otomatik olarak t\xef\xbf\xbdm istemcilere (ve UI'a) bildirilir.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "CivGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mevcut tur say\xef\xbf\xbds\xef\xbf\xbd.\n\"Replicated\" (\xef\xbf\xbdo\xef\xbf\xbd""alt\xef\xbf\xbdlm\xef\xbf\xbd\xef\xbf\xbd) olarak i\xef\xbf\xbd""aretlendi, b\xef\xbf\xbdylece sunucuda de\xef\xbf\xbdi\xef\xbf\xbdti\xef\xbf\xbdinde\notomatik olarak t\xef\xbf\xbdm istemcilere (ve UI'a) bildirilir." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentTurnNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACivGameState_GetCurrentTurn, "GetCurrentTurn" }, // 848341369
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACivGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACivGameState_Statics::NewProp_CurrentTurnNumber = { "CurrentTurnNumber", nullptr, (EPropertyFlags)0x0020080000020835, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACivGameState, CurrentTurnNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTurnNumber_MetaData), NewProp_CurrentTurnNumber_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACivGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACivGameState_Statics::NewProp_CurrentTurnNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACivGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACivGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SProjectNew,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACivGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACivGameState_Statics::ClassParams = {
	&ACivGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACivGameState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACivGameState_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACivGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_ACivGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACivGameState()
{
	if (!Z_Registration_Info_UClass_ACivGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACivGameState.OuterSingleton, Z_Construct_UClass_ACivGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACivGameState.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void ACivGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_CurrentTurnNumber(TEXT("CurrentTurnNumber"));
	const bool bIsValid = true
		&& Name_CurrentTurnNumber == ClassReps[(int32)ENetFields_Private::CurrentTurnNumber].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACivGameState"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(ACivGameState);
ACivGameState::~ACivGameState() {}
// ********** End Class ACivGameState **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivGameState_h__Script_SProjectNew_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACivGameState, ACivGameState::StaticClass, TEXT("ACivGameState"), &Z_Registration_Info_UClass_ACivGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACivGameState), 1336620343U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivGameState_h__Script_SProjectNew_3009485966(TEXT("/Script/SProjectNew"),
	Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivGameState_h__Script_SProjectNew_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivGameState_h__Script_SProjectNew_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
