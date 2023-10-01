#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_VarkidShared_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_GetElement
struct ABPChar_VarkidShared_C_Varkid_GetElement_Params
{
	EOakElementalType                                  VarkidElement;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_HasNavForEvolve
struct ABPChar_VarkidShared_C_Varkid_HasNavForEvolve_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_GetIsInPod
struct ABPChar_VarkidShared_C_Varkid_GetIsInPod_Params
{
	bool                                               IsInPod_;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_SetUINameByElement
struct ABPChar_VarkidShared_C_Varkid_SetUINameByElement_Params
{
};

// Function BPChar_VarkidShared.BPChar_VarkidShared_C.GetEvolveSpawnOption
struct ABPChar_VarkidShared_C_GetEvolveSpawnOption_Params
{
	class USpawnOptionData*                            Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_VarkidShared.BPChar_VarkidShared_C.DetermineNaturalEvolutionElligibility
struct ABPChar_VarkidShared_C_DetermineNaturalEvolutionElligibility_Params
{
};

// Function BPChar_VarkidShared.BPChar_VarkidShared_C.UserConstructionScript
struct ABPChar_VarkidShared_C_UserConstructionScript_Params
{
};

// Function BPChar_VarkidShared.BPChar_VarkidShared_C.GbxAsyncRequest_Spawned_81E6B93A454EA2E4DE809599AAF2220A
struct ABPChar_VarkidShared_C_GbxAsyncRequest_Spawned_81E6B93A454EA2E4DE809599AAF2220A_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_VarkidShared.BPChar_VarkidShared_C.OnAnimEnd_F079A9F742D4D1C54D3AA5A416E2371B
struct ABPChar_VarkidShared_C_OnAnimEnd_F079A9F742D4D1C54D3AA5A416E2371B_Params
{
};

// Function BPChar_VarkidShared.BPChar_VarkidShared_C.OnEnd_F079A9F742D4D1C54D3AA5A416E2371B
struct ABPChar_VarkidShared_C_OnEnd_F079A9F742D4D1C54D3AA5A416E2371B_Params
{
	EGbxActionEndState                                 EndState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_SetBurrowed
struct ABPChar_VarkidShared_C_Varkid_SetBurrowed_Params
{
	bool                                               IsBurrowed;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_TargetChanged
struct ABPChar_VarkidShared_C_Varkid_TargetChanged_Params
{
	class AActor*                                      TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_EnableRibbon
struct ABPChar_VarkidShared_C_Varkid_EnableRibbon_Params
{
};

// Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_DisableRibbon
struct ABPChar_VarkidShared_C_Varkid_DisableRibbon_Params
{
};

// Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_DestroyRibbon
struct ABPChar_VarkidShared_C_Varkid_DestroyRibbon_Params
{
};

// Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_BreathAttackStart
struct ABPChar_VarkidShared_C_Varkid_BreathAttackStart_Params
{
};

// Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_BreathAttackStop
struct ABPChar_VarkidShared_C_Varkid_BreathAttackStop_Params
{
};

// Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_Evolve
struct ABPChar_VarkidShared_C_Varkid_Evolve_Params
{
	TEnumAsByte<Enum_VarkidEvolution>                  EvolveTo;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USpawnOptionData*                            CustomSpawnOption;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxUIName*                                  CustomPodUIName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_VarkidShared.BPChar_VarkidShared_C.CE_VarkidPodSpawnChild
struct ABPChar_VarkidShared_C_CE_VarkidPodSpawnChild_Params
{
};

// Function BPChar_VarkidShared.BPChar_VarkidShared_C.CE_VarkidPodAnimate
struct ABPChar_VarkidShared_C_CE_VarkidPodAnimate_Params
{
};

// Function BPChar_VarkidShared.BPChar_VarkidShared_C.CE_VarkidNaturalPodDeath
struct ABPChar_VarkidShared_C_CE_VarkidNaturalPodDeath_Params
{
};

// Function BPChar_VarkidShared.BPChar_VarkidShared_C.VarkidPod_PodAppears
struct ABPChar_VarkidShared_C_VarkidPod_PodAppears_Params
{
};

// Function BPChar_VarkidShared.BPChar_VarkidShared_C.VarkidPod_HideBody
struct ABPChar_VarkidShared_C_VarkidPod_HideBody_Params
{
};

// Function BPChar_VarkidShared.BPChar_VarkidShared_C.VarkidPod_Burst
struct ABPChar_VarkidShared_C_VarkidPod_Burst_Params
{
};

// Function BPChar_VarkidShared.BPChar_VarkidShared_C.ReceiveBeginPlay
struct ABPChar_VarkidShared_C_ReceiveBeginPlay_Params
{
};

// Function BPChar_VarkidShared.BPChar_VarkidShared_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_VarkidShared
struct ABPChar_VarkidShared_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_VarkidShared_Params
{
	class AActor*                                      DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_IsFlying
struct ABPChar_VarkidShared_C_Varkid_IsFlying_Params
{
	bool                                               IsFlying;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_AddPoisonScreenFX
struct ABPChar_VarkidShared_C_Varkid_AddPoisonScreenFX_Params
{
	class UScreenParticleManagerComponent*             PlayerScreenFXManager;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPChar_VarkidShared.BPChar_VarkidShared_C.Varkid_NonTechDeath
struct ABPChar_VarkidShared_C_Varkid_NonTechDeath_Params
{
};

// Function BPChar_VarkidShared.BPChar_VarkidShared_C.ExecuteUbergraph_BPChar_VarkidShared
struct ABPChar_VarkidShared_C_ExecuteUbergraph_BPChar_VarkidShared_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_VarkidShared.BPChar_VarkidShared_C.OnSpawnedActorFromVarkidPod__DelegateSignature
struct ABPChar_VarkidShared_C_OnSpawnedActorFromVarkidPod__DelegateSignature_Params
{
	class AActor*                                      SpawnedChildActor;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
