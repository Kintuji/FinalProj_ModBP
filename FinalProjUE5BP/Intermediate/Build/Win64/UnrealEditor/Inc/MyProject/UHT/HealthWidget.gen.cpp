// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/HealthWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHealthWidget() {}

// ********** Begin Cross Module References ********************************************************
MYPROJECT_API UClass* Z_Construct_UClass_UHealthWidget();
MYPROJECT_API UClass* Z_Construct_UClass_UHealthWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_MyProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHealthWidget Function SetHealth *****************************************
struct Z_Construct_UFunction_UHealthWidget_SetHealth_Statics
{
	struct HealthWidget_eventSetHealth_Parms
	{
		float newValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HealthWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_newValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealthWidget_SetHealth_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthWidget_eventSetHealth_Parms, newValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthWidget_SetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthWidget_SetHealth_Statics::NewProp_newValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthWidget_SetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthWidget_SetHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHealthWidget, nullptr, "SetHealth", Z_Construct_UFunction_UHealthWidget_SetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthWidget_SetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHealthWidget_SetHealth_Statics::HealthWidget_eventSetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthWidget_SetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthWidget_SetHealth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHealthWidget_SetHealth_Statics::HealthWidget_eventSetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHealthWidget_SetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthWidget_SetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealthWidget::execSetHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_newValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHealth(Z_Param_newValue);
	P_NATIVE_END;
}
// ********** End Class UHealthWidget Function SetHealth *******************************************

// ********** Begin Class UHealthWidget Function SetHealthText *************************************
struct Z_Construct_UFunction_UHealthWidget_SetHealthText_Statics
{
	struct HealthWidget_eventSetHealthText_Parms
	{
		FText newText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HealthWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_newText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UHealthWidget_SetHealthText_Statics::NewProp_newText = { "newText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthWidget_eventSetHealthText_Parms, newText), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthWidget_SetHealthText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthWidget_SetHealthText_Statics::NewProp_newText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthWidget_SetHealthText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthWidget_SetHealthText_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHealthWidget, nullptr, "SetHealthText", Z_Construct_UFunction_UHealthWidget_SetHealthText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthWidget_SetHealthText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHealthWidget_SetHealthText_Statics::HealthWidget_eventSetHealthText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthWidget_SetHealthText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthWidget_SetHealthText_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHealthWidget_SetHealthText_Statics::HealthWidget_eventSetHealthText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHealthWidget_SetHealthText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthWidget_SetHealthText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealthWidget::execSetHealthText)
{
	P_GET_PROPERTY(FTextProperty,Z_Param_newText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHealthText(Z_Param_newText);
	P_NATIVE_END;
}
// ********** End Class UHealthWidget Function SetHealthText ***************************************

// ********** Begin Class UHealthWidget ************************************************************
void UHealthWidget::StaticRegisterNativesUHealthWidget()
{
	UClass* Class = UHealthWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetHealth", &UHealthWidget::execSetHealth },
		{ "SetHealthText", &UHealthWidget::execSetHealthText },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHealthWidget;
UClass* UHealthWidget::GetPrivateStaticClass()
{
	using TClass = UHealthWidget;
	if (!Z_Registration_Info_UClass_UHealthWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HealthWidget"),
			Z_Registration_Info_UClass_UHealthWidget.InnerSingleton,
			StaticRegisterNativesUHealthWidget,
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
	return Z_Registration_Info_UClass_UHealthWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UHealthWidget_NoRegister()
{
	return UHealthWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHealthWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HealthWidget.h" },
		{ "ModuleRelativePath", "HealthWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Health" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HealthWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthTextBlock_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UProgressBar* HealthProgressBar = nullptr;\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HealthWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UProgressBar* HealthProgressBar = nullptr;" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthProgressBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthTextBlock;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHealthWidget_SetHealth, "SetHealth" }, // 2048461826
		{ &Z_Construct_UFunction_UHealthWidget_SetHealthText, "SetHealthText" }, // 648446687
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealthWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHealthWidget_Statics::NewProp_HealthProgressBar = { "HealthProgressBar", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthWidget, HealthProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthProgressBar_MetaData), NewProp_HealthProgressBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHealthWidget_Statics::NewProp_HealthTextBlock = { "HealthTextBlock", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthWidget, HealthTextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthTextBlock_MetaData), NewProp_HealthTextBlock_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHealthWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthWidget_Statics::NewProp_HealthProgressBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthWidget_Statics::NewProp_HealthTextBlock,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHealthWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHealthWidget_Statics::ClassParams = {
	&UHealthWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHealthWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHealthWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UHealthWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHealthWidget()
{
	if (!Z_Registration_Info_UClass_UHealthWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHealthWidget.OuterSingleton, Z_Construct_UClass_UHealthWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHealthWidget.OuterSingleton;
}
UHealthWidget::UHealthWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHealthWidget);
UHealthWidget::~UHealthWidget() {}
// ********** End Class UHealthWidget **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Aluno_Documents_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_HealthWidget_h__Script_MyProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHealthWidget, UHealthWidget::StaticClass, TEXT("UHealthWidget"), &Z_Registration_Info_UClass_UHealthWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHealthWidget), 2733233375U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Aluno_Documents_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_HealthWidget_h__Script_MyProject_1954016879(TEXT("/Script/MyProject"),
	Z_CompiledInDeferFile_FID_Users_Aluno_Documents_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_HealthWidget_h__Script_MyProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Aluno_Documents_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_HealthWidget_h__Script_MyProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
