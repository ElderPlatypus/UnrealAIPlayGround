// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Exam_Prep : ModuleRules
{
	public Exam_Prep(ReadOnlyTargetRules Target) : base(Target)
	{
		PrivateDependencyModuleNames.AddRange(new string[] { "AnimGraph" });
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "AIModule", "GameplayTasks","GameplayAbilities", "GameplayTags", "GameplayTasks" });
	}
}
