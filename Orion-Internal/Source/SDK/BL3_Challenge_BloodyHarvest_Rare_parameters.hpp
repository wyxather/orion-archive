#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_BloodyHarvest_Rare_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Challenge_BloodyHarvest_Rare.Challenge_BloodyHarvest_Rare_C.OnInitChallengeInstance
struct UChallenge_BloodyHarvest_Rare_C_OnInitChallengeInstance_Params
{
	class UChallengesComponent**                       OwningChallenges;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AGbxCharacter**                              AssociatedCharacter;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Challenge_BloodyHarvest_Rare.Challenge_BloodyHarvest_Rare_C.KillCheck
struct UChallenge_BloodyHarvest_Rare_C_KillCheck_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Challenge_BloodyHarvest_Rare.Challenge_BloodyHarvest_Rare_C.ExecuteUbergraph_Challenge_BloodyHarvest_Rare
struct UChallenge_BloodyHarvest_Rare_C_ExecuteUbergraph_Challenge_BloodyHarvest_Rare_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
