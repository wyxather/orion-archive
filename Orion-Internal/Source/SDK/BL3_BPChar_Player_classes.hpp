#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Player_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_Player.BPChar_Player_C
// 0x0218 (0x35E8 - 0x33D0)
class ABPChar_Player_C : public AOakCharacter_Player
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x33D0(0x0008) (Transient, DuplicateTransient)
	class UTerritoryComponent*                         Territory;                                                // 0x33D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UHavokNavObstacleComponent*                  HavokNavObstacle;                                         // 0x33E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USocialInteractionComponent*                 SocialInteraction;                                        // 0x33E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakInventoryListComponent*                  InventoryList;                                            // 0x33F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakInventoryListComponent*                  BankInventoryList;                                        // 0x33F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakMinimapIconComponent*                    OakMinimapIcon;                                           // 0x3400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakHitRegionComponent*                      HitRegion;                                                // 0x3408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakCharacterSoundLogicComponent*            OakCharacterSoundLogic;                                   // 0x3410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_OakAttributeComponent_C*                 BP_OakAttributeComponent;                                 // 0x3418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPFightForYourLifeComponent_C*              BPFightForYourLifeComponent;                              // 0x3420(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPlayerMeleeStateComponent*                  PlayerMeleeState;                                         // 0x3428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakPlayerAbilityManagerComponent*           OakPlayerAbilityManager;                                  // 0x3430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBodyWeaponHoldManagerComponent*             BodyWeaponHoldManager;                                    // 0x3438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakFirstPersonComponent*                    FirstPerson;                                              // 0x3440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFoleyMainComponent*                         FoleyMain;                                                // 0x3448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGameplayTasksComponent*                     GameplayTasks;                                            // 0x3450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPlayerBalanceStateComponent*                PlayerBalanceState;                                       // 0x3458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IK_Override;                                              // 0x3460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x3461(0x000F) MISSED OFFSET
	struct FTransform                                  R_Hand_IK_World;                                          // 0x3470(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  L_Hand_IK_World;                                          // 0x34A0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       Text;                                                     // 0x34D0(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                                TextColor;                                                // 0x34E8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       TextColorText;                                            // 0x34F8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              TextSize;                                                 // 0x3510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TextDuration;                                             // 0x3514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TraceEnd;                                                 // 0x3518(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FGbxAttributeFloat                          Att_HealthPickRegenerationScalar;                         // 0x3524(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGbxAttributeFloat                          Att_ButtSlamRadius;                                       // 0x3530(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGbxAttributeFloat                          Att_ButtSlamImpact_Multiplier;                            // 0x353C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGbxAttributeFloat                          Att_SlideSpeedMultiplier;                                 // 0x3548(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	struct FGbxAttributeFloat                          Att_CashMultiplier;                                       // 0x3554(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGbxAttributeFloat                          Att_AmmoMultiplier;                                       // 0x3560(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Multikill_Count;                                          // 0x356C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<unsigned char>                              Manufacturers;                                            // 0x3570(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FForceSelection                             ForceImpact_Heavy;                                        // 0x3580(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    GroundSlam;                                               // 0x35A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UClass*                                      ArtifactGroundSlamDamageType;                             // 0x35B0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ArtifactSlideDamageType;                                  // 0x35B8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGbxAttributeFloat                          Att_ClassMod_Gunner_ClassModL02Equipped;                  // 0x35C0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsDueling;                                                // 0x35CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x35CD(0x0003) MISSED OFFSET
	struct FGbxAttributeFloat                          WalkSpeed_ZeroG;                                          // 0x35D0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGbxAttributeFloat                          WalkSpeed_Normal;                                         // 0x35DC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_Player.BPChar_Player_C");
		return ptr;
	}


	void GetTransfusionSpawnEndLocation(class AActor* SourceActor, struct FVector* res);
	void GetLevelUpFXAttachComponent(class USceneComponent** res);
	void PlayLevelUpFX();
	void GroundSlamEnd(float Distance);
	void BackupFriendlyTargeting();
	void GetHeadMesh(class USkeletalMesh** HeadMesh);
	void ClearTargetingTimers();
	bool PreInventoryItemPickupCheck(class AActor** PickupActor, int* Quantity, bool* UsedByInstigator, class AInventoryItemPickup** WorldPickupActor);
	void UserConstructionScript();
	void Player_HealthDepleted(class AOakCharacter* Character);
	void Enemy_OnPhaseLockStart();
	void Enemy_OnPhaseLockStop();
	void Enemy_OnThoughtLockStart();
	void Enemy_OnThoughtLockStop();
	void SetMissionDebugText(const struct FText& Text, float TextSize, float Duration, const struct FLinearColor& TextColor, bool FacePlayer);
	void OnInventoryEquipped(class AActor* InventoryActor, class UInventorySlotData* SlotData);
	void OnInventoryUnequipped(class AActor* InventoryActor, class UInventorySlotData* SlotData);
	void OnInventoryPickedUp(class AActor* PickedUpActor, int Quantity);
	void DoMelee();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void OnJumped();
	void OnLanded(struct FHitResult* Hit);
	void BndEvt__DamageComponent_K2Node_ComponentBoundEvent_11_DamageCompHealthDepletedDelegate__DelegateSignature_BPChar_Player(class UDamageComponent* DamageReceiver, class UDamageCauserComponent* DamageCauser);
	void GroundSlam_End(float Distance);
	void BndEvt__PlayerBalanceState_K2Node_ComponentBoundEvent_0_SimplePlayerBalanceEvent__DelegateSignature_BPChar_Player();
	void BndEvt__DamageCauserComponent_K2Node_ComponentBoundEvent_1_CauseDeathDelegate__DelegateSignature_BPChar_Player(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void Multikill_Reset();
	void Player_LevelUp(int Old_XP_Level, int New_XP_Level);
	void BndEvt__PlayerBalanceState_K2Node_ComponentBoundEvent_0_PlayerBalanceEvent__DelegateSignature_BPChar_Player(int OldExperienceLevel, int NewExperienceLevel);
	void Player_SpawnTransfusionProjectile(class UClass* DataBlueprint__Override_, class UClass* DamageType__Override_, class AActor* SourceActor, class AActor* TargetActor, float Damage, class AActor* Causer__Override_);
	void StartZeroG();
	void EndZeroG();
	void ServerStartZeroG();
	void ExecuteUbergraph_BPChar_Player(int EntryPoint);
	void GroundSlam__DelegateSignature(float Distance, float Damage);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
