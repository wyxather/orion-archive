#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_IronCub_V3_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Init_SpecialistBear
struct ABPChar_IronCub_V3_C_Init_SpecialistBear_Params
{
};

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Init_DakkaBearCore
struct ABPChar_IronCub_V3_C_Init_DakkaBearCore_Params
{
};

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.GetSurpriseForYouTarget
struct ABPChar_IronCub_V3_C_GetSurpriseForYouTarget_Params
{
	class AActor*                                      AsActor;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.ExitSurpriseForYouCore
struct ABPChar_IronCub_V3_C_ExitSurpriseForYouCore_Params
{
};

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnRep_bAutoBearStarted
struct ABPChar_IronCub_V3_C_OnRep_bAutoBearStarted_Params
{
};

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.CalculateAutoBearDuration
struct ABPChar_IronCub_V3_C_CalculateAutoBearDuration_Params
{
};

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.SetNewAutoBearRotationRates
struct ABPChar_IronCub_V3_C_SetNewAutoBearRotationRates_Params
{
};

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnRep_UseModdedBubbleShieldFX
struct ABPChar_IronCub_V3_C_OnRep_UseModdedBubbleShieldFX_Params
{
};

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.PrepareIronBearForEntry
struct ABPChar_IronCub_V3_C_PrepareIronBearForEntry_Params
{
};

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.HasBubbleShield
struct ABPChar_IronCub_V3_C_HasBubbleShield_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Init_BubbleShieldCore
struct ABPChar_IronCub_V3_C_Init_BubbleShieldCore_Params
{
};

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.ToggleBubbleShieldCollision
struct ABPChar_IronCub_V3_C_ToggleBubbleShieldCollision_Params
{
	bool                                               On;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.StopBubbleShieldAudioLoop
struct ABPChar_IronCub_V3_C_StopBubbleShieldAudioLoop_Params
{
};

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.StartBubbleShieldAudioLoop
struct ABPChar_IronCub_V3_C_StartBubbleShieldAudioLoop_Params
{
};

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.LockResources
struct ABPChar_IronCub_V3_C_LockResources_Params
{
	bool                                               Locked;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.TestAugment
struct ABPChar_IronCub_V3_C_TestAugment_Params
{
	class UOakActionAbilityAugmentData*                Augment;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Mod4_ReleaseNuke
struct ABPChar_IronCub_V3_C_Mod4_ReleaseNuke_Params
{
};

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Mod2_OnCausedElementalEffect
struct ABPChar_IronCub_V3_C_Mod2_OnCausedElementalEffect_Params
{
	class AActor*                                      Causer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FStatusEffectSpec                           Spec;                                                     // (BlueprintVisible, Parm, OutParm, ReferenceParm)
};

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Mod1_Cleanup
struct ABPChar_IronCub_V3_C_Mod1_Cleanup_Params
{
	class UOakActionAbility*                           OakActionAbility;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Mod1_AddStack
struct ABPChar_IronCub_V3_C_Mod1_AddStack_Params
{
};

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.GetWeaponUserForWeaponSlot
struct ABPChar_IronCub_V3_C_GetWeaponUserForWeaponSlot_Params
{
	class UWeaponSlotData**                            SlotData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAIWeaponUserComponent*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.TestHardpoint
struct ABPChar_IronCub_V3_C_TestHardpoint_Params
{
	class UOakActionAbilityAugmentData*                Hard_Point;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.SetBlackboard_Aggro
struct ABPChar_IronCub_V3_C_SetBlackboard_Aggro_Params
{
	bool                                               Toggle;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.SetupHardpointBlackboard
struct ABPChar_IronCub_V3_C_SetupHardpointBlackboard_Params
{
	class UOakActionAbilityAugmentSlotData*            Hard_Point_Slot;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.UserConstructionScript
struct ABPChar_IronCub_V3_C_UserConstructionScript_Params
{
};

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnAnimEnd_97D044764693DA850AC80F83C4B2EAE6
struct ABPChar_IronCub_V3_C_OnAnimEnd_97D044764693DA850AC80F83C4B2EAE6_Params
{
};

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnEnd_97D044764693DA850AC80F83C4B2EAE6
struct ABPChar_IronCub_V3_C_OnEnd_97D044764693DA850AC80F83C4B2EAE6_Params
{
	EGbxActionEndState                                 EndState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.IronBearDurationDepleted
struct ABPChar_IronCub_V3_C_IronBearDurationDepleted_Params
{
	struct FGameResourcePoolReference                  ResourcePool;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.SetupAutoBearDestroyCleanup
struct ABPChar_IronCub_V3_C_SetupAutoBearDestroyCleanup_Params
{
	float                                              RepDelay;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.EndAutoBear
struct ABPChar_IronCub_V3_C_EndAutoBear_Params
{
};

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.DestroyIronCub
struct ABPChar_IronCub_V3_C_DestroyIronCub_Params
{
};

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.IronCub_OnActionSkillCoolingDown
struct ABPChar_IronCub_V3_C_IronCub_OnActionSkillCoolingDown_Params
{
	class UOakActionAbility*                           ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_IronCub_V2
struct ABPChar_IronCub_V3_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_IronCub_V2_Params
{
	class AActor*                                      DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.ReceiveBeginPlay
struct ABPChar_IronCub_V3_C_ReceiveBeginPlay_Params
{
};

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnAggro_PlayerPets
struct ABPChar_IronCub_V3_C_OnAggro_PlayerPets_Params
{
};

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnDeAggro_PlayerPets
struct ABPChar_IronCub_V3_C_OnDeAggro_PlayerPets_Params
{
	float                                              AggroDuration;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnExitStarted
struct ABPChar_IronCub_V3_C_OnExitStarted_Params
{
};

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.IronBear_DoMeleeAttack
struct ABPChar_IronCub_V3_C_IronBear_DoMeleeAttack_Params
{
};

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.ActivateNukeScreenIcons
struct ABPChar_IronCub_V3_C_ActivateNukeScreenIcons_Params
{
	EIronBearHardPointOrientation                      HardpointOrientation;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.SetBubbleShieldFXModOverrideEnabled
struct ABPChar_IronCub_V3_C_SetBubbleShieldFXModOverrideEnabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnBubbleShieldEnabledStateChanged
struct ABPChar_IronCub_V3_C_OnBubbleShieldEnabledStateChanged_Params
{
};

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.OnActionSkillActivated_IronBear
struct ABPChar_IronCub_V3_C_OnActionSkillActivated_IronBear_Params
{
	class UOakActionAbility*                           ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_2_CauseDeathDelegate__DelegateSignature_BPChar_IronCub_V3
struct ABPChar_IronCub_V3_C_BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_2_CauseDeathDelegate__DelegateSignature_BPChar_IronCub_V3_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.Player_OnLevelUp
struct ABPChar_IronCub_V3_C_Player_OnLevelUp_Params
{
	int                                                OldExperienceLevel;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewExperienceLevel;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_IronCub_V3.BPChar_IronCub_V3_C.ExecuteUbergraph_BPChar_IronCub_V3
struct ABPChar_IronCub_V3_C_ExecuteUbergraph_BPChar_IronCub_V3_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
