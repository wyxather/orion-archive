#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Grenade_DeliveryKill_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Challenge_Grenade_DeliveryKill.Challenge_Grenade_DeliveryKill_C.SetBinds
struct UChallenge_Grenade_DeliveryKill_C_SetBinds_Params
{
};

// Function Challenge_Grenade_DeliveryKill.Challenge_Grenade_DeliveryKill_C.CheckKillCondition
struct UChallenge_Grenade_DeliveryKill_C_CheckKillCondition_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         DeathDetails;                                             // (BlueprintVisible, Parm, OutParm, ReferenceParm)
};

// Function Challenge_Grenade_DeliveryKill.Challenge_Grenade_DeliveryKill_C.OnInitChallengeInstance
struct UChallenge_Grenade_DeliveryKill_C_OnInitChallengeInstance_Params
{
	class UChallengesComponent**                       OwningChallenges;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AGbxCharacter**                              AssociatedCharacter;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
