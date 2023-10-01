#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_Siren_Phasecast_Revised_Schism_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Projectile_Siren_Phasecast_Revised_Schism.Projectile_Siren_Phasecast_Revised_Schism_C.GetSchismDamage
struct AProjectile_Siren_Phasecast_Revised_Schism_C_GetSchismDamage_Params
{
	float                                              res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_Siren_Phasecast_Revised_Schism.Projectile_Siren_Phasecast_Revised_Schism_C.GetSchismProjectileClass
struct AProjectile_Siren_Phasecast_Revised_Schism_C_GetSchismProjectileClass_Params
{
	class UClass*                                      res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_Siren_Phasecast_Revised_Schism.Projectile_Siren_Phasecast_Revised_Schism_C.FireSchismProjectile
struct AProjectile_Siren_Phasecast_Revised_Schism_C_FireSchismProjectile_Params
{
	class AActor*                                      EnemyTarget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_Siren_Phasecast_Revised_Schism.Projectile_Siren_Phasecast_Revised_Schism_C.UserConstructionScript
struct AProjectile_Siren_Phasecast_Revised_Schism_C_UserConstructionScript_Params
{
};

// Function Projectile_Siren_Phasecast_Revised_Schism.Projectile_Siren_Phasecast_Revised_Schism_C.DoDamageToEnemy
struct AProjectile_Siren_Phasecast_Revised_Schism_C_DoDamageToEnemy_Params
{
	class AActor**                                     Enemy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_Siren_Phasecast_Revised_Schism.Projectile_Siren_Phasecast_Revised_Schism_C.TrySchism
struct AProjectile_Siren_Phasecast_Revised_Schism_C_TrySchism_Params
{
	class AActor*                                      Enemy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_Siren_Phasecast_Revised_Schism.Projectile_Siren_Phasecast_Revised_Schism_C.ResetSchism
struct AProjectile_Siren_Phasecast_Revised_Schism_C_ResetSchism_Params
{
};

// Function Projectile_Siren_Phasecast_Revised_Schism.Projectile_Siren_Phasecast_Revised_Schism_C.ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_Schism
struct AProjectile_Siren_Phasecast_Revised_Schism_C_ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_Schism_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
