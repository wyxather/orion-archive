#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Fork_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Fork.Ability_Fork_C.OnActivated
struct UAbility_Fork_C_OnActivated_Params
{
};

// Function Ability_Fork.Ability_Fork_C.OnDeactivated
struct UAbility_Fork_C_OnDeactivated_Params
{
};

// Function Ability_Fork.Ability_Fork_C.ExecuteUbergraph_Ability_Fork
struct UAbility_Fork_C_ExecuteUbergraph_Ability_Fork_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
