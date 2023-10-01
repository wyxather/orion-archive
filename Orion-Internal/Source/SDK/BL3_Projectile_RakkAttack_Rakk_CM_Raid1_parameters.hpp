#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_RakkAttack_Rakk_CM_Raid1_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.OnRep_IceRakk
struct AProjectile_RakkAttack_Rakk_CM_Raid1_C_OnRep_IceRakk_Params
{
};

// Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.ConfigureFX
struct AProjectile_RakkAttack_Rakk_CM_Raid1_C_ConfigureFX_Params
{
};

// Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.DoRakkDamage
struct AProjectile_RakkAttack_Rakk_CM_Raid1_C_DoRakkDamage_Params
{
};

// Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.SetRakkHomingTarget
struct AProjectile_RakkAttack_Rakk_CM_Raid1_C_SetRakkHomingTarget_Params
{
};

// Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.UserConstructionScript
struct AProjectile_RakkAttack_Rakk_CM_Raid1_C_UserConstructionScript_Params
{
};

// Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.StartHoming
struct AProjectile_RakkAttack_Rakk_CM_Raid1_C_StartHoming_Params
{
};

// Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.HomingTarget_OnDeath
struct AProjectile_RakkAttack_Rakk_CM_Raid1_C_HomingTarget_OnDeath_Params
{
	class AActor*                                      DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.OnHitDamagableObject
struct AProjectile_RakkAttack_Rakk_CM_Raid1_C_OnHitDamagableObject_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.OnHitEnemy
struct AProjectile_RakkAttack_Rakk_CM_Raid1_C_OnHitEnemy_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Projectile_RakkAttack_Rakk_CM_Raid1
struct AProjectile_RakkAttack_Rakk_CM_Raid1_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Projectile_RakkAttack_Rakk_CM_Raid1_Params
{
	class AActor*                                      TouchingActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ComponentTouched;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.ReceiveBeginPlay
struct AProjectile_RakkAttack_Rakk_CM_Raid1_C_ReceiveBeginPlay_Params
{
};

// Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.OnExplode
struct AProjectile_RakkAttack_Rakk_CM_Raid1_C_OnExplode_Params
{
};

// Function Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C.ExecuteUbergraph_Projectile_RakkAttack_Rakk_CM_Raid1
struct AProjectile_RakkAttack_Rakk_CM_Raid1_C_ExecuteUbergraph_Projectile_RakkAttack_Rakk_CM_Raid1_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
