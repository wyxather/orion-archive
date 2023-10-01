#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_EG_TriggerWhileInAir_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_EG_TriggerWhileInAir.Ability_EG_TriggerWhileInAir_C.CalculateAbilityState
struct UAbility_EG_TriggerWhileInAir_C_CalculateAbilityState_Params
{
	EGbxAbilityState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Ability_EG_TriggerWhileInAir.Ability_EG_TriggerWhileInAir_C.OnActivated
struct UAbility_EG_TriggerWhileInAir_C_OnActivated_Params
{
};

// Function Ability_EG_TriggerWhileInAir.Ability_EG_TriggerWhileInAir_C.ExecuteUbergraph_Ability_EG_TriggerWhileInAir
struct UAbility_EG_TriggerWhileInAir_C_ExecuteUbergraph_Ability_EG_TriggerWhileInAir_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
