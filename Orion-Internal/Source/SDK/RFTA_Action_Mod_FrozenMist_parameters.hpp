#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_FrozenMist_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Mod_FrozenMist.Action_Mod_FrozenMist_C.GetDamageCause
struct UAction_Mod_FrozenMist_C_GetDamageCause_Params
{
	class AActor*                                      Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_FrozenMist.Action_Mod_FrozenMist_C.GetWeapon
struct UAction_Mod_FrozenMist_C_GetWeapon_Params
{
	class AActor*                                      Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_FrozenMist.Action_Mod_FrozenMist_C.GetPlayerAsCause
struct UAction_Mod_FrozenMist_C_GetPlayerAsCause_Params
{
	class AActor*                                      Cause;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_FrozenMist.Action_Mod_FrozenMist_C.GetDamage
struct UAction_Mod_FrozenMist_C_GetDamage_Params
{
	float                                              Rate;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_FrozenMist.Action_Mod_FrozenMist_C.OnActionStart
struct UAction_Mod_FrozenMist_C_OnActionStart_Params
{
};

// Function Action_Mod_FrozenMist.Action_Mod_FrozenMist_C.ExecuteUbergraph_Action_Mod_FrozenMist
struct UAction_Mod_FrozenMist_C_ExecuteUbergraph_Action_Mod_FrozenMist_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
