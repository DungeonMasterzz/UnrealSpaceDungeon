// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DGM_CodeGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeDGM_CodeGameMode() {}

// ********** Begin Cross Module References ********************************************************
DGM_CODE_API UClass* Z_Construct_UClass_ADGM_CodeGameMode();
DGM_CODE_API UClass* Z_Construct_UClass_ADGM_CodeGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_DGM_Code();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ADGM_CodeGameMode ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ADGM_CodeGameMode;
UClass* ADGM_CodeGameMode::GetPrivateStaticClass()
{
	using TClass = ADGM_CodeGameMode;
	if (!Z_Registration_Info_UClass_ADGM_CodeGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("DGM_CodeGameMode"),
			Z_Registration_Info_UClass_ADGM_CodeGameMode.InnerSingleton,
			StaticRegisterNativesADGM_CodeGameMode,
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
	return Z_Registration_Info_UClass_ADGM_CodeGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ADGM_CodeGameMode_NoRegister()
{
	return ADGM_CodeGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADGM_CodeGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DGM_CodeGameMode.h" },
		{ "ModuleRelativePath", "DGM_CodeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class ADGM_CodeGameMode constinit property declarations ************************
// ********** End Class ADGM_CodeGameMode constinit property declarations **************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADGM_CodeGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ADGM_CodeGameMode_Statics
UObject* (*const Z_Construct_UClass_ADGM_CodeGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DGM_Code,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADGM_CodeGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADGM_CodeGameMode_Statics::ClassParams = {
	&ADGM_CodeGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADGM_CodeGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ADGM_CodeGameMode_Statics::Class_MetaDataParams)
};
void ADGM_CodeGameMode::StaticRegisterNativesADGM_CodeGameMode()
{
}
UClass* Z_Construct_UClass_ADGM_CodeGameMode()
{
	if (!Z_Registration_Info_UClass_ADGM_CodeGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADGM_CodeGameMode.OuterSingleton, Z_Construct_UClass_ADGM_CodeGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADGM_CodeGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ADGM_CodeGameMode);
ADGM_CodeGameMode::~ADGM_CodeGameMode() {}
// ********** End Class ADGM_CodeGameMode **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_mogboella_School_COMP_GRAPHICS_project_group_project_UnrealSpaceDungeon_DGM_Code_Source_DGM_Code_DGM_CodeGameMode_h__Script_DGM_Code_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADGM_CodeGameMode, ADGM_CodeGameMode::StaticClass, TEXT("ADGM_CodeGameMode"), &Z_Registration_Info_UClass_ADGM_CodeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADGM_CodeGameMode), 3229230118U) },
	};
}; // Z_CompiledInDeferFile_FID_mogboella_School_COMP_GRAPHICS_project_group_project_UnrealSpaceDungeon_DGM_Code_Source_DGM_Code_DGM_CodeGameMode_h__Script_DGM_Code_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_mogboella_School_COMP_GRAPHICS_project_group_project_UnrealSpaceDungeon_DGM_Code_Source_DGM_Code_DGM_CodeGameMode_h__Script_DGM_Code_499478538{
	TEXT("/Script/DGM_Code"),
	Z_CompiledInDeferFile_FID_mogboella_School_COMP_GRAPHICS_project_group_project_UnrealSpaceDungeon_DGM_Code_Source_DGM_Code_DGM_CodeGameMode_h__Script_DGM_Code_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_mogboella_School_COMP_GRAPHICS_project_group_project_UnrealSpaceDungeon_DGM_Code_Source_DGM_Code_DGM_CodeGameMode_h__Script_DGM_Code_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
