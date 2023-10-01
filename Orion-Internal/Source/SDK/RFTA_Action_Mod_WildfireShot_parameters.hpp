#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_WildfireShot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Mod_WildfireShot.Action_Mod_WildfireShot_C.ApplyFireDOTStacking
struct UAction_Mod_WildfireShot_C_ApplyFireDOTStacking_Params
{
};

// Function Action_Mod_WildfireShot.Action_Mod_WildfireShot_C.GetWeapon
struct UAction_Mod_WildfireShot_C_GetWeapon_Params
{
	class AActor*                                      Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_WildfireShot.Action_Mod_WildfireShot_C.GetDamageCause
struct UAction_Mod_WildfireShot_C_GetDamageCause_Params
{
	class AActor*                                      Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_WildfireShot.Action_Mod_WildfireShot_C.ReadValues
struct UAction_Mod_WildfireShot_C_ReadValues_Params
{
};

// Function Action_Mod_WildfireShot.Action_Mod_WildfireShot_C.OnActionStart
struct UAction_Mod_WildfireShot_C_OnActionStart_Params
{
};

// Function Action_Mod_WildfireShot.Action_Mod_WildfireShot_C.ExecuteUbergraph_Action_Mod_WildfireShot
struct UAction_Mod_WildfireShot_C_ExecuteUbergraph_Action_Mod_WildfireShot_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
