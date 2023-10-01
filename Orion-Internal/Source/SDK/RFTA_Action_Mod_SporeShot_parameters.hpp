#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_SporeShot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Mod_SporeShot.Action_Mod_SporeShot_C.GetPlayerAsCause
struct UAction_Mod_SporeShot_C_GetPlayerAsCause_Params
{
	class AActor*                                      Cause;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_SporeShot.Action_Mod_SporeShot_C.GetDamage
struct UAction_Mod_SporeShot_C_GetDamage_Params
{
	float                                              Damage;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_SporeShot.Action_Mod_SporeShot_C.OnActionStart
struct UAction_Mod_SporeShot_C_OnActionStart_Params
{
};

// Function Action_Mod_SporeShot.Action_Mod_SporeShot_C.ExecuteUbergraph_Action_Mod_SporeShot
struct UAction_Mod_SporeShot_C_ExecuteUbergraph_Action_Mod_SporeShot_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
