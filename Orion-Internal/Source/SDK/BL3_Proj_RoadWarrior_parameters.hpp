#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_RoadWarrior_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_RoadWarrior.Proj_RoadWarrior_C.UserConstructionScript
struct AProj_RoadWarrior_C_UserConstructionScript_Params
{
};

// Function Proj_RoadWarrior.Proj_RoadWarrior_C.ReceiveBeginPlay
struct AProj_RoadWarrior_C_ReceiveBeginPlay_Params
{
};

// Function Proj_RoadWarrior.Proj_RoadWarrior_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_0_WalkingProjectileEvent__DelegateSignature_Proj_BladesOfTerror
struct AProj_RoadWarrior_C_BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_0_WalkingProjectileEvent__DelegateSignature_Proj_BladesOfTerror_Params
{
};

// Function Proj_RoadWarrior.Proj_RoadWarrior_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_1_WalkingProjectileEvent__DelegateSignature_Proj_BladesOfTerror
struct AProj_RoadWarrior_C_BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_1_WalkingProjectileEvent__DelegateSignature_Proj_BladesOfTerror_Params
{
};

// Function Proj_RoadWarrior.Proj_RoadWarrior_C.OnHitEnemy
struct AProj_RoadWarrior_C_OnHitEnemy_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_RoadWarrior.Proj_RoadWarrior_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_2_OnProjectilePostLastBounceDelegate__DelegateSignature_Proj_BladesOfTerror
struct AProj_RoadWarrior_C_BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_2_OnProjectilePostLastBounceDelegate__DelegateSignature_Proj_BladesOfTerror_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_RoadWarrior.Proj_RoadWarrior_C.OnExplode
struct AProj_RoadWarrior_C_OnExplode_Params
{
};

// Function Proj_RoadWarrior.Proj_RoadWarrior_C.BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_3_ProjectileHomingComponentEvent__DelegateSignature_Proj_BladesOfTerror
struct AProj_RoadWarrior_C_BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_3_ProjectileHomingComponentEvent__DelegateSignature_Proj_BladesOfTerror_Params
{
};

// Function Proj_RoadWarrior.Proj_RoadWarrior_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileStopDelegate__DelegateSignature_Proj_RoadWarrior
struct AProj_RoadWarrior_C_BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileStopDelegate__DelegateSignature_Proj_RoadWarrior_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_RoadWarrior.Proj_RoadWarrior_C.ExecuteUbergraph_Proj_RoadWarrior
struct AProj_RoadWarrior_C_ExecuteUbergraph_Proj_RoadWarrior_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
