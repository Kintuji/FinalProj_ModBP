// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/WineComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWineComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
MYPROJECT_API UClass* Z_Construct_UClass_UWineComponent();
MYPROJECT_API UClass* Z_Construct_UClass_UWineComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UWineComponent Function AddDrunkenness ***********************************
struct Z_Construct_UFunction_UWineComponent_AddDrunkenness_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WineComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWineComponent_AddDrunkenness_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UWineComponent, nullptr, "AddDrunkenness", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWineComponent_AddDrunkenness_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWineComponent_AddDrunkenness_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UWineComponent_AddDrunkenness()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWineComponent_AddDrunkenness_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWineComponent::execAddDrunkenness)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddDrunkenness();
	P_NATIVE_END;
}
// ********** End Class UWineComponent Function AddDrunkenness *************************************

// ********** Begin Class UWineComponent ***********************************************************
void UWineComponent::StaticRegisterNativesUWineComponent()
{
	UClass* Class = UWineComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddDrunkenness", &UWineComponent::execAddDrunkenness },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWineComponent;
UClass* UWineComponent::GetPrivateStaticClass()
{
	using TClass = UWineComponent;
	if (!Z_Registration_Info_UClass_UWineComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WineComponent"),
			Z_Registration_Info_UClass_UWineComponent.InnerSingleton,
			StaticRegisterNativesUWineComponent,
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
	return Z_Registration_Info_UClass_UWineComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UWineComponent_NoRegister()
{
	return UWineComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWineComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "WineComponent.h" },
		{ "ModuleRelativePath", "WineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDrunkenness_MetaData[] = {
		{ "Category", "WineComponent" },
		{ "ModuleRelativePath", "WineComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentDrunkenness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWineComponent_AddDrunkenness, "AddDrunkenness" }, // 1975931669
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWineComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWineComponent_Statics::NewProp_CurrentDrunkenness = { "CurrentDrunkenness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWineComponent, CurrentDrunkenness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentDrunkenness_MetaData), NewProp_CurrentDrunkenness_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWineComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWineComponent_Statics::NewProp_CurrentDrunkenness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWineComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWineComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWineComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWineComponent_Statics::ClassParams = {
	&UWineComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWineComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWineComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWineComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UWineComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWineComponent()
{
	if (!Z_Registration_Info_UClass_UWineComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWineComponent.OuterSingleton, Z_Construct_UClass_UWineComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWineComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWineComponent);
UWineComponent::~UWineComponent() {}
// ********** End Class UWineComponent *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_tiago_Documents_GitHub_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_WineComponent_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWineComponent, UWineComponent::StaticClass, TEXT("UWineComponent"), &Z_Registration_Info_UClass_UWineComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWineComponent), 923883278U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tiago_Documents_GitHub_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_WineComponent_h__Script_MyProject_1340169612(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Users_tiago_Documents_GitHub_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_WineComponent_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tiago_Documents_GitHub_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_WineComponent_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
