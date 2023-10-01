#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_NonPlayerCharacter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C
// 0x0248 (0x2590 - 0x2348)
class ABPChar_NonPlayerCharacter_C : public ABPChar_AI_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2348(0x0008) (Transient, DuplicateTransient)
	class UNPCInteractionComponent*                    NPCInteraction;                                           // 0x2350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USocketComponent*                            Waypoint;                                                 // 0x2358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTerritoryComponent*                         Territory;                                                // 0x2360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCoverUserComponent*                         CoverUser;                                                // 0x2368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakMinimapIconComponent*                    OakMinimapIcon;                                           // 0x2370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SocketThingHeld;                                          // 0x2378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        TempMissionTextActor;                                     // 0x2380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        TempMissionTextBackground;                                // 0x2388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakMissionIconComponent*                    OakMissionIcon;                                           // 0x2390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUsableComponent*                            Usable;                                                   // 0x2398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMissionObserverComponent*                   MissionObserver;                                          // 0x23A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakMissionDirectorComponent*                OakMissionDirector;                                       // 0x23A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       Text;                                                     // 0x23B0(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                                TextColor;                                                // 0x23C8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       TextColorText;                                            // 0x23D8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              TextSize;                                                 // 0x23F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TextDuration;                                             // 0x23F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FacePlayer;                                               // 0x23F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x23F9(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnUsed;                                                   // 0x2400(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UDialogScriptData*                           GenericDialogScript;                                      // 0x2410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UDialogTimeSlotData*>                 GenericDialogTimeSlots;                                   // 0x2418(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               CanUseSmartObjects;                                       // 0x2428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Patrol;                                                   // 0x2429(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanLookAtPlayer;                                          // 0x242A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x242B(0x0005) MISSED OFFSET
	class UStaticMesh*                                 ThingToHold_1;                                            // 0x2430(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          OriginalThingMaterial;                                    // 0x2438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanEngageInCombat;                                        // 0x2440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x2441(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    NPCSawThePlayer;                                          // 0x2448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               HandHeldOut;                                              // 0x2458(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HandHeldOutToGive;                                        // 0x2459(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x245A(0x0006) MISSED OFFSET
	TArray<class ADroppedInventoryItemPickup*>         LootAttachment;                                           // 0x2460(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate)
	struct FItemPoolInfo                               ItemPoolInfo;                                             // 0x2470(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    ItemTakenByPlayer;                                        // 0x24F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               TimerLoop;                                                // 0x2508(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x2509(0x0003) MISSED OFFSET
	float                                              TextTimer;                                                // 0x250C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AController*                                 User;                                                     // 0x2510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       GiveTakeSocket;                                           // 0x2518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ThingHeldOffset;                                          // 0x2520(0x0030) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	float                                              PutAwayDelay;                                             // 0x2550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TakeOutDelay;                                             // 0x2554(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldIgnoreEnemyTargets;                                 // 0x2558(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x2559(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    GiveTakeAttractParticle;                                  // 0x2560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    SpawnedLootToGive;                                        // 0x2568(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               TerritoryEverywhere;                                      // 0x2578(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MissionBrainEnabled;                                      // 0x2579(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HandHeldOutForTakeThenGive;                               // 0x257A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x5];                                       // 0x257B(0x0005) MISSED OFFSET
	class ADroppedInventoryItemPickup*                 SpawnedLoot;                                              // 0x2580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               CanReviveOthers;                                          // 0x2588(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldNeverHideWeapon;                                    // 0x2589(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AlternativeGiveTake;                                      // 0x258A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x1];                                       // 0x258B(0x0001) MISSED OFFSET
	float                                              EngagePlayerDistanceVar;                                  // 0x258C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_NonPlayerCharacter.BPChar_NonPlayerCharacter_C");
		return ptr;
	}


	void NPCEngageRange(float UnitIn);
	void OnRep_ItemPoolInfo();
	void NPCIgnoreEnemies(bool BoolValue);
	void NPCUseSmartObjects(bool UseSmartObjects);
	void NPCCanPatrol(bool CanPatrol);
	void NPCEngagePlayerWhenIdle(bool LookAtPlayer);
	void NPCEngageInCombat(bool EngageInCombat);
	void ChangeBehaviorTree_LookAt(class AAIController* NPC_AIController, bool Enable);
	void PlayerUsedMe(const struct FUseEvent& UseEvent);
	void ClearText();
	void SetText(const struct FText& Text, float TextSize, float Duration, const struct FLinearColor& TextColor, bool FacePlayer);
	void UserConstructionScript();
	void GbxAsyncRequest_PickupSpawned_57F45FEF4D675ABCF62E0A81821A5187(class ADroppedInventoryItemPickup* Pickup);
	void NPCUnhideSword();
	void NPCHideSword();
	void NPCConstrainUsable();
	void NPCResetUsable();
	void ForceDefaultCombatNPCDownstate();
	void ForceNPCRevive();
	void HoldHandOutToTakeSomething();
	void GiveSomethingToThePlayer();
	void BeingUsed(const struct FUseEvent& UseEvent);
	void LootableTaken(class AActor* DestroyedActor);
	void HoldHandTakeAll();
	void HoldHandGiveAll();
	void TakingThingAll();
	void PlayerTakingAll();
	void LockNPCAI();
	void UnlockNPCAI();
	void TakeThingThenGiveBack();
	void ExamineAll();
	void EngageInCombat(bool EngageInCombat);
	void CanPatrol(bool CanPatrol);
	void UseSmartObjects(bool UseSmartObjects);
	void ThingToHold(class UStaticMesh* TheThingToHold, const struct FItemPoolInfo& ThePickupToHold, const struct FTransform& OffsetTransform, float PutAwayOffset, float TakeOutOffset, bool UseAltAnimation);
	void NPCHideWeapon();
	void NPCUnhideWeapon();
	void IgnoreEnemies(bool IgnoreEnemies);
	void NPCCanReviveOthers(bool CanReviveOthers);
	void BndEvt__Stance_K2Node_ComponentBoundEvent_0_StanceChangedEvent__DelegateSignature_BPChar_NonPlayerCharacter(const struct FStanceChangedEventArgs& Args);
	void EngagePlayerWhenIdle(bool LookAtPlayer);
	void SetNPCEngagePlayerRange(float Units);
	void BndEvt__Usable_K2Node_ComponentBoundEvent_24_UsableUsedOnChannelSignature__DelegateSignature_BPChar_Typhon_UNIX1509007700(class AController* UserController, class UPrimitiveComponent* UsedComponent);
	void DisableMissionBrain();
	void BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableUsedSignature__DelegateSignature_BPChar_NonPlayerCharacter(const struct FUseEvent& UseEvent);
	void InitializeGenericDialog();
	void OpenGate();
	void TextClear(float Time);
	void CloseGate();
	void TempMissionTextTck();
	void SetMissionDebugText(const struct FText& Text, float TextSize, float Duration, const struct FLinearColor& TextColor, bool FacePlayer);
	void TextUpdating();
	void SawThePlayer();
	void DespawnActivate();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPChar_NonPlayerCharacter(int EntryPoint);
	void SpawnedLootToGive__DelegateSignature(class ADroppedInventoryItemPickup* Loot);
	void ItemTakenByPlayer__DelegateSignature(class AOakCharacter_Player* Player);
	void NPCSawThePlayer__DelegateSignature();
	void OnUsed__DelegateSignature(const struct FUseEvent& UseEvent);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
