#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_ATL_Tracker_Ball_Plumage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_ATL_Tracker_Ball_Plumage.Proj_ATL_Tracker_Ball_Plumage_C.AOE_FindTarget
struct AProj_ATL_Tracker_Ball_Plumage_C_AOE_FindTarget_Params
{
};

// Function Proj_ATL_Tracker_Ball_Plumage.Proj_ATL_Tracker_Ball_Plumage_C.UserConstructionScript
struct AProj_ATL_Tracker_Ball_Plumage_C_UserConstructionScript_Params
{
};

// Function Proj_ATL_Tracker_Ball_Plumage.Proj_ATL_Tracker_Ball_Plumage_C.GbxAsyncRequest_Spawned_EC7096D84CE43BFCBCFD209C516EA52E
struct AProj_ATL_Tracker_Ball_Plumage_C_GbxAsyncRequest_Spawned_EC7096D84CE43BFCBCFD209C516EA52E_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InstanceIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_ATL_Tracker_Ball_Plumage.Proj_ATL_Tracker_Ball_Plumage_C.OnExplode
struct AProj_ATL_Tracker_Ball_Plumage_C_OnExplode_Params
{
};

// Function Proj_ATL_Tracker_Ball_Plumage.Proj_ATL_Tracker_Ball_Plumage_C.ReceiveBeginPlay
struct AProj_ATL_Tracker_Ball_Plumage_C_ReceiveBeginPlay_Params
{
};

// Function Proj_ATL_Tracker_Ball_Plumage.Proj_ATL_Tracker_Ball_Plumage_C.OnHitEnemy
struct AProj_ATL_Tracker_Ball_Plumage_C_OnHitEnemy_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_ATL_Tracker_Ball_Plumage.Proj_ATL_Tracker_Ball_Plumage_C.OnHitWorld
struct AProj_ATL_Tracker_Ball_Plumage_C_OnHitWorld_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_ATL_Tracker_Ball_Plumage.Proj_ATL_Tracker_Ball_Plumage_C.FuseTriggered
struct AProj_ATL_Tracker_Ball_Plumage_C_FuseTriggered_Params
{
};

// Function Proj_ATL_Tracker_Ball_Plumage.Proj_ATL_Tracker_Ball_Plumage_C.ReceiveHit
struct AProj_ATL_Tracker_Ball_Plumage_C_ReceiveHit_Params
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

// Function Proj_ATL_Tracker_Ball_Plumage.Proj_ATL_Tracker_Ball_Plumage_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_ATL_Tracker_Ball
struct AProj_ATL_Tracker_Ball_Plumage_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_ATL_Tracker_Ball_Params
{
	class AActor*                                      TouchingActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ComponentTouched;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Proj_ATL_Tracker_Ball_Plumage.Proj_ATL_Tracker_Ball_Plumage_C.AttachedActorDeath
struct AProj_ATL_Tracker_Ball_Plumage_C_AttachedActorDeath_Params
{
};

// Function Proj_ATL_Tracker_Ball_Plumage.Proj_ATL_Tracker_Ball_Plumage_C.MultiTargetActorDeath_Event
struct AProj_ATL_Tracker_Ball_Plumage_C_MultiTargetActorDeath_Event_Params
{
	class AActor**                                     DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_ATL_Tracker_Ball_Plumage.Proj_ATL_Tracker_Ball_Plumage_C.MultiTargetTag
struct AProj_ATL_Tracker_Ball_Plumage_C_MultiTargetTag_Params
{
};

// Function Proj_ATL_Tracker_Ball_Plumage.Proj_ATL_Tracker_Ball_Plumage_C.ExecuteUbergraph_Proj_ATL_Tracker_Ball_Plumage
struct AProj_ATL_Tracker_Ball_Plumage_C_ExecuteUbergraph_Proj_ATL_Tracker_Ball_Plumage_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
