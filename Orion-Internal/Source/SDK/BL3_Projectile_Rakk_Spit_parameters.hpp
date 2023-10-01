#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_Rakk_Spit_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Projectile_Rakk_Spit.Projectile_Rakk_Spit_C.SetElement
struct AProjectile_Rakk_Spit_C_SetElement_Params
{
	EOakElementalType                                  Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_Rakk_Spit.Projectile_Rakk_Spit_C.UserConstructionScript
struct AProjectile_Rakk_Spit_C_UserConstructionScript_Params
{
};

// Function Projectile_Rakk_Spit.Projectile_Rakk_Spit_C.GbxAsyncRequest_Failed_77AF8B354EBDD4149196169054932447
struct AProjectile_Rakk_Spit_C_GbxAsyncRequest_Failed_77AF8B354EBDD4149196169054932447_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InstanceIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_Rakk_Spit.Projectile_Rakk_Spit_C.GbxAsyncRequest_Spawned_77AF8B354EBDD4149196169054932447
struct AProjectile_Rakk_Spit_C_GbxAsyncRequest_Spawned_77AF8B354EBDD4149196169054932447_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InstanceIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_Rakk_Spit.Projectile_Rakk_Spit_C.ReceiveBeginPlay
struct AProjectile_Rakk_Spit_C_ReceiveBeginPlay_Params
{
};

// Function Projectile_Rakk_Spit.Projectile_Rakk_Spit_C.OnHitWorld
struct AProjectile_Rakk_Spit_C_OnHitWorld_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_Rakk_Spit.Projectile_Rakk_Spit_C.OnHitEnemy
struct AProjectile_Rakk_Spit_C_OnHitEnemy_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_Rakk_Spit.Projectile_Rakk_Spit_C.OnHitNeutral
struct AProjectile_Rakk_Spit_C_OnHitNeutral_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_Rakk_Spit.Projectile_Rakk_Spit_C.OnExplode
struct AProjectile_Rakk_Spit_C_OnExplode_Params
{
};

// Function Projectile_Rakk_Spit.Projectile_Rakk_Spit_C.ExecuteUbergraph_Projectile_Rakk_Spit
struct AProjectile_Rakk_Spit_C_ExecuteUbergraph_Projectile_Rakk_Spit_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
