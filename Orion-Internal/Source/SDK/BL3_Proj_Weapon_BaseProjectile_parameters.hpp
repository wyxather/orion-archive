#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Weapon_BaseProjectile_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.ProjectileDisarm
struct AProj_Weapon_BaseProjectile_C_ProjectileDisarm_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.ProjectileArm
struct AProj_Weapon_BaseProjectile_C_ProjectileArm_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.ProjectileDetonate
struct AProj_Weapon_BaseProjectile_C_ProjectileDetonate_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.StickToTarget
struct AProj_Weapon_BaseProjectile_C_StickToTarget_Params
{
	struct FHitResult                                  Hit;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Attached;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               StuckToActor;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.AddElementalTrail
struct AProj_Weapon_BaseProjectile_C_AddElementalTrail_Params
{
	class UClass*                                      Collection;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             AttachToComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       AttachPointName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewScale;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.CallExplode
struct AProj_Weapon_BaseProjectile_C_CallExplode_Params
{
};

// Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.StickToWorld
struct AProj_Weapon_BaseProjectile_C_StickToWorld_Params
{
	struct FHitResult                                  HitInfo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.StickToActor
struct AProj_Weapon_BaseProjectile_C_StickToActor_Params
{
	struct FHitResult                                  HitResult;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               AttachedToActor;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.WeaponProjectileExplode
struct AProj_Weapon_BaseProjectile_C_WeaponProjectileExplode_Params
{
};

// Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.UserConstructionScript
struct AProj_Weapon_BaseProjectile_C_UserConstructionScript_Params
{
};

// Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.ReceiveHit
struct AProj_Weapon_BaseProjectile_C_ReceiveHit_Params
{
	class UPrimitiveComponent**                        MyComp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              bSelfMoved;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.OnExplode
struct AProj_Weapon_BaseProjectile_C_OnExplode_Params
{
};

// Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.ReceiveBeginPlay
struct AProj_Weapon_BaseProjectile_C_ReceiveBeginPlay_Params
{
};

// Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.Destructible_Fractured
struct AProj_Weapon_BaseProjectile_C_Destructible_Fractured_Params
{
	struct FVector                                     HitPoint;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     HitDetection;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.Actor_Died
struct AProj_Weapon_BaseProjectile_C_Actor_Died_Params
{
};

// Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.OnHitWorld
struct AProj_Weapon_BaseProjectile_C_OnHitWorld_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.Fallback
struct AProj_Weapon_BaseProjectile_C_Fallback_Params
{
};

// Function Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C.ExecuteUbergraph_Proj_Weapon_BaseProjectile
struct AProj_Weapon_BaseProjectile_C_ExecuteUbergraph_Proj_Weapon_BaseProjectile_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
