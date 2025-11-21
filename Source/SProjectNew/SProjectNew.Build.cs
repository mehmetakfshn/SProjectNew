// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;


public class SProjectNew : ModuleRules
{
	public SProjectNew(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"NavigationSystem",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"Niagara",
			"UMG",
			"Slate",
			"MediaAssets",
			"MediaUtils",
			"Media",
			"MediaIOCore"

		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"SProjectNew",
			"SProjectNew/Variant_Strategy",
			"SProjectNew/Variant_Strategy/UI",
			"SProjectNew/Variant_TwinStick",
			"SProjectNew/Variant_TwinStick/AI",
			"SProjectNew/Variant_TwinStick/Gameplay",
			"SProjectNew/Variant_TwinStick/UI",
			Path.Combine(ModuleDirectory, "../ThirdParty/SQLite/include")
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
