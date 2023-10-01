#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Trait_Vigor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Trait_Vigor.Trait_Vigor_C.GetHealthMax
struct UTrait_Vigor_C_GetHealthMax_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Trait_Vigor.Trait_Vigor_C.OnComputeStats
struct UTrait_Vigor_C_OnComputeStats_Params
{
};

// Function Trait_Vigor.Trait_Vigor_C.ExecuteUbergraph_Trait_Vigor
struct UTrait_Vigor_C_ExecuteUbergraph_Trait_Vigor_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
