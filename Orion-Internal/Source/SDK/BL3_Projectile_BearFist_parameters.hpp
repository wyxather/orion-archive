#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_BearFist_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Projectile_BearFist.Projectile_BearFist_C.CreateBearFistLightBeam
struct AProjectile_BearFist_C_CreateBearFistLightBeam_Params
{
	class UClass*                                      LightBeamData;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_BearFist.Projectile_BearFist_C.PullEnemyToIronBear
struct AProjectile_BearFist_C_PullEnemyToIronBear_Params
{
};

// Function Projectile_BearFist.Projectile_BearFist_C.GetIronBearArmAction
struct AProjectile_BearFist_C_GetIronBearArmAction_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      NewAction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_BearFist.Projectile_BearFist_C.UserConstructionScript
struct AProjectile_BearFist_C_UserConstructionScript_Params
{
};

// Function Projectile_BearFist.Projectile_BearFist_C.ReceiveBeginPlay
struct AProjectile_BearFist_C_ReceiveBeginPlay_Params
{
};

// Function Projectile_BearFist.Projectile_BearFist_C.OnExplode
struct AProjectile_BearFist_C_OnExplode_Params
{
};

// Function Projectile_BearFist.Projectile_BearFist_C.OnHitWorld
struct AProjectile_BearFist_C_OnHitWorld_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_BearFist.Projectile_BearFist_C.OnHitDamagableObject
struct AProjectile_BearFist_C_OnHitDamagableObject_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_BearFist.Projectile_BearFist_C.DoProjectilePreCleanup
struct AProjectile_BearFist_C_DoProjectilePreCleanup_Params
{
};

// Function Projectile_BearFist.Projectile_BearFist_C.DoProjectilePostCleanup
struct AProjectile_BearFist_C_DoProjectilePostCleanup_Params
{
};

// Function Projectile_BearFist.Projectile_BearFist_C.AttachNewChain
struct AProjectile_BearFist_C_AttachNewChain_Params
{
};

// Function Projectile_BearFist.Projectile_BearFist_C.BndEvt__DamageTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Projectile_BearFist
struct AProjectile_BearFist_C_BndEvt__DamageTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Projectile_BearFist_Params
{
	class AActor*                                      TouchingActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ComponentTouched;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Projectile_BearFist.Projectile_BearFist_C.ExecuteUbergraph_Projectile_BearFist
struct AProjectile_BearFist_C_ExecuteUbergraph_Projectile_BearFist_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
