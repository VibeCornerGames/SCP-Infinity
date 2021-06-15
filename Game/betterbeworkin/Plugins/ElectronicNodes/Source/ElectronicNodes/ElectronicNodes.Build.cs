/* Copyright (C) 2021 Hugo ATTAL - All Rights Reserved
* This plugin is downloadable from the UE4 Marketplace
*/

using System.IO;
using UnrealBuildTool;

public class ElectronicNodes : ModuleRules
{
	public ElectronicNodes(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicIncludePaths.AddRange(
			new string[] { }
		);

		PrivateIncludePaths.AddRange(
			new string[] { }
		);

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core"
			}
		);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"InputCore",
				"Projects",
				"UnrealEd",
				"GraphEditor",
				"BlueprintGraph",
				"AnimGraph",
				"AnimationBlueprintEditor",
				"ControlRig",
				"ControlRigDeveloper",
				"RigVM",
				"RigVMDeveloper",
				"AIGraph",
				"BehaviorTreeEditor",
#if UE_4_26_OR_LATER
				"DeveloperSettings",
#endif
			}
		);

		DynamicallyLoadedModuleNames.AddRange(
			new string[]
				{ }
		);
	}
}