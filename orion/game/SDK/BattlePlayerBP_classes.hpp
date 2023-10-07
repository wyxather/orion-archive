#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80A (0x10DB - 0x8D1)
// BlueprintGeneratedClass BattlePlayerBP.BattlePlayerBP_C
class ABattlePlayerBP_C : public ABattleCharacterBaseBP_C
{
public:
	uint8                                        Pad_1518[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PotentialityActionComponent_C*     BP_PotentialityActionComponent;                    // 0x8E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PlayInhaleMoveTimeline_Scale_A2FDC3714C8CE51035C787B0C6E843A4; // 0x8E8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                PlayInhaleMoveTimeline__Direction_A2FDC3714C8CE51035C787B0C6E843A4; // 0x8F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1519[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    PlayInhaleMoveTimeline;                            // 0x8F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PlayerHardenDeadKnockBackOffset_KnockbackOffset_CA9DB61B4625846E2AF3A3A73BAD8DAA; // 0x900(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                PlayerHardenDeadKnockBackOffset__Direction_CA9DB61B4625846E2AF3A3A73BAD8DAA; // 0x90C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_151A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    PlayerHardenDeadKnockBackOffset;                   // 0x910(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CoverStepOutTimeline_Ratio_3B70292C44B3AA02937476BA480F3297; // 0x918(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                CoverStepOutTimeline__Direction_3B70292C44B3AA02937476BA480F3297; // 0x91C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_151B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    CoverStepOutTimeline;                              // 0x920(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CoverStepInTimeline_Ratio_84DB8BD445D169665D3377B1E05FD08B; // 0x928(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                CoverStepInTimeline__Direction_84DB8BD445D169665D3377B1E05FD08B; // 0x92C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_151C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    CoverStepInTimeline;                               // 0x930(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EATTRIBUTE_RESIST>         AttributeResist;                                   // 0x938(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        PartyIndex;                                        // 0x948(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_151D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPartyCharacterData                   PartyCharaData;                                    // 0x950(0x3D4)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_151E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         ExecDownVoice;                                     // 0xD28(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_151F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FItemData>                     Equipment;                                         // 0xD30(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCharacterParam                       EquipmentParameter;                                // 0xD40(0x34)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                        Pad_1520[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBattleSelectPlayerStatus_C*           PlayerStatusUI;                                    // 0xD78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ExecCoverStep;                                     // 0xD80(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1521[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CoverStepStart;                                    // 0xD84(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CoverStepPoint;                                    // 0xD90(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NextWaitTimeRevision;                              // 0xD9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EATTRIBUTE_TYPE, int32>      MigicResist;                                       // 0xDA0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         ExecHardenDeadEffect;                              // 0xDF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1522[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UpdateDiseaseWaitTime;                             // 0xDF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_BattleSelectSubPlayerStatus_C*    Sub_Status_UI;                                     // 0xDF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  FirstCommandID;                                    // 0xE00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  SecondCommandID;                                   // 0xE08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ThirdCommandID;                                    // 0xE10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBattleDeathCount_C*                   DiseaseDoomStatus;                                 // 0xE18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBattleReplayPlayerData               ReplayPlayerData;                                  // 0xE20(0x20)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsReplayMode;                                      // 0xE40(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsTurnONStatusUI;                                  // 0xE41(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1523[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            PlayerActiveIcon;                                  // 0xE48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            PlayerActiveFrontIcon;                             // 0xE50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            PlayerOrderIcon;                                   // 0xE58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnablePlayerOrderIcon;                             // 0xE60(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         EnablePlayerActiveIcon;                            // 0xE61(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         WaterSideMode;                                     // 0xE62(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         EnableFrontOrderIcon;                              // 0xE63(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1524[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKSSpriteData                         ActionIconSpriteData;                              // 0xE68(0x90)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKSSpriteData                         OrderIconSpriteData;                               // 0xEF8(0x90)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCharacterActionResource              CharacterActionResouceData;                        // 0xF88(0xC0)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                  PlayerActionLabel;                                 // 0x1048(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PartyMemberNum;                                    // 0x1050(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInvMinusParam;                                   // 0x1054(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1525[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          Equipment_Texture_Label;                           // 0x1058(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         LoadWeaponResoureceFinish;                         // 0x1068(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         LoadCharacterFinish;                               // 0x1069(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EBATTLE_DRAG_IN_TYPE              ExecDragInType;                                    // 0x106A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1526[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EWEAPON_CATEGORY, enum class EATTRIBUTE_TYPE> EnchantAttributeByWeapon;                          // 0x1070(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         BPRegeneration;                                    // 0x10C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1527[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          EquipmentLabelList;                                // 0x10C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         WorkIsOverHeal;                                    // 0x10D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         FinishCoverAction;                                 // 0x10D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsDisablePlayVoice;                                // 0x10DA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABattlePlayerBP_C* GetDefaultObj();

	void GetReviveOrderType(enum class EACTION_ORDER_TYPE* OrderType);
	void GetDisablePlayVoice(bool* IsDisablePlayVoice);
	bool CheckEnableSetCharaTransform();
	void UpdatePotentinalityActionUI();
	void SwitchDiseaseEffectVisibility(bool Visibility);
	void PlayActionOrderIconDown();
	bool OnHitDamageSP(bool bIsBreakAttack);
	bool CanPlayVoiceWhileDisease(enum class EBATTLE_VOICE_TYPE BattleVoiceType);
	void SetDoomUIParameter(class ABattleManagerBP_C* BattleManager_OLD, const struct FExecDiseaseHandler& DiseaseHandle, class UBattleDeathCount_C** DoomUI, int32* DeathCount, int32* ColorType);
	bool ResetSelectWeaponForMasquerade(enum class EWEAPON_CATEGORY ETargetWeapon);
	TArray<class FName> GetEquipmentLabelList();
	void ClearEquipmentDataForMasquerade();
	void CheckExecDiseaseForPostOrder(bool* bEnable);
	void CheckDiseaseInAdvance();
	void SetBestMagicDeffenceWeapon();
	void SetBestPhysicsDeffenceWeapon();
	bool SwitchCatapultWeapon(bool bDirNext, int32* NWeaponIndex);
	bool BeginCharacterOrder(float* FWaitTime);
	void IsReleaseWeaponTexture(bool* IsRelease);
	void UnloadWeaponTexture();
	void GetRecoveredVoiceEnforcer(class ABattleCharacterBase* InEnforcer, class ABattleCharacterBase** OutEnforcer);
	bool CanPlayRecoveredVoice(class ABattleCharacterBase* Enforcer);
	bool OnTakeDisease(class ABattleCharacterBase* CEnforcer, enum class EDISEASE_TYPE EDiseaseType, enum class EDISEASE_CATEGORY EDiseaseCategory, int32 NInvocationValue, int32 NBoostLevel, bool bIsNewDisease);
	bool OnTakeNewDisease(enum class EDISEASE_TYPE EDiseaseType);
	bool PlayBattleVoice(enum class EBATTLE_VOICE_TYPE EBattleVoiceType, const struct FBattleVoiceSetData& CPlayCondition, bool bIsSkipDiseaseCheck);
	bool GetEnchantAttribute(enum class EWEAPON_CATEGORY ECheckWeapon, enum class EATTRIBUTE_TYPE* EEnchantAttribute);
	struct FVector GetCurrentPosition();
	void GetReplayDiseaseMask(int32* NDiseaseMask);
	void GetCharacterJob(enum class EJOB_TYPE* EFirstJob, enum class EJOB_TYPE* ESecondJob, bool* bEnableSecondJob);
	void GetCharacterJobByRowID(int32* NFirstJob, int32* NSecondJob);
	void GetReplayStatus(bool bIsSelfTurn, enum class EBATTLE_REPLAY_CHARA_STATUS* EReplayStatus);
	bool UpdateSubStatusParam(bool UpdateBoost, bool UpdatePotential);
	bool IsCharacterDecondition();
	void CheckCharacterReady();
	bool PlayBattleVoiceForDamage(int32 NDamageValue, class AActionCommandBase* CActionCommand);
	void SearchEquipmentAilment(enum class EAILMENT_TYPE AilmentType, TArray<struct FAilmentHandler>* AilmentHandler, bool* Find);
	void GetCharacterName(class FText* StrCharacterName);
	void CalcDecreaseValue(float DecValue, int32 MinHP, int32* RetValue);
	bool DecideActionForSubParty(float* FWaitTime);
	bool UpdateStatusParam(bool UpdateBoost, bool UpdatePotential);
	bool TurnONStatusUI();
	bool TurnOffStatusUI();
	void SearchEquipmentAilmentForUnique(enum class EAILMENT_TYPE AilmentType, struct FAilment* Ailment, struct FAilmentHandler* AilmentHandler, bool* Find);
	class FName GetCharmEnemyLabel();
	TArray<struct FItemData> GetEquipmentList();
	TArray<enum class EWEAPON_CATEGORY> GetEquipmentWeaponCategory();
	void ClearEquipmentData();
	void GetPartyCharaData(struct FPartyCharacterData* PartyCharaData);
	bool AddMaxHP(int32 NAdditiveMaxHP);
	bool SwitchMainWeapon(bool bDirNext, int32* NWeaponIndex);
	void SetMasterParameter();
	void MakeDefaultEquipmentItem(enum class EEQUIPMENT_PART EquipmentPart, struct FItemData* ItemData);
	bool CheckEquipmentWeapon(enum class EWEAPON_CATEGORY ECheckWeapon);
	bool SwitchNormalAttackWeapon(bool bDirNext, int32* NWeaponIndex);
	bool ChangeMainWeapon(enum class EWEAPON_CATEGORY ETargetWeapon, bool bUseWeaponTexture);
	void GetMainWeaponParameter(struct FCharacterParam* EquipmentRevision);
	bool IsCharacterDeadlySense();
	bool FinishPotentialityAction(bool bCheckResume);
	bool AddPotentialityActionPoint(int32 NAddPoint, bool bIgnore);
	bool OnHitDamageHP(bool bIsBreakAttack, bool bIsBreakTarget, enum class EATTRIBUTE_RESIST ETotalResist, enum class EATTRIBUTE_RESIST EWeaponResist);
	void GetDiseaseEffectPosition(struct FVector* Position);
	void ReleasePotentialityAction();
	bool EndCharacterOrder(float* FWaitTime);
	bool SetupSubAnimationCharacter(TArray<class ABattleCharacterBase*>& AcTarget, const struct FVector& CCommandOffset);
	bool ExecStartCharacterWarp();
	bool ExecEndCharacterWarp();
	void CheckPotentialityActionRelease();
	bool SaveCharacterParameter();
	void PlayVictoryAction(bool UseVictoryAction);
	void CalcAddBoostPoint(int32* AddPoint);
	void AddDiseaseForReplay(int32 Status, enum class EDISEASE_TYPE_BITMASK DiseaseType_);
	void On_Post_Remove_Disease(const struct FExecDiseaseHandler& DiseaseData, enum class EDISEASE_TYPE DiseaseType, bool* Return);
	void OnPreRemoveDisease(const struct FExecDiseaseHandler& DiseaseData, enum class EDISEASE_TYPE DiseaseType, bool* Return);
	void SetBestPhysicsAttackWeapon();
	void InstantStepInForReplay();
	void Debug_GetJobPoint(int32* JobPoint);
	void Debug_GetExp(int32* Exp);
	void Debug_GetMoney(int32* Money);
	void InitEquipmentDataForReplayMode();
	void InitializeReplayModeStatus();
	void InitializeReplayMode(const struct FBattleReplayPlayerData& ReplayData, enum class EEndRollSegmentSet ReplaySegment);
	void GetOnHitDamageDiseaseRatio(class ABattleCharacterBaseBP_C* Target, bool IsBoost, bool IsConvergence, enum class EAILMENT_CALC_TYPE CalcType, enum class EWEAPON_CATEGORY Weapon, enum class EATTRIBUTE_TYPE Attribute, enum class EABILITY_TYPE AbilityType, bool IsCompensation, bool IsCritical, class AActionCommandBase* ActionCommand, float* DiseaseRatio);
	void SearchWeaponAbilityUP(int32* TotalInvocationValue, bool* Find);
	void SearchMagicAbilityUP(enum class EATTRIBUTE_TYPE Attribute, int32* TotalInvocationValue, bool* Find);
	void SetBestMagicAttackWeapon();
	void UpdateDisease_DragIn(bool* Remove, float* WaitTime);
	void SearchMainWeaponAilment(enum class EAILMENT_TYPE AilmentType, struct FAilment* Ailment, struct FAilmentHandler* AilmentHandler, bool* Find);
	void OnTakeDamageHP(class ABattleCharacterBaseBP_C* Enforcer, int32 DamageValue, enum class EWEAPON_CATEGORY WeaponType, enum class EATTRIBUTE_TYPE AttributeType, enum class EAILMENT_CALC_TYPE_OLD CalcType, bool* Return);
	void UpdateDiseaseCounter(enum class EDISEASE_TYPE Type, bool* Remove);
	void GetRecoveryLevelRatio(enum class EAILMENT_CALC_TYPE CalcType, float* LevelRatio, int32* BaseDEF);
	void GetDamageLevelRatio(enum class EAILMENT_CALC_TYPE CalcType, float* LevelRatio, int32* BaseATK);
	void GetTakeDamageDiseaseRatio(enum class EAILMENT_CALC_TYPE CalcType, enum class EATTRIBUTE_TYPE Attribute, float* DamageRatio);
	void InitDiseaseResist(TArray<struct FItemData>& CharaEquipment);
	void SetDamageForPlayer(int32 DamageValue, bool IsPoisonDamage, bool InstantDeath);
	void SetStatusDead();
	void GetAttributeResist_OLD(enum class EATTRIBUTE_TYPE AttackAttribute, bool CheckWeakLock, enum class EATTRIBUTE_RESIST* AttributeResist);
	void ExecDisease_Poison(bool* ExecPoison, float* WaitTime);
	void GetMP(int32* MP, int32* MPMax);
	void GetHP(int32* HP, int32* HPMax);
	void InitializeSupportAbility();
	void GetAccuracyOld(int32* Accuracy, float* Ratio);
	void GetEvasionOld(int32* Evasion, float* Ratio);
	void GetAgilityOld(int32* Agility, float* Ratio);
	void GetConcentrateOld(int32* Concentrate, float* Ratio);
	void CheckLevelMax(bool* LevelMax);
	void GetCommandDetail(TArray<class FName>* UniqueCommandDetail, class FName* FirstJobCommandDeatil, class FName* SecondJobCommandDetail);
	void PlayBattleVoice_Boost(int32 BoostLv);
	void GetCharacterDefenseOld(enum class EAILMENT_CALC_TYPE CalcType, int32* Result, float* Ratio);
	void GetCharacterAttackOld(enum class EAILMENT_CALC_TYPE_OLD CalcType, class ABattleCharacterBase* DamageTarget, int32* Result, float* Ratio);
	void GetCharacterNameID(class FName* TextID);
	void GetCommandName(TArray<class FName>* UniqueCommandName, class FName* FirstJobCommandName, class FName* SecondJobCommandName);
	void JudgeCover(bool* Success);
	void BeginBattleTurn(float* WaitTime);
	void GetSupporter(class ABattleSupporterBP_C** Supporter, bool* IsSupporter);
	void GetCharacterLevel(int32* Level);
	void GetCharacterOrderIcon(class UTexture2D** OrderIcon, struct FVector2D* IconUV, struct FVector2D* PixelScale, struct FVector2D* CharaOffset, float* Scale, float* InvertX, struct FVector2D* CharaFootPivot, bool* CharacterSwitch);
	void GetCharacterActiveIcon(class UTexture2D** OrderIcon, class UTexture2D** FrontIcon, struct FVector2D* IconUV, struct FVector2D* PixelScale, struct FVector2D* CharaOffset, float* CharaScale, float* InvertX, class UTexture2D** WeaponIcon, struct FVector2D* CharaFootPivot);
	void GetEffectSpawnPosition(bool Ground, struct FVector* Position);
	void PlayerStepOut();
	void PlayerStepIn();
	void BeginCharacterTurn_OLD(float* WaitTime);
	void PlayLevelupAction();
	void GetCommandList(bool IncludeAdvancedAbility, TArray<class FName>* UniqueCommandList, TArray<class FName>* FirstJobCommandList, TArray<class FName>* SecondJobCommandList);
	void InitAttributeResist(TArray<struct FItemData>& CharaEquipment, TArray<enum class EATTRIBUTE_RESIST>* AttributeResist);
	void InitEquipmentData(const struct FSaveEquipmentData& Equipment, bool ForMasquerade);
	void Initialize(const struct FPartyCharacterData& CharacterData, int32 Index, int32 MemberNum, const struct FVector& CharaStepPoint, bool WaterSide);
	void CoverStepInTimeline__FinishedFunc();
	void CoverStepInTimeline__UpdateFunc();
	void CoverStepOutTimeline__FinishedFunc();
	void CoverStepOutTimeline__UpdateFunc();
	void PlayerHardenDeadKnockBackOffset__FinishedFunc();
	void PlayerHardenDeadKnockBackOffset__UpdateFunc();
	void PlayInhaleMoveTimeline__FinishedFunc();
	void PlayInhaleMoveTimeline__UpdateFunc();
	void OnLoaded_77C0C68E4E9D6EF680DE1AAB26F62989(class UObject* Loaded);
	void OnLoaded_F5FBC5B74DA43B905CD8659E682C847E(class UObject* Loaded);
	void OnLoaded_EADE36EE4527E711872AD48813213439(class UObject* Loaded);
	void SetDamage(int32 DamageValue, enum class EBATTLE_DAMAGE_TYPE DamageType, bool LastHit, bool InstantDeath);
	void UseMP(int32 UseMP);
	void Update_Animation_State_OLD();
	void SetDamage_MP(int32 DamageValue);
	void SetDamage_BP(int32 DamageValue);
	void SetDamageHPMax(float Damage, int32 HPMinimum, bool IsRatio);
	void SetDamageForPoison(int32 DamageValue, enum class EBATTLE_DAMAGE_TYPE DamageType, bool LastHit);
	void RecoveryMP(class ABattleCharacterBase* CEnforcer, int32 NValue, bool bOverHeal, bool bUseRecoveryUI, bool bIsMeatItem);
	void RecoveryHP(class ABattleCharacterBase* CEnforcer, int32 NValue, bool bOverHeal, bool bUseRecoveryUI, bool bIsMeatItem);
	void SetDamageBPMax(int32 DamageValue);
	void ExecRevive(class ABattleCharacterBase* CEnforcer, int32 NReviveHP, bool bOverHeal, bool bUseRecoveryUI, bool bUseReviveVoice);
	void RecoveryBP(class ABattleCharacterBase* CEnforcer, int32 NValue, bool bUseRecoveryUI, bool bIsMeatItem);
	void RecoveryPotentialityActionPoint(class ABattleCharacterBase* CEnforcer, int32 NValue, bool bUseRecoveryUI, bool bIsMeatItem);
	void EndStatusUI();
	void UpdateBoostGaugeUI();
	void OpenStatusUI();
	void CloseStatusUI();
	void HideStatusUI();
	void ResumeStatusUI();
	void BeginPlayerUI(class UBattleSelectPlayerStatus_C* StatusUI, class UWBP_BattleSelectSubPlayerStatus_C* SubStatusUI, class UBattleDamageNumber_C* DamageUI);
	void UpdateSideCharacterUI();
	void UpdateStatusUI();
	void OpenSubStatusUI();
	void CloseSubStatusUI();
	void UpdateSubStatusUI();
	void UpdateSubBoostGaugeUI();
	void SetOrderIcon();
	void HideSubStatusUI();
	void ResumeSubStatusUI();
	void CreateAnimCharacter(class FName ActionLabel);
	void ReceiveDestroyed();
	void ChangeAnimCharacter(class FName ActionLabel, bool HidePotUI);
	void CoverStepIn();
	void CoverStepOut();
	void BeginAddBoostPoint();
	void CalcNextTurnWaitTime();
	void PlayBlowAwayMove();
	void ReturnBlowAway();
	void PlayHardenDeadKnockBack();
	void PlayDragInMove(enum class EBATTLE_DRAG_IN_TYPE DragInType);
	void ReturnDragIn();
	void LoadActionOrderIcon();
	void PlayEscapeSuccess();
	void PlayEscapeFailed();
	void FinishStepOut();
	void ResumeMasquerade(bool WaitAction);
	void CreateSubAnimationCharacter(int32 NCreateNum);
	void DeadDragIn();
	void PlayCharmEscape();
	void ReturnCharmEscape();
	void Debug_ChangeSecondJob(int32 SecondJobID);
	void ExecBlowAwayAction(class ABattleCharacterBase* Enforcer, int32 NInvocationTurn);
	void ExecDragInAction(class ABattleCharacterBase* Enforcer, int32 NInvocationTurn, enum class EBATTLE_DRAG_IN_TYPE EDragInType);
	void ExecCharmAction(class ABattleCharacterBase* Enforcer);
	void ExecReturnCharmAction();
	void ExecSwitchSlidePartyMainToSub();
	void ExecSwitchSlidePartySubToMain();
	void LoadWeaponTexture();
	void WeaponTextureLoadFinish();
	void PlayCaptureMove();
	void ReturnCaptureMove();
	void CoverStepInForRandom();
	void SetDefaultLocation(bool bInMainParty);
	void CoverStepOutForRandom();
	void ExecuteUbergraph_BattlePlayerBP(int32 EntryPoint);
};

}


