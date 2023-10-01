#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Pet_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPChar_Pet.BPChar_Pet_C.GetPetJabberIngenuityBarrel
struct ABPChar_Pet_C_GetPetJabberIngenuityBarrel_Params
{
	class AActor*                                      Barrel;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Pet.BPChar_Pet_C.GetPetEvolutionType
struct ABPChar_Pet_C_GetPetEvolutionType_Params
{
	EOakActionAbilityPetEvolutionType                  EvolutionType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Pet.BPChar_Pet_C.GetPetType
struct ABPChar_Pet_C_GetPetType_Params
{
	EOakActionAbilityPetType                           PetType;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Pet.BPChar_Pet_C.MatchesPetProfile
struct ABPChar_Pet_C_MatchesPetProfile_Params
{
	class UOakPlayerCharacterAugmentData_Pet*          InAugment;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Pet.BPChar_Pet_C.GetBeastmasterOwner
struct ABPChar_Pet_C_GetBeastmasterOwner_Params
{
	class AOakCharacter_Player*                        Beastmaster;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Pet.BPChar_Pet_C.UpdateHealingFX
struct ABPChar_Pet_C_UpdateHealingFX_Params
{
};

// Function BPChar_Pet.BPChar_Pet_C.RefreshIconDuration
struct ABPChar_Pet_C_RefreshIconDuration_Params
{
};

// Function BPChar_Pet.BPChar_Pet_C.TogglePetTaunt_CLASSMODONLY
struct ABPChar_Pet_C_TogglePetTaunt_CLASSMODONLY_Params
{
	bool                                               IsEnraged;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Pet.BPChar_Pet_C.IncrementKillStat
struct ABPChar_Pet_C_IncrementKillStat_Params
{
};

// Function BPChar_Pet.BPChar_Pet_C.DoShrinkAudio
struct ABPChar_Pet_C_DoShrinkAudio_Params
{
};

// Function BPChar_Pet.BPChar_Pet_C.OnEnrageEnd
struct ABPChar_Pet_C_OnEnrageEnd_Params
{
};

// Function BPChar_Pet.BPChar_Pet_C.OnEnrageBegin
struct ABPChar_Pet_C_OnEnrageBegin_Params
{
};

// Function BPChar_Pet.BPChar_Pet_C.OnRep_bIsEnraged
struct ABPChar_Pet_C_OnRep_bIsEnraged_Params
{
};

// Function BPChar_Pet.BPChar_Pet_C.ToggleAttackCommand_BB
struct ABPChar_Pet_C_ToggleAttackCommand_BB_Params
{
	bool                                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Pet.BPChar_Pet_C.RemoveAttackCommandIcon
struct ABPChar_Pet_C_RemoveAttackCommandIcon_Params
{
};

// Function BPChar_Pet.BPChar_Pet_C.AddAttackCommandIcon
struct ABPChar_Pet_C_AddAttackCommandIcon_Params
{
};

// Function BPChar_Pet.BPChar_Pet_C.ToggleAttackCommand_ScriptedTarget
struct ABPChar_Pet_C_ToggleAttackCommand_ScriptedTarget_Params
{
	bool                                               Toggle;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Pet.BPChar_Pet_C.OnRep_ScriptedPetTarget
struct ABPChar_Pet_C_OnRep_ScriptedPetTarget_Params
{
};

// Function BPChar_Pet.BPChar_Pet_C.DoPetAttackCommand
struct ABPChar_Pet_C_DoPetAttackCommand_Params
{
	class UObject*                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Pet.BPChar_Pet_C.TryRemovePlayerStatusEffect
struct ABPChar_Pet_C_TryRemovePlayerStatusEffect_Params
{
};

// Function BPChar_Pet.BPChar_Pet_C.TryAddPlayerStatusEffect
struct ABPChar_Pet_C_TryAddPlayerStatusEffect_Params
{
};

// Function BPChar_Pet.BPChar_Pet_C.SetBlackboard_Aggro
struct ABPChar_Pet_C_SetBlackboard_Aggro_Params
{
	bool                                               Toggle;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Pet.BPChar_Pet_C.NotifyPetSpawn
struct ABPChar_Pet_C_NotifyPetSpawn_Params
{
};

// Function BPChar_Pet.BPChar_Pet_C.SecondWindInjuredAllies
struct ABPChar_Pet_C_SecondWindInjuredAllies_Params
{
	TArray<class AOakCharacter_Player*>                Allies;                                                   // (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BPChar_Pet.BPChar_Pet_C.SetUltimateBlackboard
struct ABPChar_Pet_C_SetUltimateBlackboard_Params
{
	bool                                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Pet.BPChar_Pet_C.ComparePetKillerToAllies
struct ABPChar_Pet_C_ComparePetKillerToAllies_Params
{
	class AActor*                                      Killer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AssignPetToKiller;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Pet.BPChar_Pet_C.PlaySpawnActions
struct ABPChar_Pet_C_PlaySpawnActions_Params
{
};

// Function BPChar_Pet.BPChar_Pet_C.IsOwnerInFFYL
struct ABPChar_Pet_C_IsOwnerInFFYL_Params
{
	bool                                               InFFYL;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Pet.BPChar_Pet_C.UserConstructionScript
struct ABPChar_Pet_C_UserConstructionScript_Params
{
};

// Function BPChar_Pet.BPChar_Pet_C.Timeline_0__FinishedFunc
struct ABPChar_Pet_C_Timeline_0__FinishedFunc_Params
{
};

// Function BPChar_Pet.BPChar_Pet_C.Timeline_0__UpdateFunc
struct ABPChar_Pet_C_Timeline_0__UpdateFunc_Params
{
};

// Function BPChar_Pet.BPChar_Pet_C.OnAnimEnd_448EE01D4E3F143531F722AF23144929
struct ABPChar_Pet_C_OnAnimEnd_448EE01D4E3F143531F722AF23144929_Params
{
};

// Function BPChar_Pet.BPChar_Pet_C.OnEnd_448EE01D4E3F143531F722AF23144929
struct ABPChar_Pet_C_OnEnd_448EE01D4E3F143531F722AF23144929_Params
{
	EGbxActionEndState                                 EndState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Pet.BPChar_Pet_C.PetJabbermon_Poop_Hide
struct ABPChar_Pet_C_PetJabbermon_Poop_Hide_Params
{
};

// Function BPChar_Pet.BPChar_Pet_C.DoAttackCommandEQS
struct ABPChar_Pet_C_DoAttackCommandEQS_Params
{
};

// Function BPChar_Pet.BPChar_Pet_C.DoAttackCommandFail
struct ABPChar_Pet_C_DoAttackCommandFail_Params
{
};

// Function BPChar_Pet.BPChar_Pet_C.DoAttackCommand
struct ABPChar_Pet_C_DoAttackCommand_Params
{
	class UObject*                                     EnemyObject;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Pet.BPChar_Pet_C.OnPetTargetDied
struct ABPChar_Pet_C_OnPetTargetDied_Params
{
	class AActor*                                      DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Pet.BPChar_Pet_C.OnBeastmasterCausedAnyDamage
struct ABPChar_Pet_C_OnBeastmasterCausedAnyDamage_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPChar_Pet.BPChar_Pet_C.PetJabbermon_Poop_Show
struct ABPChar_Pet_C_PetJabbermon_Poop_Show_Params
{
};

// Function BPChar_Pet.BPChar_Pet_C.BndEvt__UsableComponentPet_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Pet
struct ABPChar_Pet_C_BndEvt__UsableComponentPet_K2Node_ComponentBoundEvent_0_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Pet_Params
{
	class AController*                                 UserController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         UsedComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPChar_Pet.BPChar_Pet_C.BeginAttackCommand
struct ABPChar_Pet_C_BeginAttackCommand_Params
{
};

// Function BPChar_Pet.BPChar_Pet_C.BndEvt__DamageCauserComponent_K2Node_ComponentBoundEvent_0_CauseDeathDelegate__DelegateSignature_BPChar_Pet
struct ABPChar_Pet_C_BndEvt__DamageCauserComponent_K2Node_ComponentBoundEvent_0_CauseDeathDelegate__DelegateSignature_BPChar_Pet_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BPChar_Pet.BPChar_Pet_C.BndEvt__DamageCauserComponent_K2Node_ComponentBoundEvent_0_CauseAnyPipelineDamageDelegate__DelegateSignature_BPChar_Pet
struct ABPChar_Pet_C_BndEvt__DamageCauserComponent_K2Node_ComponentBoundEvent_0_CauseAnyPipelineDamageDelegate__DelegateSignature_BPChar_Pet_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPChar_Pet.BPChar_Pet_C.BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_0_FightForYourLifeEvent__DelegateSignature_BPChar_Pet
struct ABPChar_Pet_C_BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_0_FightForYourLifeEvent__DelegateSignature_BPChar_Pet_Params
{
};

// Function BPChar_Pet.BPChar_Pet_C.PetJabbermon_ChangeMeleeVis
struct ABPChar_Pet_C_PetJabbermon_ChangeMeleeVis_Params
{
	bool                                               NewWeapVisibility;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Pet.BPChar_Pet_C.OnPetReleased
struct ABPChar_Pet_C_OnPetReleased_Params
{
	bool                                               bForced;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EPetReleaseReason                                  Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Pet.BPChar_Pet_C.PetSpawnTrapProjectile
struct ABPChar_Pet_C_PetSpawnTrapProjectile_Params
{
};

// Function BPChar_Pet.BPChar_Pet_C.OnAggro_PlayerPets
struct ABPChar_Pet_C_OnAggro_PlayerPets_Params
{
};

// Function BPChar_Pet.BPChar_Pet_C.OnDeAggro_PlayerPets
struct ABPChar_Pet_C_OnDeAggro_PlayerPets_Params
{
	float                                              AggroDuration;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Pet.BPChar_Pet_C.BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_2_FightForYourLifeEvent__DelegateSignature_BPChar_Pet
struct ABPChar_Pet_C_BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_2_FightForYourLifeEvent__DelegateSignature_BPChar_Pet_Params
{
};

// Function BPChar_Pet.BPChar_Pet_C.BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_4_FightForYourLifeEvent__DelegateSignature_BPChar_Pet
struct ABPChar_Pet_C_BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_4_FightForYourLifeEvent__DelegateSignature_BPChar_Pet_Params
{
};

// Function BPChar_Pet.BPChar_Pet_C.BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_5_CauseDeathDelegate__DelegateSignature_BPChar_Pet
struct ABPChar_Pet_C_BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_5_CauseDeathDelegate__DelegateSignature_BPChar_Pet_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BPChar_Pet.BPChar_Pet_C.ReceiveDestroyed
struct ABPChar_Pet_C_ReceiveDestroyed_Params
{
};

// Function BPChar_Pet.BPChar_Pet_C.SetEnraged
struct ABPChar_Pet_C_SetEnraged_Params
{
	bool                                               bIsEnraged;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Pet.BPChar_Pet_C.ReversePetEnrageScale
struct ABPChar_Pet_C_ReversePetEnrageScale_Params
{
};

// Function BPChar_Pet.BPChar_Pet_C.CancelPetEnrageScale
struct ABPChar_Pet_C_CancelPetEnrageScale_Params
{
};

// Function BPChar_Pet.BPChar_Pet_C.Pet_DownStateStart
struct ABPChar_Pet_C_Pet_DownStateStart_Params
{
};

// Function BPChar_Pet.BPChar_Pet_C.BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_1_FightForYourLifeEvent__DelegateSignature_BPChar_Pet
struct ABPChar_Pet_C_BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_1_FightForYourLifeEvent__DelegateSignature_BPChar_Pet_Params
{
};

// Function BPChar_Pet.BPChar_Pet_C.OnHealingFXChanged
struct ABPChar_Pet_C_OnHealingFXChanged_Params
{
	float                                              OldValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Pet.BPChar_Pet_C.InitializePetSpawned
struct ABPChar_Pet_C_InitializePetSpawned_Params
{
	class AOakCharacter_Player*                        Beastmaster;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EOakActionAbilityPetEvolutionType                  EvolutionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Pet.BPChar_Pet_C.ReceiveBeginPlay
struct ABPChar_Pet_C_ReceiveBeginPlay_Params
{
};

// Function BPChar_Pet.BPChar_Pet_C.PetAttackIconFinished
struct ABPChar_Pet_C_PetAttackIconFinished_Params
{
	struct FGameResourcePoolReference                  ResourcePool;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPChar_Pet.BPChar_Pet_C.PetJabbermon_BarrelDrop
struct ABPChar_Pet_C_PetJabbermon_BarrelDrop_Params
{
};

// Function BPChar_Pet.BPChar_Pet_C.PetSucceededRevive
struct ABPChar_Pet_C_PetSucceededRevive_Params
{
};

// Function BPChar_Pet.BPChar_Pet_C.BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_7_FightForYourLifeWithBoolEvent__DelegateSignature_BPChar_Pet
struct ABPChar_Pet_C_BndEvt__BPNPCFightForYourLifeComponent_K2Node_ComponentBoundEvent_7_FightForYourLifeWithBoolEvent__DelegateSignature_BPChar_Pet_Params
{
	bool                                               IsSuccessful;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Pet.BPChar_Pet_C.PetJabbermon_BarrelThrow
struct ABPChar_Pet_C_PetJabbermon_BarrelThrow_Params
{
};

// Function BPChar_Pet.BPChar_Pet_C.OnInventoryEquipped
struct ABPChar_Pet_C_OnInventoryEquipped_Params
{
	class AActor*                                      InventoryActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UInventorySlotData*                          SlotData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Pet.BPChar_Pet_C.OnInventoryUnequipped
struct ABPChar_Pet_C_OnInventoryUnequipped_Params
{
	class AActor*                                      InventoryActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UInventorySlotData*                          SlotData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Pet.BPChar_Pet_C.OnInventoryPickedUp
struct ABPChar_Pet_C_OnInventoryPickedUp_Params
{
	class AActor*                                      PickedUpActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Pet.BPChar_Pet_C.PetJabbermon_BarrelSet
struct ABPChar_Pet_C_PetJabbermon_BarrelSet_Params
{
	class AActor*                                      NewBarrel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Pet.BPChar_Pet_C.PetJabbermon_BarrelAlign
struct ABPChar_Pet_C_PetJabbermon_BarrelAlign_Params
{
	class AActor*                                      NewBarrel;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Pet.BPChar_Pet_C.PetJabbermon_FireRocket
struct ABPChar_Pet_C_PetJabbermon_FireRocket_Params
{
};

// Function BPChar_Pet.BPChar_Pet_C.Player_OnLevelUp
struct ABPChar_Pet_C_Player_OnLevelUp_Params
{
	int                                                OldExperienceLevel;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewExperienceLevel;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Pet.BPChar_Pet_C.OnDeath_FFYLScriptedTarget
struct ABPChar_Pet_C_OnDeath_FFYLScriptedTarget_Params
{
	class AActor*                                      DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Pet.BPChar_Pet_C.PetJabbermon_ChangeLauncherVis
struct ABPChar_Pet_C_PetJabbermon_ChangeLauncherVis_Params
{
	bool                                               NewVisibility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Pet.BPChar_Pet_C.Beastmaster_FFYLStop
struct ABPChar_Pet_C_Beastmaster_FFYLStop_Params
{
};

// Function BPChar_Pet.BPChar_Pet_C.Beastmaster_FFYLStart
struct ABPChar_Pet_C_Beastmaster_FFYLStart_Params
{
};

// Function BPChar_Pet.BPChar_Pet_C.PetJabbermon_ChangeGunVis
struct ABPChar_Pet_C_PetJabbermon_ChangeGunVis_Params
{
	bool                                               NewVisibility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_Pet.BPChar_Pet_C.ExecuteUbergraph_BPChar_Pet
struct ABPChar_Pet_C_ExecuteUbergraph_BPChar_Pet_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
