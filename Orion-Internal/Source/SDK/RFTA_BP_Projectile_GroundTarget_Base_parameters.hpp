#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_Projectile_GroundTarget_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Projectile_GroundTarget_Base.BP_Projectile_GroundTarget_Base_C.ConditionallyIncrementWallHitCount
struct ABP_Projectile_GroundTarget_Base_C_ConditionallyIncrementWallHitCount_Params
{
};

// Function BP_Projectile_GroundTarget_Base.BP_Projectile_GroundTarget_Base_C.ValidateFlatSurface
struct ABP_Projectile_GroundTarget_Base_C_ValidateFlatSurface_Params
{
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Projectile_GroundTarget_Base.BP_Projectile_GroundTarget_Base_C.ValidateHit
struct ABP_Projectile_GroundTarget_Base_C_ValidateHit_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool*                                              bSimulating;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_Projectile_GroundTarget_Base.BP_Projectile_GroundTarget_Base_C.OnHitGround
struct ABP_Projectile_GroundTarget_Base_C_OnHitGround_Params
{
	struct FHitResult*                                 Impact;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector*                                    GroundLocation;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Projectile_GroundTarget_Base.BP_Projectile_GroundTarget_Base_C.OnMaxHitsReached
struct ABP_Projectile_GroundTarget_Base_C_OnMaxHitsReached_Params
{
	bool*                                              WasGroundHit;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Projectile_GroundTarget_Base.BP_Projectile_GroundTarget_Base_C.ExecuteUbergraph_BP_Projectile_GroundTarget_Base
struct ABP_Projectile_GroundTarget_Base_C_ExecuteUbergraph_BP_Projectile_GroundTarget_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
