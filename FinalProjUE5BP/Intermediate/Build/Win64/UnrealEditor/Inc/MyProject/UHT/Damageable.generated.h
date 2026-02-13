// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Damageable.h"

#ifdef MYPROJECT_Damageable_generated_h
#error "Damageable.generated.h already included, missing '#pragma once' in Damageable.h"
#endif
#define MYPROJECT_Damageable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UDamageable **********************************************************
MYPROJECT_API UClass* Z_Construct_UClass_UDamageable_NoRegister();

#define FID_Users_Aluno_Documents_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_Damageable_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDamageable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDamageable(UDamageable&&) = delete; \
	UDamageable(const UDamageable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDamageable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamageable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDamageable) \
	virtual ~UDamageable() = default;


#define FID_Users_Aluno_Documents_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_Damageable_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDamageable(); \
	friend struct Z_Construct_UClass_UDamageable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPROJECT_API UClass* Z_Construct_UClass_UDamageable_NoRegister(); \
public: \
	DECLARE_CLASS2(UDamageable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MyProject"), Z_Construct_UClass_UDamageable_NoRegister) \
	DECLARE_SERIALIZER(UDamageable)


#define FID_Users_Aluno_Documents_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_Damageable_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_Aluno_Documents_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_Damageable_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Users_Aluno_Documents_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_Damageable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Aluno_Documents_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_Damageable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDamageable() {} \
public: \
	typedef UDamageable UClassType; \
	typedef IDamageable ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_Aluno_Documents_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_Damageable_h_10_PROLOG
#define FID_Users_Aluno_Documents_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_Damageable_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Aluno_Documents_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_Damageable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDamageable;

// ********** End Interface UDamageable ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Aluno_Documents_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_Damageable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
