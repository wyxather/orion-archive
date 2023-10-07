#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass LibBattle.LibBattle_C
class ULibBattle_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibBattle_C* GetDefaultObj();

	void Support_Ability_Atk_Buff_on_Break(class ABattleCharacterBaseBP_C* Enforcer, bool IsBreakAttack, class UObject* __WorldContext);
	void SupportAbility_HpRecoveryOnBreak(class ABattleCharacterBase* Enforcer, int32 TotalBreakCountInAilment, class UObject* __WorldContext);
	void SupportAbility_MpRecoveryOnBreak(class ABattleCharacterBase* Enforcer, int32 TotalBreakCountInAilment, class UObject* __WorldContext);
	void CheckEnableOrderInActionOrder(class ABattleCharacterBase* CTarget, class UObject* __WorldContext, bool* bEnable);
	void AttachEffectRevisionForSPBattle(class FName EnemyID, class UObject* __WorldContext, bool* Enable, struct FVector* Offset);
	void ConvertBattleEnemyBP(TArray<class ABattleCharacterBase*>& Array, class UObject* __WorldContext, TArray<class ABattleEnemyBP_C*>* Return);
	void SelectRandomTargetWithWeight(TArray<class ABattleCharacterBase*>& TargetCharacterList, class UObject* __WorldContext, TArray<class ABattleCharacterBase*>* ResultTargetList);
	void CheckFullBoostModeCommandEnable(class ABattleCharacterBase* TargetCharacter, struct FCommandMenuItem& CommandMenuItem, class UObject* __WorldContext, bool* Enable);
	void BattleCharacterFilterForStone(TArray<class ABattleCharacterBase*>& In, bool OnlyStone, class UObject* __WorldContext, TArray<class ABattleCharacterBase*>* Out);
	void ConvertBattlePlayerBP(TArray<class ABattleCharacterBase*>& Array, class UObject* __WorldContext, TArray<class ABattlePlayerBP_C*>* Return);
	void ConvertInvadeCommandForAwaking(struct FCommandMenuItem& CommandMenuItem, int32 BoostLevel, class UObject* __WorldContext, struct FCommandMenuItem* ReturnMenuItem);
	void Battle_Character_Filter_For_Stealth_Target(TArray<class ABattleCharacterBase*>& In, class UObject* __WorldContext, TArray<class ABattleCharacterBase*>* Out);
	void CheckPotentialitySubMenuEnable(class ABattleCharacterBase* TargetCharacter, struct FCommandMenuItem& CommandMenuItem, class UObject* __WorldContext, bool* Enable);
	void CheckPotentialityCommandEnable(class ABattleCharacterBase* TargetCharacter, struct FCommandMenuItem& CommandMenuItem, struct FAbilityDataBase& AbilityDataBase, class UObject* __WorldContext, bool* Enable);
	void Play_Battle_Dash_SE(class UObject* __WorldContext);
	void Battle_Character_Filter_For_Stealth_Cursor(TArray<class ABattleCharacterBase*>& In, class UObject* __WorldContext, TArray<class ABattleCharacterBase*>* Out);
	void CalcPotentialityActionPoint(int32 DamageValue, int32 CharacterHPMax, class UObject* __WorldContext, int32* ActionPoint);
	void ConvertBattleCharacterBP(TArray<class ABattleCharacterBase*>& Array, class UObject* __WorldContext, TArray<class ABattleCharacterBaseBP_C*>* Return);
	void BattleCharacterFilterForDeadOrAlive(TArray<class ABattleCharacterBase*>& In, bool OnlyAlive, class UObject* __WorldContext, TArray<class ABattleCharacterBase*>* Out);
	void CreatePreparationCommand(class FName MaterialItemID, class UObject* __WorldContext, bool* FindPreparationCommand, class FName* PreparationLabel, struct FPreparationData* PreparationCommand);
	void Calc_Consume_MP(class ABattleCharacterBaseBP_C* Character, int32 Base, bool CompensationMagicAbility, class UObject* __WorldContext, int32* Param);
	void GetBattleManager(class UObject* __WorldContext, class ABattleManager** BattleManager);
	void Battle_Character_Filter_for_POT_Recovery(TArray<class ABattleCharacterBase*>& In, class UObject* __WorldContext, TArray<class ABattleCharacterBaseBP_C*>* Out, bool* Find);
	void BattleCharacterFilterForRevive(TArray<class ABattleCharacterBase*>& In, bool ReviveAndRecovery, class UObject* __WorldContext, TArray<class ABattleCharacterBaseBP_C*>* Out, bool* Find);
	void GetStealRate(class ABattleCharacterBaseBP_C* TargetCharacter, class UObject* __WorldContext, float* StealRate);
	void BattlePlayerFilterForStone(TArray<class ABattlePlayerBP_C*>& TargetList, bool Stone, class UObject* __WorldContext, TArray<class ABattlePlayerBP_C*>* Result);
	void Get_Icon_Texture_From_UI_Resource(class FName ResourceLabel, class UObject* __WorldContext, class UTexture2D** Icon);
	void CheckCoverEnableByDisease(class ABattleCharacterBaseBP_C* CoverCharacter, class UObject* __WorldContext, bool* Success);
	void GetCalcHPBorderDamageRatio(int32 NowHP, int32 MaxHP, float Border, float RatioPer, float Revision, class UObject* __WorldContext, bool* Enable, float* Ratio);
	void GetTameRate(class ABattleEnemyBP_C* TargetEnemy, class UObject* __WorldContext, float* TameRate);
	void BattleEnemyFilter(TArray<class ABattleEnemyBP_C*>& In, bool Alive, class UObject* __WorldContext, TArray<class ABattleEnemyBP_C*>* Out);
	void BattlePlayerFilter(TArray<class ABattlePlayerBP_C*>& TargetList, bool Alive, class UObject* __WorldContext, TArray<class ABattlePlayerBP_C*>* Result);
	void CheckEscapeSuccess(TArray<class ABattleCharacterBase*>& PlayerList, TArray<class ABattleCharacterBase*>& EnemyList, int32 Count, class UObject* __WorldContext, bool* Result);
	void PlayGuardSE(class UObject* __WorldContext);
	void PlayHitSE(enum class EBATTLE_DAMAGE_TYPE DamageType, enum class EWEAPON_CATEGORY Weapon, class ABP_ActionCommandBase_C* CommandActor, class UObject* __WorldContext);
	void GetCalcValueRandomRatio(class UObject* __WorldContext, float* Ratio);
	void GetEnemyListFromEnemyGroup(const struct FEnemyGroup& EnemyGroup, class UObject* __WorldContext, TArray<struct FEnemySpawnData>* EnemyList);
	void GetBreakDecreaseNonBoost(enum class EATTRIBUTE_RESIST Resist, class UObject* __WorldContext, int32* BreakDecrease);
	void GetBreakDecrease(enum class EATTRIBUTE_RESIST Resist, int32 Boost, class UObject* __WorldContext, int32* BreakDecrease);
	void GetResistRatio(enum class EATTRIBUTE_RESIST ResistType, bool DoubleWeak, class ABattleCharacterBaseBP_C* Enforcer, class UObject* __WorldContext, float* Ratio);
	void GetEnemyListFromSpawnSet(const struct FEnemySpawnSet& SpawnSet, class UObject* __WorldContext, TArray<struct FEnemySpawnData>* EnemyList);
	void MakeDefaultTransform(class UObject* __WorldContext, struct FTransform* DefaultTransform);
	void SpawnHitEffect(class AActor* Owner, const struct FVector& Location, bool IsEnemy, enum class EBATTLE_DAMAGE_TYPE DamageType, class ABP_ActionCommandBase_C* CommandActor, class UObject* __WorldContext);
	void PlayBattleBGM(const struct FEnemyGroup& EnemyGroup, class UObject* __WorldContext, struct FSoundData* CurrentData);
	void GetAttributeResist(class ABattleCharacterBaseBP_C* Target, enum class EATTRIBUTE_TYPE Attribute, class UObject* __WorldContext, enum class EATTRIBUTE_RESIST* Result);
	void LotteryEncountData(const struct FBattleEncounterBase& EncountData, bool FirstEncount, class UObject* __WorldContext, class FName* EnemyGroupID);
	void GetBattleManager_OLD(class UObject* __WorldContext, class ABattleManagerBP_C** BattleManager);
	void BattleCharacterFilter_OLD(TArray<class ABattleCharacterBaseBP_C*>& In, bool Alive, class UObject* __WorldContext, TArray<class ABattleCharacterBaseBP_C*>* Out);
};

}


