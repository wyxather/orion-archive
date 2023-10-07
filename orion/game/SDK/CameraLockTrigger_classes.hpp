#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x27C - 0x268)
// BlueprintGeneratedClass CameraLockTrigger.CameraLockTrigger_C
class ACameraLockTrigger_C : public ACameraLockTrigger
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x268(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                               TmpLockPos;                                        // 0x270(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ACameraLockTrigger_C* GetDefaultObj();

	class UBoxComponent* GetCollision();
	void DebugSetup();
	void Reset();
	void BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_CameraLockTrigger(int32 EntryPoint);
};

}


