#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_CraderMP5_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_CraderMP5.Ability_CraderMP5_C.CalculateAbilityState
struct UAbility_CraderMP5_C_CalculateAbilityState_Params
{
	EGbxAbilityState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Ability_CraderMP5.Ability_CraderMP5_C.OnActivated
struct UAbility_CraderMP5_C_OnActivated_Params
{
};

// Function Ability_CraderMP5.Ability_CraderMP5_C.OnDeactivated
struct UAbility_CraderMP5_C_OnDeactivated_Params
{
};

// Function Ability_CraderMP5.Ability_CraderMP5_C.ExecuteUbergraph_Ability_CraderMP5
struct UAbility_CraderMP5_C_ExecuteUbergraph_Ability_CraderMP5_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
