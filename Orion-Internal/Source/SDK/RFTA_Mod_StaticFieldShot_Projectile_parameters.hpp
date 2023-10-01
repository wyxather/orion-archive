#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_StaticFieldShot_Projectile_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mod_StaticFieldShot_Projectile.Mod_StaticFieldShot_Projectile_C.OnProjectileHit
struct AMod_StaticFieldShot_Projectile_C_OnProjectileHit_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function Mod_StaticFieldShot_Projectile.Mod_StaticFieldShot_Projectile_C.ExecuteUbergraph_Mod_StaticFieldShot_Projectile
struct AMod_StaticFieldShot_Projectile_C_ExecuteUbergraph_Mod_StaticFieldShot_Projectile_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
