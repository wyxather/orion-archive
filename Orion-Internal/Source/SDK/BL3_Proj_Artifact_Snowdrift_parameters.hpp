#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Artifact_Snowdrift_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.UserConstructionScript
struct AProj_Artifact_Snowdrift_C_UserConstructionScript_Params
{
};

// Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.ReceiveBeginPlay
struct AProj_Artifact_Snowdrift_C_ReceiveBeginPlay_Params
{
};

// Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.OnHitDamagableObject
struct AProj_Artifact_Snowdrift_C_OnHitDamagableObject_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.OnExplode
struct AProj_Artifact_Snowdrift_C_OnExplode_Params
{
};

// Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_3_OnProjectilePostLastBounceDelegate__DelegateSignature_Proj_ApeCryo_IceBall
struct AProj_Artifact_Snowdrift_C_BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_3_OnProjectilePostLastBounceDelegate__DelegateSignature_Proj_ApeCryo_IceBall_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature_Proj_Artifact_Snowdrift
struct AProj_Artifact_Snowdrift_C_BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature_Proj_Artifact_Snowdrift_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_1_OnWalkingProjectileHitUnwalkableSurface__DelegateSignature_Proj_Artifact_Snowdrift
struct AProj_Artifact_Snowdrift_C_BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_1_OnWalkingProjectileHitUnwalkableSurface__DelegateSignature_Proj_Artifact_Snowdrift_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C.ExecuteUbergraph_Proj_Artifact_Snowdrift
struct AProj_Artifact_Snowdrift_C_ExecuteUbergraph_Proj_Artifact_Snowdrift_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
