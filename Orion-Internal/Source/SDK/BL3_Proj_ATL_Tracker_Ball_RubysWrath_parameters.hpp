#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_ATL_Tracker_Ball_RubysWrath_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_ATL_Tracker_Ball_RubysWrath.Proj_ATL_Tracker_Ball_RubysWrath_C.AOE_FindTarget
struct AProj_ATL_Tracker_Ball_RubysWrath_C_AOE_FindTarget_Params
{
};

// Function Proj_ATL_Tracker_Ball_RubysWrath.Proj_ATL_Tracker_Ball_RubysWrath_C.UserConstructionScript
struct AProj_ATL_Tracker_Ball_RubysWrath_C_UserConstructionScript_Params
{
};

// Function Proj_ATL_Tracker_Ball_RubysWrath.Proj_ATL_Tracker_Ball_RubysWrath_C.OnExplode
struct AProj_ATL_Tracker_Ball_RubysWrath_C_OnExplode_Params
{
};

// Function Proj_ATL_Tracker_Ball_RubysWrath.Proj_ATL_Tracker_Ball_RubysWrath_C.ReceiveBeginPlay
struct AProj_ATL_Tracker_Ball_RubysWrath_C_ReceiveBeginPlay_Params
{
};

// Function Proj_ATL_Tracker_Ball_RubysWrath.Proj_ATL_Tracker_Ball_RubysWrath_C.OnHitEnemy
struct AProj_ATL_Tracker_Ball_RubysWrath_C_OnHitEnemy_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_ATL_Tracker_Ball_RubysWrath.Proj_ATL_Tracker_Ball_RubysWrath_C.OnHitWorld
struct AProj_ATL_Tracker_Ball_RubysWrath_C_OnHitWorld_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_ATL_Tracker_Ball_RubysWrath.Proj_ATL_Tracker_Ball_RubysWrath_C.FuseTriggered
struct AProj_ATL_Tracker_Ball_RubysWrath_C_FuseTriggered_Params
{
};

// Function Proj_ATL_Tracker_Ball_RubysWrath.Proj_ATL_Tracker_Ball_RubysWrath_C.ReceiveHit
struct AProj_ATL_Tracker_Ball_RubysWrath_C_ReceiveHit_Params
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

// Function Proj_ATL_Tracker_Ball_RubysWrath.Proj_ATL_Tracker_Ball_RubysWrath_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_ATL_Tracker_Ball
struct AProj_ATL_Tracker_Ball_RubysWrath_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_ATL_Tracker_Ball_Params
{
	class AActor*                                      TouchingActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ComponentTouched;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Proj_ATL_Tracker_Ball_RubysWrath.Proj_ATL_Tracker_Ball_RubysWrath_C.AttachedActorDeath
struct AProj_ATL_Tracker_Ball_RubysWrath_C_AttachedActorDeath_Params
{
};

// Function Proj_ATL_Tracker_Ball_RubysWrath.Proj_ATL_Tracker_Ball_RubysWrath_C.ExecuteUbergraph_Proj_ATL_Tracker_Ball_RubysWrath
struct AProj_ATL_Tracker_Ball_RubysWrath_C_ExecuteUbergraph_Proj_ATL_Tracker_Ball_RubysWrath_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
