#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPFistOverMatterActor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPFistOverMatterActor.BPFistOverMatterActor_C.OnRep_GroundLocation
struct ABPFistOverMatterActor_C_OnRep_GroundLocation_Params
{
};

// Function BPFistOverMatterActor.BPFistOverMatterActor_C.PerformFeedback
struct ABPFistOverMatterActor_C_PerformFeedback_Params
{
};

// Function BPFistOverMatterActor.BPFistOverMatterActor_C.DoSlamDamage
struct ABPFistOverMatterActor_C_DoSlamDamage_Params
{
	struct FVector                                     SlamLocation_;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPFistOverMatterActor.BPFistOverMatterActor_C.GetfindGroundVectorLocations
struct ABPFistOverMatterActor_C_GetfindGroundVectorLocations_Params
{
	struct FVector                                     Start;                                                    // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, OutParm, IsPlainOldData)
};

// Function BPFistOverMatterActor.BPFistOverMatterActor_C.GetMaxTime
struct ABPFistOverMatterActor_C_GetMaxTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPFistOverMatterActor.BPFistOverMatterActor_C.UserConstructionScript
struct ABPFistOverMatterActor_C_UserConstructionScript_Params
{
};

// Function BPFistOverMatterActor.BPFistOverMatterActor_C.GbxAsyncRequest_Miss_63BA0B474B62AE3C6ACDD8B4712D6DD9
struct ABPFistOverMatterActor_C_GbxAsyncRequest_Miss_63BA0B474B62AE3C6ACDD8B4712D6DD9_Params
{
	struct FHitResult                                  Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BPFistOverMatterActor.BPFistOverMatterActor_C.GbxAsyncRequest_Hit_63BA0B474B62AE3C6ACDD8B4712D6DD9
struct ABPFistOverMatterActor_C_GbxAsyncRequest_Hit_63BA0B474B62AE3C6ACDD8B4712D6DD9_Params
{
	struct FHitResult                                  Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BPFistOverMatterActor.BPFistOverMatterActor_C.SpawnSlamEmitter
struct ABPFistOverMatterActor_C_SpawnSlamEmitter_Params
{
};

// Function BPFistOverMatterActor.BPFistOverMatterActor_C.WebSlamParticleSystemEvent
struct ABPFistOverMatterActor_C_WebSlamParticleSystemEvent_Params
{
	struct FName                                       EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EmitterTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPFistOverMatterActor.BPFistOverMatterActor_C.StartRightHandTimer
struct ABPFistOverMatterActor_C_StartRightHandTimer_Params
{
};

// Function BPFistOverMatterActor.BPFistOverMatterActor_C.StartLeftHandTimer
struct ABPFistOverMatterActor_C_StartLeftHandTimer_Params
{
};

// Function BPFistOverMatterActor.BPFistOverMatterActor_C.ReceiveBeginPlay
struct ABPFistOverMatterActor_C_ReceiveBeginPlay_Params
{
};

// Function BPFistOverMatterActor.BPFistOverMatterActor_C.FindGroundLocationAsync
struct ABPFistOverMatterActor_C_FindGroundLocationAsync_Params
{
};

// Function BPFistOverMatterActor.BPFistOverMatterActor_C.BeginWebSlam
struct ABPFistOverMatterActor_C_BeginWebSlam_Params
{
};

// Function BPFistOverMatterActor.BPFistOverMatterActor_C.EndWebSlam
struct ABPFistOverMatterActor_C_EndWebSlam_Params
{
};

// Function BPFistOverMatterActor.BPFistOverMatterActor_C.DoWebSlamLeftDamage
struct ABPFistOverMatterActor_C_DoWebSlamLeftDamage_Params
{
};

// Function BPFistOverMatterActor.BPFistOverMatterActor_C.DoWebSlamRightDamage
struct ABPFistOverMatterActor_C_DoWebSlamRightDamage_Params
{
};

// Function BPFistOverMatterActor.BPFistOverMatterActor_C.ReceiveEndPlay
struct ABPFistOverMatterActor_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPFistOverMatterActor.BPFistOverMatterActor_C.ExecuteUbergraph_BPFistOverMatterActor
struct ABPFistOverMatterActor_C_ExecuteUbergraph_BPFistOverMatterActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
