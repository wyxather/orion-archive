#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_Projectile_Stick_Sphere_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Projectile_Stick_Sphere_Base.BP_Projectile_Stick_Sphere_Base_C.ShouldDoQuickDissolve
struct ABP_Projectile_Stick_Sphere_Base_C_ShouldDoQuickDissolve_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Projectile_Stick_Sphere_Base.BP_Projectile_Stick_Sphere_Base_C.ReceiveTick
struct ABP_Projectile_Stick_Sphere_Base_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Projectile_Stick_Sphere_Base.BP_Projectile_Stick_Sphere_Base_C.OnProjectileStop
struct ABP_Projectile_Stick_Sphere_Base_C_OnProjectileStop_Params
{
};

// Function BP_Projectile_Stick_Sphere_Base.BP_Projectile_Stick_Sphere_Base_C.OnProjectileHit
struct ABP_Projectile_Stick_Sphere_Base_C_OnProjectileHit_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_Projectile_Stick_Sphere_Base.BP_Projectile_Stick_Sphere_Base_C.DoDissolve
struct ABP_Projectile_Stick_Sphere_Base_C_DoDissolve_Params
{
};

// Function BP_Projectile_Stick_Sphere_Base.BP_Projectile_Stick_Sphere_Base_C.ExecuteUbergraph_BP_Projectile_Stick_Sphere_Base
struct ABP_Projectile_Stick_Sphere_Base_C_ExecuteUbergraph_BP_Projectile_Stick_Sphere_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
