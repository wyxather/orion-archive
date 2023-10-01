#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_OverheatSelfBurn_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.CalculateAbilityState
struct UAbility_OverheatSelfBurn_C_CalculateAbilityState_Params
{
	EGbxAbilityState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.OnPaused
struct UAbility_OverheatSelfBurn_C_OnPaused_Params
{
};

// Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.OnResumed
struct UAbility_OverheatSelfBurn_C_OnResumed_Params
{
};

// Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.OnActivated
struct UAbility_OverheatSelfBurn_C_OnActivated_Params
{
};

// Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.OnDeactivated
struct UAbility_OverheatSelfBurn_C_OnDeactivated_Params
{
};

// Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.OnUnregistered
struct UAbility_OverheatSelfBurn_C_OnUnregistered_Params
{
};

// Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.ExitedDownState
struct UAbility_OverheatSelfBurn_C_ExitedDownState_Params
{
};

// Function Ability_OverheatSelfBurn.Ability_OverheatSelfBurn_C.ExecuteUbergraph_Ability_OverheatSelfBurn
struct UAbility_OverheatSelfBurn_C_ExecuteUbergraph_Ability_OverheatSelfBurn_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
