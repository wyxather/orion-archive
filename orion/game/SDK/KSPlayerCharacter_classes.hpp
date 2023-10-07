#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF8 (0xC49 - 0xB51)
// BlueprintGeneratedClass KSPlayerCharacter.KSPlayerCharacter_C
class AKSPlayerCharacter_C : public AKSFieldCharacter_C
{
public:
	uint8                                        Pad_11E9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB58(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       ListenerPoint;                                     // 0xB60(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     FadeNpcVolume;                                     // 0xB68(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  EnvObjMD_Canoe_A;                                  // 0xB70(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_MJBillboardComponent_C*            BP_MJBillboardComponent;                           // 0xB78(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHunterPartnerFbComponent*             HunterPartnerFb;                                   // 0xB80(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                       Decal;                                             // 0xB88(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPlayerPropertyComponent*              PlayerProperty;                                    // 0xB90(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UOperationPlayerCameraComponent_C*     OperationCameraComp;                               // 0xB98(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCineCameraComponent*                  CineCamera;                                        // 0xBA0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                   Billboard1;                                        // 0xBA8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       Arrow1;                                            // 0xBB0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         NotificationArea;                                  // 0xBB8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                   SpringArm;                                         // 0xBC0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Timeline_0_Aim_2120B107487F91AC336A5AAB35250904;   // 0xBC8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Timeline_0_Position_2120B107487F91AC336A5AAB35250904; // 0xBD4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_2120B107487F91AC336A5AAB35250904; // 0xBE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0xBE8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKSObjectBase*                         RefTresureBox;                                     // 0xBF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                RefShopObject;                                     // 0xBF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelTrigger_C*                       RefLevelTrigger;                                   // 0xC00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableFCJudge;                                     // 0xC08(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class ELEVEL_AREA_TYPE                  CurrentLevelArea;                                  // 0xC09(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11EB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AKSCharacterBase*                      RefTalkBarChara;                                   // 0xC10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               MapinLocation;                                     // 0xC18(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterDir                   MapinDir;                                          // 0xC24(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11EC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DeadLandZ;                                         // 0xC28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11ED[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UParticleSystemComponent*>      TransportEffect;                                   // 0xC30(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UParticleSystemComponent*              CurrentTransportEffect;                            // 0xC40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IgnoreDither;                                      // 0xC48(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AKSPlayerCharacter_C* GetDefaultObj();

	void StopTransportEffectOnStartBattle();
	void UpdateFadeNpcVolume();
	void InitFadeNpcVolume();
	void MoveSpeedInHouse(float Scale);
	void SetUpMoveSpeedData(enum class EMovementMode EMovementMode, int32 NMode);
	void ClearActionReferenceObject();
	void Debug_MoveFallingReturnLocation();
	void DebugShowUpdate();
	class FString Debug_GetDebugFollowInfo();
	class UHunterPartnerFbComponent* GetHunterPartnerFbComponent();
	class UOperationPlayerCameraComponentBase* GetOperationPlayerCameraComponent();
	class UCapsuleComponent* GetCharacterCollision();
	bool ResetCameraPosition();
	bool SetCineCameraRelativeRotation(struct FRotator& Rotator);
	bool ActionSearch();
	bool OpenFieldCommandPopupWidget(bool IgnoreEvent);
	struct FTransform GetCineCameraRelativeTransform();
	bool SetResetCameraPos(struct FVector& ResetPos);
	bool SetCameraLockPos(struct FVector& CameraLockPos);
	bool SetReturnCameraOffset(bool LockFlag);
	bool GetReturnCameraOffset();
	bool ChangeTransport(enum class ETRANSPORTATION_TYPE Type);
	void OnComponentBeginOverlap(class AActor* OtherActor, class UPrimitiveComponent* OtherComp);
	bool SetupCameraLockPosDirectly(const struct FVector& CameraLockPos, class UCapsuleComponent* CharaCapsule);
	bool SetLevelLightParam(bool bEnable, class FName LevelName);
	bool SetLevelLightParam_InDebug(float Intencity, float AttenuationRadius, const struct FLinearColor& LightColor, float SourceRadius);
	struct FVector GetCameraInitOffset();
	bool ResetCameraLock();
	bool SetMapinPlayerLocation(const struct FVector& Location, enum class EKSCharacterDir CharaDir);
	struct FVector GetCameraLockPos();
	struct FVector GetCineCameraWorldLocation();
	bool SetCameraDistanceRateToOperationCameraComp(float CameraDistanceRate);
	bool SetupCameraLock(const struct FVector& LockPos, bool bLock, bool bUnlock, bool bEnableX, bool bEnableY, bool bEnableZ, bool bAfterLevelChange);
	bool IsPlayerCharacter();
	class UPlayerPropertyComponent* GetPlayerPropertyComponent();
	class FName GetTextInfo();
	void UpdateTransportDir(enum class EKSCharacterDir CharaDir, enum class ETRANSPORTATION_TYPE TransportType, class UParticleSystemComponent* Particle);
	void CalcTransportEffectArrayIndex(enum class ETRANSPORTATION_TYPE Type, enum class ETRANSPORT_EFFECT EffType, int32* Index);
	void GetTransportEffectName(enum class ETRANSPORTATION_TYPE Type, enum class ETRANSPORT_EFFECT EffType, class FName* EffName);
	void GetTransformTransportEffect(enum class ETRANSPORTATION_TYPE Type, enum class EKSCharacterDir CharaDir, struct FTransform* Transform);
	void StopAllTransportEffect();
	void Stop_Transport_Effect(enum class ETRANSPORTATION_TYPE Type, enum class ETRANSPORT_EFFECT EffType);
	void PlayTransportEffect(enum class ETRANSPORTATION_TYPE Type, enum class ETRANSPORT_EFFECT EffType);
	void UpdateTransportEffect(enum class ETRANSPORTATION_TYPE Type, enum class ETRANSPORT_EFFECT EffType);
	void Play_Transport_Effect_by_Move_Mode(enum class EKSCharacterMoveMode MoveMode);
	void InitTransportEffect();
	void SetupTransportEffect();
	void GetTransportType(enum class ETRANSPORTATION_TYPE* Type);
	void ResetIdleParam(enum class EKSCharacterMoveMode Action);
	void GetTalkingChara(class AKSCharacterBase** Chara);
	void IsShopBar(class UObject* Object, bool* IsShopBar);
	void SetEnableFCJudge(bool EnableFCJudge);
	void UpdateDitherMask();
	void SetLevelLightParam_Internal(bool Enable, const struct FLevelInfoData& LevelData);
	bool IsTalk();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void BndEvt__KSPlayerCharacter_FadeNpcVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__KSPlayerCharacter_FadeNpcVolume_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__Trigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void SetDir(enum class EKSCharacterDir EDir, bool SetIdle);
	void BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void SetCharacterEnable(bool Enable);
	void LadderOffset(int32 PartyIndex, enum class EKSCharacterDir NewDir);
	void SetPartyLadderOffset(enum class EKSCharacterDir NewDir);
	void StopCharacter();
	void MoveBP(const struct FVector& VMove);
	void PlayEncountCamera();
	void ExecuteUbergraph_KSPlayerCharacter(int32 EntryPoint);
};

}


