// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/HealthComponenteCPP.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHealthComponenteCPP() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
MYPROJECT_API UClass* Z_Construct_UClass_UHealthComponenteCPP();
MYPROJECT_API UClass* Z_Construct_UClass_UHealthComponenteCPP_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHealthComponenteCPP *****************************************************
void UHealthComponenteCPP::StaticRegisterNativesUHealthComponenteCPP()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHealthComponenteCPP;
UClass* UHealthComponenteCPP::GetPrivateStaticClass()
{
	using TClass = UHealthComponenteCPP;
	if (!Z_Registration_Info_UClass_UHealthComponenteCPP.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HealthComponenteCPP"),
			Z_Registration_Info_UClass_UHealthComponenteCPP.InnerSingleton,
			StaticRegisterNativesUHealthComponenteCPP,
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
	return Z_Registration_Info_UClass_UHealthComponenteCPP.InnerSingleton;
}
UClass* Z_Construct_UClass_UHealthComponenteCPP_NoRegister()
{
	return UHealthComponenteCPP::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHealthComponenteCPP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "HealthComponenteCPP.h" },
		{ "ModuleRelativePath", "HealthComponenteCPP.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealthComponenteCPP>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHealthComponenteCPP_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponenteCPP_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHealthComponenteCPP_Statics::ClassParams = {
	&UHealthComponenteCPP::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponenteCPP_Statics::Class_MetaDataParams), Z_Construct_UClass_UHealthComponenteCPP_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHealthComponenteCPP()
{
	if (!Z_Registration_Info_UClass_UHealthComponenteCPP.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHealthComponenteCPP.OuterSingleton, Z_Construct_UClass_UHealthComponenteCPP_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHealthComponenteCPP.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHealthComponenteCPP);
UHealthComponenteCPP::~UHealthComponenteCPP() {}
// ********** End Class UHealthComponenteCPP *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_tiago_Documents_GitHub_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_HealthComponenteCPP_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHealthComponenteCPP, UHealthComponenteCPP::StaticClass, TEXT("UHealthComponenteCPP"), &Z_Registration_Info_UClass_UHealthComponenteCPP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHealthComponenteCPP), 3646897731U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_tiago_Documents_GitHub_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_HealthComponenteCPP_h__Script_MyProject_1300334624(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Users_tiago_Documents_GitHub_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_HealthComponenteCPP_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_tiago_Documents_GitHub_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_HealthComponenteCPP_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
