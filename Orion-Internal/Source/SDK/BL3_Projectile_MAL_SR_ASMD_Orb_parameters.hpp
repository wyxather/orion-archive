#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_MAL_SR_ASMD_Orb_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Projectile_MAL_SR_ASMD_Orb.Projectile_MAL_SR_ASMD_Orb_C.UserConstructionScript
struct AProjectile_MAL_SR_ASMD_Orb_C_UserConstructionScript_Params
{
};

// Function Projectile_MAL_SR_ASMD_Orb.Projectile_MAL_SR_ASMD_Orb_C.BndEvt__ProjOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Projectile_MAL_SR_ASMD_Orb
struct AProjectile_MAL_SR_ASMD_Orb_C_BndEvt__ProjOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Projectile_MAL_SR_ASMD_Orb_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Projectile_MAL_SR_ASMD_Orb.Projectile_MAL_SR_ASMD_Orb_C.ReceiveBeginPlay
struct AProjectile_MAL_SR_ASMD_Orb_C_ReceiveBeginPlay_Params
{
};

// Function Projectile_MAL_SR_ASMD_Orb.Projectile_MAL_SR_ASMD_Orb_C.ExecuteUbergraph_Projectile_MAL_SR_ASMD_Orb
struct AProjectile_MAL_SR_ASMD_Orb_C_ExecuteUbergraph_Projectile_MAL_SR_ASMD_Orb_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
