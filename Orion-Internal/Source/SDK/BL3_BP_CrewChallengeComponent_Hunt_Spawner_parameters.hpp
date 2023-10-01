#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CrewChallengeComponent_Hunt_Spawner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_CrewChallengeComponent_Hunt_Spawner.BP_CrewChallengeComponent_Hunt_Spawner_C.ReceiveBeginPlay
struct UBP_CrewChallengeComponent_Hunt_Spawner_C_ReceiveBeginPlay_Params
{
};

// Function BP_CrewChallengeComponent_Hunt_Spawner.BP_CrewChallengeComponent_Hunt_Spawner_C.Setup_Challenge
struct UBP_CrewChallengeComponent_Hunt_Spawner_C_Setup_Challenge_Params
{
};

// Function BP_CrewChallengeComponent_Hunt_Spawner.BP_CrewChallengeComponent_Hunt_Spawner_C.ChallengeSpawner_AllDead
struct UBP_CrewChallengeComponent_Hunt_Spawner_C_ChallengeSpawner_AllDead_Params
{
	class ASpawner*                                    Spawner;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CrewChallengeComponent_Hunt_Spawner.BP_CrewChallengeComponent_Hunt_Spawner_C.PlayerEnterChallengeArea
struct UBP_CrewChallengeComponent_Hunt_Spawner_C_PlayerEnterChallengeArea_Params
{
	class UChallengesComponent*                        PlayerChallenges;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_CrewChallengeComponent_Hunt_Spawner.BP_CrewChallengeComponent_Hunt_Spawner_C.ExecuteUbergraph_BP_CrewChallengeComponent_Hunt_Spawner
struct UBP_CrewChallengeComponent_Hunt_Spawner_C_ExecuteUbergraph_BP_CrewChallengeComponent_Hunt_Spawner_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
