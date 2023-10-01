#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Trait_Invoker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Trait_Invoker.Trait_Invoker_C.GetSummonedCreatureDamageMod
struct UTrait_Invoker_C_GetSummonedCreatureDamageMod_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Trait_Invoker.Trait_Invoker_C.OnComputeStats
struct UTrait_Invoker_C_OnComputeStats_Params
{
};

// Function Trait_Invoker.Trait_Invoker_C.ExecuteUbergraph_Trait_Invoker
struct UTrait_Invoker_C_ExecuteUbergraph_Trait_Invoker_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
