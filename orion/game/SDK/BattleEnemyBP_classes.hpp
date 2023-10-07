#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x424 (0xCF5 - 0x8D1)
// BlueprintGeneratedClass BattleEnemyBP.BattleEnemyBP_C
class ABattleEnemyBP_C : public ABattleCharacterBaseBP_C
{
public:
	uint8                                        Pad_1529[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBattleEnemyStatus_C*                  StatusUI;                                          // 0x8E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEnemyData                            EnemyData;                                         // 0x8E8(0x20E)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_152A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EATTRIBUTE_RESIST>         AttributeResist;                                   // 0xAF8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsAnalyse;                                         // 0xB08(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_152B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              BreakEffect;                                       // 0xB10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDeadEffect;                                      // 0xB18(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         EnemyForReserve;                                   // 0xB19(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_152C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NextWaitTimeRevision;                              // 0xB1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableWeakLock;                                    // 0xB20(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_152D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<bool>                                 WeakWeaponLockData;                                // 0xB28(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<bool>                                 WeakAttributeLockData;                             // 0xB38(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<enum class EDISEASE_TYPE>             ThisTurnAddDisease;                                // 0xB48(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<enum class EWEAPON_CATEGORY>          ThisTurnDamageWeapon;                              // 0xB58(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<enum class EATTRIBUTE_TYPE>           ThisTurnDamageAttribute;                           // 0xB68(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        WeaknessOpen;                                      // 0xB78(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NoResult;                                          // 0xB7C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IconTextureLLoadFinish;                            // 0xB7D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_152E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            IconTextureLResource;                              // 0xB80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAnyDamage;                                       // 0xB88(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsReplayMode;                                      // 0xB89(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_152F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBattleReplayEnemyData                ReplayEnemyData;                                   // 0xB8C(0x1D)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1530[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         DoExRotten;                                        // 0xBAC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsReplayBreak;                                     // 0xBAD(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IconTextureSLoadFinish;                            // 0xBAE(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1531[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            IconTextureSResource;                              // 0xBB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseBreakEffectSocket;                              // 0xBB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         BattleIdleLoadFinish;                              // 0xBB9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IdleLoadFinish;                                    // 0xBBA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         BattleIdleFrontLoadFinish;                         // 0xBBB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1532[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            NPCIdleTexture;                                    // 0xBC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            NPCBattleIdleTexture;                              // 0xBC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            NPCFrontBattleIdleTexture;                         // 0xBD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterResourceData                CurrentResourceData;                               // 0xBD8(0xC8)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsSpecialAction;                                   // 0xCA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1533[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LastEffectPosition;                                // 0xCA4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LastDamageUIPosition;                              // 0xCB0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LastStatusUIPosition;                              // 0xCBC(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LastDiseaseEffectPosition;                         // 0xCC8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSettledDeadPattern;                              // 0xCD4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsUnableAttack;                                    // 0xCD5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsForceDead;                                       // 0xCD6(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         NPCWeaponTextureLoadFinish;                        // 0xCD7(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class FName>                          EquipmentTextureLabel;                             // 0xCD8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                  Equipment_Weapon_ID;                               // 0xCE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLoadFlipbook;                                    // 0xCF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         UseLOrderResourceFromNPC;                          // 0xCF1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         UseSOrderResourceFromNPC;                          // 0xCF2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         InBattleLoadedFlag;                                // 0xCF3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         EnableDeadChangeActionMode;                        // 0xCF4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABattleEnemyBP_C* GetDefaultObj();

	void InitializeStatusUIIfNeeded(class UBattleEnemyStatus_C* NewParam);
	void SetSuccessRateRenderPosition(bool NewParam);
	void InitializeMultiActionOrderData();
	bool UpdateRequestSettingNextOrder_PostOrder();
	void CheckExecDiseaseForPostOrder(bool* bEnable);
	bool ChangeMainWeapon(enum class EWEAPON_CATEGORY ETargetWeapon, bool bUseWeaponTexture);
	class FName GetAbilityData(int32 NIndex);
	void UpdateDiseaseTurnCount();
	void UpdateStatusUI();
	bool OnTakeDisease(class ABattleCharacterBase* CEnforcer, enum class EDISEASE_TYPE EDiseaseType, enum class EDISEASE_CATEGORY EDiseaseCategory, int32 NInvocationValue, int32 NBoostLevel, bool bIsNewDisease);
	bool OnTakeNewDisease(enum class EDISEASE_TYPE EDiseaseType);
	bool ChangeActionModeForGaldera();
	struct FVector GetCursorPosition();
	struct FVector GetCurrentPosition();
	bool IsCharacterNonPartsBattle();
	void GetTameMonsterData(bool* bTameEnable, float* FTameRateBase);
	void OverrideEnemyDataByNPCData(struct FNPCData& NPCData);
	void ExecRevive(class ABattleCharacterBase* CEnforcer, int32 NReviveHP, bool bOverHeal, bool bUseRecoveryUI, bool bUseReviveVoice);
	void InitializeDiseaseResist(TArray<enum class EATTRIBUTE_RESIST>& DiseaseResist);
	void SetCharacterName(class FName StrCharacterNameLabel);
	void GetCharacterName(class FText* StrCharacterName);
	struct FVector2D GetEquipStanceOffset();
	bool ApplyChangeActionMode();
	void Debug_SetEnemyData(const struct FEnemyData& NewEnemyData);
	bool Debug_SetActionDelaySEData(TArray<struct FActionDelaySEData>& CSEData);
	bool Debug_GetActionDelaySEData(TArray<struct FActionDelaySEData>* CSEData);
	enum class EKSCharacterAction Get_Battle_Idle_from_Equip_Category();
	void CheckWeaponWeakOpen(enum class EWEAPON_CATEGORY EWeaponCategory, bool* bOpened);
	void CheckAttributeWeakOpen(enum class EATTRIBUTE_TYPE EAttributeType, bool* bOpened);
	void GetWeaponResist(enum class EWEAPON_CATEGORY EAttackWeapon, bool bCheckWeakLock, enum class EATTRIBUTE_RESIST* EResistResult);
	void GetAttributeResist(enum class EATTRIBUTE_TYPE EAttackAttribute, bool bCheckWeakLock, enum class EATTRIBUTE_RESIST* EResistResult);
	void GetDelayEnemyActionSE(TArray<struct FActionDelaySEData>* AcActionDelaySEData, bool* bEnable);
	void GetWaitEnemyActionFrame(int32* NWaitFrame);
	void GetCharacterVoice_BattleStart(class FName* StrVoiceID, bool* bFindVoiceID);
	bool SurveyOpenedWeakPoint(int32* NOpenedNum, int32* NWeakPointMax);
	void Exec_Disease_Pointing_Weapon(const struct FDisease& DiseaseData, bool IsRandom, int32 WeakLockNum, float* EnemyWaitTime);
	void ConvertWeaponListToWeakLock(TArray<enum class EWEAPON_CATEGORY>& WeaponList, int32* WeakAttributeMask);
	bool CheckEnableStealthActionOrder();
	void AddEquipmentWeaponList(int32 WeaponIndex);
	bool UpdateWeakLock_PostOrder();
	bool UpdateWeakChange_PostOrder();
	bool UpdateShieldChange_PostOrder();
	void OnTakeDisease_ForStealth(enum class EDISEASE_TYPE DiseaseType);
	bool CheckEnableStealthTarget();
	bool CheckEnableStealthCursor();
	void On_Post_Remove_Disease(const struct FExecDiseaseHandler& DiseaseData, enum class EDISEASE_TYPE DiseaseType, bool* Return);
	bool GetOpenedAttribute(int32 NIndex, enum class EATTRIBUTE_TYPE* EResult);
	bool CreateOpenedAttributeList(int32* NAttributeNum, int32* NAttributeMax);
	void GetDiseaseEffectPosition(struct FVector* Position);
	void InitializeSpriteSocketData();
	void GetDamageUIPosition(int32 RevisionCount, struct FVector* WorldPos);
	void GetEnemyEffectPosition(struct FVector* EffectPosition);
	void GetStatusUIPosition(struct FVector* UIPosition);
	bool RestoreGroggy();
	void CommandPreview(class ABattleCharacterBaseBP_C* Enforcer, TArray<bool>& AttributeList);
	struct FVector GetDefaultWarpPosition();
	void IsPlayBattleAction(bool* Playing);
	bool IsCharacterReady();
	bool SetWeakIconFullOpen(bool bIsFullOpen);
	bool IsWeakIconFullOpen();
	bool CheckExecedPreparation();
	bool OpenWeakIcon(int32 NIndex, bool bRandom, bool bPreparation, bool bPlay2nd, int32* bOpenIndex);
	void SetWeaponTexture();
	bool GetBribeData(bool* BribeEnable, int32* BribeMoney);
	bool IsCharacterNPC();
	bool AddBribeCounter();
	bool SetEnableWeakChangeData();
	bool SetEnableShieldChangeData();
	bool RequestWeakChange(const struct FWeakChangeData& CNewWeakChangeData);
	bool RequestShieldChange(const struct FShieldChangeData& CNewShieldChangeData);
	bool RequestWeakLock(const struct FWeakLockData& CNewWeakLockData);
	bool SetEnableWeakLockData();
	void PlayCharacterAction(enum class EKSCharacterAction ActionType);
	void CreateAnimCharacter(class FName ActionLabel);
	void GetCharacterNPCFlag(bool* NPCFlag);
	bool ChangeActionMode(bool bIsSpecial, int32 NModeIndex, bool bUseTransition);
	void RemoveBreakEffect(bool* Result);
	void GetDebugDrawParameterPosition(struct FVector* Position);
	void AddDiseaseForReplay(int32 Status, enum class EDISEASE_TYPE_BITMASK DiseaseType);
	void SetDamageForEnemy(int32 Value, enum class EBATTLE_DAMAGE_TYPE Type, bool LastHit, bool IsPoison, bool InstantDeath);
	void Debug_GetMoney(int32* Money);
	void Debug_GetJobPoint(int32* JobPoint);
	void Debug_GetExp(int32* Exp);
	void Debug_GetUseAbilityList(TArray<class FText>* AbilityLabelList, int32* SelectIndex);
	void InitializeReplayModeStatus();
	void InitializeReplayMode(const struct FEnemyData& EnemyData, class FName EnemyRowID, const struct FBattleReplayEnemyData& ReplayData);
	void SetCallEnemyWeaken(int32 HPRatio, int32 SubShieldPoint);
	bool RestoreBreak();
	void SetAttributeWeakOpen(enum class EATTRIBUTE_TYPE Attribute);
	void SetWeaponWeakOpen(enum class EWEAPON_CATEGORY Weapon);
	void CheckAttributeWeakOpen_OLD(enum class EATTRIBUTE_TYPE Attribute, bool* Open);
	void CheckWeaponWeakOpen_OLD(enum class EWEAPON_CATEGORY Weapon, bool* Open);
	void OnTakeDamageHP(class ABattleCharacterBaseBP_C* Enforcer, int32 DamageValue, enum class EWEAPON_CATEGORY WeaponType, enum class EATTRIBUTE_TYPE AttributeType, enum class EAILMENT_CALC_TYPE_OLD CalcType, bool* Return);
	void GetRecoveryLevelRatio(enum class EAILMENT_CALC_TYPE CalcType, float* LevelRatio, int32* BaseDEF);
	void InitializeWeakControlData();
	void ClearEnableWeakLockData();
	void JudgeCover(bool* Success);
	void GetDamageLevelRatio(enum class EAILMENT_CALC_TYPE CalcType, float* LevelRatio, int32* BaseATK);
	void GetDebugTameRate(float* TameRate);
	void InitializeForReserve(int32 TargetPriority);
	void RespawnInitialize(const struct FEnemyData& EnemyData, class FName EnemyRowID, class FName EquipmentWeaponID, bool TransformEnemy);
	void GetEnemyData(struct FEnemyData* EnemyData);
	void GetTakeDamageDiseaseRatio(enum class EAILMENT_CALC_TYPE CalcType, enum class EATTRIBUTE_TYPE Attribute, float* DamageRatio);
	void GetSaveEnemyData(struct FSaveEnemyData* EnemyData);
	void GetCharacterNameID(class FName* TextID);
	void SetBreakPointDamage(int32 DamageValue, bool* Break);
	void BeginBattleTurn(float* WaitTime);
	void GetBattleAI(class UBP_BattleAI_Base_C** BattleAI);
	void GetCharacterOrderIcon(class UTexture2D** OrderIcon, struct FVector2D* IconUV, struct FVector2D* PixelScale, struct FVector2D* CharaOffset, float* Scale, float* InvertX, struct FVector2D* CharaFootPivot, bool* CharacterSwitch);
	void GetCharacterActiveIcon(class UTexture2D** OrderIcon, class UTexture2D** FrontIcon, struct FVector2D* IconUV, struct FVector2D* PixelScale, struct FVector2D* CharaOffset, float* CharaScale, float* InvertX, class UTexture2D** WeaponIcon, struct FVector2D* CharaFootPivot);
	void GetEffectSpawnPosition(bool Ground, struct FVector* Position);
	void GetWeaponRegist_OLD(enum class EWEAPON_CATEGORY AttackWeapon, bool CheckWeakLock, enum class EATTRIBUTE_RESIST* AttributeResist);
	void SetTameMonster();
	void BeginCharacterTurn_OLD(float* WaitTime);
	void IsShowFadePlaying(bool* Playing);
	void ShowFade();
	void HiddenBattleEnemy();
	void GetAttributeResist_OLD(enum class EATTRIBUTE_TYPE AttackAttribute, bool CheckWeakLock, enum class EATTRIBUTE_RESIST* AttributeResist);
	void InitializeEnemy(const struct FEnemyData& EnemyData, class FName EnemyRowID, int32 TargetPriority, enum class EBATTLE_ENCOUNT_TYPE BattleMode);
	void OnLoaded_ECF2F8634BBB0582BA9D98B2017148FB(class UObject* Loaded);
	void OnLoaded_F5708AAA4318ED8D35680F8B575705A5(class UObject* Loaded);
	void OnLoaded_CF189632406811CCECD0E986C4050965(class UObject* Loaded);
	void OnLoaded_F9638E394117BD243ABB85A5103FB38E(class UObject* Loaded);
	void OnLoaded_6F5A957B409A4872EDC2DD8E3B1A6B2B(class UObject* Loaded);
	void OnLoaded_A8CACB7C43D931A6DFDA55910D9CE780(class UObject* Loaded);
	void OnLoaded_4835FA82420C732C1024A79D680A3973(class UObject* Loaded);
	void SetStatusDestruction();
	void SetStatusGroggy();
	void FinishDeadEffect(class UParticleSystemComponent* PSystem);
	void FinishDestructionEffect(class UParticleSystemComponent* PSystem);
	void SetStatusFellowDestruction();
	void SetStatusVanish();
	void CustomEvent_1(class UParticleSystemComponent* PSystem);
	void LoadEnemyResource();
	void WaitEnemyResourceLoadFinish();
	void SetStatusDead();
	void LoadEnemyIconResource();
	void WaitEnemyIconResourceLoadFinish();
	void WeaponTextureLoadFinish();
	void LoadEnemyResourceForReplay();
	void LoadChangeActionModeResource(TArray<class UObject*>& ObjList);
	void EndStatusUI();
	void OpenStatusUI();
	void HideStatusUI();
	void ResumeStatusUI();
	void BeginEnemyStatusUI(class UBattleEnemyStatus_C* StatusUI);
	void UpdateSideCharacterUI();
	void SetSuccessRate(enum class EABILITY_TYPE AbilityType, int32 AbilityRatio, int32 InvocationValue);
	void SetBribePrice(enum class EABILITY_TYPE AbilityType, float AbilityRatio);
	void SetDamage(int32 DamageValue, enum class EBATTLE_DAMAGE_TYPE DamageType, bool LastHit, bool InstantDeath);
	void UseMP(int32 UseMP);
	void ReceiveDestroyed();
	void SetSelectMaterial(bool Select);
	void Update_Animation_State_OLD();
	void SetWeakVisible(enum class EWEAPON_CATEGORY Weapon, enum class EATTRIBUTE_TYPE Attribute, bool CheckGroup);
	void SetDamage_MP(int32 DamageValue);
	void SetBoostPoint_OLD(int32 Value, bool Use);
	void BeginAddBoostPoint();
	void CalcNextTurnWaitTime();
	void CoverStepIn();
	void EnemyEscape();
	void CallEnemyEnterAction();
	void ForceDead();
	void SetDamageForReplay(int32 DamageValue, enum class EBATTLE_DAMAGE_TYPE DamageType, bool LastHit);
	void SetDamageForPoison(int32 DamageValue, enum class EBATTLE_DAMAGE_TYPE DamageType, bool LastHit);
	void ReceiveTick(float DeltaSeconds);
	void RecoveryMP(class ABattleCharacterBase* CEnforcer, int32 NValue, bool bOverHeal, bool bUseRecoveryUI, bool bIsMeatItem);
	void RecoveryHP(class ABattleCharacterBase* CEnforcer, int32 NValue, bool bOverHeal, bool bUseRecoveryUI, bool bIsMeatItem);
	void PlayCharmEscape();
	void PlayCharmEnter();
	void ExecReturnCharmAction();
	void ExecReturnSupporterAction(bool bWithReturnText);
	void RecoveryBP(class ABattleCharacterBase* CEnforcer, int32 NValue, bool bUseRecoveryUI, bool bIsMeatItem);
	void ExecuteUbergraph_BattleEnemyBP(int32 EntryPoint);
};

}


