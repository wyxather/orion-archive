#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_Projectile_Homing_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Projectile_Homing_Base.BP_Projectile_Homing_Base_C.HandleTargetAcceleration
struct ABP_Projectile_Homing_Base_C_HandleTargetAcceleration_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Projectile_Homing_Base.BP_Projectile_Homing_Base_C.SetHomingTarget
struct ABP_Projectile_Homing_Base_C_SetHomingTarget_Params
{
	class AActor**                                     NewTarget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Projectile_Homing_Base.BP_Projectile_Homing_Base_C.InitDumbFire
struct ABP_Projectile_Homing_Base_C_InitDumbFire_Params
{
};

// Function BP_Projectile_Homing_Base.BP_Projectile_Homing_Base_C. StopHoming
struct ABP_Projectile_Homing_Base_C__StopHoming_Params
{
};

// Function BP_Projectile_Homing_Base.BP_Projectile_Homing_Base_C.HasValidTarget
struct ABP_Projectile_Homing_Base_C_HasValidTarget_Params
{
	bool                                               Valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Projectile_Homing_Base.BP_Projectile_Homing_Base_C.InitializeProjectile
struct ABP_Projectile_Homing_Base_C_InitializeProjectile_Params
{
};

// Function BP_Projectile_Homing_Base.BP_Projectile_Homing_Base_C.ValidateHit
struct ABP_Projectile_Homing_Base_C_ValidateHit_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool*                                              bSimulating;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_Projectile_Homing_Base.BP_Projectile_Homing_Base_C.Init
struct ABP_Projectile_Homing_Base_C_Init_Params
{
	class AActor**                                     TargetComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float*                                             HomingAccelerationMagnitude;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Projectile_Homing_Base.BP_Projectile_Homing_Base_C.ReceiveTick
struct ABP_Projectile_Homing_Base_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Projectile_Homing_Base.BP_Projectile_Homing_Base_C.ReceiveBeginPlay
struct ABP_Projectile_Homing_Base_C_ReceiveBeginPlay_Params
{
};

// Function BP_Projectile_Homing_Base.BP_Projectile_Homing_Base_C.ExecuteUbergraph_BP_Projectile_Homing_Base
struct ABP_Projectile_Homing_Base_C_ExecuteUbergraph_BP_Projectile_Homing_Base_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
