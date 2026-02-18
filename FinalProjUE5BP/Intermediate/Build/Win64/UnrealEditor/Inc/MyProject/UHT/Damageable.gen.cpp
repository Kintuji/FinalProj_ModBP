// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/Damageable.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDamageable() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MYPROJECT_API UClass* Z_Construct_UClass_UDamageable();
MYPROJECT_API UClass* Z_Construct_UClass_UDamageable_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UDamageable Function Attack ******************************************
void IDamageable::Attack()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Attack instead.");
}
static FName NAME_UDamageable_Attack = FName(TEXT("Attack"));
void IDamageable::Execute_Attack(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDamageable::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UDamageable_Attack);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IDamageable*)(O->GetNativeInterfaceAddress(UDamageable::StaticClass())))
	{
		I->Attack_Implementation();
	}
}
struct Z_Construct_UFunction_UDamageable_Attack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Damageable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamageable_Attack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDamageable, nullptr, "Attack", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageable_Attack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDamageable_Attack_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDamageable_Attack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDamageable_Attack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IDamageable::execAttack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Attack_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UDamageable Function Attack ********************************************

// ********** Begin Interface UDamageable Function MoveBackwards ***********************************
void IDamageable::MoveBackwards()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_MoveBackwards instead.");
}
static FName NAME_UDamageable_MoveBackwards = FName(TEXT("MoveBackwards"));
void IDamageable::Execute_MoveBackwards(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDamageable::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UDamageable_MoveBackwards);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IDamageable*)(O->GetNativeInterfaceAddress(UDamageable::StaticClass())))
	{
		I->MoveBackwards_Implementation();
	}
}
struct Z_Construct_UFunction_UDamageable_MoveBackwards_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Damageable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamageable_MoveBackwards_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDamageable, nullptr, "MoveBackwards", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageable_MoveBackwards_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDamageable_MoveBackwards_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDamageable_MoveBackwards()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDamageable_MoveBackwards_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IDamageable::execMoveBackwards)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveBackwards_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UDamageable Function MoveBackwards *************************************

// ********** Begin Interface UDamageable Function TakeDamage **************************************
struct Damageable_eventTakeDamage_Parms
{
	float damage;
};
void IDamageable::TakeDamage(float damage)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_TakeDamage instead.");
}
static FName NAME_UDamageable_TakeDamage = FName(TEXT("TakeDamage"));
void IDamageable::Execute_TakeDamage(UObject* O, float damage)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDamageable::StaticClass()));
	Damageable_eventTakeDamage_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDamageable_TakeDamage);
	if (Func)
	{
		Parms.damage=damage;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IDamageable*)(O->GetNativeInterfaceAddress(UDamageable::StaticClass())))
	{
		I->TakeDamage_Implementation(damage);
	}
}
struct Z_Construct_UFunction_UDamageable_TakeDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Damageable.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_damage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDamageable_TakeDamage_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Damageable_eventTakeDamage_Parms, damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDamageable_TakeDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDamageable_TakeDamage_Statics::NewProp_damage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageable_TakeDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDamageable_TakeDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDamageable, nullptr, "TakeDamage", Z_Construct_UFunction_UDamageable_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageable_TakeDamage_Statics::PropPointers), sizeof(Damageable_eventTakeDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDamageable_TakeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDamageable_TakeDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Damageable_eventTakeDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDamageable_TakeDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDamageable_TakeDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IDamageable::execTakeDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_damage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TakeDamage_Implementation(Z_Param_damage);
	P_NATIVE_END;
}
// ********** End Interface UDamageable Function TakeDamage ****************************************

// ********** Begin Interface UDamageable **********************************************************
void UDamageable::StaticRegisterNativesUDamageable()
{
	UClass* Class = UDamageable::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Attack", &IDamageable::execAttack },
		{ "MoveBackwards", &IDamageable::execMoveBackwards },
		{ "TakeDamage", &IDamageable::execTakeDamage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDamageable;
UClass* UDamageable::GetPrivateStaticClass()
{
	using TClass = UDamageable;
	if (!Z_Registration_Info_UClass_UDamageable.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Damageable"),
			Z_Registration_Info_UClass_UDamageable.InnerSingleton,
			StaticRegisterNativesUDamageable,
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
	return Z_Registration_Info_UClass_UDamageable.InnerSingleton;
}
UClass* Z_Construct_UClass_UDamageable_NoRegister()
{
	return UDamageable::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDamageable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Damageable.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDamageable_Attack, "Attack" }, // 37959241
		{ &Z_Construct_UFunction_UDamageable_MoveBackwards, "MoveBackwards" }, // 3836321374
		{ &Z_Construct_UFunction_UDamageable_TakeDamage, "TakeDamage" }, // 741078630
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDamageable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDamageable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDamageable_Statics::ClassParams = {
	&UDamageable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDamageable_Statics::Class_MetaDataParams), Z_Construct_UClass_UDamageable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDamageable()
{
	if (!Z_Registration_Info_UClass_UDamageable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDamageable.OuterSingleton, Z_Construct_UClass_UDamageable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDamageable.OuterSingleton;
}
UDamageable::UDamageable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageable);
// ********** End Interface UDamageable ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_tiago_Documents_GitHub_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_Damageable_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDamageable, UDamageable::StaticClass, TEXT("UDamageable"), &Z_Registration_Info_UClass_UDamageable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDamageable), 163753015U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tiago_Documents_GitHub_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_Damageable_h__Script_MyProject_1136919761(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Users_tiago_Documents_GitHub_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_Damageable_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tiago_Documents_GitHub_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_Damageable_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
