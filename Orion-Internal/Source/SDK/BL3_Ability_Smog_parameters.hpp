#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Smog_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Smog.Ability_Smog_C.OnRegistered
struct UAbility_Smog_C_OnRegistered_Params
{
};

// Function Ability_Smog.Ability_Smog_C.OnUnregistered
struct UAbility_Smog_C_OnUnregistered_Params
{
};

// Function Ability_Smog.Ability_Smog_C.ExecuteUbergraph_Ability_Smog
struct UAbility_Smog_C_ExecuteUbergraph_Ability_Smog_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
