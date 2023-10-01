#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_DigiClone_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_DigiClone_Base.BPChar_DigiClone_Base_C
// 0x018F (0x2510 - 0x2381)
class ABPChar_DigiClone_Base_C : public ABPChar_Enemy_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x2381(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2388(0x0008) (Transient, DuplicateTransient)
	class UWwiseAudioComponent*                        DigicloneAudioComponent;                                  // 0x2390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakInventoryListComponent*                  InventoryList;                                            // 0x2398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAICloakComponent*                           AICloak;                                                  // 0x23A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Provoke;                                                  // 0x23A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   Head;                                                     // 0x23B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCustomizationComponent*                  GbxCustomization;                                         // 0x23B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTerritoryComponent*                         Territory;                                                // 0x23C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              BlowUpDigiCloneTimeLine_Scale_4BDCA3914B737F3B3EF31AAC2D0727AD;// 0x23C8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    BlowUpDigiCloneTimeLine__Direction_4BDCA3914B737F3B3EF31AAC2D0727AD;// 0x23CC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x23CD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          BlowUpDigiCloneTimeLine;                                  // 0x23D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ScaleDigiClone_Scale_22CA4A9B46611182B8749287980055A1;    // 0x23D8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ScaleDigiClone__Direction_22CA4A9B46611182B8749287980055A1;// 0x23DC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x23DD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ScaleDigiClone;                                           // 0x23E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bEnableDigiCloneModEffects;                               // 0x23E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x23E9(0x0007) MISSED OFFSET
	class UOakActionAbility_Digiclone*                 OwnerActionAbility;                                       // 0x23F0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              SizeIncreaseOperand;                                      // 0x23F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x23FC(0x0004) MISSED OFFSET
	class AOakCharacter_Player*                        OwnerPlayer;                                              // 0x2400(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UParticleSystemComponent*                    ProvokeFX;                                                // 0x2408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FDataTableValueHandle                       ProvokeDuration;                                          // 0x2410(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bHasBeenReleased;                                         // 0x2428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x2429(0x0007) MISSED OFFSET
	struct FDataTableValueHandle                       PanicButtonDamage;                                        // 0x2430(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableValueHandle                       Panic_Button_Radius;                                      // 0x2448(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	EOakElementalType                                  AutomagicallyDamageType;                                  // 0x2460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x2461(0x0007) MISSED OFFSET
	struct FDataTableValueHandle                       AutomagicallyBonusDamage;                                 // 0x2468(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                AutomagicallyGrade;                                       // 0x2480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x2484(0x0004) MISSED OFFSET
	struct FDataTableValueHandle                       MaxRangeBase;                                             // 0x2488(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableValueHandle                       MaxRangeSeperationAnxiety;                                // 0x24A0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                ProvokeFXTimer;                                           // 0x24B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableValueHandle                       TrapCardDamage;                                           // 0x24C0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                Provoke_Sound_Timer;                                      // 0x24D8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UWwiseAudioComponent*                        ProvokeAudioComponent;                                    // 0x24E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UPassiveSkill_Operative_WantVsNeed_C*        LivesOfOthers;                                            // 0x24E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsNotUsingMummersWeapon;                                 // 0x24F0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x24F1(0x0007) MISSED OFFSET
	class UParticleSystem*                             SpawnParticleSystem;                                      // 0x24F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MinMaxStatusEffectStackCount;                             // 0x2500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTeleporting;                                           // 0x2504(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x2505(0x0003) MISSED OFFSET
	struct FTimerHandle                                IsStillFallingTimer;                                      // 0x2508(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_DigiClone_Base.BPChar_DigiClone_Base_C");
		return ptr;
	}


	void Get_Owners_Grenade_Projectile_Class(class UClass** Grenade_Projectile_Class);
	void HandleTeleportSwapEnd();
	void HandleTeleportSwapStart();
	void TrySpawnLevelTwoWeapon(class AWeapon** res);
	void ConfigureMinMax();
	void OnRep_bIsNotUsingMummersWeapon();
	void ApplyOperativeWeaponMaterials(class AWeapon* Weapon);
	void TryConfigureTrapCard();
	void ConfigureShield();
	class AWeapon* SpawnDefaultWeapon();
	void TryConfigureAbstractGrenades();
	void RemoveProvokeFX();
	void TryConfigureProvoke(bool* Provoke_equiped);
	void TrySpawnMummersWeapon(class AWeapon** Weapon);
	void GetSizeIncreaseOperand(float* res);
	void UserConstructionScript();
	void ScaleDigiClone__FinishedFunc();
	void ScaleDigiClone__UpdateFunc();
	void BlowUpDigiCloneTimeLine__FinishedFunc();
	void BlowUpDigiCloneTimeLine__UpdateFunc();
	void ReceiveBeginPlay();
	void BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPCharParent_DigiClone(class AActor* DamageReceiver, class AActor* DamageCauser);
	void BndEvt__OakDamageCauserComponent_K2Node_ComponentBoundEvent_0_CauseDeathDelegate__DelegateSignature_BPCharParent_DigiClone(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void BeginScalingDigiClone();
	void StopScalingDigiClone();
	void BlowUpDigiClone();
	void KillDigiCloneNow();
	void ReleaseDigiclone();
	void OnDigicloneDied();
	void DoExplode();
	void AutomagicallyRegisterDamageOverride(EOakElementalType ElementalType, int Grade);
	void AutomagicallyRemoveDamageOverride();
	void Automagically_Deal_Bonus_Damage(class AActor* Actor, class UClass* DamageSource, float Damage);
	void DigiCloneThrowGrenade();
	void SpawnDigiCloneGrenadeOnDeath();
	void UpdateMaxTeleportRange();
	void OnDigicloneTeleport();
	void BndEvt__AICloak_K2Node_ComponentBoundEvent_0_AICloakEvent__DelegateSignature_BPChar_DigiClone_Base();
	void BndEvt__AICloak_K2Node_ComponentBoundEvent_1_AICloakEvent__DelegateSignature_BPChar_DigiClone_Base();
	void OnInventoryEquipped(class AActor* InventoryActor, class UInventorySlotData* SlotData);
	void OnInventoryUnequipped(class AActor* InventoryActor, class UInventorySlotData* SlotData);
	void OnInventoryPickedUp(class AActor* PickedUpActor, int Quantity);
	void BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_BPCharParent_DigiClone_UNIX1536311531(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
	void StartProvoke();
	void Setup_Lives_of_Others();
	void BindDelegates();
	void OnWeaponEquipped(class AWeapon* DetachedWeapon, class AWeapon* AttachedWeapon, class UWeaponSlotData* AttachedSlot);
	void OnClientWeaponChanged(class AWeapon* NewWeapon, class AWeapon* LastWeapon);
	void OpenTrapCardGate();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void SetIsTeleporting(bool bIsTeleporting);
	void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode);
	void CheckIfStillFalling();
	void ExecuteUbergraph_BPChar_DigiClone_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
