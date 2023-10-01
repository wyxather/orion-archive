#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Trait_Revivalist_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Trait_Revivalist.Trait_Revivalist_C.GetWoundedReviveSpeedMod
struct UTrait_Revivalist_C_GetWoundedReviveSpeedMod_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Trait_Revivalist.Trait_Revivalist_C.OnComputeStats
struct UTrait_Revivalist_C_OnComputeStats_Params
{
};

// Function Trait_Revivalist.Trait_Revivalist_C.ExecuteUbergraph_Trait_Revivalist
struct UTrait_Revivalist_C_ExecuteUbergraph_Trait_Revivalist_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
