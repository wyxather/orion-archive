#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B8 (0x548 - 0x390)
// BlueprintGeneratedClass BP_3DWorldMapActorV2.BP_3DWorldMapActorV2_C
class ABP_3DWorldMapActorV2_C : public AWorldMapActorBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       CameraRoot;                                        // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              ParticleSystem;                                    // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       SequencerRoot;                                     // 0x3A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x3B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  ChildActor;                                        // 0x3B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCineCameraComponent*                  CineCamera;                                        // 0x3C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       CameraSequencerRoot;                               // 0x3C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Root;                                              // 0x3D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x3D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AKSCameraManager*                      CameraManager;                                     // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDisablePPS;                                      // 0x3E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15F5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class AMJPostProcessVolume*, bool>      PPSCache;                                          // 0x3F0(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                        Prev_NormalizedTime;                               // 0x440(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15F6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULevelSequence*                        ZoomSequencer;                                     // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                   ZoomSequenceActor;                                 // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelSequence*                        TimeZoneSequencer;                                 // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                   TimeZoneSequenceActor;                             // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCameraType                     PrevCameraType;                                    // 0x468(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15F8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CenterRotationOffcet;                              // 0x46C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWorldMapZoomType                 CurrentZoomState;                                  // 0x478(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsZooming;                                         // 0x479(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15F9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameTime                            ZoomFrameAtStart;                                  // 0x47C(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentZoomTime;                                   // 0x484(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ZoomDuration;                                      // 0x488(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWorldMapZoomType                 NextZoomState;                                     // 0x48C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15FA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameTime                            ZoomFrameAtFinish;                                 // 0x490(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               GazeEndRotate;                                     // 0x498(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               GazePrevRotate;                                    // 0x4A4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ZoomGaze;                                          // 0x4B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        ZoomGaze_Start;                                    // 0x4B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	float                                        ZoomGaze_Finish;                                   // 0x4B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15FB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_3DWorldMapActor_GlobeV2_C*         GlobeActor;                                        // 0x4C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AttractLerp;                                       // 0x4C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TargetAttractVector;                               // 0x4CC(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsStartAttract;                                    // 0x4D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EWorldMapZoomType                 PrevZoomState;                                     // 0x4D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15FC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               PrevAutoRotation;                                  // 0x4DC(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               AutoRotateTargetVector;                            // 0x4E8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15FD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULevelSequence*                        OpenSequencer;                                     // 0x4F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                   OpenSequenceActor;                                 // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Gaze;                                              // 0x508(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ZoomAlpha;                                         // 0x510(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15FF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULevelSequence*                        CloseSequencer;                                    // 0x518(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                   CloseSequenceActor;                                // 0x520(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelSequence*                        OpenPlayerSelectSequencer;                         // 0x528(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                   OpenPlayerSelectSequenceActor;                     // 0x530(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelSequence*                        ClosePlayerSelectSequencer;                        // 0x538(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                   ClosePlayerSelectSequenceActor;                    // 0x540(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_3DWorldMapActorV2_C* GetDefaultObj();

	void SwitchCameraToField_FromSequencer();
	void SwitchCameraToField();
	void SwitchCameraToWorldmap();
	void SwitchCamera(enum class EKSCameraType SwitchTarget);
	bool IsPlayingTimeZoneSequencer();
	bool IsPlayingZoomSequencer();
	bool IsPlayingAnySequencer();
	float GetClosePlayerSelectSequencerDuration();
	bool IsPlayingClosePlayerSelectSequencer();
	void PlayClosePlayerSelectSequencer();
	bool IsPlayingOpenPlayerSelectSequencer();
	void PlayOpenPlayerSelectSequencer();
	bool IsPlayingCloseSequencer();
	void PlayCloseSequencer();
	bool IsPlayingOpenSequencer();
	void PlayOpenSequencer();
	enum class EWorldMapZoomType GetPrevZoomState();
	enum class EWorldMapZoomType GetNextZoomState();
	float GetZoomAlpha();
	void SetGlobeLocation(struct FVector& NewLocation, struct FVector* OutClanpedNewLocation);
	struct FVector GetGlobeLocation();
	void ScrubToSeconds(class UMovieSceneSequencePlayer* SequencerPlayer, float Time);
	void ScrubToFrame(class UMovieSceneSequencePlayer* SequencerPlayer, const struct FFrameTime& Frame);
	void RefreshWorldMapMaskInPlayerSelect();
	void RefreshWorldMapMask();
	void Switch();
	void UpdateAutoRotate(float DeltaTime);
	void RotateToCenterByLebelWithAnim(class FName WorldMapLabel, class UCurveFloat* AnimCurve, float Speed);
	void RotateToCenterByLebel(class FName WorldMapLabel);
	void GetGlobeRotationOffset(struct FRotator* Rotate, struct FVector* Vector);
	void UpdateAttractToSelectingPivot();
	void To360Rotate(const struct FRotator& Input, struct FRotator* Output);
	void To360Vector(const struct FVector& Input, struct FVector* Output);
	void IsWorldRotate(bool* Return);
	class AWorldMapGlobeActorBase* GetGlobeActor();
	class USceneComponent* GetGlobeComponent();
	struct FRotator GetGlobeRotation();
	void UpdateRotationLimit(struct FVector2D& NewLimit, struct FVector2D* Delta);
	bool StartCameraZoomIfPossible(enum class EWorldMapZoomType NewZoomType, const struct FVector2D& GazePoint);
	void OverrideGazePoint(const struct FVector2D& GazePoint);
	void SetupZoom(const class FString& StartMarkerLabel, const class FString& FinishMarkerLabel);
	void OpenWorldMapActor(enum class EWorldMapZoomType InitZoomType);
	float To360(float Angle);
	void IsReachedGlobeInRotationLimit(bool* IsReachedX, bool* IsReachedY);
	void CloseWorldMapActor();
	struct FVector GetGlobeWorldPosition();
	void RotateGlobe(const struct FVector2D& RotateDelta, struct FVector2D* OutClampedRotateDelta);
	bool GetIsZooming();
	enum class EWorldMapZoomType GetCurrentZoomState();
	bool UpdateZoom(float DeltaTime, bool IsMovedCursor, struct FVector2D* RotationDelta);
	void GetCameraManager(class AKSCameraManager** Output_Get);
	void UpdateTimeZoneSequencer(bool IsForceUpdate);
	void SetupWorldMap();
	void UserConstructionScript();
	void InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_0(float AxisValue);
	void InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_1(float AxisValue);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void WaitToLoad(enum class EWorldMapZoomType InitZoomType);
	void ExecuteUbergraph_BP_3DWorldMapActorV2(int32 EntryPoint);
};

}


