// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/PlayerAttack.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePlayerAttack() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
MYPROJECT_API UClass* Z_Construct_UClass_UPlayerAttack();
MYPROJECT_API UClass* Z_Construct_UClass_UPlayerAttack_NoRegister();
MYPROJECT_API UFunction* Z_Construct_UDelegateFunction_UPlayerAttack_OnAttackTriggeredSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnAttackTriggeredSignature *******************************************
struct Z_Construct_UDelegateFunction_UPlayerAttack_OnAttackTriggeredSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UPlayerAttack_OnAttackTriggeredSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerAttack, nullptr, "OnAttackTriggeredSignature__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPlayerAttack_OnAttackTriggeredSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPlayerAttack_OnAttackTriggeredSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_UPlayerAttack_OnAttackTriggeredSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPlayerAttack_OnAttackTriggeredSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPlayerAttack::FOnAttackTriggeredSignature_DelegateWrapper(const FScriptDelegate& OnAttackTriggeredSignature)
{
	OnAttackTriggeredSignature.ProcessDelegate<UObject>(NULL);
}
// ********** End Delegate FOnAttackTriggeredSignature *********************************************

// ********** Begin Class UPlayerAttack Function Raycast *******************************************
struct Z_Construct_UFunction_UPlayerAttack_Raycast_Statics
{
	struct PlayerAttack_eventRaycast_Parms
	{
		UClass* DetectableCharacterClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DetectableCharacterClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPlayerAttack_Raycast_Statics::NewProp_DetectableCharacterClass = { "DetectableCharacterClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerAttack_eventRaycast_Parms, DetectableCharacterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAttack_Raycast_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAttack_Raycast_Statics::NewProp_DetectableCharacterClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttack_Raycast_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAttack_Raycast_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerAttack, nullptr, "Raycast", Z_Construct_UFunction_UPlayerAttack_Raycast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttack_Raycast_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerAttack_Raycast_Statics::PlayerAttack_eventRaycast_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttack_Raycast_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAttack_Raycast_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPlayerAttack_Raycast_Statics::PlayerAttack_eventRaycast_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerAttack_Raycast()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAttack_Raycast_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerAttack::execRaycast)
{
	P_GET_OBJECT(UClass,Z_Param_DetectableCharacterClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Raycast(Z_Param_DetectableCharacterClass);
	P_NATIVE_END;
}
// ********** End Class UPlayerAttack Function Raycast *********************************************

// ********** Begin Class UPlayerAttack ************************************************************
void UPlayerAttack::StaticRegisterNativesUPlayerAttack()
{
	UClass* Class = UPlayerAttack::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Raycast", &UPlayerAttack::execRaycast },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UPlayerAttack;
UClass* UPlayerAttack::GetPrivateStaticClass()
{
	using TClass = UPlayerAttack;
	if (!Z_Registration_Info_UClass_UPlayerAttack.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlayerAttack"),
			Z_Registration_Info_UClass_UPlayerAttack.InnerSingleton,
			StaticRegisterNativesUPlayerAttack,
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
	return Z_Registration_Info_UClass_UPlayerAttack.InnerSingleton;
}
UClass* Z_Construct_UClass_UPlayerAttack_NoRegister()
{
	return UPlayerAttack::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPlayerAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PlayerAttack.h" },
		{ "ModuleRelativePath", "PlayerAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAttackTriggered_MetaData[] = {
		{ "Category", "PlayerAttack" },
		{ "ModuleRelativePath", "PlayerAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnAttackTriggered;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UPlayerAttack_OnAttackTriggeredSignature__DelegateSignature, "OnAttackTriggeredSignature__DelegateSignature" }, // 789188297
		{ &Z_Construct_UFunction_UPlayerAttack_Raycast, "Raycast" }, // 478358106
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UPlayerAttack_Statics::NewProp_OnAttackTriggered = { "OnAttackTriggered", nullptr, (EPropertyFlags)0x0010000000080001, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAttack, OnAttackTriggered), Z_Construct_UDelegateFunction_UPlayerAttack_OnAttackTriggeredSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAttackTriggered_MetaData), NewProp_OnAttackTriggered_MetaData) }; // 789188297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAttack_Statics::NewProp_OnAttackTriggered,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAttack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerAttack_Statics::ClassParams = {
	&UPlayerAttack::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlayerAttack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAttack_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerAttack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerAttack()
{
	if (!Z_Registration_Info_UClass_UPlayerAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerAttack.OuterSingleton, Z_Construct_UClass_UPlayerAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerAttack.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerAttack);
UPlayerAttack::~UPlayerAttack() {}
// ********** End Class UPlayerAttack **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Aluno_Documents_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_PlayerAttack_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerAttack, UPlayerAttack::StaticClass, TEXT("UPlayerAttack"), &Z_Registration_Info_UClass_UPlayerAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerAttack), 703375248U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Aluno_Documents_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_PlayerAttack_h__Script_MyProject_1834596751(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Users_Aluno_Documents_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_PlayerAttack_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Aluno_Documents_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_PlayerAttack_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
