#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_TEDProjectile_Gunerang_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TEDProjectile_Gunerang.TEDProjectile_Gunerang_C.UserConstructionScript
struct ATEDProjectile_Gunerang_C_UserConstructionScript_Params
{
};

// Function TEDProjectile_Gunerang.TEDProjectile_Gunerang_C.ReceiveBeginPlay
struct ATEDProjectile_Gunerang_C_ReceiveBeginPlay_Params
{
};

// Function TEDProjectile_Gunerang.TEDProjectile_Gunerang_C.ReturnToSender
struct ATEDProjectile_Gunerang_C_ReturnToSender_Params
{
};

// Function TEDProjectile_Gunerang.TEDProjectile_Gunerang_C.FindNewFriends
struct ATEDProjectile_Gunerang_C_FindNewFriends_Params
{
};

// Function TEDProjectile_Gunerang.TEDProjectile_Gunerang_C.OnBounce
struct ATEDProjectile_Gunerang_C_OnBounce_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector*                                    ImpactVelocity;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function TEDProjectile_Gunerang.TEDProjectile_Gunerang_C.BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_TEDProjectile_Gunerang
struct ATEDProjectile_Gunerang_C_BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_TEDProjectile_Gunerang_Params
{
};

// Function TEDProjectile_Gunerang.TEDProjectile_Gunerang_C.OnBehaviorInitialized
struct ATEDProjectile_Gunerang_C_OnBehaviorInitialized_Params
{
	class UClass**                                     BehaviorClass;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TEDProjectile_Gunerang.TEDProjectile_Gunerang_C.OnExplode
struct ATEDProjectile_Gunerang_C_OnExplode_Params
{
};

// Function TEDProjectile_Gunerang.TEDProjectile_Gunerang_C.ExecuteUbergraph_TEDProjectile_Gunerang
struct ATEDProjectile_Gunerang_C_ExecuteUbergraph_TEDProjectile_Gunerang_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
