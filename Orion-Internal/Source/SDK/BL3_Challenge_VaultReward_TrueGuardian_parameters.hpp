#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_VaultReward_TrueGuardian_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Challenge_VaultReward_TrueGuardian.Challenge_VaultReward_TrueGuardian_C.CompletedAllPlotMissions
struct UChallenge_VaultReward_TrueGuardian_C_CompletedAllPlotMissions_Params
{
};

// Function Challenge_VaultReward_TrueGuardian.Challenge_VaultReward_TrueGuardian_C.SetBinds
struct UChallenge_VaultReward_TrueGuardian_C_SetBinds_Params
{
	class UChallengesComponent*                        ChallengeComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Challenge_VaultReward_TrueGuardian.Challenge_VaultReward_TrueGuardian_C.CompletedChallenge
struct UChallenge_VaultReward_TrueGuardian_C_CompletedChallenge_Params
{
	class AGbxPlayerController**                       CompletedPlayer;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Challenge_VaultReward_TrueGuardian.Challenge_VaultReward_TrueGuardian_C.OnInitChallengeInstance
struct UChallenge_VaultReward_TrueGuardian_C_OnInitChallengeInstance_Params
{
	class UChallengesComponent**                       OwningChallenges;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AGbxCharacter**                              AssociatedCharacter;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Challenge_VaultReward_TrueGuardian.Challenge_VaultReward_TrueGuardian_C.ExecuteUbergraph_Challenge_VaultReward_TrueGuardian
struct UChallenge_VaultReward_TrueGuardian_C_ExecuteUbergraph_Challenge_VaultReward_TrueGuardian_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
