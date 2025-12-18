// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDGM_Code_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	DGM_CODE_API UFunction* Z_Construct_UDelegateFunction_DGM_Code_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DGM_Code;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DGM_Code()
	{
		if (!Z_Registration_Info_UPackage__Script_DGM_Code.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_DGM_Code_OnEnemyDied__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/DGM_Code",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x91ED7470,
			0xBC43BAAD,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DGM_Code.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_DGM_Code.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DGM_Code(Z_Construct_UPackage__Script_DGM_Code, TEXT("/Script/DGM_Code"), Z_Registration_Info_UPackage__Script_DGM_Code, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x91ED7470, 0xBC43BAAD));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
