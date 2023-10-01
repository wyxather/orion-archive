#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Tink_Turret_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.UserConstructionScript
struct ABPChar_Tink_Turret_C_UserConstructionScript_Params
{
};

// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.TinkTurret_PerformLaunch
struct ABPChar_Tink_Turret_C_TinkTurret_PerformLaunch_Params
{
};

// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.TinkTurret_DeathHide
struct ABPChar_Tink_Turret_C_TinkTurret_DeathHide_Params
{
};

// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.TInkTurret_SetPileSpawnerComp
struct ABPChar_Tink_Turret_C_TInkTurret_SetPileSpawnerComp_Params
{
	class USpawnerComponent*                           MyPileSpawnerComp;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.TurretGodModeOn
struct ABPChar_Tink_Turret_C_TurretGodModeOn_Params
{
};

// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.TurretGodModeOff
struct ABPChar_Tink_Turret_C_TurretGodModeOff_Params
{
};

// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.TurretTargetableOn
struct ABPChar_Tink_Turret_C_TurretTargetableOn_Params
{
};

// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.TurretTargetableOff
struct ABPChar_Tink_Turret_C_TurretTargetableOff_Params
{
};

// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.TinkTurret_TrackingLaserCheckON
struct ABPChar_Tink_Turret_C_TinkTurret_TrackingLaserCheckON_Params
{
	class AActor*                                      TrackingLaserTarget;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.TinkTurret_TrackingLaserCheckOFF
struct ABPChar_Tink_Turret_C_TinkTurret_TrackingLaserCheckOFF_Params
{
};

// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.CE_OpenTrackingLaserCheckGate
struct ABPChar_Tink_Turret_C_CE_OpenTrackingLaserCheckGate_Params
{
};

// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.CE_CheckLaserTargetSeen
struct ABPChar_Tink_Turret_C_CE_CheckLaserTargetSeen_Params
{
};

// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.ReceiveBeginPlay
struct ABPChar_Tink_Turret_C_ReceiveBeginPlay_Params
{
};

// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.CleanUpTurretLegs_Event
struct ABPChar_Tink_Turret_C_CleanUpTurretLegs_Event_Params
{
};

// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.OnFindTinkQueryFinish
struct ABPChar_Tink_Turret_C_OnFindTinkQueryFinish_Params
{
	class UEnvQueryInstanceBlueprintWrapper*           QueryInstance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnvQueryStatus>                       QueryStatus;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.TinkTurret_DeathCleanUp
struct ABPChar_Tink_Turret_C_TinkTurret_DeathCleanUp_Params
{
};

// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_Tink_Turret
struct ABPChar_Tink_Turret_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_Tink_Turret_Params
{
	class AActor*                                      DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.CE_StopFaceCheckMetro
struct ABPChar_Tink_Turret_C_CE_StopFaceCheckMetro_Params
{
};

// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.CE_OpenTrackingAudioStartGate
struct ABPChar_Tink_Turret_C_CE_OpenTrackingAudioStartGate_Params
{
};

// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.TinkTurret_TrackingAudio
struct ABPChar_Tink_Turret_C_TinkTurret_TrackingAudio_Params
{
	bool                                               On;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.CE_CloseTrackingAudioStopGate
struct ABPChar_Tink_Turret_C_CE_CloseTrackingAudioStopGate_Params
{
};

// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.CE_OpenTrackingAudioStopGate
struct ABPChar_Tink_Turret_C_CE_OpenTrackingAudioStopGate_Params
{
};

// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.CE_CloseTrackingAudioStartGate
struct ABPChar_Tink_Turret_C_CE_CloseTrackingAudioStartGate_Params
{
};

// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.ExecuteUbergraph_BPChar_Tink_Turret
struct ABPChar_Tink_Turret_C_ExecuteUbergraph_BPChar_Tink_Turret_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.SetTinkTurretCollisionOn__DelegateSignature
struct ABPChar_Tink_Turret_C_SetTinkTurretCollisionOn__DelegateSignature_Params
{
};

// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.SetTinkTurretCollisionOff__DelegateSignature
struct ABPChar_Tink_Turret_C_SetTinkTurretCollisionOff__DelegateSignature_Params
{
};

// Function BPChar_Tink_Turret.BPChar_Tink_Turret_C.CleanUpTurretLegs__DelegateSignature
struct ABPChar_Tink_Turret_C_CleanUpTurretLegs__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
