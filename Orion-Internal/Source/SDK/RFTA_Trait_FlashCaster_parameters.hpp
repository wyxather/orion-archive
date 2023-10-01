#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Trait_FlashCaster_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Trait_FlashCaster.Trait_FlashCaster_C.GetModCastingSpeedAnimPlayRate
struct UTrait_FlashCaster_C_GetModCastingSpeedAnimPlayRate_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Trait_FlashCaster.Trait_FlashCaster_C.ModifyInspectInfo
struct UTrait_FlashCaster_C_ModifyInspectInfo_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               InspectLevel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInspectInfo                                Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Trait_FlashCaster.Trait_FlashCaster_C.GetModCastingSpeedMod
struct UTrait_FlashCaster_C_GetModCastingSpeedMod_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Trait_FlashCaster.Trait_FlashCaster_C.OnComputeStats
struct UTrait_FlashCaster_C_OnComputeStats_Params
{
};

// Function Trait_FlashCaster.Trait_FlashCaster_C.OnPostComputeStats
struct UTrait_FlashCaster_C_OnPostComputeStats_Params
{
};

// Function Trait_FlashCaster.Trait_FlashCaster_C.ExecuteUbergraph_Trait_FlashCaster
struct UTrait_FlashCaster_C_ExecuteUbergraph_Trait_FlashCaster_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
