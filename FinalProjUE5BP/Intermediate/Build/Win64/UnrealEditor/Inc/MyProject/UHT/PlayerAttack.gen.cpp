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
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
MYPROJECT_API UClass* Z_Construct_UClass_UPlayerAttack();
MYPROJECT_API UClass* Z_Construct_UClass_UPlayerAttack_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPlayerAttack Function Raycast *******************************************
struct Z_Construct_UFunction_UPlayerAttack_Raycast_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAttack_Raycast_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPlayerAttack, nullptr, "Raycast", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAttack_Raycast_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAttack_Raycast_Statics::Function_MetaDataParams)},  };
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
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Raycast();
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerAttack_Raycast, "Raycast" }, // 1308939510
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
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
		{ Z_Construct_UClass_UPlayerAttack, UPlayerAttack::StaticClass, TEXT("UPlayerAttack"), &Z_Registration_Info_UClass_UPlayerAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerAttack), 3487791547U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Aluno_Documents_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_PlayerAttack_h__Script_MyProject_276338517(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Users_Aluno_Documents_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_PlayerAttack_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Aluno_Documents_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_PlayerAttack_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
