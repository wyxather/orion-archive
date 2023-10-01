#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_Rakk_Spike_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Projectile_Rakk_Spike.Projectile_Rakk_Spike_C.UserConstructionScript
struct AProjectile_Rakk_Spike_C_UserConstructionScript_Params
{
};

// Function Projectile_Rakk_Spike.Projectile_Rakk_Spike_C.OnHitEnemy
struct AProjectile_Rakk_Spike_C_OnHitEnemy_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_Rakk_Spike.Projectile_Rakk_Spike_C.OnHitWorld
struct AProjectile_Rakk_Spike_C_OnHitWorld_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_Rakk_Spike.Projectile_Rakk_Spike_C.OnHitFriendly
struct AProjectile_Rakk_Spike_C_OnHitFriendly_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_Rakk_Spike.Projectile_Rakk_Spike_C.OnHitNeutral
struct AProjectile_Rakk_Spike_C_OnHitNeutral_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_Rakk_Spike.Projectile_Rakk_Spike_C.ExecuteUbergraph_Projectile_Rakk_Spike
struct AProjectile_Rakk_Spike_C_ExecuteUbergraph_Projectile_Rakk_Spike_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
