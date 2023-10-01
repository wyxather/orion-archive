#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_FlickerCloak_Action_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mod_FlickerCloak_Action.Mod_FlickerCloak_Action_C.GetShieldDecay
struct UMod_FlickerCloak_Action_C_GetShieldDecay_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_FlickerCloak_Action.Mod_FlickerCloak_Action_C.GetShieldMax
struct UMod_FlickerCloak_Action_C_GetShieldMax_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_FlickerCloak_Action.Mod_FlickerCloak_Action_C.OnTick
struct UMod_FlickerCloak_Action_C_OnTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_FlickerCloak_Action.Mod_FlickerCloak_Action_C.ExecuteUbergraph_Mod_FlickerCloak_Action
struct UMod_FlickerCloak_Action_C_ExecuteUbergraph_Mod_FlickerCloak_Action_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
