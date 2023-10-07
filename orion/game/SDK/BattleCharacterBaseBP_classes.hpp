#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2A1 (0x8D1 - 0x630)
// BlueprintGeneratedClass BattleCharacterBaseBP.BattleCharacterBaseBP_C
class ABattleCharacterBaseBP_C : public ABattleCharacterBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x630(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                               PlayHideoutAction_CanueMovement_CA276F844BFD9A3AB48B1196C6884576; // 0x638(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                PlayHideoutAction__Direction_CA276F844BFD9A3AB48B1196C6884576; // 0x644(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_154C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    PlayHideoutAction;                                 // 0x648(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ForceMovementTimeline_VectorOffset_FB34850E498904F635CA22BD6A5FE018; // 0x650(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ForceMovementTimeline_Opacity_FB34850E498904F635CA22BD6A5FE018; // 0x65C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ForceMovementTimeline_FloatRatio_FB34850E498904F635CA22BD6A5FE018; // 0x660(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                ForceMovementTimeline__Direction_FB34850E498904F635CA22BD6A5FE018; // 0x664(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_154D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    ForceMovementTimeline;                             // 0x668(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Anim_StepIn_Ratio_0BCD514A40154CD3ADA9F29C98D8D582; // 0x670(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Anim_StepIn__Direction_0BCD514A40154CD3ADA9F29C98D8D582; // 0x674(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_154E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Anim_StepIn;                                       // 0x678(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Anim_StepOut_Ratio_67A4894B4F2FAB3DB28BFEB34F30DF31; // 0x680(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Anim_StepOut__Direction_67A4894B4F2FAB3DB28BFEB34F30DF31; // 0x684(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_154F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Anim_StepOut;                                      // 0x688(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEnemy;                                           // 0x690(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsDead;                                            // 0x691(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1550[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AKSCharacterBase*                      AnimCharacter;                                     // 0x698(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPlayingTimeline;                                 // 0x6A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1551[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               StepPoint;                                         // 0x6A4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               StepStart;                                         // 0x6B0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1552[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_BattleAI_Base_C*                   BattleAI;                                          // 0x6C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsTameMonster;                                     // 0x6C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1553[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  RowId;                                             // 0x6CC(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BoostPoint_OLD;                                    // 0x6D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BreakPoint_Old;                                    // 0x6D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BoostMax;                                          // 0x6DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BreakMax_Old;                                      // 0x6E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBreak;                                           // 0x6E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         UseBoost;                                          // 0x6E5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsStepIn;                                          // 0x6E6(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsSelected;                                        // 0x6E7(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TMap<enum class EDISEASE_TYPE, struct FExecDiseaseHandler> CharacterDisease;                                  // 0x6E8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        HoldPoint;                                         // 0x738(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEnableCoverAction;                               // 0x73C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1554[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABattleSupporterBP_C*                  Supporter;                                         // 0x740(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABattleCharacterBaseBP_C*>      CoveredCharacter;                                  // 0x748(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         IsEnableCovered;                                   // 0x758(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         EnableSupporter;                                   // 0x759(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1555[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABattleCharacterBaseBP_C*              CoverTarget;                                       // 0x760(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABattleCharacterBaseBP_C*>      CoverCharacterList;                                // 0x768(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         SettledStealItem;                                  // 0x778(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1557[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TargetPriority;                                    // 0x77C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SettledStealMoney;                                 // 0x780(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1558[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<enum class ESUPPORT_AILMENT_TYPE>       SupportAilmentSwitch_OLD;                          // 0x788(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystemComponent*              ExCurseOfDeadEffect;                               // 0x7D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ActionTurnCounter;                                 // 0x7E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BaseWaitTime;                                      // 0x7E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DamageUICount;                                     // 0x7E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHardenDead;                                      // 0x7EC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1559[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TotalBreakCount;                                   // 0x7F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LastTurnCount;                                     // 0x7F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        BattleCharacterID;                                 // 0x7F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_155A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EDISEASE_TYPE, struct FExecDiseaseHandler> PermanentDisease;                                  // 0x800(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         DebugFixedUseAbility;                              // 0x850(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_155B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  DebugFixedUseAbilityLabel;                         // 0x854(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_155C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EWEAPON_CATEGORY, struct FItemData> WeaponItemData;                                    // 0x860(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        DiseaseCounter;                                    // 0x8B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRemoveFrozenOnDamage;                            // 0x8B4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsFinishCharmOnDead;                               // 0x8B5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EDISEASE_TYPE                     DiseaseType_ForHardenDead;                         // 0x8B6(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_155F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CurrentCaracterOpacity;                            // 0x8B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1560[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EDISEASE_TYPE>             AddDiseaseList;                                    // 0x8C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsEquipmentSuperMagic;                             // 0x8D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABattleCharacterBaseBP_C* GetDefaultObj();

	bool SetupActionOrderBlindFast(bool bEnable);
	bool CheckEnableSetCharaTransform();
	void SubActionTurnCount();
	bool IsGarderaAbility(class FName AbilityName);
	void PlayBreakUI();
	void SetExcitementPoint(class ABattleCharacterBase* CEnforcer, int32 NBoostLevel);
	void CheckDiseaseInAdvance();
	bool IsSelecterEffectVisibleSealAction();
	bool IsSelecterEffectVisibleBribe();
	bool IsSelecterEffectVisibleNormal();
	void GetCharacterGroggy(bool* IsGroggy, bool* EnableCurrentAction, bool* EnableNextAction);
	bool IsCharacterSupporter();
	void Debug_Draw_Character_Parameter();
	bool OnTakeDisease(class ABattleCharacterBase* CEnforcer, enum class EDISEASE_TYPE EDiseaseType, enum class EDISEASE_CATEGORY EDiseaseCategory, int32 NInvocationValue, int32 NBoostLevel, bool bIsNewDisease);
	struct FVector GetCursorPosition();
	void GetReplayStatus(bool bIsSelfTurn, enum class EBATTLE_REPLAY_CHARA_STATUS* EReplayStatus);
	void ResumeSubStatusUI();
	void HideSubStatusUI();
	void SearchEquipmentAilment(enum class EAILMENT_TYPE AilmentType, TArray<struct FAilmentHandler>* AilmentHandler, bool* Find);
	void GetDiseaseResist(enum class EDISEASE_TYPE EDiseaseType, enum class EATTRIBUTE_RESIST* EResistResult);
	bool PlayBattleVoice(enum class EBATTLE_VOICE_TYPE EBattleVoiceType, const struct FBattleVoiceSetData& CPlayCondition, bool bIsSkipDiseaseCheck);
	void ExecDisease_Shrink(int32 ExtensionTurn, enum class EDISEASE_CATEGORY ExtensionType);
	void PlayActionOrderIconDisappear();
	bool RemoveDiseaseForSequencer(class FName DiseaseName);
	bool AddDiseaseForSequencer(class FName DiseaseName, int32 InvocationValue, int32 InvocationTurn);
	void ExecDisease_Possession(bool* TurnSkip, float* WaitTime);
	void CalcDisease_SPRegenerationValue(struct FExecDiseaseHandler& DiseaseData, int32* RecoveryValue);
	void CalcDisease_HPRegenerationValue(struct FExecDiseaseHandler& DiseaseData, int32* RecoveryValue);
	bool EndBattleTurnForSubParty(float* FWaitTime);
	bool CheckPreparationSealing(enum class ECOMMAND_SUB_MENU_TYPE ESubMenuType);
	void SwitchDiseaseEffectVisibility(bool Visibility);
	void SearchEquipmentAilmentForUnique(enum class EAILMENT_TYPE AilmentType, struct FAilment* Ailment, struct FAilmentHandler* AilmentHandler, bool* Find);
	void CheckEnableBreakAct(struct FActionOrderData& CurrentOrderData, bool* Enable);
	void ExecGetBackBoostPoint(bool* ExecRegeneration, float* WaitTime);
	void SetDamageBPMax(int32 DamageValue);
	void RemoveDiseaseAllForCharm(bool* ExecRemove);
	void UpdateDisease_Charm(bool* TurnSkip, float* WaitTime);
	void UpdateDisease_Frozen(bool* TurnSkip, float* WaitTime);
	bool IsCharacterDisableAction();
	void OnTakeDisease_ForStealth(enum class EDISEASE_TYPE DiseaseType);
	bool UpdateChargeActionCount();
	struct FBattleAdditiveOrderData PopChargeActionData();
	bool AddChargeActionData(class FName StrAbilityName, TArray<class ABattleCharacterBase*>& AcTargetList);
	void ExecDisease_Frozen(bool* TurnSkip, float* WaitTime);
	bool CheckCharacterReviveEnable(bool bReviveAndRecovery);
	bool IsCharacterPinch();
	bool SearchDiseaseByCategoryForAI(enum class EDISEASE_CATEGORY DiseaseCategory);
	void ExecDisease_DarkFrame(bool* ExecPoison, float* WaitTime);
	bool CheckWrapAroundEnable(const struct FActionOrderData& CTargetOrderData, enum class EACTION_ORDER_TYPE ERequestType, bool bIsNextTurn, bool bMoveForward);
	bool CheckOverTakeEnable(const struct FActionOrderData& CTargetOrderData, enum class EACTION_ORDER_TYPE ERequestType, bool bIsNextTurn);
	bool CheckShuffleEnable();
	bool RemoveDiseaseForAI(enum class EDISEASE_TYPE DiseaseType);
	bool SearchDiseaseForAI(enum class EDISEASE_TYPE DiseaseType);
	bool AddDiseaseForAI(class FName DiseaseName, int32 InvocationValue, int32 InvocationTurn, class ABattleCharacterBase* Enforcer);
	struct FActionOrderData GetNextActionOrderData(int32 NOrderIndex);
	int32 GetActionTimeForCurrentTurn(enum class EACTION_ORDER_TYPE EType, float FDelayRatio);
	int32 GetActionTimeForNextTurn(enum class EACTION_ORDER_TYPE EType, float FDelayRatio);
	void PlayActionOrderIconRemove(bool RemoveCurrentOrder, bool RemoveNextOrder);
	void GetDiseaseEffectPosition(struct FVector* Position);
	bool BeginCharacterOrder(float* FWaitTime);
	void OnTakeDisease_ForDIseaseControl(enum class EDISEASE_TYPE DiseaseType, int32 InvocationValue);
	void OnTakeDisease_ForActionOrder(enum class EDISEASE_TYPE DiseaseType);
	void OnTakeDisease_ForTextMessage(enum class EDISEASE_TYPE DiseaseType, enum class EDISEASE_CATEGORY DiseaseCategory);
	void ExecDisease_ReboundSealAction(bool* TurnSkip, float* WaitTime);
	bool SetupActionOrderSealAction(bool bEnable);
	void Exec_Change_Permanent(int32 ChangeNum);
	void ExecSettingNextOrder(TArray<struct FRequestActionOrderData>& AcActionOrderData, bool bNextTurnOnly, bool bRequest);
	void InterruptCurrentOrder(const struct FRequestActionOrderData& CActionOrderData);
	void MoveLastNextOrder();
	void IsCharacterGroggy(bool* bIsGroggy, bool* bEnableCurrentAction, bool* bEnableNextAction);
	class USceneComponent* GetBattleEffectSocket(bool bGround);
	struct FVector GetDefaultWarpPosition();
	void Remove_Oldest_Disease(enum class EDISEASE_CATEGORY RemoveCategory, bool* Complete);
	void ExecDisease_Extension(int32 ExtensionTurn, enum class EDISEASE_CATEGORY ExtensionType);
	bool IsCharacterReady();
	bool CheckBoostPointMax();
	bool SetupActionOrderBribe(bool bEnable);
	bool SetupActionOrderBlind(bool bEnable);
	bool IsCharacterBreak();
	void PlayActionOrderIconBreak();
	void PlayActionOrderIconDown();
	void SetupActionOrderIconCharacter();
	void ConvertDiseaseToEffectSocket(enum class EDISEASE_TYPE DiseaseType, enum class EDEBUFF_ATTACHSOCKET_TYPE* NewParam);
	bool SetShieldPointMax(int32 NShieldMax);
	bool CheckLastOrderInTurn();
	bool CheckFirstOrderInTurn();
	class AKSCharacterBase* GetAnimationCharacter();
	void GetCharacterEvation(int32* Result, float* Ratio);
	void GetCharacterConcentrate(int32* Result, float* Ratio);
	void GetCharacterAccuracy(int32* Result, float* Ratio);
	void GetCharacterAgility(int32* Result, float* Ratio);
	void GetCharacterDefence(enum class EAILMENT_CALC_TYPE CalcType, int32* Result, float* Ratio);
	void GetCharacterAttack(enum class EAILMENT_CALC_TYPE CalcType, class ABattleCharacterBase* DamageTarget, int32* Result, float* Ratio);
	void GetPlayableCharacterID(enum class EPlayableCharacterID* ECharaID);
	void GetCharacterID(int32* NCharaID);
	class AActor* GetAnimationActorForAttach();
	bool IsCharacterEnemy();
	void ResetWeaponItemData();
	void Get_Equipment_Weapon_Texture(enum class EWEAPON_CATEGORY WeaponCategory, enum class EWEAPON_STANCE WeaponStance, bool IsNPC, class UTexture2D** WeaponTexture);
	void GetWeaponItemData(enum class EWEAPON_CATEGORY WeaponCategory, bool* Bool, struct FItemData* ItemData);
	void AddWeaponItemData(enum class EWEAPON_CATEGORY WeaponCategory, const struct FItemData& ItemData);
	bool IsCharacterDead();
	bool SetBoostPointMax(int32 NBoostMax);
	bool InitializeActionOrderData();
	void GetCharacterNPCFlag(bool* NPCFlag);
	void PlayEnemyBlink();
	void OnPostAction(bool* Result);
	void OrderCountControl(bool ForceNextOrder);
	void SetVisibleDiseaseEffect(bool Visible);
	void RemoveBreakEffect(bool* Result);
	void SetSupporterEnable(bool Enable);
	void DestroyExCurseOfDeadEffect();
	void SetSettledStealItem(bool Settled);
	void Get_Replay_Disease_Mask_OLD(int32* DiseaseMask);
	void GetDebugDrawParameterPosition(struct FVector* Position);
	void CheckEnableLastAct(bool* Enable);
	void On_Post_Remove_Disease(const struct FExecDiseaseHandler& DiseaseData, enum class EDISEASE_TYPE DiseaseType, bool* Return);
	void Debug_GetSupportCount(int32* Count);
	void Debug_GetSupportPoint(int32* Point);
	void Debug_GetMoney(int32* Money);
	void Debug_GetJobPoint(int32* JobPoint);
	void Debug_GetExp(int32* Exp);
	void SetDamageForPoison(int32 DamageValue, enum class EBATTLE_DAMAGE_TYPE DamageType, bool LastHit);
	void AddActionTurnCount();
	void RemoveDiseaseAllForHarden(bool* ExecRemove);
	void RemoveDiseaseAllForStealth(bool* ExecRemove);
	void Debug_GetUseAbilityList(TArray<class FText>* AbilityLabelList, int32* SelectIndex);
	void Debug_SetFixedUseAbility(class FName Label);
	void ResumePermanentDisease();
	void SavePermanentDisease();
	void SetBattleCharacterID(int32 BattleCharacterID);
	void GetBattleCharacterID(int32* BattleCharacterID);
	void AddExCurseOfDeadEffect(int32 ColorType);
	void ResetDamageUICount();
	void AddDamageUI();
	void UpdateStatusUI();
	void UpdateDisease_ExCurseOfDead(bool* Remove, float* WaitTime);
	void CheckEnableEscape(bool* Enable);
	void CheckEnableCounter(bool AttackHit, bool* Enable);
	void CheckEnableHideOut(bool* Enable);
	void ExecDisease_EscapeFailed(bool* TurnSkip, float* WaitTime);
	void SearchWeaponAbilityUP(int32* TotalInvocationValue, bool* Find);
	void SearchMagicAbilityUP(enum class EATTRIBUTE_TYPE Attribute, int32* TotalInvocationValue, bool* Find);
	void SetSettledStealMoney(bool Settled);
	void UpdateDisease_DragIn(bool* Remove, float* WaitTime);
	void GetActionTurnCount(int32* ActionTurnCount);
	void GetTotalBreakCount(int32* Count);
	void SetDamageHPMax(float Damage, int32 HPMinimum, bool IsRatio);
	void OnPreRemoveDisease(const struct FExecDiseaseHandler& DiseaseData, enum class EDISEASE_TYPE DiseaseType, bool* Return);
	void ExecDisease_Stone(bool* TurnSkip, float* WaitTime);
	void SearchMainWeaponAilment(enum class EAILMENT_TYPE AilmentType, struct FAilment* Ailment, struct FAilmentHandler* AilmentHandler, bool* Find);
	void FinishDamageUI();
	void EnemyEscape();
	void ExecDisease_Silence(float* WaitTime);
	void GetRecoveryLevelRatio(enum class EAILMENT_CALC_TYPE CalcType, float* LevelRatio, int32* BaseDEF);
	void SearchDiseaseByCategory(enum class EDISEASE_CATEGORY DiseaseCategory, TArray<struct FExecDiseaseHandler>* ExecHandler, bool* Enable);
	void CheckDiseaseSuccess(const struct FDisease& DiseaseData, bool* Success);
	void GetDamageLevelRatio(enum class EAILMENT_CALC_TYPE CalcType, float* LevelRatio, int32* BaseATK);
	void ExecDisease_OnDamage();
	void ExecDisease_Stun(bool* TurnSkip, float* WaitTime);
	void ExecDisease_Fear(float* WaitTime);
	void GetDebugTameRate(float* TameRate);
	void OnTakeDamageHP(class ABattleCharacterBaseBP_C* Enforcer, int32 DamageValue, enum class EWEAPON_CATEGORY WeaponType, enum class EATTRIBUTE_TYPE AttributeType, enum class EAILMENT_CALC_TYPE_OLD CalcType, bool* Return);
	void InitializeMultiActionOrderData();
	void Get_Disease_Effect_Label(class ABattleCharacterBase* Target, const struct FDisease& DiseaseData, class FName* Label, bool* SpawnGround, bool* UseAttach, bool* ChargeAction);
	void NoticePlayActionCommand(class FName ActionCommand);
	void RemoveDiseaseAll(bool* ExecRemove);
	void RemoveDiseaseByCategory(enum class EDISEASE_CATEGORY DiseaseCategory, bool ForceRemove, bool* ExecRemove);
	void ExecDisease_MPRegeneration(bool* ExecRegeneration, float* WaitTime);
	void ExecDisease_HPRegeneration(bool* ExecRegeneration, float* WaitTime);
	void ExecDisease_Poison(bool* ExecPoison, float* WaitTime);
	void ExecDisease_Blind(float* WaitTime);
	void ExecDisease_Sleep(bool* TurnSkip, float* WaitTime);
	void UpdateDiseaseCounter(enum class EDISEASE_TYPE Type, bool* Remove);
	void GetInvadeData(struct FInvadeData* EnemyData);
	void GetEnemyData(struct FEnemyData* EnemyData);
	void CalcMP_Ratio(int32 MP_Ratio, int32* CalcMP);
	void CheckNextBreakRestore(bool* Restore);
	void CalcNextTurnWaitTime();
	void CalcCurrentTurnWaitTime();
	void BeginAddBoostPoint();
	void GetCONDiseaseRatio(float* DiseaseRatio);
	void GetEVADiseaseRatio(float* DiseaseRatio);
	void GetACCDiseaseRatio(float* DiseaseRatio);
	void Debug_SetCharaParam_AGI(int32 Value);
	void Debug_SetCharaParam_CON(int32 Value);
	void Debug_SetCharaParam_EVA(int32 Value);
	void Debug_SetCharaParam_ACC(int32 Value);
	void Debug_SetCharaParam_MDEF(int32 Value);
	void Debug_SetCharaParam_MATK(int32 Value);
	void Debug_SetCharaParam_DEF(int32 Value);
	void Debug_SetCharaParam_ATK(int32 Value);
	void Debug_SetCharaParam_SPMAX(int32 Value);
	void Debug_SetCharaParam_BPMAX(int32 Value);
	void Debug_SetCharaParam_SP(int32 Value);
	void Debug_SetCharaParam_BP(int32 Value);
	void Debug_SetCharaParam_MPMAX(int32 Value);
	void Debug_SetCharaParam_HPMAX(int32 Value);
	void Debug_SetCharaParam_MP(int32 Value);
	void Debug_SetCharaParam_HP(int32 Value);
	void HideStatusUI();
	void ResumeStatusUI();
	void GetGuardEffectPosition(struct FVector* Position);
	void GetDamageUIPosition(int32 RevisionCount, struct FVector* WorldPos);
	void PlayCharacterAction(enum class EKSCharacterAction ActionType);
	void SetBreakPoint(int32 Value);
	void GetTakeDamageDiseaseRatio(enum class EAILMENT_CALC_TYPE CalcType, enum class EATTRIBUTE_TYPE Attribute, float* DamageRatio);
	void GetOnHitDamageDiseaseRatio(class ABattleCharacterBaseBP_C* Target, bool IsBoost, bool IsConvergence, enum class EAILMENT_CALC_TYPE CalcType, enum class EWEAPON_CATEGORY Weapon, enum class EATTRIBUTE_TYPE Attribute, enum class EABILITY_TYPE AbilityType, bool IsCompensation, bool IsCritical, class AActionCommandBase* ActionCommand, float* DiseaseRatio);
	void SetDamage_BP(int32 DamageValue);
	void SetDamage_MP(int32 DamageValue);
	void GetCharacterNameID(class FName* TextID);
	void SetAnalyze(bool AnalyzeEnable);
	void GetAGIDiseaseRatio(float* DiseaseRatio);
	void UpdateDiseaseTurnCount();
	void ClearCoverCharacter();
	void AddCoverCharacter(class ABattleCharacterBaseBP_C* CoverCharacter);
	void EndActionCovered(class ABattleCharacterBaseBP_C* EndCoverCharacter);
	void StartActionCovered(class ABattleCharacterBaseBP_C* CoveredCharacter);
	void SetCoverTarget(class ABattleCharacterBaseBP_C* CoverTarget);
	void GetCoveredCharacter(class ABattleCharacterBaseBP_C** CoverdCharacter, bool* IsCoverd);
	void SetSupporter(class ABattleSupporterBP_C* Supporter);
	void JudgeCover(bool* Success);
	void SetCoverEnable(bool Enable);
	void CoverStepOutForRandom();
	void RemoveDisease(enum class EDISEASE_TYPE DiseaseType, bool ForceRemove, bool* ExecRemove);
	void BeginBattleTurn(float* WaitTime);
	void HoldBoostPoint(int32 Point);
	void PlayBattleAction(enum class EBATTLE_ACTION_TYPE ActionType);
	void GetMDEFDiseaseRatio(float* DiseaseRatio);
	void GetDEFDiseaseRatio(float* DiseaseRatio);
	void GetUseItemRatio(float* Ratio);
	void GetAgilityOld(int32* Agility, float* Ratio);
	void GetSupporter(class ABattleSupporterBP_C** Supporter, bool* IsSupporter);
	void GetBattleAI(class UBP_BattleAI_Base_C** BattleAI);
	void CoverStepOut();
	void CoverStepInForRandom();
	void CoverStepIn();
	void GetCoverEnable(bool* Enable);
	void SetTargetSelect(bool Select);
	void GetCharacterActiveIcon(class UTexture2D** OrderIcon, class UTexture2D** FrontIcon, struct FVector2D* IconUV, struct FVector2D* PixelScale, struct FVector2D* CharaOffset, float* CharaScale, float* InvertX, class UTexture2D** WeaponIcon, struct FVector2D* CharaFootPivot);
	void GetCharacterOrderIcon(class UTexture2D** OrderIcon, struct FVector2D* IconUV, struct FVector2D* PixelScale, struct FVector2D* CharaOffset, float* Scale, float* InvertX, struct FVector2D* CharaFootPivot, bool* CharacterSwitch);
	void CommandPreview(class ABattleCharacterBaseBP_C* Enforcer, TArray<bool>& AttributeList);
	void SetWeakVisible(enum class EWEAPON_CATEGORY Weapon, enum class EATTRIBUTE_TYPE Attribute, bool CheckGroup);
	void GetWeaponRegist_OLD(enum class EWEAPON_CATEGORY AttackWeapon, bool CheckWeakLock, enum class EATTRIBUTE_RESIST* AttributeResist);
	void UpdateBreakCounter(bool* Restore);
	void SearchDisease(enum class EDISEASE_TYPE DiseaseType, struct FExecDiseaseHandler* ExecHandler, bool* Enable);
	void AddDisease(const struct FDiseaseHandler& AddDiseaseHandler, class ABattleCharacterBaseBP_C* Enforcer, int32 BoostLv, int32 AddRandomTurn, bool* Success, enum class EDISEASE_TYPE* AddType);
	void CheckBoostMax(bool* BoostMax);
	void GetEvasionOld(int32* Evasion, float* Ratio);
	void GetAccuracyOld(int32* Accuracy, float* Ratio);
	void GetConcentrateOld(int32* Concentrate, float* Ratio);
	void UpdateBreakGaugeUI();
	void UpdateBoostGaugeUI();
	void SetBreakPointDamage(int32 DamageValue, bool* Break);
	void ResetBreakPoint();
	void SubBreakPoint(int32 SubValue);
	void AddBreakPoint(int32 AddValue);
	void SetBoostPoint_OLD(int32 Value, bool Use);
	void SetFullBoostPoint();
	void SubBoostPoint(int32 SubValue, bool Use);
	void AddBoostPoint(int32 AddValue);
	void InitBreakPoint(int32 BreakMax);
	void InitBoostPoint(int32 InitPoint, int32 BoostMax);
	void SetRowID(class FName RowId);
	void GetRowID(class FName* RowId);
	void GetEffectSpawnPosition(bool Ground, struct FVector* Position);
	void SetMP(int32 NewMP, bool bOverHeal, int32* CurrentMP);
	void SetHP(int32 NewHP, bool bOverHeal, int32* CurrentHP);
	void PlayDamageUI(int32 DamageValue, enum class EBATTLE_DAMAGE_TYPE DamageType);
	void PlayMissUI();
	void GetMATKDiseaseRatio(float* DiseaseRatio);
	void UpdateSideCharacterUI();
	void SetupWaitTime();
	void GetATKDiseaseRatio(float* DiseaseRatio);
	void Update_Animation_State_OLD();
	void GetEnemyKindRate(int32 WeaponType, float* CompatibleRatio);
	void GetAttributeResist_OLD(enum class EATTRIBUTE_TYPE AttackAttribute, bool CheckWeakLock, enum class EATTRIBUTE_RESIST* AttributeResist);
	void GetCharacterDefenseOld(enum class EAILMENT_CALC_TYPE CalcType, int32* Result, float* Ratio);
	void GetCharacterAttackOld(enum class EAILMENT_CALC_TYPE_OLD CalcType, class ABattleCharacterBase* DamageTarget, int32* Result, float* Ratio);
	void GetBattleParameter(struct FCharacterParam* Param);
	void IsPlayingMove(bool* Moved);
	void CheckMP(int32 UseMP, bool* Result);
	void UseMP(int32 UseMP);
	void SetSelectMaterial(bool Select);
	void IsGuard(int32* GuardRatio, bool* GuardEnable);
	void SetGuard(bool GuardEnable);
	void CreateAnimCharacter(class FName ActionLabel);
	void BeginCharacterTurn_OLD(float* WaitTime);
	void SetDamage(int32 DamageValue, enum class EBATTLE_DAMAGE_TYPE DamageType, bool LastHit, bool InstantDeath);
	void EndStatusUI();
	void BeginStatusUI();
	void GetMP(int32* MP, int32* MPMax);
	void GetHP(int32* HP, int32* HPMax);
	void Anim_StepIn__FinishedFunc();
	void Anim_StepIn__UpdateFunc();
	void Anim_StepOut__FinishedFunc();
	void Anim_StepOut__UpdateFunc();
	void ForceMovementTimeline__FinishedFunc();
	void ForceMovementTimeline__UpdateFunc();
	void PlayHideoutAction__FinishedFunc();
	void PlayHideoutAction__UpdateFunc();
	void OnLoaded_2D59B0DC4715851A30B6B3BCB5715B51(TSubclassOf<class UObject> Loaded);
	void ReceiveDestroyed();
	void StepIn();
	void StepOut();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void FinishStepOut();
	void PlayEvasionAction(bool IsHideOut);
	void SetCharaTransform(const struct FTransform& CTransform);
	void SetupBaseTransform(enum class EBATTLE_CHARA_POSITION_RESET_TYPE EResetType, bool bEnableDeadCharacterControl);
	void CreateBattleAI(TSoftClassPtr<class UBattleAIBase>& CBattleAIClass, bool bAutoInitialize);
	void OnFinish_CreateBattleAI();
	void CreateBattleEffectSocket(const struct FVector& VEffectOffset);
	void SetCanoeTransform(const struct FTransform& CTransform);
	void ResetCanoeTransform();
	void SetCharacterOpacity(float FOpacity);
	void SetForceMovementTimelineCurve(class UCurveFloat* CMovementRatio, class UCurveVector* CMovementOffset, class UCurveFloat* COpacityCurve, float FTimelineLength);
	void StartForceMovementTimeline();
	void StopForceMovementTimeline();
	void SetVisibleCanoe(bool bVisible);
	void SetPotentialityAction_BodyColor(const struct FLinearColor& CColor);
	void SetPotentialityAction_EyesColor(float FAlpha);
	void FinishChangePartySequence();
	void ExecRevive(class ABattleCharacterBase* CEnforcer, int32 NReviveHP, bool bOverHeal, bool bUseRecoveryUI, bool bUseReviveVoice);
	void SetDeadFlagForReplay(bool bDeadFlag);
	void ResetBattleCharacterForReplay();
	void ResetVoiceFlagForPreAction();
	void SetGetBackBoostPoint(int32 NGetBackBoostPoint);
	void SetCharacterOpacityForActionCommand(float FOpacity);
	void ExecuteUbergraph_BattleCharacterBaseBP(int32 EntryPoint);
};

}


