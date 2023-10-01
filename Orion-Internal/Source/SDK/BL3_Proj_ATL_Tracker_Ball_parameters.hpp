#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_ATL_Tracker_Ball_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.AOE_FindTarget
struct AProj_ATL_Tracker_Ball_C_AOE_FindTarget_Params
{
};

// Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.UserConstructionScript
struct AProj_ATL_Tracker_Ball_C_UserConstructionScript_Params
{
};

// Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.OnExplode
struct AProj_ATL_Tracker_Ball_C_OnExplode_Params
{
};

// Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.ReceiveBeginPlay
struct AProj_ATL_Tracker_Ball_C_ReceiveBeginPlay_Params
{
};

// Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.OnHitEnemy
struct AProj_ATL_Tracker_Ball_C_OnHitEnemy_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.OnHitWorld
struct AProj_ATL_Tracker_Ball_C_OnHitWorld_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.FuseTriggered
struct AProj_ATL_Tracker_Ball_C_FuseTriggered_Params
{
};

// Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.ReceiveHit
struct AProj_ATL_Tracker_Ball_C_ReceiveHit_Params
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

// Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_ATL_Tracker_Ball
struct AProj_ATL_Tracker_Ball_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_ATL_Tracker_Ball_Params
{
	class AActor*                                      TouchingActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ComponentTouched;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.AttachedActorDeath
struct AProj_ATL_Tracker_Ball_C_AttachedActorDeath_Params
{
};

// Function Proj_ATL_Tracker_Ball.Proj_ATL_Tracker_Ball_C.ExecuteUbergraph_Proj_ATL_Tracker_Ball
struct AProj_ATL_Tracker_Ball_C_ExecuteUbergraph_Proj_ATL_Tracker_Ball_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
