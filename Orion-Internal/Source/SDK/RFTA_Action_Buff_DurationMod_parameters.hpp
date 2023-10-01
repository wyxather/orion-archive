#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Buff_DurationMod_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Buff_DurationMod.Action_Buff_DurationMod_C.PotencyTraitGetDuration
struct UAction_Buff_DurationMod_C_PotencyTraitGetDuration_Params
{
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Buff_DurationMod.Action_Buff_DurationMod_C.OnActionStart
struct UAction_Buff_DurationMod_C_OnActionStart_Params
{
};

// Function Action_Buff_DurationMod.Action_Buff_DurationMod_C.OnReapplyBuff
struct UAction_Buff_DurationMod_C_OnReapplyBuff_Params
{
};

// Function Action_Buff_DurationMod.Action_Buff_DurationMod_C.ExecuteUbergraph_Action_Buff_DurationMod
struct UAction_Buff_DurationMod_C_ExecuteUbergraph_Action_Buff_DurationMod_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
