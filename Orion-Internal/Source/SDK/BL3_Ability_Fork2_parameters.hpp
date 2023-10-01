#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Fork2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Fork2.Ability_Fork2_C.OnActivated
struct UAbility_Fork2_C_OnActivated_Params
{
};

// Function Ability_Fork2.Ability_Fork2_C.OnDeactivated
struct UAbility_Fork2_C_OnDeactivated_Params
{
};

// Function Ability_Fork2.Ability_Fork2_C.ExecuteUbergraph_Ability_Fork2
struct UAbility_Fork2_C_ExecuteUbergraph_Ability_Fork2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
