#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_ATL_TrackerDart_Replay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_ATL_TrackerDart_Replay.Proj_ATL_TrackerDart_Replay_C.OnRep_StuckTarget
struct AProj_ATL_TrackerDart_Replay_C_OnRep_StuckTarget_Params
{
};

// Function Proj_ATL_TrackerDart_Replay.Proj_ATL_TrackerDart_Replay_C.StartAudioLoopOnActor
struct AProj_ATL_TrackerDart_Replay_C_StartAudioLoopOnActor_Params
{
	class AActor*                                      Target_Actor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 Wwise_Event;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_ATL_TrackerDart_Replay.Proj_ATL_TrackerDart_Replay_C.MultiTargetTag
struct AProj_ATL_TrackerDart_Replay_C_MultiTargetTag_Params
{
};

// Function Proj_ATL_TrackerDart_Replay.Proj_ATL_TrackerDart_Replay_C.RemoveAllTargets
struct AProj_ATL_TrackerDart_Replay_C_RemoveAllTargets_Params
{
};

// Function Proj_ATL_TrackerDart_Replay.Proj_ATL_TrackerDart_Replay_C.SingleTargetTag
struct AProj_ATL_TrackerDart_Replay_C_SingleTargetTag_Params
{
};

// Function Proj_ATL_TrackerDart_Replay.Proj_ATL_TrackerDart_Replay_C.UserConstructionScript
struct AProj_ATL_TrackerDart_Replay_C_UserConstructionScript_Params
{
};

// Function Proj_ATL_TrackerDart_Replay.Proj_ATL_TrackerDart_Replay_C.ReceiveBeginPlay
struct AProj_ATL_TrackerDart_Replay_C_ReceiveBeginPlay_Params
{
};

// Function Proj_ATL_TrackerDart_Replay.Proj_ATL_TrackerDart_Replay_C.OnExplode
struct AProj_ATL_TrackerDart_Replay_C_OnExplode_Params
{
};

// Function Proj_ATL_TrackerDart_Replay.Proj_ATL_TrackerDart_Replay_C.ReceiveHit
struct AProj_ATL_TrackerDart_Replay_C_ReceiveHit_Params
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

// Function Proj_ATL_TrackerDart_Replay.Proj_ATL_TrackerDart_Replay_C.AttachedActorDeath
struct AProj_ATL_TrackerDart_Replay_C_AttachedActorDeath_Params
{
};

// Function Proj_ATL_TrackerDart_Replay.Proj_ATL_TrackerDart_Replay_C.FuseStart
struct AProj_ATL_TrackerDart_Replay_C_FuseStart_Params
{
	float                                              FuseTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_ATL_TrackerDart_Replay.Proj_ATL_TrackerDart_Replay_C.FuseTriggered
struct AProj_ATL_TrackerDart_Replay_C_FuseTriggered_Params
{
};

// Function Proj_ATL_TrackerDart_Replay.Proj_ATL_TrackerDart_Replay_C.TargetStuck
struct AProj_ATL_TrackerDart_Replay_C_TargetStuck_Params
{
};

// Function Proj_ATL_TrackerDart_Replay.Proj_ATL_TrackerDart_Replay_C.MultiTargetActorDeath_Event
struct AProj_ATL_TrackerDart_Replay_C_MultiTargetActorDeath_Event_Params
{
	class AActor*                                      DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_ATL_TrackerDart_Replay.Proj_ATL_TrackerDart_Replay_C.ExecuteUbergraph_Proj_ATL_TrackerDart_Replay
struct AProj_ATL_TrackerDart_Replay_C_ExecuteUbergraph_Proj_ATL_TrackerDart_Replay_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
