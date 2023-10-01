#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_COV_Explosive_Grenade_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_COV_Explosive_Grenade.Proj_COV_Explosive_Grenade_C.UserConstructionScript
struct AProj_COV_Explosive_Grenade_C_UserConstructionScript_Params
{
};

// Function Proj_COV_Explosive_Grenade.Proj_COV_Explosive_Grenade_C.OnBounce
struct AProj_COV_Explosive_Grenade_C_OnBounce_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector*                                    ImpactVelocity;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Proj_COV_Explosive_Grenade.Proj_COV_Explosive_Grenade_C.BndEvt__MolotovMesh_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature_Proj_PsychoMale_Shared_Molotov
struct AProj_COV_Explosive_Grenade_C_BndEvt__MolotovMesh_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature_Proj_PsychoMale_Shared_Molotov_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_COV_Explosive_Grenade.Proj_COV_Explosive_Grenade_C.BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileStopDelegate__DelegateSignature_Proj_PsychoMale_Shared_ThrownExplosive_Grenade
struct AProj_COV_Explosive_Grenade_C_BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileStopDelegate__DelegateSignature_Proj_PsychoMale_Shared_ThrownExplosive_Grenade_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Proj_COV_Explosive_Grenade.Proj_COV_Explosive_Grenade_C.OnExplode
struct AProj_COV_Explosive_Grenade_C_OnExplode_Params
{
};

// Function Proj_COV_Explosive_Grenade.Proj_COV_Explosive_Grenade_C.HNT_Prime
struct AProj_COV_Explosive_Grenade_C_HNT_Prime_Params
{
};

// Function Proj_COV_Explosive_Grenade.Proj_COV_Explosive_Grenade_C.HNT_Drop
struct AProj_COV_Explosive_Grenade_C_HNT_Drop_Params
{
};

// Function Proj_COV_Explosive_Grenade.Proj_COV_Explosive_Grenade_C.HNT_Throw
struct AProj_COV_Explosive_Grenade_C_HNT_Throw_Params
{
};

// Function Proj_COV_Explosive_Grenade.Proj_COV_Explosive_Grenade_C.ReceiveBeginPlay
struct AProj_COV_Explosive_Grenade_C_ReceiveBeginPlay_Params
{
};

// Function Proj_COV_Explosive_Grenade.Proj_COV_Explosive_Grenade_C.ExecuteUbergraph_Proj_COV_Explosive_Grenade
struct AProj_COV_Explosive_Grenade_C_ExecuteUbergraph_Proj_COV_Explosive_Grenade_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
