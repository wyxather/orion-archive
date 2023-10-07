#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x399 (0x691 - 0x2F8)
// BlueprintGeneratedClass BP_ActionCommandBase.BP_ActionCommandBase_C
class ABP_ActionCommandBase_C : public AActionCommandBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x300(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FAbilityDataBase                      ActionCommand;                                     // 0x308(0xF0)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ABattleCharacterBaseBP_C*              Enforcer_Old;                                      // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABattleCharacterBaseBP_C*>      Target;                                            // 0x400(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class ABattleCameraBP_C*                     BattleCamera;                                      // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableAbilityCamera;                               // 0x418(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ExecPreAction;                                     // 0x419(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ExecPostAction;                                    // 0x41A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_130A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BoostLevel;                                        // 0x41C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ExecMainAction;                                    // 0x420(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ExecActionCamera;                                  // 0x421(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_130B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FExecAilmentHandler>           AilmentList;                                       // 0x428(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsSummonCommand;                                   // 0x438(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_130D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TotalDamage;                                       // 0x43C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsReviveCommand;                                   // 0x440(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         EnableDamageStop;                                  // 0x441(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsInevitablyCritical;                              // 0x442(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_130E[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AbilityCounterMax;                                 // 0x444(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DiseaseOnHit;                                      // 0x448(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsAdditiveOrderCommand;                            // 0x449(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_130F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AbilityCounter;                                    // 0x44C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRandomHitCommand;                                // 0x450(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1310[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinimumbilityCounter;                              // 0x454(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABattleCharacterBaseBP_C*>      ChaseTarget;                                       // 0x458(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         EnableChaseTarget;                                 // 0x468(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         SpecialHitResult;                                  // 0x469(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         EnableSubTarget;                                   // 0x46A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1311[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABattleCharacterBaseBP_C*>      SubTargetList;                                     // 0x470(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         AbilityConvergence;                                // 0x480(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsForceBreak;                                      // 0x481(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsFullBoostCamera;                                 // 0x482(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1312[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAbilityDataBase                      SessionCommandData;                                // 0x488(0xF0)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                  SessionAbilityName;                                // 0x578(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsExecSessionAbility;                              // 0x580(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1313[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_ActionCommandBase_C*               SessionAbilityCommand;                             // 0x588(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EADDITIVE_ORDER_TYPE              AdditiveOrderType;                                 // 0x590(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1314[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WaitEnemyActionFrame;                              // 0x594(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TotalDamageInAilment;                              // 0x598(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TotalBreakCountInAilment;                          // 0x59C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TotalKillCountInAilment;                           // 0x5A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableInevitablyCritical;                          // 0x5A4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1315[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  AbilitySE_00;                                      // 0x5A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  AbilitySE_01;                                      // 0x5B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  AbilitySE_02;                                      // 0x5B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Use_Grow_Magic_Buff;                               // 0x5C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1316[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABattleCharacterBase*>          StoreRandomTarget;                                 // 0x5C8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FExecAilmentHandler                   ExecCurrentAilment;                                // 0x5D8(0x9C)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_1317[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         IsVideAbilityCamera;                               // 0x678(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         UnUsedRandomCover;                                 // 0x679(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1318[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CheckAbility_Redmine6725;                          // 0x680(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsGrachesSummonAbility_;                           // 0x690(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_ActionCommandBase_C* GetDefaultObj();

	bool OnAttackDamageSP(class ABattleCharacterBase* CEnforcer);
	void CheckCoverTarget(class ABattleCharacterBaseBP_C* TargetCharacter, bool* Cover, class ABattleCharacterBaseBP_C** Target);
	bool CheckEnableExcitementBuff();
	void ExecExcitementBuff();
	void GetPlayableCharacterID(class ABattleCharacterBase* Target, enum class EPlayableCharacterID* ECharaID);
	void OnHitDamageSP(class ABattleCharacterBaseBP_C* Enforcer, bool IsBreakAttack, bool* Result);
	void SetGrachesSummonAbility_(bool IsGrachesSummonAbility);
	void CheckEnableConpensation(bool* Enable);
	void CheckEnableConvergence(bool* Enable);
	void CheckEnableSupportFullHP(bool* Enable);
	bool ExecPlayDiseaseMissUI();
	void GetDebugATKText(class ABattleCharacterBase* Enforcer, enum class EAILMENT_CALC_TYPE CalcType, class ABattleCharacterBase* DamageTarget, int32 InvocationValue, class FString* ATKNumber, class FString* ATKText);
	void GetSessionTarget(TArray<class ABattleCharacterBaseBP_C*>* Return);
	bool CheckEnableAutoTameMonster();
	void GetRecoveryRatio(class ABattleCharacterBase* RecoveryEnforcer, class ABattleCharacterBase* RecoveryTarget, struct FAbilityDataBase& AbilityData, float* RecoveryRatio);
	void SuspendActionCommand();
	bool GetSettledPlayOnce_OnRecovered();
	void SetSettledPlayOnce_OnRecovered(bool bEnable);
	bool WaitSessionSupporterCommand();
	bool ReturnSessionSupporterCommand();
	bool CallSessionSupporterCommand();
	void IsMusicalCommand(bool* bIsSong, bool* bIsDance);
	void IsUseItemCommand(bool* bIsUseItemCommand, bool* bIsMeatItem);
	class FName GetActionLabel();
	void InitTotalParameterInAilment();
	bool OnAttackDamageHP(class ABattleCharacterBase* CEnforcer);
	bool PlayActionForSelfOnlyCommand(class ABattleCharacterBase* ActionCharacter, enum class EKSCharacterAction BattleSelfActionID, enum class EKSCharacterAction BattleOtherActionID, bool bExceptEnforcer);
	void PostExecCommandSequencer();
	bool WaitEnemyActionCommand();
	void CalcBreakDamage(enum class EATTRIBUTE_RESIST EAttributeWeak, enum class EATTRIBUTE_RESIST EWeaponWeak, int32* OutBreakDamage);
	bool ShowBusinessSupportInfomationCommand();
	bool CallBusinessSupporterCommand();
	bool WaitBusinessSupporterCommand();
	bool ReturnBusinessSupporterCommand();
	bool PlayBusinessSupportActionCommand(enum class EKSCharacterAction BattleActionID);
	void SetOptionDataList(TArray<class FName>& AstrOptionDataList, class FName StrActionLabel, int32 NOptionIndex, bool bUseGrowMagicBuff);
	bool ExecEndCharacterWarpCommand();
	bool ExecStartCharacterWarpCommand(const struct FVector& CCommandOffset);
	bool PlaySessionActionCommand(enum class EKSCharacterAction BattleActionID);
	bool WaitSessionAbilityCommand();
	bool ExecSessionAbilityCommand();
	void SetTargetList(TArray<class ABattleCharacterBase*>& AcTargetList);
	void SetupRandomTarget();
	bool ExecStepCounter();
	bool CheckAttackCounter();
	void SetSubTargetList(TArray<class ABattleCharacterBase*>& AcSubTargetList);
	TArray<class ABattleCharacterBase*> GetSubTargetList();
	bool CheckAbilityHit();
	bool SetSummonAbility(bool bEnable, bool bLastHit, class FName StrActionLabel, class AActionCommandBase* COwnerAbility);
	bool CheckBoostLevelLess(int32 NBorderLevel, bool bContainEqual);
	TArray<class ABattleCharacterBase*> GetSubEnforcerList();
	void SetSubEnforcerList(TArray<class ABattleCharacterBase*>& AcSubEnforcerList);
	void SetEnforcer(class ABattleCharacterBase* CEnforcer);
	bool CheckBoostLevelGreater(int32 NBorderLevel, bool bContainEqual);
	bool CheckStealMoney(class ABattleCharacterBase* CStealTarget, int32 NStealRateMin);
	bool CheckStealItem(class ABattleCharacterBase* CStealTarget, int32 NStealRateMin);
	bool PlayAbilitySECommand(int32 Index);
	bool PlayWeaponAttackCommand(class ABattleCharacterBase* ActionCharacter);
	bool CheckLastHit(class ABattleCharacterBase* CTarget);
	void ExecPayPostCost();
	TArray<class ABattleCharacterBase*> GetTargetList();
	class ABattleCharacterBase* GetEnforcer();
	bool ExecSpecialAilmentCommand();
	bool RegisterOnHitSECommand(class FName SEID);
	bool PlayActionCommand(class ABattleCharacterBase* ActionCharacter, enum class EKSCharacterAction BattleActionID, enum class EPlayableCharacterID UniqueCharaID, enum class EKSCharacterAction UniqueActionID, bool bExceptEnforcer);
	bool WeaponChangeCommand(enum class EWEAPON_CATEGORY WeaponType);
	bool PlayVibrationCommand(class FName VibrationID, enum class EVibrationPower Power);
	bool PlayVoiceCommand(enum class EBATTLE_VOICE_TYPE VoiceID, enum class EPlayableCharacterID UniqueCharaID, enum class EBATTLE_VOICE_TYPE UniqueVoiceID);
	bool PlaySECommand(class FName SEID);
	bool HideInfomationCommand();
	bool ShowInfomationCommand(class FName TextID);
	bool ExecAilmentCommand(int32 Index, bool AllAilment, bool LastHit);
	void GetForceBreak(bool* Enable);
	void SetForceBreak();
	void GetCriticalPower(bool bCritical, float* OutRatio);
	void CheckEnableCommandWeapon(enum class EWEAPON_CATEGORY* Weapon, bool* Enable);
	void SetBattleReplayParam(TArray<int32>& ParamList, class FName ActionLabel, bool* Return);
	void GetBattleReplayParam(int32* Param1, int32* Param2, int32* Param3, int32* Param4);
	void GetTotalDamage(int32* Value);
	void GetRandomTarget(TArray<class ABattleCharacterBaseBP_C*>* RandomTarget, bool* EnableRandomTarget);
	void GetInevitablyCritical(bool* Enable, bool* IsCritical);
	void GetChaseTarget(TArray<class ABattleCharacterBaseBP_C*>* ChaseTarget, bool* EnableChaseTarget);
	void SetChaseTarget(TArray<class ABattleCharacterBaseBP_C*>& ChaseTarget);
	void CalcEnforcerAttack(class ABattleCharacterBase* DamageEnforcer, class ABattleCharacterBase* DamageTarget, enum class EAILMENT_CALC_TYPE DamageType, int32 InvocationValue, float* AttackValue, float* DamageRatio);
	void SetTotalDamage(enum class EAILMENT_CALC_TYPE CalcType, int32 Value);
	void OnHitDamageHP(class ABattleCharacterBaseBP_C* Enforcer, class ABattleCharacterBaseBP_C* DamageTarget, int32 DamageValue, bool IsBreakAttack, bool* Result);
	void CheckReflectionEnable(bool* Enable);
	void CheckCounterEnable(bool* Enable);
	void SetAdditiveTurn(bool AdditiveTurn, enum class EADDITIVE_ORDER_TYPE OrderType);
	void ExecCheckAdditiveTurn(bool* ExecAdditiveTurn);
	void CheckDiseaseSpecialHit(class ABattleCharacterBaseBP_C* DiseaseTarget, bool* OnHit, bool* INVISIBLE);
	void GetAbilityRatio(class ABattleCharacterBaseBP_C* Enforcer, class ABattleCharacterBaseBP_C* Target, float* DamageRatio);
	void CheckEnableHideOut(bool* Enable);
	void SetInevitablyCritical();
	void InitAbilityCounter(int32 BaseCount, int32 MinimumCount, int32 RandomMin, int32 RandomMax);
	void DamegeStopAction();
	void SetReviveCommand(bool REVIVE);
	void JudgeSpecialHitRate(const struct FExecAilmentHandler& Ailment, class ABattleCharacterBaseBP_C* Target, bool* Enable, bool* Result);
	void GetOnHitEffect(bool* OnHit, class FName* EffectLabel, struct FVector* Offset);
	void GetOnHitSE(bool* OnHit, class FName* SELabel);
	void CalcAilmentRecoverySP(enum class EAILMENT_CALC_TYPE_OLD CalcType, int32 InvocationValue, int32* Recovery);
	void CalcAilmentRecoveryBP(enum class EAILMENT_CALC_TYPE_OLD CalcType, int32 InvocationValue, int32* Recovery);
	void CalcAilmentRecoveryMP(class ABattleCharacterBase* Enforcer, class ABattleCharacterBase* Target, enum class EAILMENT_CALC_TYPE CalcType, int32 InvocationValue, int32* Recovery);
	void CalcAilmentDamageBP(class ABattleCharacterBaseBP_C* AbilityEnfocer, class ABattleCharacterBaseBP_C* AilmentTarget, enum class EAILMENT_CALC_TYPE CalcType, int32 InvocationValue, int32* Damage);
	void CalcAilmentDamageSP(enum class EAILMENT_CALC_TYPE_OLD CalcType, int32 InvocationValue, int32* Damage);
	void CalcAilmentDamageMP(class ABattleCharacterBaseBP_C* Enforcer, class ABattleCharacterBaseBP_C* Target, enum class EAILMENT_CALC_TYPE CalcType, int32 InvocationValue, int32* Damage);
	void CalcAilmentRecoveryHP(class ABattleCharacterBaseBP_C* Enforcer, class ABattleCharacterBaseBP_C* Target, enum class EAILMENT_CALC_TYPE CalcType, int32 InvocationValue, bool Critical, int32* Recovery);
	void CalcAilmentDamageHP(class ABattleCharacterBaseBP_C* Enforcer, class ABattleCharacterBaseBP_C* Target, enum class EAILMENT_CALC_TYPE CalcType, int32 InvocationValue, enum class EATTRIBUTE_RESIST WeaponResist, enum class EATTRIBUTE_RESIST AttributeResist, bool Critical, enum class EWEAPON_CATEGORY Weapon, enum class EATTRIBUTE_TYPE Attribute, bool AddDrain, int32* Damage);
	void AbilityStartEffect();
	void ExecPayCommandCost();
	void StartCharacterAction();
	void GetPositionByPositionType(enum class EACTION_COMMAND_POSITION_TYPE PositionType, const struct FVector& Offset, bool SpqwnGround, class ABattleCharacterBaseBP_C* FocusTarget, struct FVector* Position);
	void StartCommand();
	void CheckExecCommand(bool* Exec);
	void Setup_Action_Command(class ABattleCharacterBaseBP_C* Enforcer, TArray<class ABattleCharacterBaseBP_C*>& Target, const struct FAbilityDataBase& NewCommand, int32 BoostLevel, bool* Success);
	void OnLoaded_080220B84804514B7ADD9986D199D1E1(TSubclassOf<class UObject> Loaded);
	void OnLoaded_831328EB48DE85CC2DC1F291800135A0(class UObject* Loaded);
	void StartPreAction();
	void StartPostAction();
	void StartMainAction();
	void WaitMainAction();
	void WaitPreAction();
	void WaitPostAction();
	void WaitTimeEffecterInfomation(float Time);
	void StartPreActionForBattleReplay();
	void StartMainActionForBattleReplay();
	void StartPostActionForBattleReplay();
	void PlayAbilitySEWithDelay(float Duration, class FName SELabel);
	void ExecSessionAbility();
	void WaitSessionAbility();
	void WaitSupporterDash();
	void WaitEnemyAction();
	void SetupDelayActionSE(class ABattleCharacterBase* ActionCharacter);
	void StartVideAbilityCameraSequence();
	void RequestLoadCommandSequence(TSoftObjectPtr<class ULevelSequence>& CCommandSequence);
	void StartCommandSequence();
	void FinishCommandSequence();
	void WaitLoadCommandSequence();
	void UpdateRandomTargetEffect();
	void PauseActionCommandSequencer();
	void ResumeActionCommandSequencer();
	void ExecuteUbergraph_BP_ActionCommandBase(int32 EntryPoint);
};

}


