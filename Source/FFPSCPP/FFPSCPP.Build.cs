// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FFPSCPP : ModuleRules
{
	public FFPSCPP(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
