// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/W_Health.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeW_Health() {}

// ********** Begin Cross Module References ********************************************************
MYPROJECT_API UClass* Z_Construct_UClass_UW_Health();
MYPROJECT_API UClass* Z_Construct_UClass_UW_Health_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UW_Health ****************************************************************
void UW_Health::StaticRegisterNativesUW_Health()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UW_Health;
UClass* UW_Health::GetPrivateStaticClass()
{
	using TClass = UW_Health;
	if (!Z_Registration_Info_UClass_UW_Health.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("W_Health"),
			Z_Registration_Info_UClass_UW_Health.InnerSingleton,
			StaticRegisterNativesUW_Health,
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
	return Z_Registration_Info_UClass_UW_Health.InnerSingleton;
}
UClass* Z_Construct_UClass_UW_Health_NoRegister()
{
	return UW_Health::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UW_Health_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "W_Health.h" },
		{ "ModuleRelativePath", "W_Health.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Health" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "W_Health.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthProgressBar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UW_Health>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UW_Health_Statics::NewProp_HealthProgressBar = { "HealthProgressBar", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UW_Health, HealthProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthProgressBar_MetaData), NewProp_HealthProgressBar_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UW_Health_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UW_Health_Statics::NewProp_HealthProgressBar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UW_Health_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UW_Health_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UW_Health_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UW_Health_Statics::ClassParams = {
	&UW_Health::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UW_Health_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UW_Health_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UW_Health_Statics::Class_MetaDataParams), Z_Construct_UClass_UW_Health_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UW_Health()
{
	if (!Z_Registration_Info_UClass_UW_Health.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UW_Health.OuterSingleton, Z_Construct_UClass_UW_Health_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UW_Health.OuterSingleton;
}
UW_Health::UW_Health(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UW_Health);
UW_Health::~UW_Health() {}
// ********** End Class UW_Health ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Aluno_Documents_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_W_Health_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UW_Health, UW_Health::StaticClass, TEXT("UW_Health"), &Z_Registration_Info_UClass_UW_Health, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UW_Health), 3878260835U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Aluno_Documents_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_W_Health_h__Script_MyProject_3182533230(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Users_Aluno_Documents_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_W_Health_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Aluno_Documents_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_W_Health_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
