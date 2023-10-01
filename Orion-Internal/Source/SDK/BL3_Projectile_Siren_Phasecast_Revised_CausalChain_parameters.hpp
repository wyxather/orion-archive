#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_Siren_Phasecast_Revised_CausalChain_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Projectile_Siren_Phasecast_Revised_CausalChain.Projectile_Siren_Phasecast_Revised_CausalChain_C.CalculateDamage
struct AProjectile_Siren_Phasecast_Revised_CausalChain_C_CalculateDamage_Params
{
	float                                              res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_Siren_Phasecast_Revised_CausalChain.Projectile_Siren_Phasecast_Revised_CausalChain_C.UserConstructionScript
struct AProjectile_Siren_Phasecast_Revised_CausalChain_C_UserConstructionScript_Params
{
};

// Function Projectile_Siren_Phasecast_Revised_CausalChain.Projectile_Siren_Phasecast_Revised_CausalChain_C.DoDamageToEnemy
struct AProjectile_Siren_Phasecast_Revised_CausalChain_C_DoDamageToEnemy_Params
{
	class AActor**                                     Enemy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Projectile_Siren_Phasecast_Revised_CausalChain.Projectile_Siren_Phasecast_Revised_CausalChain_C.ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_CausalChain
struct AProjectile_Siren_Phasecast_Revised_CausalChain_C_ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_CausalChain_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
