#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_DroneProj_MessyBreakup_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DroneProj_MessyBreakup.DroneProj_MessyBreakup_C.KillVO
struct ADroneProj_MessyBreakup_C_KillVO_Params
{
};

// Function DroneProj_MessyBreakup.DroneProj_MessyBreakup_C.IdleVO
struct ADroneProj_MessyBreakup_C_IdleVO_Params
{
};

// Function DroneProj_MessyBreakup.DroneProj_MessyBreakup_C.DistanceCHeck
struct ADroneProj_MessyBreakup_C_DistanceCHeck_Params
{
};

// Function DroneProj_MessyBreakup.DroneProj_MessyBreakup_C.NoFriends
struct ADroneProj_MessyBreakup_C_NoFriends_Params
{
};

// Function DroneProj_MessyBreakup.DroneProj_MessyBreakup_C.StopFire
struct ADroneProj_MessyBreakup_C_StopFire_Params
{
};

// Function DroneProj_MessyBreakup.DroneProj_MessyBreakup_C.StartFire
struct ADroneProj_MessyBreakup_C_StartFire_Params
{
};

// Function DroneProj_MessyBreakup.DroneProj_MessyBreakup_C.FireWeapon
struct ADroneProj_MessyBreakup_C_FireWeapon_Params
{
};

// Function DroneProj_MessyBreakup.DroneProj_MessyBreakup_C.UserConstructionScript
struct ADroneProj_MessyBreakup_C_UserConstructionScript_Params
{
};

// Function DroneProj_MessyBreakup.DroneProj_MessyBreakup_C.ReceiveBeginPlay
struct ADroneProj_MessyBreakup_C_ReceiveBeginPlay_Params
{
};

// Function DroneProj_MessyBreakup.DroneProj_MessyBreakup_C.BndEvt__DroneMovement_K2Node_ComponentBoundEvent_0_OakDroneProjectileFacingTargetChangedDelegate__DelegateSignature_DroneProj_TED_TenGallon
struct ADroneProj_MessyBreakup_C_BndEvt__DroneMovement_K2Node_ComponentBoundEvent_0_OakDroneProjectileFacingTargetChangedDelegate__DelegateSignature_DroneProj_TED_TenGallon_Params
{
	class AOakDroneProjectile*                         Drone;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DroneProj_MessyBreakup.DroneProj_MessyBreakup_C.OnBeginExplode
struct ADroneProj_MessyBreakup_C_OnBeginExplode_Params
{
};

// Function DroneProj_MessyBreakup.DroneProj_MessyBreakup_C.ShieldUnequippedEvent
struct ADroneProj_MessyBreakup_C_ShieldUnequippedEvent_Params
{
	class AOakCharacter*                               EquipInstigator;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DroneProj_MessyBreakup.DroneProj_MessyBreakup_C.OnExplode
struct ADroneProj_MessyBreakup_C_OnExplode_Params
{
};

// Function DroneProj_MessyBreakup.DroneProj_MessyBreakup_C.KilledEnemy
struct ADroneProj_MessyBreakup_C_KilledEnemy_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function DroneProj_MessyBreakup.DroneProj_MessyBreakup_C.ExecuteUbergraph_DroneProj_MessyBreakup
struct ADroneProj_MessyBreakup_C_ExecuteUbergraph_DroneProj_MessyBreakup_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
