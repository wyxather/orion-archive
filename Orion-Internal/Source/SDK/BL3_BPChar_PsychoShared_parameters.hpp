#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_PsychoShared_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPChar_PsychoShared.BPChar_PsychoShared_C.PsychoShared_GetVariant
struct ABPChar_PsychoShared_C_PsychoShared_GetVariant_Params
{
	TEnumAsByte<Enum_PsychoVariants>                   PsychoVariant;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_PsychoShared.BPChar_PsychoShared_C.UserConstructionScript
struct ABPChar_PsychoShared_C_UserConstructionScript_Params
{
};

// Function BPChar_PsychoShared.BPChar_PsychoShared_C.PsychoShared_MaskBreak
struct ABPChar_PsychoShared_C_PsychoShared_MaskBreak_Params
{
	struct FDamageReactionEventSummary                 Damage_Summary;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPChar_PsychoShared.BPChar_PsychoShared_C.PsychoShared_FireBreath
struct ABPChar_PsychoShared_C_PsychoShared_FireBreath_Params
{
	TEnumAsByte<Enum_PsychoShared_FireBreathFunctions> FireBreath_Function;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_PsychoShared.BPChar_PsychoShared_C.PsychoShared_StolenProjFinished
struct ABPChar_PsychoShared_C_PsychoShared_StolenProjFinished_Params
{
};

// Function BPChar_PsychoShared.BPChar_PsychoShared_C.PsychoShared_Anointed_Death
struct ABPChar_PsychoShared_C_PsychoShared_Anointed_Death_Params
{
};

// Function BPChar_PsychoShared.BPChar_PsychoShared_C.PsychoLoot_Flee_Beam
struct ABPChar_PsychoShared_C_PsychoLoot_Flee_Beam_Params
{
	bool                                               Start;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_PsychoShared.BPChar_PsychoShared_C.PsychoShared_FacePlant
struct ABPChar_PsychoShared_C_PsychoShared_FacePlant_Params
{
	struct FDamageReactionEventSummary                 Damage_Summary;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPChar_PsychoShared.BPChar_PsychoShared_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_HitReactionPlayedDelegate__DelegateSignature_BPChar_PsychoFirebrand
struct ABPChar_PsychoShared_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_HitReactionPlayedDelegate__DelegateSignature_BPChar_PsychoFirebrand_Params
{
	class AActor*                                      DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UHitReactionTag*                             Tag;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_PsychoShared.BPChar_PsychoShared_C.ReceiveBeginPlay
struct ABPChar_PsychoShared_C_ReceiveBeginPlay_Params
{
};

// Function BPChar_PsychoShared.BPChar_PsychoShared_C.BndEvt__DamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_PsychoMaleShared
struct ABPChar_PsychoShared_C_BndEvt__DamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_PsychoMaleShared_Params
{
	class AActor*                                      DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_PsychoShared.BPChar_PsychoShared_C.PsychoShared_TargetChanged
struct ABPChar_PsychoShared_C_PsychoShared_TargetChanged_Params
{
	class AActor*                                      TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_PsychoShared.BPChar_PsychoShared_C.CE_VehicleEnter
struct ABPChar_PsychoShared_C_CE_VehicleEnter_Params
{
	class UPawnAttachSlotComponent*                    PawnAttachSlotComponent;                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPChar_PsychoShared.BPChar_PsychoShared_C.CE_EnterTurret
struct ABPChar_PsychoShared_C_CE_EnterTurret_Params
{
	class UPawnAttachSlotComponent*                    PawnAttachSlotComponent;                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPChar_PsychoShared.BPChar_PsychoShared_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_HitReactionPlayedDelegate__DelegateSignature_BPChar_Goon_UNIX1553272339
struct ABPChar_PsychoShared_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_HitReactionPlayedDelegate__DelegateSignature_BPChar_Goon_UNIX1553272339_Params
{
	class AActor*                                      DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UHitReactionTag*                             Tag;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_PsychoShared.BPChar_PsychoShared_C.ExecuteUbergraph_BPChar_PsychoShared
struct ABPChar_PsychoShared_C_ExecuteUbergraph_BPChar_PsychoShared_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
