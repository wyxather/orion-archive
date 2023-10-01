#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_NimbleJack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_NimbleJack.Ability_NimbleJack_C.CalculateAbilityState
struct UAbility_NimbleJack_C_CalculateAbilityState_Params
{
	EGbxAbilityState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Ability_NimbleJack.Ability_NimbleJack_C.OnRegistered
struct UAbility_NimbleJack_C_OnRegistered_Params
{
};

// Function Ability_NimbleJack.Ability_NimbleJack_C.ExecuteUbergraph_Ability_NimbleJack
struct UAbility_NimbleJack_C_ExecuteUbergraph_Ability_NimbleJack_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
