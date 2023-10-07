#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x821 (0x11A1 - 0x980)
// BlueprintGeneratedClass BattleCameraBP.BattleCameraBP_C
class ABattleCameraBP_C : public ABattleCamera
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x980(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USpringArmComponent*                   SpringArm;                                         // 0x988(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        ResetTargetFocusMove_Ratio_7E12068040997EFDBC65F4B0E62E9F66; // 0x990(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ResetTargetFocusMove__Direction_7E12068040997EFDBC65F4B0E62E9F66; // 0x994(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1187[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ResetTargetFocusMove;                              // 0x998(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TargetFocusMove_Ratio_370EC5F748DEF3F70641218EF0796FC3; // 0x9A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                TargetFocusMove__Direction_370EC5F748DEF3F70641218EF0796FC3; // 0x9A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1188[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    TargetFocusMove;                                   // 0x9A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PulseEffect_PulseValue_09C17F2B4848EDA6048D7CAE82394B2C; // 0x9B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                PulseEffect__Direction_09C17F2B4848EDA6048D7CAE82394B2C; // 0x9B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1189[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    PulseEffect;                                       // 0x9B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CameraChromaticAberationSmall_Value_D0E825C140556A3BAE0C2EA0DCA2E435; // 0x9C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                CameraChromaticAberationSmall__Direction_D0E825C140556A3BAE0C2EA0DCA2E435; // 0x9C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_118A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    CameraChromaticAberationSmall;                     // 0x9C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CameraEnemyDeadMove_Ratio_1CBCFE934F6D3CCF0F820C99DBA3B0CF; // 0x9D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                CameraEnemyDeadMove__Direction_1CBCFE934F6D3CCF0F820C99DBA3B0CF; // 0x9D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_118B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    CameraEnemyDeadMove;                               // 0x9D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TakeBigDamageVibration_Offset_D9E3EEE045A1E49EF499889DA3B5BCA5; // 0x9E0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                TakeBigDamageVibration__Direction_D9E3EEE045A1E49EF499889DA3B5BCA5; // 0x9EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_118C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    TakeBigDamageVibration;                            // 0x9F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TakeDamageVibration_Offset_F3C50FFD43BCF2A50C9270AD74AB3605; // 0x9F8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                TakeDamageVibration__Direction_F3C50FFD43BCF2A50C9270AD74AB3605; // 0xA04(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_118D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    TakeDamageVibration;                               // 0xA08(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CameraChromaticAberation_Value_84FDE9CA408D4304D2E6B89BBE1B569A; // 0xA10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                CameraChromaticAberation__Direction_84FDE9CA408D4304D2E6B89BBE1B569A; // 0xA14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_118E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    CameraChromaticAberation;                          // 0xA18(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CameraVibration_Offset_F119A97F48A274E12ACF14A50015F14A; // 0xA20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                CameraVibration__Direction_F119A97F48A274E12ACF14A50015F14A; // 0xA2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_118F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    CameraVibration;                                   // 0xA30(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WaitMoveDepth_ratio_4F11EE1A47242B42F64004B17CF7A47B; // 0xA38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                WaitMoveDepth__Direction_4F11EE1A47242B42F64004B17CF7A47B; // 0xA3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1190[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    WaitMoveDepth;                                     // 0xA40(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WaitMoveRotate_ratio_96DA3D644F3AD118F903F98E087F8E4D; // 0xA48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                WaitMoveRotate__Direction_96DA3D644F3AD118F903F98E087F8E4D; // 0xA4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1191[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    WaitMoveRotate;                                    // 0xA50(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WaitMoveWidth_ratio_BBB803F3433B180B6B885BB2E5CA9D8D; // 0xA58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                WaitMoveWidth__Direction_BBB803F3433B180B6B885BB2E5CA9D8D; // 0xA5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1192[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    WaitMoveWidth;                                     // 0xA60(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Playing;                                           // 0xA68(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1193[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               StartPos;                                          // 0xA6C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TargetPos;                                         // 0xA78(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              StartRot;                                          // 0xA84(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              TargetRot;                                         // 0xA90(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1194[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            DefaultTransform;                                  // 0xAA0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        Time;                                              // 0xAD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeLimit;                                         // 0xAD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               WaitOffset;                                        // 0xAD8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              WaitRotate;                                        // 0xAE4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               VibrationOffset;                                   // 0xAF0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VignetteIntensity_Normal;                          // 0xAFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VignetteIntensity_Weak;                            // 0xB00(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VignetteIntensity_Original;                        // 0xB04(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           AbilityCameraInterpolation;                        // 0xB08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           ResultCameraInterpolation;                         // 0xB10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsTargetFocusMove;                                 // 0xB18(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1195[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ResumeCameraTransform;                             // 0xB20(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                            ResumeWorldCameraTransform;                        // 0xB50(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FCameraFocusSettings                  TargetFocusFocusSettings;                          // 0xB80(0x58)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                        Pad_1196[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPostProcessSettings                  TargetFocusPostProcessSettings;                    // 0xBE0(0x580)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        StartManualFocusDistance;                          // 0x1160(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartDOFFocalRegion;                               // 0x1164(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GoalManualFocusDistance;                           // 0x1168(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GoalDOFFocalRegion;                                // 0x116C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartFocalLength;                                  // 0x1170(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartFieldOfView;                                  // 0x1174(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GoalFocalLength;                                   // 0x1178(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GoalFieldOfView;                                   // 0x117C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InitManualFocusDistance;                           // 0x1180(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InitDOFFocalRegion;                                // 0x1184(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InitFocalLength;                                   // 0x1188(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InitFieldOfView;                                   // 0x118C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPartyFocus;                                      // 0x1190(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         SettledFixCamera;                                  // 0x1191(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlayingEncountCamera;                              // 0x1192(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1197[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              SavedEncountCameraRotation;                        // 0x1194(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bFirstVignette;                                    // 0x11A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABattleCameraBP_C* GetDefaultObj();

	void GetCameraInitParameterForAbilityCamera(struct FPostProcessSettings* OutPostSetting, struct FCameraFocusSettings* OutFocusSetting, struct FCameraFilmbackSettings* OutFilmbackSetting, struct FCameraLensSettings* OutLensSetting, float* OutCurrentAperture, float* OutFOV);
	void InitReplayCameraPosition(enum class EBATTLE_CAMERA_TYPE InitCameraType);
	void IsPlaying(bool* Playing);
	void InitBattleCamera(enum class EBATTLE_CAMERA_TYPE InitCameraType);
	void CameraVibration__FinishedFunc();
	void CameraVibration__UpdateFunc();
	void CameraChromaticAberation__FinishedFunc();
	void CameraChromaticAberation__UpdateFunc();
	void TakeDamageVibration__FinishedFunc();
	void TakeDamageVibration__UpdateFunc();
	void TakeBigDamageVibration__FinishedFunc();
	void TakeBigDamageVibration__UpdateFunc();
	void CameraEnemyDeadMove__FinishedFunc();
	void CameraEnemyDeadMove__UpdateFunc();
	void CameraChromaticAberationSmall__FinishedFunc();
	void CameraChromaticAberationSmall__UpdateFunc();
	void PulseEffect__FinishedFunc();
	void PulseEffect__UpdateFunc();
	void WaitMoveWidth__FinishedFunc();
	void WaitMoveWidth__UpdateFunc();
	void TargetFocusMove__FinishedFunc();
	void TargetFocusMove__UpdateFunc();
	void ResetTargetFocusMove__FinishedFunc();
	void ResetTargetFocusMove__UpdateFunc();
	void WaitMoveRotate__FinishedFunc();
	void WaitMoveRotate__UpdateFunc();
	void WaitMoveDepth__FinishedFunc();
	void WaitMoveDepth__UpdateFunc();
	void SuspendWaitMove();
	void StartWaitMove();
	void StartCameraVibration();
	void StartCameraChromaticAberation();
	void StartTakeDamageVibration();
	void StartTakeBigDamageVibration();
	void InitWaitMove();
	void StartEnemyDeadSlowMove(bool FarCamera);
	void StartCameraChromaticAberationSmall();
	void StartCameraPulseEffect();
	void ResumeWaitMove();
	void FinishEncountCamera();
	void StartEncountCamera();
	void StartBreakCamera(enum class EBREAK_CAMERA_TYPE EBreakType);
	void FinishBreakCamera();
	void FinishAbilityCamera();
	void StartAbilityCamera(int32 NBoostLevel, enum class EBATTLE_TARGET_TYPE ETargetType, int32 NSlideFrame, class AActionCommandBase* CActionCommand, bool bEnemySide, bool bIsFront, class FName StrAbilityName);
	void InterpolationAbilityCamera(float FRatio, class ACineCameraActor* CTargetCamera);
	void SetCameraTransform(const struct FTransform& CTransform);
	void SetCameraWaitMove(bool bEnable);
	void ResetCameraTransform();
	void FinishResultCamera();
	void StartResulttCamera(enum class EBATTLE_RESULT_TYPE EResultType, bool bIsFront);
	void SetTargetFocusCamera(enum class EBATTLE_TARGET_TYPE ETargetType, class ABattleCharacterBase* CTarget);
	void ResetTargetFocusCamera();
	void InterpolationBattleCamera(class UCurveFloat* CInterpolationCurve, float FRatio, class ACineCameraActor* CTargetCamera);
	void InterpolationResultCamera(float FRatio, class ACineCameraActor* CTargetCamera);
	void SetInterpolationCurveForAbilityCamera(class UCurveFloat* CInterpolationCurve);
	void StartEnemyDeadCamera(enum class EBREAK_CAMERA_TYPE EBreakType);
	void FixBattleCamera();
	void PostCameraTick(float DeltaTime);
	void SuspendTargetFocusMove();
	void ExecuteUbergraph_BattleCameraBP(int32 EntryPoint);
};

}


