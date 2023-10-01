#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_BloodyHarvest_17_Dogleg_CryoHaunted_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Challenge_BloodyHarvest_17_Dogleg_CryoHaunted.Challenge_BloodyHarvest_17_Dogleg_CryoHaunted_C.OnInitChallengeInstance
struct UChallenge_BloodyHarvest_17_Dogleg_CryoHaunted_C_OnInitChallengeInstance_Params
{
	class UChallengesComponent**                       OwningChallenges;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AGbxCharacter**                              AssociatedCharacter;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Challenge_BloodyHarvest_17_Dogleg_CryoHaunted.Challenge_BloodyHarvest_17_Dogleg_CryoHaunted_C.CheckKillConditions
struct UChallenge_BloodyHarvest_17_Dogleg_CryoHaunted_C_CheckKillConditions_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Challenge_BloodyHarvest_17_Dogleg_CryoHaunted.Challenge_BloodyHarvest_17_Dogleg_CryoHaunted_C.ExecuteUbergraph_Challenge_BloodyHarvest_17_Dogleg_CryoHaunted
struct UChallenge_BloodyHarvest_17_Dogleg_CryoHaunted_C_ExecuteUbergraph_Challenge_BloodyHarvest_17_Dogleg_CryoHaunted_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
