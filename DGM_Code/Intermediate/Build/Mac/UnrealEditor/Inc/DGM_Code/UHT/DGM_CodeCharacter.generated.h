// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DGM_CodeCharacter.h"

#ifdef DGM_CODE_DGM_CodeCharacter_generated_h
#error "DGM_CodeCharacter.generated.h already included, missing '#pragma once' in DGM_CodeCharacter.h"
#endif
#define DGM_CODE_DGM_CodeCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ADGM_CodeCharacter *******************************************************
#define FID_mogboella_School_COMP_GRAPHICS_project_group_project_UnrealSpaceDungeon_DGM_Code_Source_DGM_Code_DGM_CodeCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


struct Z_Construct_UClass_ADGM_CodeCharacter_Statics;
DGM_CODE_API UClass* Z_Construct_UClass_ADGM_CodeCharacter_NoRegister();

#define FID_mogboella_School_COMP_GRAPHICS_project_group_project_UnrealSpaceDungeon_DGM_Code_Source_DGM_Code_DGM_CodeCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADGM_CodeCharacter(); \
	friend struct ::Z_Construct_UClass_ADGM_CodeCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DGM_CODE_API UClass* ::Z_Construct_UClass_ADGM_CodeCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ADGM_CodeCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DGM_Code"), Z_Construct_UClass_ADGM_CodeCharacter_NoRegister) \
	DECLARE_SERIALIZER(ADGM_CodeCharacter)


#define FID_mogboella_School_COMP_GRAPHICS_project_group_project_UnrealSpaceDungeon_DGM_Code_Source_DGM_Code_DGM_CodeCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADGM_CodeCharacter(ADGM_CodeCharacter&&) = delete; \
	ADGM_CodeCharacter(const ADGM_CodeCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADGM_CodeCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADGM_CodeCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ADGM_CodeCharacter) \
	NO_API virtual ~ADGM_CodeCharacter();


#define FID_mogboella_School_COMP_GRAPHICS_project_group_project_UnrealSpaceDungeon_DGM_Code_Source_DGM_Code_DGM_CodeCharacter_h_21_PROLOG
#define FID_mogboella_School_COMP_GRAPHICS_project_group_project_UnrealSpaceDungeon_DGM_Code_Source_DGM_Code_DGM_CodeCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_mogboella_School_COMP_GRAPHICS_project_group_project_UnrealSpaceDungeon_DGM_Code_Source_DGM_Code_DGM_CodeCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_mogboella_School_COMP_GRAPHICS_project_group_project_UnrealSpaceDungeon_DGM_Code_Source_DGM_Code_DGM_CodeCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_mogboella_School_COMP_GRAPHICS_project_group_project_UnrealSpaceDungeon_DGM_Code_Source_DGM_Code_DGM_CodeCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADGM_CodeCharacter;

// ********** End Class ADGM_CodeCharacter *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_mogboella_School_COMP_GRAPHICS_project_group_project_UnrealSpaceDungeon_DGM_Code_Source_DGM_Code_DGM_CodeCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
