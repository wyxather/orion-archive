#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Grenade_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_Grenade.Proj_Grenade_C.AIProjectile_CanBeStolen
struct AProj_Grenade_C_AIProjectile_CanBeStolen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Proj_Grenade.Proj_Grenade_C.AIProjectileDetonate
struct AProj_Grenade_C_AIProjectileDetonate_Params
{
};

// Function Proj_Grenade.Proj_Grenade_C.AIProjectileArm
struct AProj_Grenade_C_AIProjectileArm_Params
{
};

// Function Proj_Grenade.Proj_Grenade_C.AIProjectileDisarm
struct AProj_Grenade_C_AIProjectileDisarm_Params
{
};

// Function Proj_Grenade.Proj_Grenade_C.TriggerGrenadeDodge
struct AProj_Grenade_C_TriggerGrenadeDodge_Params
{
};

// Function Proj_Grenade.Proj_Grenade_C.UserConstructionScript
struct AProj_Grenade_C_UserConstructionScript_Params
{
};

// Function Proj_Grenade.Proj_Grenade_C.ReceiveBeginPlay
struct AProj_Grenade_C_ReceiveBeginPlay_Params
{
};

// Function Proj_Grenade.Proj_Grenade_C.OnBounce
struct AProj_Grenade_C_OnBounce_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector*                                    ImpactVelocity;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Proj_Grenade.Proj_Grenade_C.AIProjectile_Arm
struct AProj_Grenade_C_AIProjectile_Arm_Params
{
};

// Function Proj_Grenade.Proj_Grenade_C.AIProjectile_Detonate
struct AProj_Grenade_C_AIProjectile_Detonate_Params
{
};

// Function Proj_Grenade.Proj_Grenade_C.AIProjectile_Disarm
struct AProj_Grenade_C_AIProjectile_Disarm_Params
{
};

// Function Proj_Grenade.Proj_Grenade_C.ExecuteUbergraph_Proj_Grenade
struct AProj_Grenade_C_ExecuteUbergraph_Proj_Grenade_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
