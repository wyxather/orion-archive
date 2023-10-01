#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_Door_Parent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IO_Door_Parent.IO_Door_Parent_C
// 0x0248 (0x0798 - 0x0550)
class AIO_Door_Parent_C : public AInteractiveObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0550(0x0008) (Transient, DuplicateTransient)
	class UUsableComponent*                            Usable;                                                   // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxNavMeshPainterComponent*                 GbxNavMeshPainter_Frame_;                                 // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               TouchCollision;                                           // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxNavMeshPainterComponent*                 GbxNavMeshPainter_Door_;                                  // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               StartOpen;                                                // 0x0580(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StartLocked;                                              // 0x0581(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StartNonInteractive;                                      // 0x0582(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0583(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    On_DoorLocked;                                            // 0x0588(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    On_DoorUnlocked;                                          // 0x0598(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    On_DoorOpened;                                            // 0x05A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    On_DoorClosed;                                            // 0x05B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class AActor*                                      LastPlayerToUseTheDoor;                                   // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    On_DoorOpening;                                           // 0x05D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    On_DoorClosing;                                           // 0x05E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    On_DoorUsed;                                              // 0x05F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               IsLocked;                                                 // 0x0600(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_Door_State>                       Enum_GetDoorState;                                        // 0x0601(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SingleActivation;                                         // 0x0602(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ListenForTouchEvents;                                     // 0x0603(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_IO_DoorSpeed>                     MovementSpeed;                                            // 0x0604(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_IO_DoorControlType>               ControlType;                                              // 0x0605(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TriggeredOnlyByPlayers;                                   // 0x0606(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0607(0x0001) MISSED OFFSET
	TArray<class UMeshComponent*>                      MeshComponentArray;                                       // 0x0608(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UStaticMeshComponent*                        NewVar_1;                                                 // 0x0618(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterialArray;                                     // 0x0620(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Playrate_Slow;                                            // 0x0630(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Playrate_Medium;                                          // 0x0634(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Playrate_Fast;                                            // 0x0638(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayRateMultiplier;                                       // 0x063C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UWwiseAudioComponent*>                AudioComponentArray;                                      // 0x0640(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UWwiseEvent*                                 Event_OpeningStart;                                       // 0x0650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 Event_OpeningStop;                                        // 0x0658(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 Event_ClosingStart;                                       // 0x0660(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 Event_ClosingStop;                                        // 0x0668(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 Event_Opened;                                             // 0x0670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 Event_Closed;                                             // 0x0678(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 Event_Lock;                                               // 0x0680(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 Event_Unlock;                                             // 0x0688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 Event_LockedUse;                                          // 0x0690(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 Event_Interactive;                                        // 0x0698(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 Event_NonInteractive;                                     // 0x06A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWwisePlaybackInstance                      OpeningPlayback;                                          // 0x06A8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FWwisePlaybackInstance                      ClosingPlayback;                                          // 0x06C0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UFeedbackData*                               Feedback_ControllerAndCamera;                             // 0x06D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    On_DoorLockedUsed;                                        // 0x06E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TEnumAsByte<Enum_States_DoorPositions>             PreviewDoorPosition;                                      // 0x06F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_States_DoorLocked>                PreviewDoorFeedback;                                      // 0x06F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_States_DoorPositions>             DoorPositionState;                                        // 0x06F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_States_DoorLocked>                DoorFeedbackState;                                        // 0x06F3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x06F4(0x0004) MISSED OFFSET
	struct FMissionEventReference                      MissionEventToSendOnUse;                                  // 0x06F8(0x0010) (Edit, BlueprintVisible)
	bool                                               MissionDriven;                                            // 0x0708(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0709(0x0003) MISSED OFFSET
	struct FLinearColor                                Color_Feedback_Locked;                                    // 0x070C(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Color_Feedback_Unlocked;                                  // 0x071C(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Color_Feedback_NoFeedback;                                // 0x072C(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Color_GoalColor;                                          // 0x073C(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_Door_ReasonForTimeline>           CurrentReasonForDoorMovement;                             // 0x074C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_Door_UseFeedback>                 UseFeedback;                                              // 0x074D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x074E(0x0002) MISSED OFFSET
	struct FMissionEventReference                      MissionEventToSendOnOpened;                               // 0x0750(0x0010) (Edit, BlueprintVisible)
	struct FMissionEventReference                      MissionEventToSendOnClosed;                               // 0x0760(0x0010) (Edit, BlueprintVisible)
	bool                                               AllowDoorScaling;                                         // 0x0770(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0771(0x0007) MISSED OFFSET
	struct FTimerHandle                                OverlapCheckTimer;                                        // 0x0778(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UGbxCondition*                               Cond_DoorPositionState_NewEnumerator2;                    // 0x0780(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               Cond_DoorFeedbackState_NewEnumerator0;                    // 0x0788(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               Cond_DoorFeedbackState_NewEnumerator2;                    // 0x0790(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IO_Door_Parent.IO_Door_Parent_C");
		return ptr;
	}


	void GetDoorFeedbackState(TEnumAsByte<Enum_States_DoorLocked>* FeedbackState);
	void GetDoorInteractiveState(bool* Interactive);
	void GetDoorLockedState(bool* Locked);
	void GetDoorState(TEnumAsByte<Enum_Door_State>* DoorState);
	void Audio_Play_LockedUse();
	void Audio_Stop_Closing();
	void Audio_Play_Closing();
	void Audio_Stop_Opening();
	void Audio_Play_Opening();
	void EvaluateDoorTrigger();
	void StopControllerAndCameraFeedback();
	void StartControllerAndCameraFeedback();
	void UserConstructionScript();
	void PlayLockedClosedTimeline();
	void FinishedPlayingLockedTimeline();
	void PlayLockedOpenTimeline();
	void BndEvt__TouchCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_BP_IO_Door_Parent_3(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__TouchCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_BP_IO_Door_Parent_3(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void PlayDoorMovement(TEnumAsByte<Enum_Door_ReasonForTimeline> Reason);
	void DoorMovementFinished();
	void ReceiveBeginPlay();
	void SetDoorState(TEnumAsByte<Enum_Door_State> DoorState);
	void SetDoorLockedState(bool Locked_);
	void SetDoorInteractiveState(bool Interactive_);
	void SetLightColor(const struct FLinearColor& Color);
	void Preview_Unlocked();
	void Preview_Locked();
	void Preview_NoFeedback();
	void SetDoorTriggerable(bool Triggerable);
	void __UserState_DoorFeedbackState_2(bool bFromLoad);
	void __UserState_DoorFeedbackState_1(bool bFromLoad);
	void __UserState_DoorFeedbackState_3(bool bFromLoad);
	void Door_Feedback_JustOpened();
	void Door_Feedback_JustClosed();
	void Door_Feedback_ClosedFromLoad();
	void Door_Feedback_OpenedFromLoad();
	void PrepPlayDoorMovement(TEnumAsByte<Enum_Door_ReasonForTimeline> Reason);
	void Door_Feedback_LockedUseOpen();
	void Door_Feedback_LockedUseClosed();
	void PlayLockedUse();
	void Preview_Closed();
	void Preview_Open();
	void __UserState_DoorPositionState_2(bool bFromLoad);
	void __UserState_DoorPositionState_1(bool bFromLoad);
	void BndEvt__Usable_K2Node_ComponentBoundEvent_5_UsableUsedSignature__DelegateSignature_IO_Door_Parent(const struct FUseEvent& UseEvent);
	void SetDoorFeedbackState(TEnumAsByte<Enum_States_DoorLocked> FeedbackState);
	void Test();
	void ExecuteUbergraph_IO_Door_Parent(int EntryPoint);
	void On_DoorLockedUsed__DelegateSignature(class AController* UserController);
	void On_DoorUsed__DelegateSignature(class AController* UserController);
	void On_DoorClosing__DelegateSignature();
	void On_DoorOpening__DelegateSignature();
	void On_DoorClosed__DelegateSignature();
	void On_DoorOpened__DelegateSignature();
	void On_DoorUnlocked__DelegateSignature();
	void On_DoorLocked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
