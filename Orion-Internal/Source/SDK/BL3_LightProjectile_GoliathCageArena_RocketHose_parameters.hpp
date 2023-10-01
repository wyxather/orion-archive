#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_GoliathCageArena_RocketHose_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LightProjectile_GoliathCageArena_RocketHose.LightProjectile_GoliathCageArena_RocketHose_C.HomeIn
struct ULightProjectile_GoliathCageArena_RocketHose_C_HomeIn_Params
{
	class UOakLightProjectile*                         Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightProjectile_GoliathCageArena_RocketHose.LightProjectile_GoliathCageArena_RocketHose_C.OnLifetimeExpired
struct ULightProjectile_GoliathCageArena_RocketHose_C_OnLifetimeExpired_Params
{
	class ULightProjectile**                           Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
