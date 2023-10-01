#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_PetSkag_RangedAttack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Projectile_PetSkag_RangedAttack.Projectile_PetSkag_RangedAttack_C.UserConstructionScript
struct AProjectile_PetSkag_RangedAttack_C_UserConstructionScript_Params
{
};

// Function Projectile_PetSkag_RangedAttack.Projectile_PetSkag_RangedAttack_C.ReceiveBeginPlay
struct AProjectile_PetSkag_RangedAttack_C_ReceiveBeginPlay_Params
{
};

// Function Projectile_PetSkag_RangedAttack.Projectile_PetSkag_RangedAttack_C.OnHitDamagableObject
struct AProjectile_PetSkag_RangedAttack_C_OnHitDamagableObject_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_PetSkag_RangedAttack.Projectile_PetSkag_RangedAttack_C.OnHitWorld
struct AProjectile_PetSkag_RangedAttack_C_OnHitWorld_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_PetSkag_RangedAttack.Projectile_PetSkag_RangedAttack_C.OnExplode
struct AProjectile_PetSkag_RangedAttack_C_OnExplode_Params
{
};

// Function Projectile_PetSkag_RangedAttack.Projectile_PetSkag_RangedAttack_C.ExecuteUbergraph_Projectile_PetSkag_RangedAttack
struct AProjectile_PetSkag_RangedAttack_C_ExecuteUbergraph_Projectile_PetSkag_RangedAttack_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
