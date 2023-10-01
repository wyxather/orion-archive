#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_Krakatoa_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Projectile_Krakatoa.Projectile_Krakatoa_C.FireProjectile
struct AProjectile_Krakatoa_C_FireProjectile_Params
{
};

// Function Projectile_Krakatoa.Projectile_Krakatoa_C.UserConstructionScript
struct AProjectile_Krakatoa_C_UserConstructionScript_Params
{
};

// Function Projectile_Krakatoa.Projectile_Krakatoa_C.OnHitWorld
struct AProjectile_Krakatoa_C_OnHitWorld_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_Krakatoa.Projectile_Krakatoa_C.ReceiveHit
struct AProjectile_Krakatoa_C_ReceiveHit_Params
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

// Function Projectile_Krakatoa.Projectile_Krakatoa_C.WeaponProjectileExplode
struct AProjectile_Krakatoa_C_WeaponProjectileExplode_Params
{
};

// Function Projectile_Krakatoa.Projectile_Krakatoa_C.ReceiveBeginPlay
struct AProjectile_Krakatoa_C_ReceiveBeginPlay_Params
{
};

// Function Projectile_Krakatoa.Projectile_Krakatoa_C.ExecuteUbergraph_Projectile_Krakatoa
struct AProjectile_Krakatoa_C_ExecuteUbergraph_Projectile_Krakatoa_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
