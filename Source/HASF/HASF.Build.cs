// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class HASF : ModuleRules
{
	public HASF(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
