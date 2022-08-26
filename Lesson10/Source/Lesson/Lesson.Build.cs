// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Lesson : ModuleRules
{
	public Lesson(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
