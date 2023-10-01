#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_VanquisherFireRate_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_VanquisherFireRate.Ability_VanquisherFireRate_C.CalculateAbilityState
struct UAbility_VanquisherFireRate_C_CalculateAbilityState_Params
{
	EGbxAbilityState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Ability_VanquisherFireRate.Ability_VanquisherFireRate_C.OnActivated
struct UAbility_VanquisherFireRate_C_OnActivated_Params
{
};

// Function Ability_VanquisherFireRate.Ability_VanquisherFireRate_C.ExecuteUbergraph_Ability_VanquisherFireRate
struct UAbility_VanquisherFireRate_C_ExecuteUbergraph_Ability_VanquisherFireRate_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
