#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_Incinerator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Mod_Incinerator.Action_Mod_Incinerator_C.ApplyFireDOTStacking
struct UAction_Mod_Incinerator_C_ApplyFireDOTStacking_Params
{
};

// Function Action_Mod_Incinerator.Action_Mod_Incinerator_C.GetWeapon
struct UAction_Mod_Incinerator_C_GetWeapon_Params
{
	class AActor*                                      Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_Incinerator.Action_Mod_Incinerator_C.GetDamageCause
struct UAction_Mod_Incinerator_C_GetDamageCause_Params
{
	class AActor*                                      Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_Incinerator.Action_Mod_Incinerator_C.ReadValues
struct UAction_Mod_Incinerator_C_ReadValues_Params
{
};

// Function Action_Mod_Incinerator.Action_Mod_Incinerator_C.OnActionStart
struct UAction_Mod_Incinerator_C_OnActionStart_Params
{
};

// Function Action_Mod_Incinerator.Action_Mod_Incinerator_C.ExecuteUbergraph_Action_Mod_Incinerator
struct UAction_Mod_Incinerator_C_ExecuteUbergraph_Action_Mod_Incinerator_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
