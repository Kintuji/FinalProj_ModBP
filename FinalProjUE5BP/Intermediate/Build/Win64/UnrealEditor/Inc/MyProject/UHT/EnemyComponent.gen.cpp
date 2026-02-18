// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/EnemyComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEnemyComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
MYPROJECT_API UClass* Z_Construct_UClass_UEnemyComponent();
MYPROJECT_API UClass* Z_Construct_UClass_UEnemyComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEnemyComponent **********************************************************
void UEnemyComponent::StaticRegisterNativesUEnemyComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEnemyComponent;
UClass* UEnemyComponent::GetPrivateStaticClass()
{
	using TClass = UEnemyComponent;
	if (!Z_Registration_Info_UClass_UEnemyComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EnemyComponent"),
			Z_Registration_Info_UClass_UEnemyComponent.InnerSingleton,
			StaticRegisterNativesUEnemyComponent,
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
	return Z_Registration_Info_UClass_UEnemyComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UEnemyComponent_NoRegister()
{
	return UEnemyComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEnemyComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "EnemyComponent.h" },
		{ "ModuleRelativePath", "EnemyComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnemyComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyComponent_Statics::ClassParams = {
	&UEnemyComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnemyComponent()
{
	if (!Z_Registration_Info_UClass_UEnemyComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyComponent.OuterSingleton, Z_Construct_UClass_UEnemyComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnemyComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyComponent);
UEnemyComponent::~UEnemyComponent() {}
// ********** End Class UEnemyComponent ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_tiago_Documents_GitHub_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_EnemyComponent_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyComponent, UEnemyComponent::StaticClass, TEXT("UEnemyComponent"), &Z_Registration_Info_UClass_UEnemyComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyComponent), 3053486594U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tiago_Documents_GitHub_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_EnemyComponent_h__Script_MyProject_2011629263(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Users_tiago_Documents_GitHub_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_EnemyComponent_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tiago_Documents_GitHub_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_EnemyComponent_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
