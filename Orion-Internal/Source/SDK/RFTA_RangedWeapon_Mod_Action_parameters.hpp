#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_RangedWeapon_Mod_Action_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function RangedWeapon_Mod_Action.RangedWeapon_Mod_Action_C.ModifyDamage
struct ARangedWeapon_Mod_Action_C_ModifyDamage_Params
{
	struct FDamageInfo                                 Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RangedWeapon_Mod_Action.RangedWeapon_Mod_Action_C.DoAction
struct ARangedWeapon_Mod_Action_C_DoAction_Params
{
	class UActionComponent**                           ActionComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ActionID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RangedWeapon_Mod_Action.RangedWeapon_Mod_Action_C.OnActivate
struct ARangedWeapon_Mod_Action_C_OnActivate_Params
{
};

// Function RangedWeapon_Mod_Action.RangedWeapon_Mod_Action_C.OnStartCustomIdle
struct ARangedWeapon_Mod_Action_C_OnStartCustomIdle_Params
{
};

// Function RangedWeapon_Mod_Action.RangedWeapon_Mod_Action_C.OnEndCustomIdle
struct ARangedWeapon_Mod_Action_C_OnEndCustomIdle_Params
{
};

// Function RangedWeapon_Mod_Action.RangedWeapon_Mod_Action_C.OnDetached
struct ARangedWeapon_Mod_Action_C_OnDetached_Params
{
};

// Function RangedWeapon_Mod_Action.RangedWeapon_Mod_Action_C.DoBlowback
struct ARangedWeapon_Mod_Action_C_DoBlowback_Params
{
};

// Function RangedWeapon_Mod_Action.RangedWeapon_Mod_Action_C.ExecuteUbergraph_RangedWeapon_Mod_Action
struct ARangedWeapon_Mod_Action_C_ExecuteUbergraph_RangedWeapon_Mod_Action_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
