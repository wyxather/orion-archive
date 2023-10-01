#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_TinkAnointed_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPChar_TinkAnointed.BPChar_TinkAnointed_C.UserConstructionScript
struct ABPChar_TinkAnointed_C_UserConstructionScript_Params
{
};

// Function BPChar_TinkAnointed.BPChar_TinkAnointed_C.ShrunktoGrow
struct ABPChar_TinkAnointed_C_ShrunktoGrow_Params
{
};

// Function BPChar_TinkAnointed.BPChar_TinkAnointed_C.AnointedFakeDeath
struct ABPChar_TinkAnointed_C_AnointedFakeDeath_Params
{
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_TinkAnointed.BPChar_TinkAnointed_C.ReceiveBeginPlay
struct ABPChar_TinkAnointed_C_ReceiveBeginPlay_Params
{
};

// Function BPChar_TinkAnointed.BPChar_TinkAnointed_C.CE_ShrinkFromGrown
struct ABPChar_TinkAnointed_C_CE_ShrinkFromGrown_Params
{
};

// Function BPChar_TinkAnointed.BPChar_TinkAnointed_C.CE_GrowFromShrunk
struct ABPChar_TinkAnointed_C_CE_GrowFromShrunk_Params
{
};

// Function BPChar_TinkAnointed.BPChar_TinkAnointed_C.Shrink
struct ABPChar_TinkAnointed_C_Shrink_Params
{
};

// Function BPChar_TinkAnointed.BPChar_TinkAnointed_C.Grow
struct ABPChar_TinkAnointed_C_Grow_Params
{
};

// Function BPChar_TinkAnointed.BPChar_TinkAnointed_C.Tink_Anointed_Death
struct ABPChar_TinkAnointed_C_Tink_Anointed_Death_Params
{
};

// Function BPChar_TinkAnointed.BPChar_TinkAnointed_C.Normal
struct ABPChar_TinkAnointed_C_Normal_Params
{
};

// Function BPChar_TinkAnointed.BPChar_TinkAnointed_C.BndEvt__AICloak_K2Node_ComponentBoundEvent_0_AICloakEvent__DelegateSignature_BPChar_PsychoAnointed
struct ABPChar_TinkAnointed_C_BndEvt__AICloak_K2Node_ComponentBoundEvent_0_AICloakEvent__DelegateSignature_BPChar_PsychoAnointed_Params
{
};

// Function BPChar_TinkAnointed.BPChar_TinkAnointed_C.BndEvt__AICloak_K2Node_ComponentBoundEvent_1_AICloakEvent__DelegateSignature_BPChar_PsychoAnointed
struct ABPChar_TinkAnointed_C_BndEvt__AICloak_K2Node_ComponentBoundEvent_1_AICloakEvent__DelegateSignature_BPChar_PsychoAnointed_Params
{
};

// Function BPChar_TinkAnointed.BPChar_TinkAnointed_C.CanLaunch
struct ABPChar_TinkAnointed_C_CanLaunch_Params
{
};

// Function BPChar_TinkAnointed.BPChar_TinkAnointed_C.CannotLaunch
struct ABPChar_TinkAnointed_C_CannotLaunch_Params
{
};

// Function BPChar_TinkAnointed.BPChar_TinkAnointed_C.ADDHealth
struct ABPChar_TinkAnointed_C_ADDHealth_Params
{
};

// Function BPChar_TinkAnointed.BPChar_TinkAnointed_C.CanLaunchColliision
struct ABPChar_TinkAnointed_C_CanLaunchColliision_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BPChar_TinkAnointed.BPChar_TinkAnointed_C.Gigantic
struct ABPChar_TinkAnointed_C_Gigantic_Params
{
};

// Function BPChar_TinkAnointed.BPChar_TinkAnointed_C.GiganticToNormal
struct ABPChar_TinkAnointed_C_GiganticToNormal_Params
{
};

// Function BPChar_TinkAnointed.BPChar_TinkAnointed_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_HitByFriendlyDelegate__DelegateSignature_BPChar_TinkAnointed
struct ABPChar_TinkAnointed_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_HitByFriendlyDelegate__DelegateSignature_BPChar_TinkAnointed_Params
{
	struct FHitByFriendlyEventDetails                  Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BPChar_TinkAnointed.BPChar_TinkAnointed_C.TroyDeathModeOpens
struct ABPChar_TinkAnointed_C_TroyDeathModeOpens_Params
{
};

// Function BPChar_TinkAnointed.BPChar_TinkAnointed_C.BndEvt__AIBalanceState_K2Node_ComponentBoundEvent_1_AnointedDeathStateEvent__DelegateSignature_BPChar_PsychoAnointed
struct ABPChar_TinkAnointed_C_BndEvt__AIBalanceState_K2Node_ComponentBoundEvent_1_AnointedDeathStateEvent__DelegateSignature_BPChar_PsychoAnointed_Params
{
	EAnointedDeathState                                DeathState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_TinkAnointed.BPChar_TinkAnointed_C.ExecuteUbergraph_BPChar_TinkAnointed
struct ABPChar_TinkAnointed_C_ExecuteUbergraph_BPChar_TinkAnointed_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
