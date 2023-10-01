#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Interactive_Checkpoint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Interactive_Checkpoint.Interactive_Checkpoint_C
// 0x0091 (0x03C1 - 0x0330)
class AInteractive_Checkpoint_C : public ACheckpoint
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                            TutorialProximityTrigger;                                 // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             UINode;                                                   // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                            ProximityTrigger;                                         // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UZoneLinkComponent*                          ZoneLink;                                                 // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             RootScene;                                                // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStateMachineComponent*                      StateMachine;                                             // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPersistenceComponent*                       Persistence;                                              // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    CheckpointUpgraded;                                       // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                              Countdown;                                                // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0384(0x0004) MISSED OFFSET
	class ACharacter_Master_Player_C*                  PendingOverlapPlayer;                                     // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DoCheckpointTutorial;                                     // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0391(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    CustomDepth;                                              // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               IsLocalPlayerGrabbing;                                    // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ActivateOnProximity;                                      // 0x03A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DisableTutorial;                                          // 0x03AA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData02[0x5];                                       // 0x03AB(0x0005) MISSED OFFSET
	TArray<class AActor*>                              GrabbingPlayers;                                          // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               PromptActive;                                             // 0x03C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interactive_Checkpoint.Interactive_Checkpoint_C");
		return ptr;
	}


	void ShowPrompt();
	void IsActorInteracting(class AActor** Actor, bool* Out);
	void IsAPlayerAtADifferentCheckpoint(bool* Out);
	void IsLocalPlayerAtAnyCheckpoint(bool* Out);
	void IsAnyoneInteracting(bool* SomeoneIsInteracting);
	void RemoveGrabbingPlayer(class AActor** Actor);
	void AddGrabbingPlayer(class AActor** Actor);
	void ClearAllCheckpointNotifications(class ACharacter_Master_Player_C** Player);
	void IsPlayerUsingCheckpoint(bool* Out);
	void IsPlayerNotInCheckpointMenu(bool* Out);
	void RemoveCheckpointNotification(class ACharacter_Master_Player_C** Player, struct FName* NameID);
	void AddCheckpointNotification(class ACharacter_Master_Player_C** Player, struct FName* NameID, float* DurationOverride);
	void IsCheckpointNotificationActive(class ACharacter_Master_Player_C** Player, struct FName* NameID, bool* Out);
	void Get_Local_Player(class ACharacter_Master_Player_C** AsCharacter_Master_Player);
	void IsPlayerInCheckpointMenu(bool* Out);
	bool CanCheckpointActivate();
	void AddTutorialPrompts(class ARemnantCharacter** Character);
	void RemoveTutorialPrompts(class ARemnantCharacter** Character);
	void ReplenishHealthOnly(bool* Result);
	void SetAsCurrentWaypoint();
	void TryUpdateLevelScaling();
	void IsActive(bool* Out);
	void CanUpgrade(class ACharacter_Master_Player_C** Character, bool* CanUpgrade, struct FText* UpgradeDetails, class UTexture** Icon);
	void OnUpgrade(class ACharacter_Master_Player_C** Character);
	void TransitionFromMenu(class ACharacter_Master_Player_C** Character);
	void TransitionToMenu(class ACharacter_Master_Player_C** Character);
	void EndUseCheckpoint(class ACharacter_Master_Player_C** Character);
	void BeginUseCheckpoint(class ACharacter_Master_Player_C** Character, bool* WasSummoned);
	void BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult);
	void BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex);
	void BndEvt__TutorialProximityTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult);
	void BndEvt__TutorialProximityTrigger_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent** OverlappedComponent, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex);
	void OnBeginActivation();
	void OnActivate();
	void OnFinishActivation();
	void DoActivation();
	void OnNewPawn(class APawn** NewPawn, class APawn** PreviousPawn);
	void DoRedShardActivation();
	void ReceiveTick(float* DeltaSeconds);
	void OnBeginGrab(class ARemnantCharacter** Player);
	void OnEndGrab(class ARemnantCharacter** Player);
	void BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_InteractiveDelegate__DelegateSignature(struct FName* StateName, class AActor** Other);
	void OnShowPrompt();
	void ExecuteUbergraph_Interactive_Checkpoint(int* EntryPoint);
	void CustomDepth__DelegateSignature();
	void CheckpointUpgraded__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
