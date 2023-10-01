#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Trait_Scavenger_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Trait_Scavenger.Trait_Scavenger_C.GetCurrencyMod
struct UTrait_Scavenger_C_GetCurrencyMod_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Trait_Scavenger.Trait_Scavenger_C.OnComputeStats
struct UTrait_Scavenger_C_OnComputeStats_Params
{
};

// Function Trait_Scavenger.Trait_Scavenger_C.ExecuteUbergraph_Trait_Scavenger
struct UTrait_Scavenger_C_ExecuteUbergraph_Trait_Scavenger_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
