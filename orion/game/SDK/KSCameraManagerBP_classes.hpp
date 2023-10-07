#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x598 (0x840 - 0x2A8)
// BlueprintGeneratedClass KSCameraManagerBP.KSCameraManagerBP_C
class AKSCameraManagerBP_C : public AKSCameraManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneCaptureComponent2D*              SceneCaptureComponent2D;                           // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FPostProcessSettings                  TmpPostProcessSetting;                             // 0x2C0(0x580)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class AKSCameraManagerBP_C* GetDefaultObj();

	void GetRenderTarget(enum class EKSCaptureType CaptureType, class UTextureRenderTarget2D** RenderTarget);
	void SetRenderTarget(enum class EKSCaptureType CaptureType);
	void CaptureScene(class UCameraComponent* CameraCompoent);
	void BattleEncountScreenShot();
	void ReceiveBeginPlay();
	void BattleEndScreenShot();
	void ExecuteUbergraph_KSCameraManagerBP(int32 EntryPoint);
};

}


