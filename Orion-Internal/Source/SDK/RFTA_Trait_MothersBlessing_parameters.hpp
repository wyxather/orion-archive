#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Trait_MothersBlessing_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Trait_MothersBlessing.Trait_MothersBlessing_C.GetRangedDamageReduction
struct UTrait_MothersBlessing_C_GetRangedDamageReduction_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Trait_MothersBlessing.Trait_MothersBlessing_C.OnComputeStats
struct UTrait_MothersBlessing_C_OnComputeStats_Params
{
};

// Function Trait_MothersBlessing.Trait_MothersBlessing_C.ExecuteUbergraph_Trait_MothersBlessing
struct UTrait_MothersBlessing_C_ExecuteUbergraph_Trait_MothersBlessing_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
