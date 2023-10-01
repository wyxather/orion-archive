#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ControlledMove_PhaseLock_WebGrasp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.PlayFeedback
struct UControlledMove_PhaseLock_WebGrasp_C_PlayFeedback_Params
{
};

// Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.SetGraspTimerRunning
struct UControlledMove_PhaseLock_WebGrasp_C_SetGraspTimerRunning_Params
{
	bool                                               bRes;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.GraspFinishLeech
struct UControlledMove_PhaseLock_WebGrasp_C_GraspFinishLeech_Params
{
};

// Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.OnGraspLeechTarget
struct UControlledMove_PhaseLock_WebGrasp_C_OnGraspLeechTarget_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FReceivedDamageDetails                      Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.DoPhaseTranceEffects
struct UControlledMove_PhaseLock_WebGrasp_C_DoPhaseTranceEffects_Params
{
};

// Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.DispatchGraspTargetDiedEvent
struct UControlledMove_PhaseLock_WebGrasp_C_DispatchGraspTargetDiedEvent_Params
{
	class AGbxCharacter*                               Killer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.UnpackComboData
struct UControlledMove_PhaseLock_WebGrasp_C_UnpackComboData_Params
{
};

// Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.ConfigureEmitters
struct UControlledMove_PhaseLock_WebGrasp_C_ConfigureEmitters_Params
{
};

// Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.DispatchGraspedEvent
struct UControlledMove_PhaseLock_WebGrasp_C_DispatchGraspedEvent_Params
{
};

// Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.RemoveElementalEffect
struct UControlledMove_PhaseLock_WebGrasp_C_RemoveElementalEffect_Params
{
};

// Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.ApplyElementalEffect
struct UControlledMove_PhaseLock_WebGrasp_C_ApplyElementalEffect_Params
{
};

// Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.OnServerStart
struct UControlledMove_PhaseLock_WebGrasp_C_OnServerStart_Params
{
	float*                                             MoveDuration;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.OnServerStop
struct UControlledMove_PhaseLock_WebGrasp_C_OnServerStop_Params
{
	bool*                                              bInterrupted;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.ConfigurePhaseLockProperties
struct UControlledMove_PhaseLock_WebGrasp_C_ConfigurePhaseLockProperties_Params
{
};

// Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.OnControlledCharacterDied
struct UControlledMove_PhaseLock_WebGrasp_C_OnControlledCharacterDied_Params
{
	class AActor*                                      Receiver;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Causer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ControlledMove_PhaseLock_WebGrasp.ControlledMove_PhaseLock_WebGrasp_C.ExecuteUbergraph_ControlledMove_PhaseLock_WebGrasp
struct UControlledMove_PhaseLock_WebGrasp_C_ExecuteUbergraph_ControlledMove_PhaseLock_WebGrasp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
