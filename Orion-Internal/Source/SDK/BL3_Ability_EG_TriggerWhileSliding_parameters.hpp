#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_EG_TriggerWhileSliding_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_EG_TriggerWhileSliding.Ability_EG_TriggerWhileSliding_C.CalculateAbilityState
struct UAbility_EG_TriggerWhileSliding_C_CalculateAbilityState_Params
{
	EGbxAbilityState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Ability_EG_TriggerWhileSliding.Ability_EG_TriggerWhileSliding_C.OnRegistered
struct UAbility_EG_TriggerWhileSliding_C_OnRegistered_Params
{
};

// Function Ability_EG_TriggerWhileSliding.Ability_EG_TriggerWhileSliding_C.ExecuteUbergraph_Ability_EG_TriggerWhileSliding
struct UAbility_EG_TriggerWhileSliding_C_ExecuteUbergraph_Ability_EG_TriggerWhileSliding_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
