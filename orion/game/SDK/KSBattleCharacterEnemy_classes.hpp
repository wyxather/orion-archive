#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x218 (0xD08 - 0xAF0)
// BlueprintGeneratedClass KSBattleCharacterEnemy.KSBattleCharacterEnemy_C
class AKSBattleCharacterEnemy_C : public AKSCharacterBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAF0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCharacterFlipbookComponent*           CrossFadeSprite;                                   // 0xAF8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Sphere;                                            // 0xB00(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          EnemySelectedBoostBlinkLoop_SelectedColor_5263333E4D35094CDEAA72B1D7E2B4AA; // 0xB08(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                EnemySelectedBoostBlinkLoop__Direction_5263333E4D35094CDEAA72B1D7E2B4AA; // 0xB18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14A5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    EnemySelectedBoostBlinkLoop;                       // 0xB20(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          EnemySelectedBlinkLoop_SelectedColor_99869BA2448EE24720EE30BF5096F403; // 0xB28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                EnemySelectedBlinkLoop__Direction_99869BA2448EE24720EE30BF5096F403; // 0xB38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14A6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    EnemySelectedBlinkLoop;                            // 0xB40(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ChangeModeTransition_TransitionIn_EFE8A578404E943DF8343D98D9AC9000; // 0xB48(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ChangeModeTransition_TransitionOut_EFE8A578404E943DF8343D98D9AC9000; // 0xB54(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ChangeModeTransition__Direction_EFE8A578404E943DF8343D98D9AC9000; // 0xB60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14A7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ChangeModeTransition;                              // 0xB68(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ChangeModeCrossFade_FadeInOpacity_7799A69A41AAD0602CDC6F9A58FF7396; // 0xB70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ChangeModeCrossFade_FadeOutOpacity_7799A69A41AAD0602CDC6F9A58FF7396; // 0xB74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ChangeModeCrossFade__Direction_7799A69A41AAD0602CDC6F9A58FF7396; // 0xB78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14A8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ChangeModeCrossFade;                               // 0xB80(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EnemyDeadAnimation_FadeAlhpa_4C7ECC4C4DB54D92BBDDB7877B2446F0; // 0xB88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                EnemyDeadAnimation__Direction_4C7ECC4C4DB54D92BBDDB7877B2446F0; // 0xB8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14A9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    EnemyDeadAnimation;                                // 0xB90(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               InvadeMonsterKnockBack_KnockbackOffset_2E1C9E5742018F689A4BA2BEAE09B0C1; // 0xB98(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InvadeMonsterKnockBack_FadeAlpha_2E1C9E5742018F689A4BA2BEAE09B0C1; // 0xBA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                InvadeMonsterKnockBack__Direction_2E1C9E5742018F689A4BA2BEAE09B0C1; // 0xBA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14AA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    InvadeMonsterKnockBack;                            // 0xBB0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               EnemyDeadKnockback_KnockbackOffset_015E44264BACCA510A42BBA5361DDE6C; // 0xBB8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                EnemyDeadKnockback__Direction_015E44264BACCA510A42BBA5361DDE6C; // 0xBC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14AB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    EnemyDeadKnockback;                                // 0xBC8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               EnemyDamageVibration_B_KnockbackOffset_F48E58D548A309CADE83BB8841DC6E1E; // 0xBD0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                EnemyDamageVibration_B__Direction_F48E58D548A309CADE83BB8841DC6E1E; // 0xBDC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14AC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    EnemyDamageVibration_B;                            // 0xBE0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          EnemyBreakAnimation_SelectedColor_891D5D9943CB8483BC5893B3F778B29E; // 0xBE8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                EnemyBreakAnimation__Direction_891D5D9943CB8483BC5893B3F778B29E; // 0xBF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14AD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    EnemyBreakAnimation;                               // 0xC00(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               EnemyDamageVibration_L_KnockbackOffset_E83E898C45760BDA02F889B843EF0C30; // 0xC08(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                EnemyDamageVibration_L__Direction_E83E898C45760BDA02F889B843EF0C30; // 0xC14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14AE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    EnemyDamageVibration_L;                            // 0xC18(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               EnemyDamageVibration_M_KnockbackOffset_27B414EA4894DED6D082CCB808C2D7E0; // 0xC20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                EnemyDamageVibration_M__Direction_27B414EA4894DED6D082CCB808C2D7E0; // 0xC2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14B0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    EnemyDamageVibration_M;                            // 0xC30(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               EnemyDamageVibration_S_KnockbackOffset_14CD157C4A8F56907A85E0AE9D704616; // 0xC38(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                EnemyDamageVibration_S__Direction_14CD157C4A8F56907A85E0AE9D704616; // 0xC44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14B6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    EnemyDamageVibration_S;                            // 0xC48(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          EnemyDamageWhiteBlink_BlinkColor_2E91507943FFBB8B408EE89A4F1E406B; // 0xC50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                EnemyDamageWhiteBlink__Direction_2E91507943FFBB8B408EE89A4F1E406B; // 0xC60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14B7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    EnemyDamageWhiteBlink;                             // 0xC68(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          EnemyDamageRedBlink_BlinkColor_AF4C1BF74C092995C7BF3F94DCC14367; // 0xC70(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                EnemyDamageRedBlink__Direction_AF4C1BF74C092995C7BF3F94DCC14367; // 0xC80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14B8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    EnemyDamageRedBlink;                               // 0xC88(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          EnemyActionAnimation_ActionColor_3E1A241B44B4BF82BC21BEABE7A74AED; // 0xC90(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                EnemyActionAnimation__Direction_3E1A241B44B4BF82BC21BEABE7A74AED; // 0xCA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14B9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    EnemyActionAnimation;                              // 0xCA8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        EnemyFadeInAnimation_Alpha_99E02EB04C353258D816B29103A9BE53; // 0xCB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                EnemyFadeInAnimation__Direction_99E02EB04C353258D816B29103A9BE53; // 0xCB4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14BA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    EnemyFadeInAnimation;                              // 0xCB8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPlayingAction;                                   // 0xCC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlayDeadAction;                                    // 0xCC1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EBATTLE_ACTION_TYPE               ActionType;                                        // 0xCC2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14BB[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              MaterialInstance;                                  // 0xCC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               DefaultPosition;                                   // 0xCD0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRChannel;                                        // 0xCDC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         KnockBackActionEnter;                              // 0xCDD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14BC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPaperFlipbook*                        IdleFlipbook;                                      // 0xCE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPaperFlipbook*                        AttackFlipbook;                                    // 0xCE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCharacterNPC;                                    // 0xCF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_14BD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPaperFlipbook*                        NPCActionFlipBook;                                 // 0xCF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterAction                LatestAction;                                      // 0xD00(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterDir                   PlayDirection;                                     // 0xD01(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterAction                PlayBattleIdleType;                                // 0xD02(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSCharacterAction                PlayBattleAtkAction;                               // 0xD03(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPlayerSide;                                      // 0xD04(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsSyncFrameForChilds;                              // 0xD05(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsSyncFrameForParent;                              // 0xD06(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsCharmCharacter;                                  // 0xD07(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AKSBattleCharacterEnemy_C* GetDefaultObj();

	void SetCharmCharacter(bool IsCharmCharacter);
	void SetSyncAnimationCharacter(bool IsSyncFrameForParent, bool IsSyncFrameForChilds);
	void SyncAnimationFrame();
	void SetCharacterNPC(bool IsCharacterNPC);
	enum class EKSCharacterAction GetIdleAction();
	void SetupSpActionType(bool IsSpAction);
	void GetAtkType(enum class EKSCharacterAction* Type);
	void GetIdleType(enum class EKSCharacterAction* Type);
	void SetAtkType(enum class EKSCharacterAction Type);
	void SetIdleType(enum class EKSCharacterAction Type);
	void UpdateMaterialInstance(class FName CustomFlipbookName);
	void SetUpMaterialInstance(TArray<class UPaperFlipbook*>& OriginalMaterial);
	bool IsPlayBattleAction();
	enum class ECHARACTER_MODE GetMode();
	void SetupActionTable(class FName ActionLabel, enum class EKSCharacterDir DefaultDirection);
	void PlayActionNPC(enum class EKSCharacterAction Action, enum class EKSCharacterDir Direction);
	void PlayFlipbook(class UPaperFlipbook* PlayFlipbook, bool Loop);
	void SetAttackFlipbook(class UPaperFlipbook* NewFlipbook);
	void SetEnemyVisible(bool Visible);
	void SetPlayDeadActionFlag(bool PlayDeadAction);
	void SetFlipRChannel();
	void SetFlipbook(class UPaperFlipbook* NewFlipbook);
	void UpdateBillboard(bool Enable);
	void SetStateDead(bool DeadFlag, bool* PlayDeadAction);
	void InitializeBattleEnemy();
	void EnemyActionAnimation__FinishedFunc();
	void EnemyActionAnimation__UpdateFunc();
	void EnemyDeadAnimation__FinishedFunc();
	void EnemyDeadAnimation__UpdateFunc();
	void EnemyFadeInAnimation__FinishedFunc();
	void EnemyFadeInAnimation__UpdateFunc();
	void EnemyDamageRedBlink__FinishedFunc();
	void EnemyDamageRedBlink__UpdateFunc();
	void EnemyDamageVibration_M__FinishedFunc();
	void EnemyDamageVibration_M__UpdateFunc();
	void EnemyDamageWhiteBlink__FinishedFunc();
	void EnemyDamageWhiteBlink__UpdateFunc();
	void EnemyDamageVibration_S__FinishedFunc();
	void EnemyDamageVibration_S__UpdateFunc();
	void EnemyDamageVibration_L__FinishedFunc();
	void EnemyDamageVibration_L__UpdateFunc();
	void EnemyDeadKnockback__FinishedFunc();
	void EnemyDeadKnockback__UpdateFunc();
	void EnemyBreakAnimation__FinishedFunc();
	void EnemyBreakAnimation__UpdateFunc();
	void EnemyDamageVibration_B__FinishedFunc();
	void EnemyDamageVibration_B__UpdateFunc();
	void InvadeMonsterKnockBack__FinishedFunc();
	void InvadeMonsterKnockBack__UpdateFunc();
	void ChangeModeCrossFade__FinishedFunc();
	void ChangeModeCrossFade__UpdateFunc();
	void ChangeModeTransition__FinishedFunc();
	void ChangeModeTransition__UpdateFunc();
	void EnemySelectedBlinkLoop__FinishedFunc();
	void EnemySelectedBlinkLoop__UpdateFunc();
	void EnemySelectedBoostBlinkLoop__FinishedFunc();
	void EnemySelectedBoostBlinkLoop__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetBattleAlphaMode(bool Enable);
	void PlayBattleAction(enum class EBATTLE_ACTION_TYPE BattleAction, bool StackClear);
	void PlayDamageRedBlink();
	void PlayDamageVibration_M();
	void PlayDamageWhiteBlink();
	void PlayDamageVibration_S();
	void PlayDamageVibration_L();
	void PlayDeadKnockBack(const struct FVector& DefaultPosition);
	void PlayEnemyBlink();
	void PlayBreakAnimation(bool Break);
	void SuspendBreakAnimation();
	void ResumeBreakAnimation();
	void PlayDamageVibration_B();
	void Debug_SetUIPosition(const struct FVector& Position);
	void SetDamageAction(enum class EBATTLE_DAMAGE_TYPE DamageType);
	void CharacterRespawn();
	void PlayCallEnemyEnter(const struct FVector& DefaultPosition);
	void PlayInvadeMonsterReturn(bool IsPlayerSide);
	void PlayInvadeMonsterEnter(bool IsPlayerSide);
	void PlayCharacterAction(enum class EKSCharacterAction Label, enum class EKSCharacterDir Direction, bool StackClear);
	void NPCActionTick();
	void SetCharacterOpacity(float Opacity);
	void PlayChangeModeFade(class ABattleCharacterBase* OwnerCharacter, class FName NewActionLabel);
	void PlayChangeModeTransition(class ABattleCharacterBase* OwnerCharacter, class FName NewActionLabel);
	void SetWeaponEmissiveChannel(enum class EWEAPON_CATEGORY WeaponCategory, float Value);
	void FinishCallbackLoaded();
	void SetBattleSelectMaterial(bool Select, bool Boost);
	void ExecuteUbergraph_KSBattleCharacterEnemy(int32 EntryPoint);
};

}


