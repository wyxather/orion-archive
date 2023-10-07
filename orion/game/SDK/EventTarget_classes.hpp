#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x51 (0x311 - 0x2C0)
// BlueprintGeneratedClass EventTarget.EventTarget_C
class AEventTarget_C : public AEventTargetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCineCameraComponent*                  CineCamera;                                        // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                   SpringArm;                                         // 0x2D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               InitOffset;                                        // 0x2E0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               UseCameraLocation;                                 // 0x2EC(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              UseCameraRotation;                                 // 0x2F8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10B3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AKSCharacterBase*                      AttachCharacter;                                   // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AttachChara;                                       // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AEventTarget_C* GetDefaultObj();

	void ResetAttachCharacter();
	void SetAttachCharacter(int32 TargetIndex);
	void SetCameraDistanceRate(float DistanceRate);
	void ReceiveBeginPlay();
	void SwitchCamera(struct FEventData& RefEventData, bool InHouse);
	void FollowingCamera(struct FEventData& RefEventData);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_EventTarget(int32 EntryPoint);
};

}


