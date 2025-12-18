// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DGM_Code : ModuleRules
{
	public DGM_Code(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"DGM_Code",
			"DGM_Code/Variant_Platforming",
			"DGM_Code/Variant_Platforming/Animation",
			"DGM_Code/Variant_Combat",
			"DGM_Code/Variant_Combat/AI",
			"DGM_Code/Variant_Combat/Animation",
			"DGM_Code/Variant_Combat/Gameplay",
			"DGM_Code/Variant_Combat/Interfaces",
			"DGM_Code/Variant_Combat/UI",
			"DGM_Code/Variant_SideScrolling",
			"DGM_Code/Variant_SideScrolling/AI",
			"DGM_Code/Variant_SideScrolling/Gameplay",
			"DGM_Code/Variant_SideScrolling/Interfaces",
			"DGM_Code/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
