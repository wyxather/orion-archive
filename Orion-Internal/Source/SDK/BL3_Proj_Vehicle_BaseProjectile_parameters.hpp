#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Vehicle_BaseProjectile_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.IsEnemyAndAlive
struct AProj_Vehicle_BaseProjectile_C_IsEnemyAndAlive_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EnemyAndAlive;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.TraceFromVehicleAimPoint
struct AProj_Vehicle_BaseProjectile_C_TraceFromVehicleAimPoint_Params
{
	float                                              TraceLength;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  TraceResult;                                              // (Parm, OutParm, IsPlainOldData)
	bool                                               TraceSuccess;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.AddForwardVelocityBasedOnVehicle
struct AProj_Vehicle_BaseProjectile_C_AddForwardVelocityBasedOnVehicle_Params
{
};

// Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.AddVelocityBasedOnVehicle
struct AProj_Vehicle_BaseProjectile_C_AddVelocityBasedOnVehicle_Params
{
};

// Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.UserConstructionScript
struct AProj_Vehicle_BaseProjectile_C_UserConstructionScript_Params
{
};

// Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.Failure_75FB4B9E4205FDE1F5B3E6BC2A573144
struct AProj_Vehicle_BaseProjectile_C_Failure_75FB4B9E4205FDE1F5B3E6BC2A573144_Params
{
	struct FEnvQueryResult                             QueryResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.Success_75FB4B9E4205FDE1F5B3E6BC2A573144
struct AProj_Vehicle_BaseProjectile_C_Success_75FB4B9E4205FDE1F5B3E6BC2A573144_Params
{
	struct FEnvQueryResult                             QueryResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.ReceiveBeginPlay
struct AProj_Vehicle_BaseProjectile_C_ReceiveBeginPlay_Params
{
};

// Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.ReceiveHit
struct AProj_Vehicle_BaseProjectile_C_ReceiveHit_Params
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

// Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.OnExplode
struct AProj_Vehicle_BaseProjectile_C_OnExplode_Params
{
};

// Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.StartHoming
struct AProj_Vehicle_BaseProjectile_C_StartHoming_Params
{
	class AActor*                                      SpecificActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.UpdateHoming
struct AProj_Vehicle_BaseProjectile_C_UpdateHoming_Params
{
};

// Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.OnHomingRequestSuccess
struct AProj_Vehicle_BaseProjectile_C_OnHomingRequestSuccess_Params
{
	class AActor*                                      ActorFound;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.OnHomingRequestFail
struct AProj_Vehicle_BaseProjectile_C_OnHomingRequestFail_Params
{
};

// Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.StopHoming
struct AProj_Vehicle_BaseProjectile_C_StopHoming_Params
{
};

// Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.BndEvt__ProximityDectector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Proj_Vehicle_BaseProjectile
struct AProj_Vehicle_BaseProjectile_C_BndEvt__ProximityDectector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Proj_Vehicle_BaseProjectile_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.StartHomeTowardsViewPoint
struct AProj_Vehicle_BaseProjectile_C_StartHomeTowardsViewPoint_Params
{
};

// Function Proj_Vehicle_BaseProjectile.Proj_Vehicle_BaseProjectile_C.ExecuteUbergraph_Proj_Vehicle_BaseProjectile
struct AProj_Vehicle_BaseProjectile_C_ExecuteUbergraph_Proj_Vehicle_BaseProjectile_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
