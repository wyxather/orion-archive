#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_HandCannon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_HandCannon.Ability_HandCannon_C.OnActivated
struct UAbility_HandCannon_C_OnActivated_Params
{
};

// Function Ability_HandCannon.Ability_HandCannon_C.OnDeactivated
struct UAbility_HandCannon_C_OnDeactivated_Params
{
};

// Function Ability_HandCannon.Ability_HandCannon_C.OnUnregistered
struct UAbility_HandCannon_C_OnUnregistered_Params
{
};

// Function Ability_HandCannon.Ability_HandCannon_C.OnPaused
struct UAbility_HandCannon_C_OnPaused_Params
{
};

// Function Ability_HandCannon.Ability_HandCannon_C.ExecuteUbergraph_Ability_HandCannon
struct UAbility_HandCannon_C_ExecuteUbergraph_Ability_HandCannon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
