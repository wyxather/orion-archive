#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Trait_RapidStrike_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Trait_RapidStrike.Trait_RapidStrike_C.ModifyInspectInfo
struct UTrait_RapidStrike_C_ModifyInspectInfo_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               InspectLevel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInspectInfo                                Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Trait_RapidStrike.Trait_RapidStrike_C.GetAttackSpeedMod
struct UTrait_RapidStrike_C_GetAttackSpeedMod_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Trait_RapidStrike.Trait_RapidStrike_C.OnComputeStats
struct UTrait_RapidStrike_C_OnComputeStats_Params
{
};

// Function Trait_RapidStrike.Trait_RapidStrike_C.ExecuteUbergraph_Trait_RapidStrike
struct UTrait_RapidStrike_C_ExecuteUbergraph_Trait_RapidStrike_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
