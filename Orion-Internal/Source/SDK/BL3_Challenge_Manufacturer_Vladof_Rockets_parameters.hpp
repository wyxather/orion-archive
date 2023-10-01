#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Manufacturer_Vladof_Rockets_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Challenge_Manufacturer_Vladof_Rockets.Challenge_Manufacturer_Vladof_Rockets_C.CheckRocketUnderbarrel
struct UChallenge_Manufacturer_Vladof_Rockets_C_CheckRocketUnderbarrel_Params
{
	class AOakWeapon*                                  Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CorrectUnderbarrel;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Challenge_Manufacturer_Vladof_Rockets.Challenge_Manufacturer_Vladof_Rockets_C.CheckKillCondition
struct UChallenge_Manufacturer_Vladof_Rockets_C_CheckKillCondition_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         DeathDetails;                                             // (BlueprintVisible, Parm, OutParm, ReferenceParm)
};

// Function Challenge_Manufacturer_Vladof_Rockets.Challenge_Manufacturer_Vladof_Rockets_C.OnInitChallengeInstance
struct UChallenge_Manufacturer_Vladof_Rockets_C_OnInitChallengeInstance_Params
{
	class UChallengesComponent**                       OwningChallenges;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AGbxCharacter**                              AssociatedCharacter;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
