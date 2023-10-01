#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_MendersAura_Heal_Action_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mod_MendersAura_Heal_Action.Mod_MendersAura_Heal_Action_C.Get Owning Character
struct UMod_MendersAura_Heal_Action_C_Get_Owning_Character_Params
{
	class AActor**                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterGunfire*                           CharacterRef;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_MendersAura_Heal_Action.Mod_MendersAura_Heal_Action_C.Release
struct UMod_MendersAura_Heal_Action_C_Release_Params
{
};

// Function Mod_MendersAura_Heal_Action.Mod_MendersAura_Heal_Action_C.AllowAction
struct UMod_MendersAura_Heal_Action_C_AllowAction_Params
{
	class UClass**                                     ActionBP;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FDamageInfo*                                InDamageInfo;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Mod_MendersAura_Heal_Action.Mod_MendersAura_Heal_Action_C.OnActionStart
struct UMod_MendersAura_Heal_Action_C_OnActionStart_Params
{
};

// Function Mod_MendersAura_Heal_Action.Mod_MendersAura_Heal_Action_C.OnDead_Event_1
struct UMod_MendersAura_Heal_Action_C_OnDead_Event_1_Params
{
	unsigned char*                                     Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Cause;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Mod_MendersAura_Heal_Action.Mod_MendersAura_Heal_Action_C.OnComputeStats
struct UMod_MendersAura_Heal_Action_C_OnComputeStats_Params
{
};

// Function Mod_MendersAura_Heal_Action.Mod_MendersAura_Heal_Action_C.ExecuteUbergraph_Mod_MendersAura_Heal_Action
struct UMod_MendersAura_Heal_Action_C_ExecuteUbergraph_Mod_MendersAura_Heal_Action_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
