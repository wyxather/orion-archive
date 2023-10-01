#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Weapon_FabricatorKill_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Challenge_Weapon_FabricatorKill.Challenge_Weapon_FabricatorKill_C.CheckKillCondition
struct UChallenge_Weapon_FabricatorKill_C_CheckKillCondition_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Challenge_Weapon_FabricatorKill.Challenge_Weapon_FabricatorKill_C.OnInitChallengeInstance
struct UChallenge_Weapon_FabricatorKill_C_OnInitChallengeInstance_Params
{
	class UChallengesComponent**                       OwningChallenges;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AGbxCharacter**                              AssociatedCharacter;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Challenge_Weapon_FabricatorKill.Challenge_Weapon_FabricatorKill_C.ExecuteUbergraph_Challenge_Weapon_FabricatorKill
struct UChallenge_Weapon_FabricatorKill_C_ExecuteUbergraph_Challenge_Weapon_FabricatorKill_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
