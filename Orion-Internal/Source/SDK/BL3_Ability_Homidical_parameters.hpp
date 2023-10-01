#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Homidical_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Homidical.Ability_Homidical_C.OnRegistered
struct UAbility_Homidical_C_OnRegistered_Params
{
};

// Function Ability_Homidical.Ability_Homidical_C.OnCauseDeath_CE
struct UAbility_Homidical_C_OnCauseDeath_CE_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Homidical.Ability_Homidical_C.OnDownStateExit
struct UAbility_Homidical_C_OnDownStateExit_Params
{
};

// Function Ability_Homidical.Ability_Homidical_C.OnUnregistered
struct UAbility_Homidical_C_OnUnregistered_Params
{
};

// Function Ability_Homidical.Ability_Homidical_C.OnResumed
struct UAbility_Homidical_C_OnResumed_Params
{
};

// Function Ability_Homidical.Ability_Homidical_C.HomicidalTimerEnded
struct UAbility_Homidical_C_HomicidalTimerEnded_Params
{
};

// Function Ability_Homidical.Ability_Homidical_C.OnActivated
struct UAbility_Homidical_C_OnActivated_Params
{
};

// Function Ability_Homidical.Ability_Homidical_C.ExecuteUbergraph_Ability_Homidical
struct UAbility_Homidical_C_ExecuteUbergraph_Ability_Homidical_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
