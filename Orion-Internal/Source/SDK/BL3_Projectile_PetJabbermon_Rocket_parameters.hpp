#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_PetJabbermon_Rocket_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Projectile_PetJabbermon_Rocket.Projectile_PetJabbermon_Rocket_C.UserConstructionScript
struct AProjectile_PetJabbermon_Rocket_C_UserConstructionScript_Params
{
};

// Function Projectile_PetJabbermon_Rocket.Projectile_PetJabbermon_Rocket_C.ReceiveBeginPlay
struct AProjectile_PetJabbermon_Rocket_C_ReceiveBeginPlay_Params
{
};

// Function Projectile_PetJabbermon_Rocket.Projectile_PetJabbermon_Rocket_C.OnHitDamagableObject
struct AProjectile_PetJabbermon_Rocket_C_OnHitDamagableObject_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_PetJabbermon_Rocket.Projectile_PetJabbermon_Rocket_C.OnHitWorld
struct AProjectile_PetJabbermon_Rocket_C_OnHitWorld_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_PetJabbermon_Rocket.Projectile_PetJabbermon_Rocket_C.OnExplode
struct AProjectile_PetJabbermon_Rocket_C_OnExplode_Params
{
};

// Function Projectile_PetJabbermon_Rocket.Projectile_PetJabbermon_Rocket_C.ExecuteUbergraph_Projectile_PetJabbermon_Rocket
struct AProjectile_PetJabbermon_Rocket_C_ExecuteUbergraph_Projectile_PetJabbermon_Rocket_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
