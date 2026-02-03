// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "I_Interactable.h"

#ifdef MYPROJECT_I_Interactable_generated_h
#error "I_Interactable.generated.h already included, missing '#pragma once' in I_Interactable.h"
#endif
#define MYPROJECT_I_Interactable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UI_Interactable ******************************************************
MYPROJECT_API UClass* Z_Construct_UClass_UI_Interactable_NoRegister();

#define FID_Users_Aluno_Documents_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_I_Interactable_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MYPROJECT_API UI_Interactable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UI_Interactable(UI_Interactable&&) = delete; \
	UI_Interactable(const UI_Interactable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MYPROJECT_API, UI_Interactable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UI_Interactable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UI_Interactable) \
	virtual ~UI_Interactable() = default;


#define FID_Users_Aluno_Documents_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_I_Interactable_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUI_Interactable(); \
	friend struct Z_Construct_UClass_UI_Interactable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPROJECT_API UClass* Z_Construct_UClass_UI_Interactable_NoRegister(); \
public: \
	DECLARE_CLASS2(UI_Interactable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MyProject"), Z_Construct_UClass_UI_Interactable_NoRegister) \
	DECLARE_SERIALIZER(UI_Interactable)


#define FID_Users_Aluno_Documents_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_I_Interactable_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_Aluno_Documents_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_I_Interactable_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Users_Aluno_Documents_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_I_Interactable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Aluno_Documents_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_I_Interactable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~II_Interactable() {} \
public: \
	typedef UI_Interactable UClassType; \
	typedef II_Interactable ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_Aluno_Documents_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_I_Interactable_h_10_PROLOG
#define FID_Users_Aluno_Documents_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_I_Interactable_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Aluno_Documents_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_I_Interactable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UI_Interactable;

// ********** End Interface UI_Interactable ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Aluno_Documents_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_I_Interactable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
