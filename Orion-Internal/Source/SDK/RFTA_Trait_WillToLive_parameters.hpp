#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Trait_WillToLive_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Trait_WillToLive.Trait_WillToLive_C.GetWoundedHealth
struct UTrait_WillToLive_C_GetWoundedHealth_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Trait_WillToLive.Trait_WillToLive_C.OnComputeStats
struct UTrait_WillToLive_C_OnComputeStats_Params
{
};

// Function Trait_WillToLive.Trait_WillToLive_C.ExecuteUbergraph_Trait_WillToLive
struct UTrait_WillToLive_C_ExecuteUbergraph_Trait_WillToLive_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
