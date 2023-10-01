#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_KybsWorth_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_KybsWorth.Ability_KybsWorth_C.OnActivated
struct UAbility_KybsWorth_C_OnActivated_Params
{
};

// Function Ability_KybsWorth.Ability_KybsWorth_C.OnCausedDeath_Event
struct UAbility_KybsWorth_C_OnCausedDeath_Event_Params
{
	class UDamageComponent*                            Damaged;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_KybsWorth.Ability_KybsWorth_C.ResetSpawn
struct UAbility_KybsWorth_C_ResetSpawn_Params
{
};

// Function Ability_KybsWorth.Ability_KybsWorth_C.ExecuteUbergraph_Ability_KybsWorth
struct UAbility_KybsWorth_C_ExecuteUbergraph_Ability_KybsWorth_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
