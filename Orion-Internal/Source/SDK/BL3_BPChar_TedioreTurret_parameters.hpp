#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_TedioreTurret_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPChar_TedioreTurret.BPChar_TedioreTurret_C.DialogueCalloutIdle
struct ABPChar_TedioreTurret_C_DialogueCalloutIdle_Params
{
};

// Function BPChar_TedioreTurret.BPChar_TedioreTurret_C.DialogueCalloutSearchingForTarget
struct ABPChar_TedioreTurret_C_DialogueCalloutSearchingForTarget_Params
{
};

// Function BPChar_TedioreTurret.BPChar_TedioreTurret_C.DialogueCalloutTargetAcquired
struct ABPChar_TedioreTurret_C_DialogueCalloutTargetAcquired_Params
{
};

// Function BPChar_TedioreTurret.BPChar_TedioreTurret_C.DialogueCalloutTargetKilled
struct ABPChar_TedioreTurret_C_DialogueCalloutTargetKilled_Params
{
};

// Function BPChar_TedioreTurret.BPChar_TedioreTurret_C.DialogueCalloutReloading
struct ABPChar_TedioreTurret_C_DialogueCalloutReloading_Params
{
};

// Function BPChar_TedioreTurret.BPChar_TedioreTurret_C.InitBlackboardKeys
struct ABPChar_TedioreTurret_C_InitBlackboardKeys_Params
{
};

// Function BPChar_TedioreTurret.BPChar_TedioreTurret_C.WeaponCreation
struct ABPChar_TedioreTurret_C_WeaponCreation_Params
{
};

// Function BPChar_TedioreTurret.BPChar_TedioreTurret_C.InitWeaponData
struct ABPChar_TedioreTurret_C_InitWeaponData_Params
{
};

// Function BPChar_TedioreTurret.BPChar_TedioreTurret_C.Detonated
struct ABPChar_TedioreTurret_C_Detonated_Params
{
};

// Function BPChar_TedioreTurret.BPChar_TedioreTurret_C.UserConstructionScript
struct ABPChar_TedioreTurret_C_UserConstructionScript_Params
{
};

// Function BPChar_TedioreTurret.BPChar_TedioreTurret_C.BndEvt__DamageComponent_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_BPChar_TedioreTurret
struct ABPChar_TedioreTurret_C_BndEvt__DamageComponent_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_BPChar_TedioreTurret_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPChar_TedioreTurret.BPChar_TedioreTurret_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_BPChar_TedioreTurret
struct ABPChar_TedioreTurret_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_BPChar_TedioreTurret_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BPChar_TedioreTurret.BPChar_TedioreTurret_C.InitializeWeapon
struct ABPChar_TedioreTurret_C_InitializeWeapon_Params
{
};

// Function BPChar_TedioreTurret.BPChar_TedioreTurret_C.OnReaped
struct ABPChar_TedioreTurret_C_OnReaped_Params
{
};

// Function BPChar_TedioreTurret.BPChar_TedioreTurret_C.ReceiveDestroyed
struct ABPChar_TedioreTurret_C_ReceiveDestroyed_Params
{
};

// Function BPChar_TedioreTurret.BPChar_TedioreTurret_C.ReceiveBeginPlay
struct ABPChar_TedioreTurret_C_ReceiveBeginPlay_Params
{
};

// Function BPChar_TedioreTurret.BPChar_TedioreTurret_C.OnProjectileDeath
struct ABPChar_TedioreTurret_C_OnProjectileDeath_Params
{
	class AActor*                                      DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_TedioreTurret.BPChar_TedioreTurret_C.Reload2
struct ABPChar_TedioreTurret_C_Reload2_Params
{
	bool                                               bAutoReload;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_TedioreTurret.BPChar_TedioreTurret_C.BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_2_CauseDeathDelegate__DelegateSignature_BPChar_TedioreTurret
struct ABPChar_TedioreTurret_C_BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_2_CauseDeathDelegate__DelegateSignature_BPChar_TedioreTurret_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BPChar_TedioreTurret.BPChar_TedioreTurret_C.ExecuteUbergraph_BPChar_TedioreTurret
struct ABPChar_TedioreTurret_C_ExecuteUbergraph_BPChar_TedioreTurret_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
