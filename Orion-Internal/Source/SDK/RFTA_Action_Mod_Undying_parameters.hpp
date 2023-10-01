#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_Undying_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Mod_Undying.Action_Mod_Undying_C.GetShieldValue
struct UAction_Mod_Undying_C_GetShieldValue_Params
{
	float                                              ShieldValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_Undying.Action_Mod_Undying_C.IsInAbortableInteractive
struct UAction_Mod_Undying_C_IsInAbortableInteractive_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_Mod_Undying.Action_Mod_Undying_C.GetOwnerHealth
struct UAction_Mod_Undying_C_GetOwnerHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterGunfire*                           AsCharacter_Gunfire;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_Undying.Action_Mod_Undying_C.UpdateReviving
struct UAction_Mod_Undying_C_UpdateReviving_Params
{
};

// Function Action_Mod_Undying.Action_Mod_Undying_C.OnRep_Reviving
struct UAction_Mod_Undying_C_OnRep_Reviving_Params
{
};

// Function Action_Mod_Undying.Action_Mod_Undying_C.FilterIncomingDamage
struct UAction_Mod_Undying_C_FilterIncomingDamage_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FDamageInfo                                 DamageInfoOut;                                            // (Parm, OutParm, ContainsInstancedReference)
	bool                                               ShouldApplyDamage;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_Mod_Undying.Action_Mod_Undying_C.OnStateChanged
struct UAction_Mod_Undying_C_OnStateChanged_Params
{
	struct FName*                                      StateName;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName*                                      PreviousStateName;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_Undying.Action_Mod_Undying_C.OnActionStart
struct UAction_Mod_Undying_C_OnActionStart_Params
{
};

// Function Action_Mod_Undying.Action_Mod_Undying_C.OnActionStop
struct UAction_Mod_Undying_C_OnActionStop_Params
{
};

// Function Action_Mod_Undying.Action_Mod_Undying_C.DamageTaken
struct UAction_Mod_Undying_C_DamageTaken_Params
{
};

// Function Action_Mod_Undying.Action_Mod_Undying_C.ExecuteUbergraph_Action_Mod_Undying
struct UAction_Mod_Undying_C_ExecuteUbergraph_Action_Mod_Undying_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
