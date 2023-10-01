#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Rakkman_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Rakkman.Ability_Rakkman_C.CalculateAbilityState
struct UAbility_Rakkman_C_CalculateAbilityState_Params
{
	EGbxAbilityState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Ability_Rakkman.Ability_Rakkman_C.OnRegistered
struct UAbility_Rakkman_C_OnRegistered_Params
{
};

// Function Ability_Rakkman.Ability_Rakkman_C.ExecuteUbergraph_Ability_Rakkman
struct UAbility_Rakkman_C_ExecuteUbergraph_Ability_Rakkman_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
