#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x730 (0x10A0 - 0x970)
// BlueprintGeneratedClass EventTriggerBP.EventTriggerBP_C
class AEventTriggerBP_C : public AEventTriggerBox
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x970(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         Box;                                               // 0x978(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         UseOldPlacementDB;                                 // 0x980(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1153[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPlacementData                        PlacementData;                                     // 0x988(0x700)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsTalkReserve;                                     // 0x1088(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1154[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                EventLabel;                                        // 0x1090(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AEventTriggerBP_C* GetDefaultObj();

	bool Is_Block_Collision_Disable(uint8 EventType);
	void SetupBlockCollision();
	void IsCheckTalkInvoke(uint8 EventType, bool* Enable);
	bool PlayEvent(const class FString& TalkEventName);
	bool IsTalkEventCheck(class FString* TalkEventName);
	void SequenceRequestCallback(enum class EREQUEST_RESULT Result);
	void PostInit(struct FPlacementData& PlacementData, const class FString& EventLabel);
	void Is_Event_Check(bool CheckTalk, bool* IsTalk, class FString* TalkEventName, uint8* EventType);
	void IsRequiredItem(class FName ItemLabel, bool* IsEnable);
	void UserConstructionScript();
	void BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_EventTriggerBP(int32 EntryPoint);
};

}


