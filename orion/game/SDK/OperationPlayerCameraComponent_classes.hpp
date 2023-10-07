#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1E1 (0x2B9 - 0xD8)
// BlueprintGeneratedClass OperationPlayerCameraComponent.OperationPlayerCameraComponent_C
class UOperationPlayerCameraComponent_C : public UOperationPlayerCameraComponentBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCineCameraComponent*                  RefPlayerCamera;                                   // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                   RefPlayerSpringArm;                                // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CameraLockPos;                                     // 0xF0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CameraInitOffset;                                  // 0xFC(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKSCharacterBase*                      RefOwnerCharacter;                                 // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnCameraOffset;                                // 0x110(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EFE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CameraDistanceRate;                                // 0x114(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CameraResetTime;                                   // 0x118(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CameraResetTimeWorkX;                              // 0x11C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CameraResetTimeWorkY;                              // 0x120(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CameraResetTimeWorkZ;                              // 0x124(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CameraResetBasePos;                                // 0x128(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEasingFunc                       CameraEasing;                                      // 0x134(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLockingXAxis;                                    // 0x135(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F00[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ManualFocusDistance_Default;                       // 0x138(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ManualFocusDistance_Transport;                     // 0x13C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransportCameraParam                 DefaultCameraSettings;                             // 0x140(0xA8)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTransportCameraParam                 TransportCameraSettings;                           // 0x1E8(0xA8)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsEncountCamera;                                   // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F01[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               EncountLocation;                                   // 0x294(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              EncountRotation;                                   // 0x2A0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               EncountAim;                                        // 0x2AC(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETRANSPORTATION_TYPE              CurrentTransportType;                              // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UOperationPlayerCameraComponent_C* GetDefaultObj();

	bool UpdateCameraInterpolationByPlayerPos(float DeltaTime);
	bool StartCameraInterpolationByPlayerPos(const struct FVector& StartPlayerPos);
	void SetTransportTypeForFocusDistance(enum class ETRANSPORTATION_TYPE CurrentTransportType);
	void ResetCameraPosition();
	void EndEncountCamera();
	void UpdateEncountCamera(const struct FVector& Location, const struct FVector& Aim);
	void PlayEncountCamera();
	void Debug_ShowCameraLockInfo();
	void EndCameraLockFocusDistance();
	void StartCameraLockFocusDistance();
	void SetDefaultCameraParameter();
	void SetCameraParameter(const struct FTransportCameraParam& CameraParam, bool ChangeTransform);
	void InitCameraLockFocusDistance();
	void SetupCameraLockPosDirectly(const struct FVector& CameraLockPos, class UCapsuleComponent* CapsuleComponent);
	void ResetCameraLock();
	void UpdateCameraLock(float DeltaTime);
	void SetupCameraLock(const struct FVector& LockPos, bool Lock, bool Unlock, bool EnableX, bool EnableY, bool EnableZ, bool AfterLevelChange);
	void RegisterCamera();
	void SetFilmbackPreset(const class FString& PresetName);
	void InitPlayerCamera();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_OperationPlayerCameraComponent(int32 EntryPoint);
};

}


