#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_Blizzard_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Mod_Blizzard.Action_Mod_Blizzard_C.GetWeapon
struct UAction_Mod_Blizzard_C_GetWeapon_Params
{
	class AActor*                                      Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_Blizzard.Action_Mod_Blizzard_C.GetDamageCause
struct UAction_Mod_Blizzard_C_GetDamageCause_Params
{
	class AActor*                                      Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_Blizzard.Action_Mod_Blizzard_C.OnActionStart
struct UAction_Mod_Blizzard_C_OnActionStart_Params
{
};

// Function Action_Mod_Blizzard.Action_Mod_Blizzard_C.OnDurationExpired
struct UAction_Mod_Blizzard_C_OnDurationExpired_Params
{
};

// Function Action_Mod_Blizzard.Action_Mod_Blizzard_C.ExecuteUbergraph_Action_Mod_Blizzard
struct UAction_Mod_Blizzard_C_ExecuteUbergraph_Action_Mod_Blizzard_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
