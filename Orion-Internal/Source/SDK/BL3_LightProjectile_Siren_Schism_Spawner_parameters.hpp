#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_Siren_Schism_Spawner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LightProjectile_Siren_Schism_Spawner.LightProjectile_Siren_Schism_Spawner_C.CalcSchismFireTrajectory
struct ULightProjectile_Siren_Schism_Spawner_C_CalcSchismFireTrajectory_Params
{
	struct FVector                                     SpawnLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class APawn*                                       Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     res;                                                      // (Parm, OutParm, IsPlainOldData)
};

// Function LightProjectile_Siren_Schism_Spawner.LightProjectile_Siren_Schism_Spawner_C.FireSchismProjectilesAtTargets
struct ULightProjectile_Siren_Schism_Spawner_C_FireSchismProjectilesAtTargets_Params
{
	float                                              SchismDamage;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ProjectileOwner;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	TArray<class AActor*>                              Targets;                                                  // (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function LightProjectile_Siren_Schism_Spawner.LightProjectile_Siren_Schism_Spawner_C.ExplodeProjectile
struct ULightProjectile_Siren_Schism_Spawner_C_ExplodeProjectile_Params
{
	class UOakLightProjectile*                         Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightProjectile_Siren_Schism_Spawner.LightProjectile_Siren_Schism_Spawner_C.OnExplode
struct ULightProjectile_Siren_Schism_Spawner_C_OnExplode_Params
{
	class ULightProjectile**                           Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightProjectile_Siren_Schism_Spawner.LightProjectile_Siren_Schism_Spawner_C.OnLifetimeExpired
struct ULightProjectile_Siren_Schism_Spawner_C_OnLifetimeExpired_Params
{
	class ULightProjectile**                           Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
