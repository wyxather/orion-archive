#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Buff_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Buff.Action_Buff_C.GetDesiredVisual
struct UAction_Buff_C_GetDesiredVisual_Params
{
	struct FName                                       Slot;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ID;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Action_Buff.Action_Buff_C.UpdateIcon
struct UAction_Buff_C_UpdateIcon_Params
{
};

// Function Action_Buff.Action_Buff_C.OnReapplyBuff
struct UAction_Buff_C_OnReapplyBuff_Params
{
};

// Function Action_Buff.Action_Buff_C.ClearVisual
struct UAction_Buff_C_ClearVisual_Params
{
};

// Function Action_Buff.Action_Buff_C.SetVisual
struct UAction_Buff_C_SetVisual_Params
{
};

// Function Action_Buff.Action_Buff_C.GetActionCount
struct UAction_Buff_C_GetActionCount_Params
{
	int                                                Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Buff.Action_Buff_C.AllowAction
struct UAction_Buff_C_AllowAction_Params
{
	class UClass**                                     ActionBP;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FDamageInfo*                                InDamageInfo;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Action_Buff.Action_Buff_C.OnDurationTimer
struct UAction_Buff_C_OnDurationTimer_Params
{
};

// Function Action_Buff.Action_Buff_C.OnActionStart
struct UAction_Buff_C_OnActionStart_Params
{
};

// Function Action_Buff.Action_Buff_C.OnTakeDamage
struct UAction_Buff_C_OnTakeDamage_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function Action_Buff.Action_Buff_C.MulticastResetTimer
struct UAction_Buff_C_MulticastResetTimer_Params
{
};

// Function Action_Buff.Action_Buff_C.OnActionStop
struct UAction_Buff_C_OnActionStop_Params
{
};

// Function Action_Buff.Action_Buff_C.OnDead_Event_1
struct UAction_Buff_C_OnDead_Event_1_Params
{
	unsigned char*                                     Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterGunfire**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Cause;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Buff.Action_Buff_C.OnRevived
struct UAction_Buff_C_OnRevived_Params
{
};

// Function Action_Buff.Action_Buff_C.OnLevelChanged
struct UAction_Buff_C_OnLevelChanged_Params
{
};

// Function Action_Buff.Action_Buff_C.MulticastReapplyBuff
struct UAction_Buff_C_MulticastReapplyBuff_Params
{
};

// Function Action_Buff.Action_Buff_C.OnWorldReset
struct UAction_Buff_C_OnWorldReset_Params
{
};

// Function Action_Buff.Action_Buff_C.ExecuteUbergraph_Action_Buff
struct UAction_Buff_C_ExecuteUbergraph_Action_Buff_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Buff.Action_Buff_C.LevelChanged__DelegateSignature
struct UAction_Buff_C_LevelChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
