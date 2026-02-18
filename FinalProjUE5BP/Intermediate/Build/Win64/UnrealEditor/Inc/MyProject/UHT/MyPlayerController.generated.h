// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyPlayerController.h"

#ifdef MYPROJECT_MyPlayerController_generated_h
#error "MyPlayerController.generated.h already included, missing '#pragma once' in MyPlayerController.h"
#endif
#define MYPROJECT_MyPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMyPlayerController ******************************************************
MYPROJECT_API UClass* Z_Construct_UClass_AMyPlayerController_NoRegister();

#define FID_Users_tiago_Documents_GitHub_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_MyPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPlayerController(); \
	friend struct Z_Construct_UClass_AMyPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MYPROJECT_API UClass* Z_Construct_UClass_AMyPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AMyPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), Z_Construct_UClass_AMyPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AMyPlayerController)


#define FID_Users_tiago_Documents_GitHub_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_MyPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMyPlayerController(AMyPlayerController&&) = delete; \
	AMyPlayerController(const AMyPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPlayerController) \
	NO_API virtual ~AMyPlayerController();


#define FID_Users_tiago_Documents_GitHub_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_MyPlayerController_h_12_PROLOG
#define FID_Users_tiago_Documents_GitHub_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_MyPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_tiago_Documents_GitHub_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_MyPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_tiago_Documents_GitHub_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_MyPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMyPlayerController;

// ********** End Class AMyPlayerController ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_tiago_Documents_GitHub_FinalProj_ModBP_FinalProjUE5BP_Source_MyProject_MyPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
