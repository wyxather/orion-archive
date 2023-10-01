#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Buff_Consumable_FrenzyDust_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Buff_Consumable_FrenzyDust.Action_Buff_Consumable_FrenzyDust_C.Get Owning Character
struct UAction_Buff_Consumable_FrenzyDust_C_Get_Owning_Character_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterGunfire*                           AsCharacter_Gunfire;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Buff_Consumable_FrenzyDust.Action_Buff_Consumable_FrenzyDust_C.OnComputeStats
struct UAction_Buff_Consumable_FrenzyDust_C_OnComputeStats_Params
{
};

// Function Action_Buff_Consumable_FrenzyDust.Action_Buff_Consumable_FrenzyDust_C.OnActionStart
struct UAction_Buff_Consumable_FrenzyDust_C_OnActionStart_Params
{
};

// Function Action_Buff_Consumable_FrenzyDust.Action_Buff_Consumable_FrenzyDust_C.OnDead_Event_1
struct UAction_Buff_Consumable_FrenzyDust_C_OnDead_Event_1_Params
{
	unsigned char*                                     Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Cause;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Buff_Consumable_FrenzyDust.Action_Buff_Consumable_FrenzyDust_C.OnReapplyBuff
struct UAction_Buff_Consumable_FrenzyDust_C_OnReapplyBuff_Params
{
};

// Function Action_Buff_Consumable_FrenzyDust.Action_Buff_Consumable_FrenzyDust_C.ExecuteUbergraph_Action_Buff_Consumable_FrenzyDust
struct UAction_Buff_Consumable_FrenzyDust_C_ExecuteUbergraph_Action_Buff_Consumable_FrenzyDust_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
