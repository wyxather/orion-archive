#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Trait_SleightOfHand_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Trait_SleightOfHand.Trait_SleightOfHand_C.GetSwapSpeedMod
struct UTrait_SleightOfHand_C_GetSwapSpeedMod_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Trait_SleightOfHand.Trait_SleightOfHand_C.OnComputeStats
struct UTrait_SleightOfHand_C_OnComputeStats_Params
{
};

// Function Trait_SleightOfHand.Trait_SleightOfHand_C.ExecuteUbergraph_Trait_SleightOfHand
struct UTrait_SleightOfHand_C_ExecuteUbergraph_Trait_SleightOfHand_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
