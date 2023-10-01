#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_DroneProj_TED_Earthbound_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.DistanceCHeck
struct ADroneProj_TED_Earthbound_C_DistanceCHeck_Params
{
};

// Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.NoFriends
struct ADroneProj_TED_Earthbound_C_NoFriends_Params
{
};

// Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.StopFire
struct ADroneProj_TED_Earthbound_C_StopFire_Params
{
};

// Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.FireWeapon
struct ADroneProj_TED_Earthbound_C_FireWeapon_Params
{
};

// Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.UserConstructionScript
struct ADroneProj_TED_Earthbound_C_UserConstructionScript_Params
{
};

// Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.ReceiveBeginPlay
struct ADroneProj_TED_Earthbound_C_ReceiveBeginPlay_Params
{
};

// Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.PutDownNotify
struct ADroneProj_TED_Earthbound_C_PutDownNotify_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.OnBeginExplode
struct ADroneProj_TED_Earthbound_C_OnBeginExplode_Params
{
};

// Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.BndEvt__DroneMovement_K2Node_ComponentBoundEvent_0_OakDroneProjectileFacingTargetChangedDelegate__DelegateSignature_DroneProj_TED_TenGallon
struct ADroneProj_TED_Earthbound_C_BndEvt__DroneMovement_K2Node_ComponentBoundEvent_0_OakDroneProjectileFacingTargetChangedDelegate__DelegateSignature_DroneProj_TED_TenGallon_Params
{
	class AOakDroneProjectile*                         Drone;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.OnHitEnemy
struct ADroneProj_TED_Earthbound_C_OnHitEnemy_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.RebindMoveTarget
struct ADroneProj_TED_Earthbound_C_RebindMoveTarget_Params
{
	class AActor*                                      DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.CheckForTargets
struct ADroneProj_TED_Earthbound_C_CheckForTargets_Params
{
};

// Function DroneProj_TED_Earthbound.DroneProj_TED_Earthbound_C.ExecuteUbergraph_DroneProj_TED_Earthbound
struct ADroneProj_TED_Earthbound_C_ExecuteUbergraph_DroneProj_TED_Earthbound_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
