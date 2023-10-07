#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xAB (0xBFC - 0xB51)
// BlueprintGeneratedClass KSFieldNPCCharacter.KSFieldNPCCharacter_C
class AKSFieldNPCCharacter_C : public AKSFieldCharacter_C
{
public:
	uint8                                        Pad_1217[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB58(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         CharaForm;                                         // 0xB60(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineMoveComponent*                  SplineMove;                                        // 0xB68(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPlacementFadeComponent*               PlacementFade;                                     // 0xB70(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterDir                   DefaultDir;                                        // 0xB78(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1218[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               SwoonOffsetPos;                                    // 0xB7C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TownID;                                            // 0xB88(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  TownLabel;                                         // 0xB8C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1219[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          DeliveryItemList;                                  // 0xB98(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsFollow;                                          // 0xBA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_121A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NPCUniqID_OLD;                                     // 0xBAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          DeliveryInfoItemLabel;                             // 0xBB0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USplineComponent*                      SplineObject;                                      // 0xBC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPATH_TYPE                        FieldLabelType;                                    // 0xBC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEnableTalk;                                      // 0xBC9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_121B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WaitTime;                                          // 0xBCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SearchRange;                                       // 0xBD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         VisibleFlg;                                        // 0xBD4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_121C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RequestID;                                         // 0xBD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SeqID;                                             // 0xBDC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NPCBattleID;                                       // 0xBE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         VisibleEmotionEffect;                              // 0xBE4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsEventCharacter;                                  // 0xBE5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsForceSpawn;                                      // 0xBE6(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsFadeChara;                                       // 0xBE7(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UCurveFloat*                           EmotionCurveData;                                  // 0xBE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayEmotionTimeline;                               // 0xBF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsMovingEnable;                                    // 0xBF1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsIgnoreGravity;                                   // 0xBF2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsMoveNPC;                                         // 0xBF3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsCharacterMovementDisableRequest;                 // 0xBF4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_121D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        IsCharacterMovementDisableRequestTimer;            // 0xBF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AKSFieldNPCCharacter_C* GetDefaultObj();

	void Check_Character_Movement_Disable(float DeltaTime);
	class UPlacementFadeComponent* GetPlacementFadeComponent();
	void UpdateTalkEmotion();
	void SetIgnoreGravity();
	void Set_Capsule_Collision(enum class ECollisionResponse CollisionType);
	void UpdateStateEmotion(bool MoveComplete, bool* EnableTalk, bool* EnableFC, enum class ECollisionResponse* EnableCollision);
	void Is_Move_Enable(bool* IsMoveEnable);
	bool IsFieldNpcCharacter();
	void RefreshFadeMaterial(bool bClearMaterialParam);
	bool SetActorHiddenInGameBP(bool bNewHidden);
	bool OnFinishAutoBalloon();
	bool CanOpenAutoBalloon();
	void CanShowGuildIcon(bool* CamShow);
	void CanPlayEmotionAnimation(bool* CanPlay);
	void SpawnPlacementEmotion_Old();
	struct FVector CalcEmotionOffset();
	void SetIsFadeChara(bool IsFadeChara);
	void SetIsForceSpawn(bool IsForceSpawn);
	class USplineMoveComponent* GetSplineObject();
	void ReplacePlacementData(const struct FPlacementData& PlacementData, struct FPlacementData* NewPlacementData);
	void RefreshCurrentInfo(bool ForceSpawnEmotion, bool SkipSpawnEmotion);
	bool CallTalkEvent();
	bool ChangeSwoonState(struct FVector& SwoonOffsetPos, enum class EKSCharacterAction SwoonAction, enum class ENpcSwoonType SwoonType);
	class FName GetTextInfo();
	void SequenceRequestCallback(enum class EREQUEST_RESULT Result);
	void SpawnedInitialize();
	bool Idle(bool Force);
	void SpawnEmotionEffect();
	void UpdateToRequest(float DeltaTime);
	void ResetSequence();
	void RequestStateFaintRevival();
	void RequestStateDestroy();
	void UpdateFadeMaterial(float DeltaTime);
	void SetUpFadeMaterial();
	void CheckMoveEnable(float FDeltaSecond, bool* EnableMoving);
	void Check_Talk_Enable(bool* EnableTalk);
	void UpdateEmotionAndAction(bool MoveComplete);
	void GetPlayerCollisionEnable(enum class ECollisionResponse* CollisionEnable);
	void SetDeliveryItem(enum class ENPCEVENT_TYPE NewParam, class FName NewParam1, class FName NewParam2, class FName NewParam3, class FName NewParam4, class FName NewParam5, class FName NewParam6, class FName NewParam7, class FName NewParam8, class FName NewParam9, class FName NewParam10);
	void SubDeliveryItem();
	void Debug_Show_Update();
	void SetPlacementAndCollision();
	void SpawnPlacementEmotion(bool ForceSpawnEmotion);
	void TalkEventFinish_CB();
	void EventTalk(bool* IsTalk, class FString* TalkEventName);
	void ChangeDefaultDir();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void FinishMove();
	void SetVisibleHouseChange(bool bEnable);
	void OnBeginOverlapFromPlayerChara();
	void OnEndOverlapFromPlayerChara();
	void PlayEmotionAnimation();
	void StopEmotionAnimation();
	void UpdateMove(float DeltaTime);
	void BndEvt__KSFieldNPCCharacter_CharaForm_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void DebugShowInfoUpdate();
	void ExecuteUbergraph_KSFieldNPCCharacter(int32 EntryPoint);
};

}


