#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Trait_TriggerHappy_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Trait_TriggerHappy.Trait_TriggerHappy_C.GetFireSpeedMod
struct UTrait_TriggerHappy_C_GetFireSpeedMod_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Trait_TriggerHappy.Trait_TriggerHappy_C.OnComputeStats
struct UTrait_TriggerHappy_C_OnComputeStats_Params
{
};

// Function Trait_TriggerHappy.Trait_TriggerHappy_C.ExecuteUbergraph_Trait_TriggerHappy
struct UTrait_TriggerHappy_C_ExecuteUbergraph_Trait_TriggerHappy_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
