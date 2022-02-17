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
		string enginePath = Path.GetFullPath(Target.RelativeEnginePath);

		PublicIncludePaths.AddRange(
			new string[] { }
		);

		PrivateIncludePaths.AddRange(
			new string[]
			{
				enginePath + "Source/Editor/AnimationBlueprintEditor/Private/"
			}
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
				"EditorStyle",
				"WebBrowser"
			}
		);

		DynamicallyLoadedModuleNames.AddRange(
			new string[]
				{ }
		);
	}
}