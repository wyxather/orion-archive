#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_HiveShot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Mod_HiveShot.Action_Mod_HiveShot_C.GetDamage
struct UAction_Mod_HiveShot_C_GetDamage_Params
{
	float                                              Damage;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_HiveShot.Action_Mod_HiveShot_C.GetPlayerAsCause
struct UAction_Mod_HiveShot_C_GetPlayerAsCause_Params
{
	class AActor*                                      Cause;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_HiveShot.Action_Mod_HiveShot_C.OnActionStart
struct UAction_Mod_HiveShot_C_OnActionStart_Params
{
};

// Function Action_Mod_HiveShot.Action_Mod_HiveShot_C.ExecuteUbergraph_Action_Mod_HiveShot
struct UAction_Mod_HiveShot_C_ExecuteUbergraph_Action_Mod_HiveShot_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
