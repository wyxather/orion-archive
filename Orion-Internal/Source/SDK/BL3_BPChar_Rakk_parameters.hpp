#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Rakk_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPChar_Rakk.BPChar_Rakk_C.SetElement
struct ABPChar_Rakk_C_SetElement_Params
{
	EOakElementalType                                  Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Rakk.BPChar_Rakk_C.UserConstructionScript
struct ABPChar_Rakk_C_UserConstructionScript_Params
{
};

// Function BPChar_Rakk.BPChar_Rakk_C.OnKilled
struct ABPChar_Rakk_C_OnKilled_Params
{
};

// Function BPChar_Rakk.BPChar_Rakk_C.SpreadDamageAura
struct ABPChar_Rakk_C_SpreadDamageAura_Params
{
	class AActor*                                      SpreadToActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Rakk.BPChar_Rakk_C.TryChromaticSwitch
struct ABPChar_Rakk_C_TryChromaticSwitch_Params
{
};

// Function BPChar_Rakk.BPChar_Rakk_C.ChromaticSwitchWarmup
struct ABPChar_Rakk_C_ChromaticSwitchWarmup_Params
{
};

// Function BPChar_Rakk.BPChar_Rakk_C.ChromaticSwitchCooldown
struct ABPChar_Rakk_C_ChromaticSwitchCooldown_Params
{
};

// Function BPChar_Rakk.BPChar_Rakk_C.StartAttackLoopAudio
struct ABPChar_Rakk_C_StartAttackLoopAudio_Params
{
};

// Function BPChar_Rakk.BPChar_Rakk_C.StopAttackLoopAudio
struct ABPChar_Rakk_C_StopAttackLoopAudio_Params
{
};

// Function BPChar_Rakk.BPChar_Rakk_C.StartAttackAction
struct ABPChar_Rakk_C_StartAttackAction_Params
{
	class UClass*                                      ActionClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Rakk.BPChar_Rakk_C.StopAttackAction
struct ABPChar_Rakk_C_StopAttackAction_Params
{
};

// Function BPChar_Rakk.BPChar_Rakk_C.SetBreathFXSwitch
struct ABPChar_Rakk_C_SetBreathFXSwitch_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Rakk.BPChar_Rakk_C.BndEvt__StatusEffectManagerComponent_K2Node_ComponentBoundEvent_1_CryoFreezeEvent__DelegateSignature_BPChar_Rakk
struct ABPChar_Rakk_C_BndEvt__StatusEffectManagerComponent_K2Node_ComponentBoundEvent_1_CryoFreezeEvent__DelegateSignature_BPChar_Rakk_Params
{
};

// Function BPChar_Rakk.BPChar_Rakk_C.ReceiveBeginPlay
struct ABPChar_Rakk_C_ReceiveBeginPlay_Params
{
};

// Function BPChar_Rakk.BPChar_Rakk_C.BndEvt__DamageComponent_K2Node_ComponentBoundEvent_4_DamageCompDiedDelegate__DelegateSignature_BPChar_Rakk
struct ABPChar_Rakk_C_BndEvt__DamageComponent_K2Node_ComponentBoundEvent_4_DamageCompDiedDelegate__DelegateSignature_BPChar_Rakk_Params
{
	class AActor*                                      DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Rakk.BPChar_Rakk_C.ImbueWithElement
struct ABPChar_Rakk_C_ImbueWithElement_Params
{
	EOakElementalType                                  ElementalType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Rakk.BPChar_Rakk_C.RestoreOriginalElement
struct ABPChar_Rakk_C_RestoreOriginalElement_Params
{
	class AActor*                                      DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Rakk.BPChar_Rakk_C.SetDamageAuraActive
struct ABPChar_Rakk_C_SetDamageAuraActive_Params
{
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Rakk.BPChar_Rakk_C.ElementTimeout
struct ABPChar_Rakk_C_ElementTimeout_Params
{
};

// Function BPChar_Rakk.BPChar_Rakk_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_DamageCompDiedDelegate__DelegateSignature_BPChar_Rakk
struct ABPChar_Rakk_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_DamageCompDiedDelegate__DelegateSignature_BPChar_Rakk_Params
{
	class AActor*                                      DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Rakk.BPChar_Rakk_C.ExecuteUbergraph_BPChar_Rakk
struct ABPChar_Rakk_C_ExecuteUbergraph_BPChar_Rakk_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
