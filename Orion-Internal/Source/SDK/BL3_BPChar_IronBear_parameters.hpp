#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_IronBear_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPChar_IronBear.BPChar_IronBear_C.GetIronBearAutoSlideCooldownRefund
struct ABPChar_IronBear_C_GetIronBearAutoSlideCooldownRefund_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPChar_IronBear.BPChar_IronBear_C.OnRep_bAutoBearStarted
struct ABPChar_IronBear_C_OnRep_bAutoBearStarted_Params
{
};

// Function BPChar_IronBear.BPChar_IronBear_C.CalculateAutoBearDuration
struct ABPChar_IronBear_C_CalculateAutoBearDuration_Params
{
};

// Function BPChar_IronBear.BPChar_IronBear_C.GetWeaponUserForWeaponSlot
struct ABPChar_IronBear_C_GetWeaponUserForWeaponSlot_Params
{
	class UWeaponSlotData**                            SlotData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAIWeaponUserComponent*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BPChar_IronBear.BPChar_IronBear_C.SetScreenLoopEnabled
struct ABPChar_IronBear_C_SetScreenLoopEnabled_Params
{
	bool                                               bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_IronBear.BPChar_IronBear_C.StopBubbleShieldAudioLoop
struct ABPChar_IronBear_C_StopBubbleShieldAudioLoop_Params
{
};

// Function BPChar_IronBear.BPChar_IronBear_C.StartBubbleShieldAudioLoop
struct ABPChar_IronBear_C_StartBubbleShieldAudioLoop_Params
{
};

// Function BPChar_IronBear.BPChar_IronBear_C.BootGunnersNestOccupant
struct ABPChar_IronBear_C_BootGunnersNestOccupant_Params
{
	bool                                               InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_IronBear.BPChar_IronBear_C.SetNewAutoBearRotationRates
struct ABPChar_IronBear_C_SetNewAutoBearRotationRates_Params
{
};

// Function BPChar_IronBear.BPChar_IronBear_C.LockGunnerNestUsability
struct ABPChar_IronBear_C_LockGunnerNestUsability_Params
{
};

// Function BPChar_IronBear.BPChar_IronBear_C.KickPlayerOutOfGunnersNest
struct ABPChar_IronBear_C_KickPlayerOutOfGunnersNest_Params
{
	bool                                               zKilled_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_IronBear.BPChar_IronBear_C.InitNukeMod
struct ABPChar_IronBear_C_InitNukeMod_Params
{
	EIronBearHardPointOrientation                      NewOrientation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_IronBear.BPChar_IronBear_C.GetSurpriseForYouTarget
struct ABPChar_IronBear_C_GetSurpriseForYouTarget_Params
{
	class AActor*                                      AsActor;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_IronBear.BPChar_IronBear_C.ExitSurpriseForYouCore
struct ABPChar_IronBear_C_ExitSurpriseForYouCore_Params
{
};

// Function BPChar_IronBear.BPChar_IronBear_C.HasBubbleShield
struct ABPChar_IronBear_C_HasBubbleShield_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPChar_IronBear.BPChar_IronBear_C.Init_BubbleShieldCore
struct ABPChar_IronBear_C_Init_BubbleShieldCore_Params
{
};

// Function BPChar_IronBear.BPChar_IronBear_C.Init_GunnersNestCore
struct ABPChar_IronBear_C_Init_GunnersNestCore_Params
{
};

// Function BPChar_IronBear.BPChar_IronBear_C.OnRep_GunnersNestOccupied
struct ABPChar_IronBear_C_OnRep_GunnersNestOccupied_Params
{
};

// Function BPChar_IronBear.BPChar_IronBear_C.OnRep_UseModdedBubbleShieldFX
struct ABPChar_IronBear_C_OnRep_UseModdedBubbleShieldFX_Params
{
};

// Function BPChar_IronBear.BPChar_IronBear_C.ToggleBubbleShieldCollision
struct ABPChar_IronBear_C_ToggleBubbleShieldCollision_Params
{
	bool                                               On;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_IronBear.BPChar_IronBear_C.UpdateScreenParameter
struct ABPChar_IronBear_C_UpdateScreenParameter_Params
{
	struct FName                                       ParamName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EIronBearDamageLevel                               TriggeredLevel;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_IronBear.BPChar_IronBear_C.UpdateScreenDamage
struct ABPChar_IronBear_C_UpdateScreenDamage_Params
{
	class UParticleSystemComponent*                    ParticleSystem;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EIronBearDamageLevel                               TriggeredLevel;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EIronBearDamageLevel                               TriggeredSmokeLevel;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EIronBearDamageLevel                               TriggeredFireLevel;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_IronBear.BPChar_IronBear_C.UpdateScreenCrack
struct ABPChar_IronBear_C_UpdateScreenCrack_Params
{
	class UParticleSystemComponent*                    ParticleSystem;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EIronBearDamageLevel                               TriggeredLevel;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_IronBear.BPChar_IronBear_C.PrepareIronBearForEntry
struct ABPChar_IronBear_C_PrepareIronBearForEntry_Params
{
	class AOakCharacter*                               Gunner;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_IronBear.BPChar_IronBear_C.UserConstructionScript
struct ABPChar_IronBear_C_UserConstructionScript_Params
{
};

// Function BPChar_IronBear.BPChar_IronBear_C.Timeline_0__FinishedFunc
struct ABPChar_IronBear_C_Timeline_0__FinishedFunc_Params
{
};

// Function BPChar_IronBear.BPChar_IronBear_C.Timeline_0__UpdateFunc
struct ABPChar_IronBear_C_Timeline_0__UpdateFunc_Params
{
};

// Function BPChar_IronBear.BPChar_IronBear_C.Timeline_1__FinishedFunc
struct ABPChar_IronBear_C_Timeline_1__FinishedFunc_Params
{
};

// Function BPChar_IronBear.BPChar_IronBear_C.Timeline_1__UpdateFunc
struct ABPChar_IronBear_C_Timeline_1__UpdateFunc_Params
{
};

// Function BPChar_IronBear.BPChar_IronBear_C.Timeline_2__FinishedFunc
struct ABPChar_IronBear_C_Timeline_2__FinishedFunc_Params
{
};

// Function BPChar_IronBear.BPChar_IronBear_C.Timeline_2__UpdateFunc
struct ABPChar_IronBear_C_Timeline_2__UpdateFunc_Params
{
};

// Function BPChar_IronBear.BPChar_IronBear_C.OnAnimEnd_2A9499CC4F6188887CB16E840419821A
struct ABPChar_IronBear_C_OnAnimEnd_2A9499CC4F6188887CB16E840419821A_Params
{
};

// Function BPChar_IronBear.BPChar_IronBear_C.OnEnd_2A9499CC4F6188887CB16E840419821A
struct ABPChar_IronBear_C_OnEnd_2A9499CC4F6188887CB16E840419821A_Params
{
	EGbxActionEndState                                 EndState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_IronBear.BPChar_IronBear_C.OnAnimEnd_D554724642CB95A6F77CEEA2DFDC9FF2
struct ABPChar_IronBear_C_OnAnimEnd_D554724642CB95A6F77CEEA2DFDC9FF2_Params
{
};

// Function BPChar_IronBear.BPChar_IronBear_C.OnEnd_D554724642CB95A6F77CEEA2DFDC9FF2
struct ABPChar_IronBear_C_OnEnd_D554724642CB95A6F77CEEA2DFDC9FF2_Params
{
	EGbxActionEndState                                 EndState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_IronBear.BPChar_IronBear_C.OnAnimEnd_A39BE65742340F11ACEF63BD04B6FCB1
struct ABPChar_IronBear_C_OnAnimEnd_A39BE65742340F11ACEF63BD04B6FCB1_Params
{
};

// Function BPChar_IronBear.BPChar_IronBear_C.OnEnd_A39BE65742340F11ACEF63BD04B6FCB1
struct ABPChar_IronBear_C_OnEnd_A39BE65742340F11ACEF63BD04B6FCB1_Params
{
	EGbxActionEndState                                 EndState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_IronBear.BPChar_IronBear_C.OnExiting
struct ABPChar_IronBear_C_OnExiting_Params
{
	bool*                                              bInstantExit;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_IronBear.BPChar_IronBear_C.OnExited
struct ABPChar_IronBear_C_OnExited_Params
{
	class AController**                                OldController;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_IronBear.BPChar_IronBear_C.OnExitStarted
struct ABPChar_IronBear_C_OnExitStarted_Params
{
};

// Function BPChar_IronBear.BPChar_IronBear_C.ServerNotifyIBScreenOff
struct ABPChar_IronBear_C_ServerNotifyIBScreenOff_Params
{
};

// Function BPChar_IronBear.BPChar_IronBear_C.ClientOnExiting
struct ABPChar_IronBear_C_ClientOnExiting_Params
{
};

// Function BPChar_IronBear.BPChar_IronBear_C.SetupAutoBearDestroyCleanup
struct ABPChar_IronBear_C_SetupAutoBearDestroyCleanup_Params
{
	float                                              RepDelay;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_IronBear.BPChar_IronBear_C.OnActionSkillActivated_IronBear
struct ABPChar_IronBear_C_OnActionSkillActivated_IronBear_Params
{
	class UOakActionAbility*                           ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_IronBear.BPChar_IronBear_C.ManualExitCancelled
struct ABPChar_IronBear_C_ManualExitCancelled_Params
{
};

// Function BPChar_IronBear.BPChar_IronBear_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_BPChar_IronBear
struct ABPChar_IronBear_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_BPChar_IronBear_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPChar_IronBear.BPChar_IronBear_C.OnJumped
struct ABPChar_IronBear_C_OnJumped_Params
{
};

// Function BPChar_IronBear.BPChar_IronBear_C.OnLanded
struct ABPChar_IronBear_C_OnLanded_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BPChar_IronBear.BPChar_IronBear_C.ActivateGundamCore
struct ABPChar_IronBear_C_ActivateGundamCore_Params
{
};

// Function BPChar_IronBear.BPChar_IronBear_C.ServerActivateGundamCore
struct ABPChar_IronBear_C_ServerActivateGundamCore_Params
{
};

// Function BPChar_IronBear.BPChar_IronBear_C.BndEvt__DamageComponent_K2Node_ComponentBoundEvent_11_TakeAnyPipelineDamageDelegate__DelegateSignature_BPChar_IronBear
struct ABPChar_IronBear_C_BndEvt__DamageComponent_K2Node_ComponentBoundEvent_11_TakeAnyPipelineDamageDelegate__DelegateSignature_BPChar_IronBear_Params
{
	class UDamageComponent*                            DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageCauserComponent*                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FReceivedDamageDetails                      Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPChar_IronBear.BPChar_IronBear_C.IBScreenOn
struct ABPChar_IronBear_C_IBScreenOn_Params
{
};

// Function BPChar_IronBear.BPChar_IronBear_C.IBScreenOff
struct ABPChar_IronBear_C_IBScreenOff_Params
{
};

// Function BPChar_IronBear.BPChar_IronBear_C.EnableDamageScreens
struct ABPChar_IronBear_C_EnableDamageScreens_Params
{
};

// Function BPChar_IronBear.BPChar_IronBear_C.DisableDamageScreens
struct ABPChar_IronBear_C_DisableDamageScreens_Params
{
};

// Function BPChar_IronBear.BPChar_IronBear_C.OnDamageLevelChanged
struct ABPChar_IronBear_C_OnDamageLevelChanged_Params
{
};

// Function BPChar_IronBear.BPChar_IronBear_C.ActivateNukeScreenIcons
struct ABPChar_IronBear_C_ActivateNukeScreenIcons_Params
{
	EIronBearHardPointOrientation                      HardpointOrientation;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_IronBear.BPChar_IronBear_C.OnEntered
struct ABPChar_IronBear_C_OnEntered_Params
{
};

// Function BPChar_IronBear.BPChar_IronBear_C.OnEnteredClient
struct ABPChar_IronBear_C_OnEnteredClient_Params
{
};

// Function BPChar_IronBear.BPChar_IronBear_C.OnEntering
struct ABPChar_IronBear_C_OnEntering_Params
{
	class AOakCharacter_Player**                       InGunner;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_IronBear.BPChar_IronBear_C.ReceiveBeginPlay
struct ABPChar_IronBear_C_ReceiveBeginPlay_Params
{
};

// Function BPChar_IronBear.BPChar_IronBear_C.OnBubbleShieldEnabledStateChanged
struct ABPChar_IronBear_C_OnBubbleShieldEnabledStateChanged_Params
{
};

// Function BPChar_IronBear.BPChar_IronBear_C.SetBubbleShieldFXModOverrideEnabled
struct ABPChar_IronBear_C_SetBubbleShieldFXModOverrideEnabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_IronBear.BPChar_IronBear_C.BndEvt__DestructibleCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_BPChar_IronBear
struct ABPChar_IronBear_C_BndEvt__DestructibleCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_BPChar_IronBear_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BPChar_IronBear.BPChar_IronBear_C.OnAttachStateChanged_GunnersNest
struct ABPChar_IronBear_C_OnAttachStateChanged_GunnersNest_Params
{
};

// Function BPChar_IronBear.BPChar_IronBear_C.StartDigistructIn
struct ABPChar_IronBear_C_StartDigistructIn_Params
{
};

// Function BPChar_IronBear.BPChar_IronBear_C.ReceiveEndPlay
struct ABPChar_IronBear_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_IronBear.BPChar_IronBear_C.IronBear_DoMeleeAttack
struct ABPChar_IronBear_C_IronBear_DoMeleeAttack_Params
{
};

// Function BPChar_IronBear.BPChar_IronBear_C.UnlockResourceGod
struct ABPChar_IronBear_C_UnlockResourceGod_Params
{
};

// Function BPChar_IronBear.BPChar_IronBear_C.StopBubbleShield
struct ABPChar_IronBear_C_StopBubbleShield_Params
{
};

// Function BPChar_IronBear.BPChar_IronBear_C.ExecuteUbergraph_BPChar_IronBear
struct ABPChar_IronBear_C_ExecuteUbergraph_BPChar_IronBear_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
