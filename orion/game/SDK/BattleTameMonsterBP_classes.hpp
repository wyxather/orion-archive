#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x318 (0xBE9 - 0x8D1)
// BlueprintGeneratedClass BattleTameMonsterBP.BattleTameMonsterBP_C
class ABattleTameMonsterBP_C : public ABattleCharacterBaseBP_C
{
public:
	uint8                                        Pad_1446[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FInvadeData                           CurrentInvadeData;                                 // 0x8E0(0x128)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsDefaultPartner;                                  // 0xA08(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1447[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPaperFlipbook*                        InvadeResource;                                    // 0xA10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnemyLoadReady;                                    // 0xA18(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1448[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAbilityDataBase                      ActionCommand;                                     // 0xA20(0xF0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                               LastEffectPosition;                                // 0xB10(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInventorItem;                                    // 0xB1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1449[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterResourceData                CurrentResourceData;                               // 0xB20(0xC8)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsInvadeMonster;                                   // 0xBE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABattleTameMonsterBP_C* GetDefaultObj();

	bool CheckEnableSetCharaTransform();
	bool IsCharacterTameMonster();
	void GetPartnerDefaultAbility(class FName* AbilityName);
	bool PlayBattleVoice(enum class EBATTLE_VOICE_TYPE EBattleVoiceType, const struct FBattleVoiceSetData& CPlayCondition, bool bIsSkipDiseaseCheck);
	void GetMP(int32* MP, int32* MPMax);
	void GetHP(int32* HP, int32* HPMax);
	bool CheckSupportAilment(enum class ESUPPORT_AILMENT_TYPE ESupportAilment, struct FSupportAbilityDataBase* CSupportAbilityData);
	struct FVector GetCurrentPosition();
	void GetCharacterName(class FText* StrCharacterName);
	void GetDelayEnemyActionSE(TArray<struct FActionDelaySEData>* AcActionDelaySEData, bool* bEnable);
	void GetWaitEnemyActionFrame(int32* NWaitFrame);
	void GetCharacterVoice_BattleStart(class FName* StrVoiceID, bool* bFindVoiceID);
	void GetOnHitDamageDiseaseRatio(class ABattleCharacterBaseBP_C* Target, bool IsBoost, bool IsConvergence, enum class EAILMENT_CALC_TYPE CalcType, enum class EWEAPON_CATEGORY Weapon, enum class EATTRIBUTE_TYPE Attribute, enum class EABILITY_TYPE AbilityType, bool IsCompensation, bool IsCritical, class AActionCommandBase* ActionCommand, float* DiseaseRatio);
	void GetCharacterAccuracy(int32* Result, float* Ratio);
	void GetCharacterAttack(enum class EAILMENT_CALC_TYPE CalcType, class ABattleCharacterBase* DamageTarget, int32* Result, float* Ratio);
	bool OnHitDamageHP(bool bIsBreakAttack, bool bIsBreakTarget, enum class EATTRIBUTE_RESIST ETotalResist, enum class EATTRIBUTE_RESIST EWeaponResist);
	void GetMonsterEffectPosition(struct FVector* EffectPosition);
	bool GetIsInventorItem();
	void PlayCharacterAction(enum class EKSCharacterAction ActionType);
	bool IsCharacterNPC();
	void GetCharacterNPCFlag(bool* NPCFlag);
	void SetWeaponTexture();
	void InitializeReplayMode(const struct FInvadeData& InvadeData, class FName InvadeRowID);
	void CheckDiseaseSuccess(const struct FDisease& DiseaseData, bool* Success);
	void GetInvadeTarget(TArray<class ABattleCharacterBase*>* Target, bool* Enable);
	void GetRecoveryLevelRatio(enum class EAILMENT_CALC_TYPE CalcType, float* LevelRatio, int32* BaseDEF);
	void GetDamageLevelRatio(enum class EAILMENT_CALC_TYPE CalcType, float* LevelRatio, int32* BaseATK);
	void GetInvadeAbility(int32 BoostLevel, class FName* AbilityName);
	void GetInvadeData(struct FInvadeData* EnemyData);
	void GetEffectSpawnPosition(bool Ground, struct FVector* Position);
	void InitializeTameMonster(const struct FInvadeData& InvadeData, class FName InvadeRowID, class ABattleCharacterBase* OwnerPlayer, bool PlayCharacterEnter, bool IsPlayerSide, bool IsInvadeMonster);
	void WaitEnemyResourceLoadFinish();
	void LoadEnemyResource(bool IsPlayerSide);
	void ReceiveDestroyed();
	void InvadeMonsterReturnAction();
	void RecoveryHP(class ABattleCharacterBase* CEnforcer, int32 NValue, bool bOverHeal, bool bUseRecoveryUI, bool bIsMeatItem);
	void RecoveryMP(class ABattleCharacterBase* CEnforcer, int32 NValue, bool bOverHeal, bool bUseRecoveryUI, bool bIsMeatItem);
	void LoadInvadeResourceForBattleReplay();
	void ExecuteUbergraph_BattleTameMonsterBP(int32 EntryPoint);
};

}


