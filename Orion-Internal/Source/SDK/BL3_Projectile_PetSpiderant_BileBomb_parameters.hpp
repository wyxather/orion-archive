#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_PetSpiderant_BileBomb_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Projectile_PetSpiderant_BileBomb.Projectile_PetSpiderant_BileBomb_C.UserConstructionScript
struct AProjectile_PetSpiderant_BileBomb_C_UserConstructionScript_Params
{
};

// Function Projectile_PetSpiderant_BileBomb.Projectile_PetSpiderant_BileBomb_C.ReceiveBeginPlay
struct AProjectile_PetSpiderant_BileBomb_C_ReceiveBeginPlay_Params
{
};

// Function Projectile_PetSpiderant_BileBomb.Projectile_PetSpiderant_BileBomb_C.OnHitDamagableObject
struct AProjectile_PetSpiderant_BileBomb_C_OnHitDamagableObject_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_PetSpiderant_BileBomb.Projectile_PetSpiderant_BileBomb_C.OnHitWorld
struct AProjectile_PetSpiderant_BileBomb_C_OnHitWorld_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_PetSpiderant_BileBomb.Projectile_PetSpiderant_BileBomb_C.OnExplode
struct AProjectile_PetSpiderant_BileBomb_C_OnExplode_Params
{
};

// Function Projectile_PetSpiderant_BileBomb.Projectile_PetSpiderant_BileBomb_C.ExecuteUbergraph_Projectile_PetSpiderant_BileBomb
struct AProjectile_PetSpiderant_BileBomb_C_ExecuteUbergraph_Projectile_PetSpiderant_BileBomb_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
