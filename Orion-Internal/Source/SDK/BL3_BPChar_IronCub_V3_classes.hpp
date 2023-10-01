#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_IronCub_V3_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_IronCub_V3.BPChar_IronCub_V3_C
// 0x01A0 (0x2700 - 0x2560)
class ABPChar_IronCub_V3_C : public AOakCharacter_IronCub
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2560(0x0008) (Transient, DuplicateTransient)
	class UBP_OakAttributeComponent_C*                 BP_OakAttributeComponent;                                 // 0x2568(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakMinimapIconComponent*                    OakMinimapIcon;                                           // 0x2570(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseAudioComponent*                        WwiseAudio;                                               // 0x2578(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFoleyMainComponent*                         FoleyMain;                                                // 0x2580(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStanceComponent*                            Stance;                                                   // 0x2588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakInventoryListComponent*                  OakInventoryList;                                         // 0x2590(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAIBalanceStateComponent*                    AIBalanceState;                                           // 0x2598(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakAIWeaponUserComponent*                   OakAIWeaponUser_TinyHand_L;                               // 0x25A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBodyWeaponHoldManagerComponent*             BodyWeaponHoldManager;                                    // 0x25A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakAIWeaponUserComponent*                   OakAIWeaponUser_TinyHand_R;                               // 0x25B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakAIWeaponUserComponent*                   OakAIWeaponUser_L;                                        // 0x25B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakAIWeaponUserComponent*                   OakAIWeaponUser_R;                                        // 0x25C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        DestructibleCollision;                                    // 0x25C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    BubbleShield_OffFX;                                       // 0x25D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    BubbleShield_OnFX;                                        // 0x25D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    BubbleShield_Nova3P;                                      // 0x25E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakPlayerAbilityManagerComponent*           PlayerAbilityManager;                                     // 0x25E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AOakCharacter_Player*                        OakCharacterOwner;                                        // 0x25F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UItemPoolData*                               Mod3_ItemPool;                                            // 0x25F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UWeaponSlotData*>                     Mod3_WeaponSlots;                                         // 0x2600(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UBPEventHub_Gunner_C*                        GunnerEventHub;                                           // 0x2610(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAttributeEffectData                        Att_BubbleShieldIdleRegenRate;                            // 0x2618(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FWwisePlaybackInstance                      BubbleShieldAudioLoop;                                    // 0x2660(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FStatusEffectInstanceReference              BubbleShield_DamageTaken_Effect;                          // 0x2678(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               UseModdedBubbleShieldFX;                                  // 0x2690(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayExplosionOnDestroy;                                  // 0x2691(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x2692(0x0002) MISSED OFFSET
	float                                              AutoBearDuration;                                         // 0x2694(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAutoBearStarted;                                         // 0x2698(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x2699(0x0003) MISSED OFFSET
	struct FGbxAttributeFloat                          Att_ExplosiveDamageScale;                                 // 0x269C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bIronBearKilled;                                          // 0x26A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x26A9(0x0007) MISSED OFFSET
	struct FTimerHandle                                Mod1Timer;                                                // 0x26B0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableValueHandle                       StokeTheEmbersScale;                                      // 0x26B8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableValueHandle                       ExplosiveFuryChanceScale;                                 // 0x26D0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableValueHandle                       ExplosiveFuryDamageScale;                                 // 0x26E8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_IronCub_V3.BPChar_IronCub_V3_C");
		return ptr;
	}


	void Init_SpecialistBear();
	void Init_DakkaBearCore();
	void GetSurpriseForYouTarget(class AActor** AsActor);
	void ExitSurpriseForYouCore();
	void OnRep_bAutoBearStarted();
	void CalculateAutoBearDuration();
	void SetNewAutoBearRotationRates();
	void OnRep_UseModdedBubbleShieldFX();
	void PrepareIronBearForEntry();
	bool HasBubbleShield();
	void Init_BubbleShieldCore();
	void ToggleBubbleShieldCollision(bool On);
	void StopBubbleShieldAudioLoop();
	void StartBubbleShieldAudioLoop();
	void LockResources(bool Locked);
	void TestAugment(class UOakActionAbilityAugmentData* Augment, bool* res);
	void Mod4_ReleaseNuke();
	void Mod2_OnCausedElementalEffect(class AActor* Causer, struct FStatusEffectSpec* Spec);
	void Mod1_Cleanup(class UOakActionAbility* OakActionAbility);
	void Mod1_AddStack();
	class UAIWeaponUserComponent* GetWeaponUserForWeaponSlot(class UWeaponSlotData** SlotData);
	void TestHardpoint(class UOakActionAbilityAugmentData* Hard_Point, bool* res);
	void SetBlackboard_Aggro(bool Toggle);
	void SetupHardpointBlackboard(class UOakActionAbilityAugmentSlotData* Hard_Point_Slot, class UClass** res);
	void UserConstructionScript();
	void OnAnimEnd_97D044764693DA850AC80F83C4B2EAE6();
	void OnEnd_97D044764693DA850AC80F83C4B2EAE6(EGbxActionEndState EndState, class AActor* Actor);
	void IronBearDurationDepleted(const struct FGameResourcePoolReference& ResourcePool);
	void SetupAutoBearDestroyCleanup(float RepDelay, class AActor* Actor);
	void EndAutoBear();
	void DestroyIronCub();
	void IronCub_OnActionSkillCoolingDown(class UOakActionAbility* ActionAbility);
	void BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_IronCub_V2(class AActor* DamageReceiver, class AActor* DamageCauser);
	void ReceiveBeginPlay();
	void OnAggro_PlayerPets();
	void OnDeAggro_PlayerPets(float AggroDuration);
	void OnExitStarted();
	void IronBear_DoMeleeAttack();
	void ActivateNukeScreenIcons(EIronBearHardPointOrientation HardpointOrientation);
	void SetBubbleShieldFXModOverrideEnabled(bool Enabled);
	void OnBubbleShieldEnabledStateChanged();
	void OnActionSkillActivated_IronBear(class UOakActionAbility* ActionAbility);
	void BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_2_CauseDeathDelegate__DelegateSignature_BPChar_IronCub_V3(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void Player_OnLevelUp(int OldExperienceLevel, int NewExperienceLevel);
	void ExecuteUbergraph_BPChar_IronCub_V3(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
