#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_Siren_Phasecast_Revised_Bomb_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Projectile_Siren_Phasecast_Revised_Bomb.Projectile_Siren_Phasecast_Revised_Bomb_C.UserConstructionScript
struct AProjectile_Siren_Phasecast_Revised_Bomb_C_UserConstructionScript_Params
{
};

// Function Projectile_Siren_Phasecast_Revised_Bomb.Projectile_Siren_Phasecast_Revised_Bomb_C.OnHitWorld
struct AProjectile_Siren_Phasecast_Revised_Bomb_C_OnHitWorld_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_Siren_Phasecast_Revised_Bomb.Projectile_Siren_Phasecast_Revised_Bomb_C.OnHitEnemy
struct AProjectile_Siren_Phasecast_Revised_Bomb_C_OnHitEnemy_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_Siren_Phasecast_Revised_Bomb.Projectile_Siren_Phasecast_Revised_Bomb_C.OnExplode
struct AProjectile_Siren_Phasecast_Revised_Bomb_C_OnExplode_Params
{
};

// Function Projectile_Siren_Phasecast_Revised_Bomb.Projectile_Siren_Phasecast_Revised_Bomb_C.OnOverlappedEnemy
struct AProjectile_Siren_Phasecast_Revised_Bomb_C_OnOverlappedEnemy_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_Siren_Phasecast_Revised_Bomb.Projectile_Siren_Phasecast_Revised_Bomb_C.OnOverlappedNeutral
struct AProjectile_Siren_Phasecast_Revised_Bomb_C_OnOverlappedNeutral_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_Siren_Phasecast_Revised_Bomb.Projectile_Siren_Phasecast_Revised_Bomb_C.ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_Bomb
struct AProjectile_Siren_Phasecast_Revised_Bomb_C_ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_Bomb_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
