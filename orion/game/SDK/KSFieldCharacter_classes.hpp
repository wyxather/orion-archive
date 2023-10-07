#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x61 (0xB51 - 0xAF0)
// BlueprintGeneratedClass KSFieldCharacter.KSFieldCharacter_C
class AKSFieldCharacter_C : public AKSCharacterBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAF0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       RanternRoot;                                       // 0xAF8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNpcPropertyComponent*                 NpcProperty;                                       // 0xB00(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Trigger;                                           // 0xB08(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       TriggerRoot;                                       // 0xB10(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        BalloonIndex;                                      // 0xB18(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BD2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                EventID;                                           // 0xB20(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        EventIndex;                                        // 0xB30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BD3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          EvetName;                                          // 0xB38(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AFootStepTriggerBP_C*                  RefFootStepObject;                                 // 0xB48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSavePoint;                                       // 0xB50(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AKSFieldCharacter_C* GetDefaultObj();

	void GetNpcLabel(class FName* Label);
	void IsSavePointNpc(bool* IsSavePoint);
	void MoveSpeedInHouse(float Scale);
	bool CallTalkEvent();
	class UNpcPropertyComponent* GetNpcPropertyComponent();
	class FName GetTextInfo();
	void SequenceRequestCallback(enum class EREQUEST_RESULT Result);
	enum class ECHARACTER_MODE GetMode();
	void UpdateFootstepTrigger(class AActor* Trigger, bool IsBegin, bool* IsFootstepTrigger);
	enum class EKSCharacterAction GetMoveAction();
	enum class EKSCharacterAction GetIdleAction();
	void SetHouseIn(bool Visible, float Scale, float OffsetHeight);
	void Event();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void FinishMove();
	void ForceMovePoint(const struct FVector& InLocation);
	void SetCharacterCollision(bool Enable);
	void BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__Trigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void SetNpcLabel(class FName Label);
	void ExecuteUbergraph_KSFieldCharacter(int32 EntryPoint);
};

}


