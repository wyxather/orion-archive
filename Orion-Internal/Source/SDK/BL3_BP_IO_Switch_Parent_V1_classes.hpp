#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_IO_Switch_Parent_V1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C
// 0x01D8 (0x0728 - 0x0550)
class ABP_IO_Switch_Parent_V1_C : public AInteractiveObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0550(0x0008) (Transient, DuplicateTransient)
	class UUsableComponent*                            Usable;                                                   // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box_UseCollisionHelper;                                   // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakMissionIconComponent*                    OakMissionIcon;                                           // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UWwiseAudioComponent*                        WwiseComponent;                                           // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               StartOn;                                                  // 0x0580(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StartLocked;                                              // 0x0581(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0582(0x0006) MISSED OFFSET
	class AActor*                                      LastPlayerToUseSwitch;                                    // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class UPointLightComponent*>                PointLightArray;                                          // 0x0590(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<Enum_Switch_State>                     Enum_GetSwitchState;                                      // 0x05A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x05A1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    On_SwitchLocked;                                          // 0x05A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    On_SwitchUnlocked;                                        // 0x05B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    On_SwitchOn;                                              // 0x05C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    On_SwitchOff;                                             // 0x05D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    On_SwitchTurningOn;                                       // 0x05E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    On_SwitchTurningOff;                                      // 0x05F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    On_SwitchUsed;                                            // 0x0608(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               SingleActivation;                                         // 0x0618(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0619(0x0007) MISSED OFFSET
	class AElevator*                                   Elevator;                                                 // 0x0620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<class UStaticMeshComponent*>                StaticMeshComponentArray;                                 // 0x0628(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterialArray;                                     // 0x0638(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UWwiseEvent*                                 Event_TurningOn;                                          // 0x0648(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 Event_TurningOff;                                         // 0x0650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 Event_On;                                                 // 0x0658(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 Event_Off;                                                // 0x0660(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 Event_Lock;                                               // 0x0668(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 Event_Unlock;                                             // 0x0670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 Event_LockedUse;                                          // 0x0678(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 Event_Interactive;                                        // 0x0680(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWwiseEvent*                                 Event_NonInteractive;                                     // 0x0688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    On_SwitchLockedUsed;                                      // 0x0690(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               StartNoFeedback;                                          // 0x06A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x06A1(0x0003) MISSED OFFSET
	struct FLinearColor                                Color_Feedback_Locked;                                    // 0x06A4(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Color_Feedback_Unlocked;                                  // 0x06B4(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Color_Feedback_NoFeedback;                                // 0x06C4(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Color_GoalColor;                                          // 0x06D4(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_Switch_ReasonForMoving>           CurrentReasonForSwitchMovement;                           // 0x06E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x06E5(0x0003) MISSED OFFSET
	class UFeedbackData*                               Feedback_ControllerAndCamera;                             // 0x06E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInMotion;                                               // 0x06F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_States_SwitchPositions>           PreviewSwitchPosition;                                    // 0x06F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_States_SwitchFeedback>            PreviewSwitchFeedback;                                    // 0x06F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_States_SwitchPositions>           SwitchPositionState;                                      // 0x06F3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_States_SwitchFeedback>            SwitchFeedbackState;                                      // 0x06F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x06F5(0x0003) MISSED OFFSET
	struct FMissionEventReference                      MissionEventToSendOnUse;                                  // 0x06F8(0x0010) (Edit, BlueprintVisible)
	bool                                               MissionDriven;                                            // 0x0708(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0709(0x0007) MISSED OFFSET
	class UGbxCondition*                               Cond_SwitchPositionState_NewEnumerator2;                  // 0x0710(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               Cond_SwitchFeedbackState_NewEnumerator0;                  // 0x0718(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxCondition*                               Cond_SwitchFeedbackState_NewEnumerator2;                  // 0x0720(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_IO_Switch_Parent_V1.BP_IO_Switch_Parent_V1_C");
		return ptr;
	}


	void GetSwitchFeedbackState(TEnumAsByte<Enum_States_SwitchFeedback>* FeedbackState);
	void GetSwitchState(TEnumAsByte<Enum_Switch_State>* SwitchState);
	void GetSwitchLockedState(bool* Locked);
	void GetSwitchInteractiveState(bool* Interactive);
	void PlayControllerAndCameraFeedback();
	void AddToDynamicMaterialArray(class UMeshComponent* NewParam);
	void UserConstructionScript();
	void SetSwitchState(TEnumAsByte<Enum_Switch_State> SwitchState);
	void SetSwitchInteractiveState(bool Interactive);
	void SetSwitchLockedState(bool Locked);
	void PlayLockedOnTimeline();
	void PlayLockedOffTimeline();
	void FinishedPlayingLockedTimeline();
	void PlaySwitchMovement(TEnumAsByte<Enum_Switch_ReasonForMoving> Reason);
	void SwitchMovementFinished();
	void ReceiveBeginPlay();
	void Preview_On();
	void Preview_Off();
	void Switch_Feedback_JustOn();
	void Switch_Feedback_JustOff();
	void Switch_Feedback_OffFromLoad();
	void Switch_Feedback_OnFromLoad();
	void PrepPlaySwitchMovement(TEnumAsByte<Enum_Switch_ReasonForMoving> Reason);
	void PlayLockedUse();
	void Switch_Feedback_LockedUseOn();
	void Switch_Feedback_LockedUseOff();
	void __UserState_SwitchPositionState_2(bool bFromLoad);
	void __UserState_SwitchPositionState_1(bool bFromLoad);
	void Preview_Unlocked();
	void Preview_Locked();
	void Preview_NoFeedback();
	void SetLightColor(const struct FLinearColor& Color);
	void __UserState_SwitchFeedbackState_2(bool bFromLoad);
	void __UserState_SwitchFeedbackState_1(bool bFromLoad);
	void __UserState_SwitchFeedbackState_3(bool bFromLoad);
	void BndEvt__Usable_K2Node_ComponentBoundEvent_0_UsableUsedSignature__DelegateSignature_BP_IO_Switch_Parent_V1(const struct FUseEvent& UseEvent);
	void SetSwitchFeedbackState(TEnumAsByte<Enum_States_SwitchFeedback> FeedbackState);
	void ExecuteUbergraph_BP_IO_Switch_Parent_V1(int EntryPoint);
	void On_SwitchLockedUsed__DelegateSignature(class AController* UserController);
	void On_SwitchUsed__DelegateSignature(class AController* UserController);
	void On_SwitchTurningOff__DelegateSignature(class AActor* LastActorToUseSwitch);
	void On_SwitchTurningOn__DelegateSignature(class AActor* LastActorToUseSwitch);
	void On_SwitchOff__DelegateSignature(class AActor* LastActorToUseSwitch);
	void On_SwitchOn__DelegateSignature(class AActor* LastActorToUseSwitch);
	void On_SwitchUnlocked__DelegateSignature();
	void On_SwitchLocked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
