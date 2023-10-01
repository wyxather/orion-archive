#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Ringer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_Ringer.Proj_Ringer_C.UserConstructionScript
struct AProj_Ringer_C_UserConstructionScript_Params
{
};

// Function Proj_Ringer.Proj_Ringer_C.InitializeElement
struct AProj_Ringer_C_InitializeElement_Params
{
	EOakElementalType                                  ElementType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_Ringer.Proj_Ringer_C.TinkSuicideBomb_SetFuseTimer
struct AProj_Ringer_C_TinkSuicideBomb_SetFuseTimer_Params
{
	float                                              NewFuseTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_Ringer.Proj_Ringer_C.TinkSuicideBomb_SetCurrentHealth
struct AProj_Ringer_C_TinkSuicideBomb_SetCurrentHealth_Params
{
	float                                              NewCurrentHealth;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_Ringer.Proj_Ringer_C.TinkSuicideBomb_StartSuicide
struct AProj_Ringer_C_TinkSuicideBomb_StartSuicide_Params
{
};

// Function Proj_Ringer.Proj_Ringer_C.HNT_Prime
struct AProj_Ringer_C_HNT_Prime_Params
{
};

// Function Proj_Ringer.Proj_Ringer_C.HNT_Drop
struct AProj_Ringer_C_HNT_Drop_Params
{
};

// Function Proj_Ringer.Proj_Ringer_C.HNT_Throw
struct AProj_Ringer_C_HNT_Throw_Params
{
};

// Function Proj_Ringer.Proj_Ringer_C.BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileBounceDelegate__DelegateSignature_Proj_PsychoMale_Shared_ThrownMelee
struct AProj_Ringer_C_BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileBounceDelegate__DelegateSignature_Proj_PsychoMale_Shared_ThrownMelee_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpactVelocity;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_Ringer.Proj_Ringer_C.OnExplode
struct AProj_Ringer_C_OnExplode_Params
{
};

// Function Proj_Ringer.Proj_Ringer_C.ReceiveBeginPlay
struct AProj_Ringer_C_ReceiveBeginPlay_Params
{
};

// Function Proj_Ringer.Proj_Ringer_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_2_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_TinkSuicide_ExplosiveBomb
struct AProj_Ringer_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_2_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_TinkSuicide_ExplosiveBomb_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Proj_Ringer.Proj_Ringer_C.OnHitDamagableObject
struct AProj_Ringer_C_OnHitDamagableObject_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_Ringer.Proj_Ringer_C.FuseTimerExpired
struct AProj_Ringer_C_FuseTimerExpired_Params
{
};

// Function Proj_Ringer.Proj_Ringer_C.ExecuteUbergraph_Proj_Ringer
struct AProj_Ringer_C_ExecuteUbergraph_Proj_Ringer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
