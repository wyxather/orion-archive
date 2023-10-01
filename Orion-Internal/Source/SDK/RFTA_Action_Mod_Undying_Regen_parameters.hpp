#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_Undying_Regen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Mod_Undying_Regen.Action_Mod_Undying_Regen_C.OnActionStart
struct UAction_Mod_Undying_Regen_C_OnActionStart_Params
{
};

// Function Action_Mod_Undying_Regen.Action_Mod_Undying_Regen_C.OnTick
struct UAction_Mod_Undying_Regen_C_OnTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_Undying_Regen.Action_Mod_Undying_Regen_C.ExecuteUbergraph_Action_Mod_Undying_Regen
struct UAction_Mod_Undying_Regen_C_ExecuteUbergraph_Action_Mod_Undying_Regen_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
