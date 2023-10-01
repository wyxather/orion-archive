#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_ATL_Tracker_Puck_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C.UserConstructionScript
struct AProj_ATL_Tracker_Puck_C_UserConstructionScript_Params
{
};

// Function Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C.ReceiveBeginPlay
struct AProj_ATL_Tracker_Puck_C_ReceiveBeginPlay_Params
{
};

// Function Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C.FindHomingTarget_Event
struct AProj_ATL_Tracker_Puck_C_FindHomingTarget_Event_Params
{
};

// Function Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C.Retry_Homing
struct AProj_ATL_Tracker_Puck_C_Retry_Homing_Params
{
};

// Function Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C.ReceiveHit
struct AProj_ATL_Tracker_Puck_C_ReceiveHit_Params
{
	class UPrimitiveComponent**                        MyComp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              bSelfMoved;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C.SingleTargetTag
struct AProj_ATL_Tracker_Puck_C_SingleTargetTag_Params
{
};

// Function Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C.TargetStuck
struct AProj_ATL_Tracker_Puck_C_TargetStuck_Params
{
};

// Function Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C.OnLastBounce
struct AProj_ATL_Tracker_Puck_C_OnLastBounce_Params
{
	struct FHitResult*                                 ImpactResult;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C.BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_Proj_ATL_Tracker_Puck
struct AProj_ATL_Tracker_Puck_C_BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_Proj_ATL_Tracker_Puck_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpactVelocity;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C.AttachedActorDeath
struct AProj_ATL_Tracker_Puck_C_AttachedActorDeath_Params
{
};

// Function Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C.OnHitWorld
struct AProj_ATL_Tracker_Puck_C_OnHitWorld_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C.OnExplode
struct AProj_ATL_Tracker_Puck_C_OnExplode_Params
{
};

// Function Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C.Fallback
struct AProj_ATL_Tracker_Puck_C_Fallback_Params
{
};

// Function Proj_ATL_Tracker_Puck.Proj_ATL_Tracker_Puck_C.ExecuteUbergraph_Proj_ATL_Tracker_Puck
struct AProj_ATL_Tracker_Puck_C_ExecuteUbergraph_Proj_ATL_Tracker_Puck_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
