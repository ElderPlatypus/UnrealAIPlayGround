// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Exam_Prep : ModuleRules
{
	public Exam_Prep(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "AIModule", "GameplayTasks" });
	}
}
