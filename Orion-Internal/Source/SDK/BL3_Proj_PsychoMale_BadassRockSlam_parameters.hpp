#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_PsychoMale_BadassRockSlam_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_PsychoMale_BadassRockSlam.Proj_PsychoMale_BadassRockSlam_C.EvaluateValidForDamage
struct AProj_PsychoMale_BadassRockSlam_C_EvaluateValidForDamage_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ValidActor;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ValidActorForDamage;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_PsychoMale_BadassRockSlam.Proj_PsychoMale_BadassRockSlam_C.UserConstructionScript
struct AProj_PsychoMale_BadassRockSlam_C_UserConstructionScript_Params
{
};

// Function Proj_PsychoMale_BadassRockSlam.Proj_PsychoMale_BadassRockSlam_C.OnExplode
struct AProj_PsychoMale_BadassRockSlam_C_OnExplode_Params
{
};

// Function Proj_PsychoMale_BadassRockSlam.Proj_PsychoMale_BadassRockSlam_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectilePostLastBounceDelegate__DelegateSignature_Proj_PsychoMale_BadassRockSlam
struct AProj_PsychoMale_BadassRockSlam_C_BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectilePostLastBounceDelegate__DelegateSignature_Proj_PsychoMale_BadassRockSlam_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_PsychoMale_BadassRockSlam.Proj_PsychoMale_BadassRockSlam_C.ReceiveBeginPlay
struct AProj_PsychoMale_BadassRockSlam_C_ReceiveBeginPlay_Params
{
};

// Function Proj_PsychoMale_BadassRockSlam.Proj_PsychoMale_BadassRockSlam_C.ReceiveDestroyed
struct AProj_PsychoMale_BadassRockSlam_C_ReceiveDestroyed_Params
{
};

// Function Proj_PsychoMale_BadassRockSlam.Proj_PsychoMale_BadassRockSlam_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Proj_PsychoMale_BadassRockSlam
struct AProj_PsychoMale_BadassRockSlam_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Proj_PsychoMale_BadassRockSlam_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_PsychoMale_BadassRockSlam.Proj_PsychoMale_BadassRockSlam_C.ExecuteUbergraph_Proj_PsychoMale_BadassRockSlam
struct AProj_PsychoMale_BadassRockSlam_C_ExecuteUbergraph_Proj_PsychoMale_BadassRockSlam_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
