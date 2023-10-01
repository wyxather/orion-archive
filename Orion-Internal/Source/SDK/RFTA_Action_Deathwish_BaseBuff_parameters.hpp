#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Deathwish_BaseBuff_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Deathwish_BaseBuff.Action_Deathwish_BaseBuff_C.GetLifeStealPercent
struct UAction_Deathwish_BaseBuff_C_GetLifeStealPercent_Params
{
	float                                              Scalar;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Deathwish_BaseBuff.Action_Deathwish_BaseBuff_C.GetSiphonerTraitLifeStealMod
struct UAction_Deathwish_BaseBuff_C_GetSiphonerTraitLifeStealMod_Params
{
	float                                              ModDamage;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Deathwish_BaseBuff.Action_Deathwish_BaseBuff_C.GetCharactersForDevotion
struct UAction_Deathwish_BaseBuff_C_GetCharactersForDevotion_Params
{
	class AActor**                                     Ref;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ACharacterGunfire*>                   Characters;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function Action_Deathwish_BaseBuff.Action_Deathwish_BaseBuff_C.DoDevoted
struct UAction_Deathwish_BaseBuff_C_DoDevoted_Params
{
	float*                                             Heal;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Deathwish_BaseBuff.Action_Deathwish_BaseBuff_C.HealDamage
struct UAction_Deathwish_BaseBuff_C_HealDamage_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Deathwish_BaseBuff.Action_Deathwish_BaseBuff_C.DecreaseScaling
struct UAction_Deathwish_BaseBuff_C_DecreaseScaling_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Cause;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AdjustedDamage;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Deathwish_BaseBuff.Action_Deathwish_BaseBuff_C.ModifyDamage
struct UAction_Deathwish_BaseBuff_C_ModifyDamage_Params
{
	struct FDamageInfo                                 Info;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_Deathwish_BaseBuff.Action_Deathwish_BaseBuff_C.OnActionStop
struct UAction_Deathwish_BaseBuff_C_OnActionStop_Params
{
};

// Function Action_Deathwish_BaseBuff.Action_Deathwish_BaseBuff_C.OnTick
struct UAction_Deathwish_BaseBuff_C_OnTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Deathwish_BaseBuff.Action_Deathwish_BaseBuff_C.OnHitTarget
struct UAction_Deathwish_BaseBuff_C_OnHitTarget_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function Action_Deathwish_BaseBuff.Action_Deathwish_BaseBuff_C.StopForCinematic
struct UAction_Deathwish_BaseBuff_C_StopForCinematic_Params
{
	class APlayerControllerGunfire**                   Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              bIsInCinematic;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Action_Deathwish_BaseBuff.Action_Deathwish_BaseBuff_C.OnActionStart
struct UAction_Deathwish_BaseBuff_C_OnActionStart_Params
{
};

// Function Action_Deathwish_BaseBuff.Action_Deathwish_BaseBuff_C.ExecuteUbergraph_Action_Deathwish_BaseBuff
struct UAction_Deathwish_BaseBuff_C_ExecuteUbergraph_Action_Deathwish_BaseBuff_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
