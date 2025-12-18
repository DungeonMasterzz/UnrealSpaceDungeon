// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DGM_CodePlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeDGM_CodePlayerController() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
DGM_CODE_API UClass* Z_Construct_UClass_ADGM_CodePlayerController();
DGM_CODE_API UClass* Z_Construct_UClass_ADGM_CodePlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_DGM_Code();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ADGM_CodePlayerController ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ADGM_CodePlayerController;
UClass* ADGM_CodePlayerController::GetPrivateStaticClass()
{
	using TClass = ADGM_CodePlayerController;
	if (!Z_Registration_Info_UClass_ADGM_CodePlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("DGM_CodePlayerController"),
			Z_Registration_Info_UClass_ADGM_CodePlayerController.InnerSingleton,
			StaticRegisterNativesADGM_CodePlayerController,
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
	return Z_Registration_Info_UClass_ADGM_CodePlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_ADGM_CodePlayerController_NoRegister()
{
	return ADGM_CodePlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADGM_CodePlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic PlayerController class for a third person game\n *  Manages input mappings\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "DGM_CodePlayerController.h" },
		{ "ModuleRelativePath", "DGM_CodePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic PlayerController class for a third person game\nManages input mappings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContexts_MetaData[] = {
		{ "Category", "Input|Input Mappings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Contexts */" },
#endif
		{ "ModuleRelativePath", "DGM_CodePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Contexts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileExcludedMappingContexts_MetaData[] = {
		{ "Category", "Input|Input Mappings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Contexts */" },
#endif
		{ "ModuleRelativePath", "DGM_CodePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Contexts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileControlsWidgetClass_MetaData[] = {
		{ "Category", "Input|Touch Controls" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mobile controls widget to spawn */" },
#endif
		{ "ModuleRelativePath", "DGM_CodePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mobile controls widget to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileControlsWidget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pointer to the mobile controls widget */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DGM_CodePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pointer to the mobile controls widget" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceTouchControls_MetaData[] = {
		{ "Category", "Input|Touch Controls" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, the player will use UMG touch controls even if not playing on mobile platforms */" },
#endif
		{ "ModuleRelativePath", "DGM_CodePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the player will use UMG touch controls even if not playing on mobile platforms" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class ADGM_CodePlayerController constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultMappingContexts;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MobileExcludedMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MobileExcludedMappingContexts;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MobileControlsWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MobileControlsWidget;
	static void NewProp_bForceTouchControls_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceTouchControls;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ADGM_CodePlayerController constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADGM_CodePlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ADGM_CodePlayerController_Statics

// ********** Begin Class ADGM_CodePlayerController Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADGM_CodePlayerController_Statics::NewProp_DefaultMappingContexts_Inner = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADGM_CodePlayerController_Statics::NewProp_DefaultMappingContexts = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADGM_CodePlayerController, DefaultMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContexts_MetaData), NewProp_DefaultMappingContexts_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADGM_CodePlayerController_Statics::NewProp_MobileExcludedMappingContexts_Inner = { "MobileExcludedMappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADGM_CodePlayerController_Statics::NewProp_MobileExcludedMappingContexts = { "MobileExcludedMappingContexts", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADGM_CodePlayerController, MobileExcludedMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileExcludedMappingContexts_MetaData), NewProp_MobileExcludedMappingContexts_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADGM_CodePlayerController_Statics::NewProp_MobileControlsWidgetClass = { "MobileControlsWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADGM_CodePlayerController, MobileControlsWidgetClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileControlsWidgetClass_MetaData), NewProp_MobileControlsWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADGM_CodePlayerController_Statics::NewProp_MobileControlsWidget = { "MobileControlsWidget", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADGM_CodePlayerController, MobileControlsWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileControlsWidget_MetaData), NewProp_MobileControlsWidget_MetaData) };
void Z_Construct_UClass_ADGM_CodePlayerController_Statics::NewProp_bForceTouchControls_SetBit(void* Obj)
{
	((ADGM_CodePlayerController*)Obj)->bForceTouchControls = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADGM_CodePlayerController_Statics::NewProp_bForceTouchControls = { "bForceTouchControls", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADGM_CodePlayerController), &Z_Construct_UClass_ADGM_CodePlayerController_Statics::NewProp_bForceTouchControls_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceTouchControls_MetaData), NewProp_bForceTouchControls_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADGM_CodePlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADGM_CodePlayerController_Statics::NewProp_DefaultMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADGM_CodePlayerController_Statics::NewProp_DefaultMappingContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADGM_CodePlayerController_Statics::NewProp_MobileExcludedMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADGM_CodePlayerController_Statics::NewProp_MobileExcludedMappingContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADGM_CodePlayerController_Statics::NewProp_MobileControlsWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADGM_CodePlayerController_Statics::NewProp_MobileControlsWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADGM_CodePlayerController_Statics::NewProp_bForceTouchControls,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADGM_CodePlayerController_Statics::PropPointers) < 2048);
// ********** End Class ADGM_CodePlayerController Property Definitions *****************************
UObject* (*const Z_Construct_UClass_ADGM_CodePlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_DGM_Code,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADGM_CodePlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADGM_CodePlayerController_Statics::ClassParams = {
	&ADGM_CodePlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADGM_CodePlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADGM_CodePlayerController_Statics::PropPointers),
	0,
	0x008002A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADGM_CodePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ADGM_CodePlayerController_Statics::Class_MetaDataParams)
};
void ADGM_CodePlayerController::StaticRegisterNativesADGM_CodePlayerController()
{
}
UClass* Z_Construct_UClass_ADGM_CodePlayerController()
{
	if (!Z_Registration_Info_UClass_ADGM_CodePlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADGM_CodePlayerController.OuterSingleton, Z_Construct_UClass_ADGM_CodePlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADGM_CodePlayerController.OuterSingleton;
}
ADGM_CodePlayerController::ADGM_CodePlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ADGM_CodePlayerController);
ADGM_CodePlayerController::~ADGM_CodePlayerController() {}
// ********** End Class ADGM_CodePlayerController **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_mogboella_School_COMP_GRAPHICS_project_group_project_UnrealSpaceDungeon_DGM_Code_Source_DGM_Code_DGM_CodePlayerController_h__Script_DGM_Code_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADGM_CodePlayerController, ADGM_CodePlayerController::StaticClass, TEXT("ADGM_CodePlayerController"), &Z_Registration_Info_UClass_ADGM_CodePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADGM_CodePlayerController), 1920777309U) },
	};
}; // Z_CompiledInDeferFile_FID_mogboella_School_COMP_GRAPHICS_project_group_project_UnrealSpaceDungeon_DGM_Code_Source_DGM_Code_DGM_CodePlayerController_h__Script_DGM_Code_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_mogboella_School_COMP_GRAPHICS_project_group_project_UnrealSpaceDungeon_DGM_Code_Source_DGM_Code_DGM_CodePlayerController_h__Script_DGM_Code_809464779{
	TEXT("/Script/DGM_Code"),
	Z_CompiledInDeferFile_FID_mogboella_School_COMP_GRAPHICS_project_group_project_UnrealSpaceDungeon_DGM_Code_Source_DGM_Code_DGM_CodePlayerController_h__Script_DGM_Code_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_mogboella_School_COMP_GRAPHICS_project_group_project_UnrealSpaceDungeon_DGM_Code_Source_DGM_Code_DGM_CodePlayerController_h__Script_DGM_Code_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
