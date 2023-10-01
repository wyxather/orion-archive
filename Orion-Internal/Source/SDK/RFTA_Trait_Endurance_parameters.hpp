#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Trait_Endurance_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Trait_Endurance.Trait_Endurance_C.GetMaxStamina
struct UTrait_Endurance_C_GetMaxStamina_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Trait_Endurance.Trait_Endurance_C.OnComputeStats
struct UTrait_Endurance_C_OnComputeStats_Params
{
};

// Function Trait_Endurance.Trait_Endurance_C.ExecuteUbergraph_Trait_Endurance
struct UTrait_Endurance_C_ExecuteUbergraph_Trait_Endurance_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
