#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_Combat_PipeValve_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.GetPipeFlowState
struct AIO_Combat_PipeValve_C_GetPipeFlowState_Params
{
	bool                                               HasFlow;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.GetPipeDestroyedState
struct AIO_Combat_PipeValve_C_GetPipeDestroyedState_Params
{
	bool                                               Destroyed;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.SprayTrace
struct AIO_Combat_PipeValve_C_SprayTrace_Params
{
	float                                              ProjectileRadius;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectTypeQuery>                      ObjectTypeToTestAgainst;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     CollissionTraceChannel;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OutHitActor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutHitLocation;                                           // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     OutHitNormal;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.CheckForSprayDamage
struct AIO_Combat_PipeValve_C_CheckForSprayDamage_Params
{
};

// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.SetupDestroyedPipes
struct AIO_Combat_PipeValve_C_SetupDestroyedPipes_Params
{
};

// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.SpawnAPuddle
struct AIO_Combat_PipeValve_C_SpawnAPuddle_Params
{
};

// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.TurnOnFlowFeedback
struct AIO_Combat_PipeValve_C_TurnOnFlowFeedback_Params
{
};

// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.TurnOffFlowFeedback
struct AIO_Combat_PipeValve_C_TurnOffFlowFeedback_Params
{
};

// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.TurnFlowOff
struct AIO_Combat_PipeValve_C_TurnFlowOff_Params
{
};

// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.TurnFlowOn
struct AIO_Combat_PipeValve_C_TurnFlowOn_Params
{
};

// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.CheckChangeFlowState
struct AIO_Combat_PipeValve_C_CheckChangeFlowState_Params
{
};

// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.InitialSetup
struct AIO_Combat_PipeValve_C_InitialSetup_Params
{
};

// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.SetUpPipeValveMaterialParameters
struct AIO_Combat_PipeValve_C_SetUpPipeValveMaterialParameters_Params
{
	class UStaticMeshComponent*                        StaticMeshIn;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.UserConstructionScript
struct AIO_Combat_PipeValve_C_UserConstructionScript_Params
{
};

// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.ReceiveBeginPlay
struct AIO_Combat_PipeValve_C_ReceiveBeginPlay_Params
{
};

// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.OnEnabled
struct AIO_Combat_PipeValve_C_OnEnabled_Params
{
};

// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.OnLStateUnlocked
struct AIO_Combat_PipeValve_C_OnLStateUnlocked_Params
{
};

// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.SwitchIsOn
struct AIO_Combat_PipeValve_C_SwitchIsOn_Params
{
	class AActor*                                      LastActorToUseSwitch;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.SwitchIsOff
struct AIO_Combat_PipeValve_C_SwitchIsOff_Params
{
	class AActor*                                      LastActorToUseSwitch;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.OnEnabling
struct AIO_Combat_PipeValve_C_OnEnabling_Params
{
};

// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.OnLStateLocked
struct AIO_Combat_PipeValve_C_OnLStateLocked_Params
{
};

// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.SetPipeState
struct AIO_Combat_PipeValve_C_SetPipeState_Params
{
	TEnumAsByte<Enum_IO_ExplodingPipe_DestroyedState>  PipeState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.DestroyPipe
struct AIO_Combat_PipeValve_C_DestroyPipe_Params
{
};

// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.SetPipeFlowState
struct AIO_Combat_PipeValve_C_SetPipeFlowState_Params
{
	bool                                               HasFlow;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_IO_Combat_PipeValve
struct AIO_Combat_PipeValve_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_IO_Combat_PipeValve_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.AttemptToSpawnPudle
struct AIO_Combat_PipeValve_C_AttemptToSpawnPudle_Params
{
};

// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.ExecuteUbergraph_IO_Combat_PipeValve
struct AIO_Combat_PipeValve_C_ExecuteUbergraph_IO_Combat_PipeValve_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.On_PipeFlow_Off__DelegateSignature
struct AIO_Combat_PipeValve_C_On_PipeFlow_Off__DelegateSignature_Params
{
};

// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.On_PipeFlow_On__DelegateSignature
struct AIO_Combat_PipeValve_C_On_PipeFlow_On__DelegateSignature_Params
{
};

// Function IO_Combat_PipeValve.IO_Combat_PipeValve_C.On_PipeDestroyed__DelegateSignature
struct AIO_Combat_PipeValve_C_On_PipeDestroyed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
