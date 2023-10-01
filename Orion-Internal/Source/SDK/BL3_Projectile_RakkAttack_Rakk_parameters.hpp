#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_RakkAttack_Rakk_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetHitTarget
struct AProjectile_RakkAttack_Rakk_C_SetHitTarget_Params
{
	class AActor*                                      SourceActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetHomingAndLocationWithDelay
struct AProjectile_RakkAttack_Rakk_C_SetHomingAndLocationWithDelay_Params
{
	class AActor*                                      NewTarget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.ChooseTargetFromSet
struct AProjectile_RakkAttack_Rakk_C_ChooseTargetFromSet_Params
{
	TArray<class AActor*>                              SetRef;                                                   // (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.FindNewTarget
struct AProjectile_RakkAttack_Rakk_C_FindNewTarget_Params
{
};

// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.ReleaseCurrentHomingTarget
struct AProjectile_RakkAttack_Rakk_C_ReleaseCurrentHomingTarget_Params
{
};

// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnRep_bReturningToOwner
struct AProjectile_RakkAttack_Rakk_C_OnRep_bReturningToOwner_Params
{
};

// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.DoMod1Heal
struct AProjectile_RakkAttack_Rakk_C_DoMod1Heal_Params
{
};

// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.HasHomingTarget
struct AProjectile_RakkAttack_Rakk_C_HasHomingTarget_Params
{
	bool                                               bRes;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetupRakkElement
struct AProjectile_RakkAttack_Rakk_C_SetupRakkElement_Params
{
};

// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetupElementalMaterials
struct AProjectile_RakkAttack_Rakk_C_SetupElementalMaterials_Params
{
	class UMaterialInstance*                           Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             PassiveParticle;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.DoPreDestroyCleanup
struct AProjectile_RakkAttack_Rakk_C_DoPreDestroyCleanup_Params
{
};

// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetupMod1Transfusion
struct AProjectile_RakkAttack_Rakk_C_SetupMod1Transfusion_Params
{
};

// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.InitAudio
struct AProjectile_RakkAttack_Rakk_C_InitAudio_Params
{
};

// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetHomingAndLocation
struct AProjectile_RakkAttack_Rakk_C_SetHomingAndLocation_Params
{
	class AActor*                                      NewTarget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.DoRakkDamage
struct AProjectile_RakkAttack_Rakk_C_DoRakkDamage_Params
{
};

// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.UserConstructionScript
struct AProjectile_RakkAttack_Rakk_C_UserConstructionScript_Params
{
};

// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnAnimEnd_A3A042B947729CE01D4C998DA75FCBF4
struct AProjectile_RakkAttack_Rakk_C_OnAnimEnd_A3A042B947729CE01D4C998DA75FCBF4_Params
{
};

// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnEnd_A3A042B947729CE01D4C998DA75FCBF4
struct AProjectile_RakkAttack_Rakk_C_OnEnd_A3A042B947729CE01D4C998DA75FCBF4_Params
{
	EGbxActionEndState                                 EndState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnAnimEnd_D54427794086CD24870288B0EF46744B
struct AProjectile_RakkAttack_Rakk_C_OnAnimEnd_D54427794086CD24870288B0EF46744B_Params
{
};

// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnEnd_D54427794086CD24870288B0EF46744B
struct AProjectile_RakkAttack_Rakk_C_OnEnd_D54427794086CD24870288B0EF46744B_Params
{
	EGbxActionEndState                                 EndState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.ReceiveBeginPlay
struct AProjectile_RakkAttack_Rakk_C_ReceiveBeginPlay_Params
{
};

// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnHitDamagableObject
struct AProjectile_RakkAttack_Rakk_C_OnHitDamagableObject_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnHitWorld
struct AProjectile_RakkAttack_Rakk_C_OnHitWorld_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnExplode
struct AProjectile_RakkAttack_Rakk_C_OnExplode_Params
{
};

// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_Projectile_PetJabbermon_Rakk_Return1
struct AProjectile_RakkAttack_Rakk_C_BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_Projectile_PetJabbermon_Rakk_Return1_Params
{
};

// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.DoRakkDestroyCleanup
struct AProjectile_RakkAttack_Rakk_C_DoRakkDestroyCleanup_Params
{
	bool                                               WantsNiceCleanup;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetupRuntimeMods
struct AProjectile_RakkAttack_Rakk_C_SetupRuntimeMods_Params
{
};

// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.DoRakkDigistructIn
struct AProjectile_RakkAttack_Rakk_C_DoRakkDigistructIn_Params
{
};

// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetNewHomingTarget
struct AProjectile_RakkAttack_Rakk_C_SetNewHomingTarget_Params
{
	class AActor**                                     NewHomingTarget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.OnDeath_ProjectileHomingTarget
struct AProjectile_RakkAttack_Rakk_C_OnDeath_ProjectileHomingTarget_Params
{
	class AActor*                                      DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.StartNewTargetSearch
struct AProjectile_RakkAttack_Rakk_C_StartNewTargetSearch_Params
{
};

// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.ReturnToOwner
struct AProjectile_RakkAttack_Rakk_C_ReturnToOwner_Params
{
};

// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.SetNewHomingTargetWithDelay
struct AProjectile_RakkAttack_Rakk_C_SetNewHomingTargetWithDelay_Params
{
	float                                              Delay;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      NewHomingTarget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.BndEvt__DamageTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Projectile_RakkAttack_Rakk
struct AProjectile_RakkAttack_Rakk_C_BndEvt__DamageTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Projectile_RakkAttack_Rakk_Params
{
	class AActor*                                      TouchingActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ComponentTouched;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Projectile_RakkAttack_Rakk.Projectile_RakkAttack_Rakk_C.ExecuteUbergraph_Projectile_RakkAttack_Rakk
struct AProjectile_RakkAttack_Rakk_C_ExecuteUbergraph_Projectile_RakkAttack_Rakk_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
