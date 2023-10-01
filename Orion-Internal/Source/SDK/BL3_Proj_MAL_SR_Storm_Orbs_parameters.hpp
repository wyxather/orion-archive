#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_MAL_SR_Storm_Orbs_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.UserConstructionScript
struct AProj_MAL_SR_Storm_Orbs_C_UserConstructionScript_Params
{
};

// Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.ReceiveBeginPlay
struct AProj_MAL_SR_Storm_Orbs_C_ReceiveBeginPlay_Params
{
};

// Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_MAL_SR_Storm_Orbs
struct AProj_MAL_SR_Storm_Orbs_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_MAL_SR_Storm_Orbs_Params
{
	class AActor*                                      TouchingActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ComponentTouched;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.ReceiveDestroyed
struct AProj_MAL_SR_Storm_Orbs_C_ReceiveDestroyed_Params
{
};

// Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.WeaponProjectileExplode
struct AProj_MAL_SR_Storm_Orbs_C_WeaponProjectileExplode_Params
{
};

// Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakUnTouchedTriggerDelegate__DelegateSignature_Proj_MAL_SR_Storm_Orbs
struct AProj_MAL_SR_Storm_Orbs_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakUnTouchedTriggerDelegate__DelegateSignature_Proj_MAL_SR_Storm_Orbs_Params
{
	class AActor*                                      LeavingActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.ReceiveHit
struct AProj_MAL_SR_Storm_Orbs_C_ReceiveHit_Params
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

// Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.Bobble
struct AProj_MAL_SR_Storm_Orbs_C_Bobble_Params
{
};

// Function Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C.ExecuteUbergraph_Proj_MAL_SR_Storm_Orbs
struct AProj_MAL_SR_Storm_Orbs_C_ExecuteUbergraph_Proj_MAL_SR_Storm_Orbs_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
