#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass LibAilment.LibAilment_C
class ULibAilment_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibAilment_C* GetDefaultObj();

	void GetBattleAllCharacterList(class ABattleCharacterBase* Enforcer, class UObject* __WorldContext, TArray<class ABattleCharacterBase*>* PartyList);
	void CheckSelfDamage(struct FExecAilmentHandler& ExecAilmentHandler, class UObject* __WorldContext, bool* IsSelfDamage);
	void Menu_CheckUseAilmentTypeMultiple(TArray<struct FAilmentHandler>& CheckAilmentList, struct FMainMenuAilmentData& TargetAilment, class UObject* __WorldContext, bool* CanUse);
	void Menu_CheckParamaterMax(const struct FMenuAilmentHandler& Ailment, struct FCharacterParam& CharaParam, class UObject* __WorldContext, bool* IsMax);
	bool RandomBoolForAilment(int32 InvocationValue, class UObject* __WorldContext);
	void ConvertEquipmentToWeaponCategory(enum class EEquipmentCategory Equipment, class UObject* __WorldContext, enum class EWEAPON_CATEGORY* WeaponCategory);
	void GetEnemyDeseaseListinUI(class ABattleCharacterBaseBP_C* Target, class UObject* __WorldContext, TArray<struct FExecDiseaseHandler>* OutDeseaseList);
	void GetPlayerDebuffListinUI(class ABattleCharacterBaseBP_C* Target, class UObject* __WorldContext, TArray<struct FExecDiseaseHandler>* OutDebuffList);
	void GetPlayerBuffListinUI(class ABattleCharacterBaseBP_C* Target, class UObject* __WorldContext, TArray<struct FExecDiseaseHandler>* OutBuffList);
	void CheckCharacterInvisibleForDamage(class ABattleCharacterBase* Target, class ABattleCharacterBase* Enforcer, bool UseDamageUI, class UObject* __WorldContext, bool* IsInvisible);
	void SetupVoiceFlag_OnRecovered(TArray<class ABattleCharacterBase*>& TargetList, struct FExecAilmentHandler& ExecAilmentHandler, class UObject* __WorldContext);
	void GetBattleOtherList(class ABattleCharacterBase* Enforcer, class UObject* __WorldContext, TArray<class ABattleCharacterBase*>* PartyList);
	void GetBattlePartyList(class ABattleCharacterBase* Enforcer, class UObject* __WorldContext, TArray<class ABattleCharacterBase*>* PartyList);
	void Menu_CheckParamaterMaxWithEquip(const struct FMenuAilmentHandler& Ailment, int32 CharaID, class UObject* __WorldContext, bool* IsMax);
	void Battle_ExecStealMoneyEnemy(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void Battle_ExecLostMoney(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void Battle_ExecSealActionOrder(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void Battle_ExecShrinkDisease(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void Battle_ExecAddMoney(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void Battle_ExecDamagePOT(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void Menu_GetRecoveryType(const struct FAilment& CheckAilment, class UObject* __WorldContext, enum class ERECOVERY_EFFECT_TYPE* Type);
	void Battle_ExecDamageHPMaxFixed(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void Battle_ExecAccelInventorItem(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void Convert_Ailment_to_Attribute(enum class EAILMENT_ATTRIBUTE_TYPE AilmentAttribute, class UObject* __WorldContext, enum class EATTRIBUTE_TYPE* Attribute);
	void Battle_ExecAddFieldDisease(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void Battle_ExecExtensionDisease(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void Battle_ExecChangePermanent(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void SortDiseaseListForReverse(TArray<struct FExecDiseaseHandler>& TargetDiseaseList, class UObject* __WorldContext, TArray<struct FExecDiseaseHandler>* SortedDiseaseList);
	void GetDiseaseByDiseaseType(enum class EDISEASE_TYPE SearchDiseaseType, class UObject* __WorldContext, bool* FindDisease, class FName* DiseaseLabel, struct FDisease* DiseaseData);
	void Battle_ExecReverseDisease(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void Battle_ExecCovered(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void Battle_ExecBuffCopy(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void CheckOrderControlDisease(enum class EDISEASE_TYPE DiseaseType, class UObject* __WorldContext, bool* OrderControl, enum class EACTION_ORDER_TYPE* MoveType, int32* MoveCount, bool* BuffControl);
	void Battle_ExecBribe(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void Battle_ExecGetLuckyReward(const struct FExecAilmentHandler& Ailment, enum class ELUCKY_REWARD_TYPE LuckyType, class UObject* __WorldContext);
	void ConvertWeaponToEquipmentPart(enum class EWEAPON_CATEGORY Weapon, class UObject* __WorldContext, enum class EEQUIPMENT_PART* CommandAttribute);
	void Menu_CheckUseGrowSCP(TArray<struct FAilmentHandler>& CheckAilmentList, class UObject* __WorldContext, bool* UseSGrowSCP);
	void Menu_Recovery_POTSingle(int32 CharacterID, int32 RecoveryValue, class UObject* __WorldContext);
	void Menu_ExecGrowSCPMax(const struct FMenuAilmentHandler& Ailment, int32 EnforcerID, int32 TargetID, class UObject* __WorldContext);
	void Menu_CheckGrowSCPMax(int32 TargetID, class UObject* __WorldContext, bool* IsEffective);
	void Menu_CheckRecoveryTOP(int32 TargetID, class UObject* __WorldContext, bool* IsEffective);
	void Menu_ExecRecoveryTOP(const struct FMenuAilmentHandler& Ailment, int32 EnforceerID, int32 TargetID, class UObject* __WorldContext);
	void Battle_ExecRecoveryPOT(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void Battle_ExecForceBreak(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void Battle_OrderCountDown(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void Battle_OrderCountUp(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void Battle_CheckDamageSuccessForHP1(class ABP_ActionCommandBase_C* CommandActor, class ABattleCharacterBaseBP_C* Enforcer, class ABattleCharacterBaseBP_C* Target, const struct FExecAilmentHandler& ExecAilment, class UObject* __WorldContext, bool* Success);
	void GetExDisableMagicTarget(class UObject* __WorldContext, TArray<class ABattleCharacterBaseBP_C*>* ResultTarget);
	void Battle_ExecPassMP(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void CalcLotteryIndex(TArray<int32>& RateList, class UObject* __WorldContext, int32* Index);
	void CheckPriorityForExDisableMagicAbility(enum class EJOB_TYPE JobID, class UObject* __WorldContext, bool* Result);
	void Battle_ExecAddEXDisableMagicAbility(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void Battle_ExecAddInfection(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void Battle_ExecAddEXCurseOfDead(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void CalcDamageType(bool Break, enum class EATTRIBUTE_RESIST TotalResist, bool Critical, bool IsBreak, bool IsForceWeakness, class UObject* __WorldContext, enum class EBATTLE_DAMAGE_TYPE* DamageType);
	void Battle_ExecDragIn(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void Battle_ExecNegateAll(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void CalcAilmentTarget(struct FExecAilmentHandler& AilmentHandler, class UObject* __WorldContext, TArray<class ABattleCharacterBaseBP_C*>* TargetList);
	void Battle_ExecAddDiseaseDivideTurn(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void Battle_ExecAddActionOrderBlind(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void Battle_ExecBlowAway(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void Battle_ExecEscape(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void Battle_ExecRestoreBreak(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void Menu_CheckShowAilmentType(TArray<struct FAilmentHandler>& CheckAilmentList, class UObject* __WorldContext, bool* ShowAilmentType);
	void Menu_GetRecoveryLevelRatio(int32 CharacterID, enum class EAILMENT_CALC_TYPE_OLD CalcType, class UObject* __WorldContext, float* Ratio);
	void Battle_CheckDamageSuccess(class ABP_ActionCommandBase_C* CommandActor, class ABattleCharacterBaseBP_C* Enforcer, class ABattleCharacterBaseBP_C* Target, const struct FExecAilmentHandler& ExecAilment, bool Critical, class UObject* __WorldContext, bool* Success, bool* INVISIBLE);
	void Menu_ExecStatusGrow(const struct FMenuAilmentHandler& Ailment, int32 EnforcerID, int32 TargetID, class UObject* __WorldContext);
	void Battle_ExecCover(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void GetWeaponToAttributeList(const struct FItemData& WeaponData, class UObject* __WorldContext, TArray<enum class EBATTLE_COMMAND_ATTRIBUTE_ICON>* AttributeList);
	void ConvertAttributeTypeToCommandAttribute(enum class EAILMENT_ATTRIBUTE_TYPE AilmentType, enum class EATTRIBUTE_TYPE AttributeType, class UObject* __WorldContext, enum class EBATTLE_COMMAND_ATTRIBUTE_ICON* CommandAttribute);
	void ConvertWeaponToCommoandAttribute(enum class EWEAPON_CATEGORY Weapon, class UObject* __WorldContext, enum class EBATTLE_COMMAND_ATTRIBUTE_ICON* CommandAttribute);
	void GetAbilityToAttributeList(const struct FAbilityDataBase& ABILITY, enum class EWEAPON_CATEGORY EnforcerWeapon, class UObject* __WorldContext, TArray<enum class EBATTLE_COMMAND_ATTRIBUTE_ICON>* AttributeList);
	void Battle_ExecJPUp(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void Battle_ExecEXPUp(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void Menu_GetSupportRecoveryRate(int32 TargetID, class UObject* __WorldContext, float* Rate);
	void Battle_ExecForceSetHPTo1(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void Battle_ExecInstantDeath(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void AilmentToAbilityType(TArray<struct FAilmentHandler>& AilmentList, class UObject* __WorldContext, enum class EABILITY_TYPE* AbilityType);
	void Battle_ExecRemoveDisease(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void Battle_ExecMoneyDrain(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void Battle_ExecMPLimitOver(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void Battle_ExecInevitablyCritical(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void Battle_ExecSetRandomAttackCount(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void Battle_ExecDamege_Stop(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void Battle_ExecStealMoney(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void Battle_ExecStealItem(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void Battle_ExecRecoverySP(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void Battle_ExecRecoveryBP(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void Battle_ExecDamageBP(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void Battle_ExecDamageSP(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void Battle_ExecDamageMP(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void Menu_GetPartyAilmentData(class UObject* __WorldContext, TArray<struct FMainMenuAilmentData>* PartyAilmentData);
	void Menu_CheckUseAbilityType(enum class EABILITY_TYPE CheckAilmentList, const struct FMainMenuAilmentData& TargetAilment, class UObject* __WorldContext, bool* CanUse);
	void Menu_CheckUseAilmentType(TArray<struct FAilmentHandler>& CheckAilmentList, const struct FMainMenuAilmentData& TargetAilment, class FName ItemLabel, class UObject* __WorldContext, bool* CanUse);
	void Battle_ExecRecoveryMP(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void SelectAilmentValue(int32 ValueA, int32 ValueB, class UObject* __WorldContext, int32* Result);
	void Menu_GetRemoveDisease(int32 CharacterID, class UObject* __WorldContext, TArray<enum class EAILMENT_REMOVE_DISEASE_TYPE>* DiseaseTypeList);
	void Menu_GetEffectiveAilmentList(int32 CharacterID, class UObject* __WorldContext, struct FMainMenuAilmentData* EffectiveAilment);
	void Menu_CheckRevive(int32 CharacterID, class UObject* __WorldContext, bool* IsEffective);
	void Menu_CheckRemoveDisease(const struct FAilment& Ailment, int32 CharacterID, class UObject* __WorldContext, bool* IsEffective);
	void Menu_CheckRecoveryMP(int32 TargetID, class UObject* __WorldContext, bool* IsEffective);
	void Menu_CheckRecoveryHP(int32 TargetID, bool IsRevive, class UObject* __WorldContext, bool* IsEffective);
	void Menu_ExecRevive(const struct FMenuAilmentHandler& Ailment, int32 EnforceerID, int32 TargetID, int32 AbilityRatio, bool UseItem, class UObject* __WorldContext);
	void Battle_ExecRevive(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void Menu_ExecRecoveryMP(const struct FMenuAilmentHandler& Ailment, int32 EnforcerID, int32 TargetID, class UObject* __WorldContext);
	void CalcRecoveryValue(float Base, float AilmentRatio, class UObject* __WorldContext, float* Result);
	void CalcMenuRecoveryValue(int32 EnforcerID, int32 InvocationValue, enum class EAILMENT_CALC_TYPE_OLD CalcType, int32 AbilityRatio, class UObject* __WorldContext, int32* Result);
	void Battle_ExecRecoveryHP(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void CalcItemValue(int32 InvocationValue, class UObject* __WorldContext, int32* Result);
	void CheckAddDisease(const struct FExecAilmentHandler& Ailment, class ABattleCharacterBaseBP_C* Target, class UObject* __WorldContext, bool* Result);
	void Battle_ExecAddDisease(const struct FExecAilmentHandler& Ailment, bool Random, class UObject* __WorldContext);
	void CheckCritical(const struct FExecAilmentHandler& Ailment, class ABattleCharacterBaseBP_C* Target, class ABP_ActionCommandBase_C* Command, class UObject* __WorldContext, bool* Result);
	void CheckHit(const struct FExecAilmentHandler& Ailment, class ABattleCharacterBaseBP_C* Target, class ABP_ActionCommandBase_C* Command, class UObject* __WorldContext, bool* Result);
	void CheckResistance(const struct FExecAilmentHandler& Ailment, class ABattleCharacterBaseBP_C* Target, class UObject* __WorldContext, enum class EATTRIBUTE_TYPE* AttackAttribute, enum class EWEAPON_CATEGORY* WeaponAttribute, enum class EATTRIBUTE_RESIST* AttributeResist, enum class EATTRIBUTE_RESIST* WeaponResist, enum class EATTRIBUTE_RESIST* TotalResist, bool* NewOpenWeakness);
	void CheckReflection(class ABP_ActionCommandBase_C* Command, class ABattleCharacterBaseBP_C* Target, class UObject* __WorldContext, bool* Result);
	void Check_Counter_Attack(class ABP_ActionCommandBase_C* Command, class ABattleCharacterBaseBP_C* Enforcer, class ABattleCharacterBaseBP_C* Target, const struct FExecAilmentHandler& ExecAilment, bool AttackHit, class UObject* __WorldContext, bool* Result);
	void GetAilmentTarget(enum class EAILMENT_TARGET_TYPE_OLD TargetType, class ABattleCharacterBaseBP_C* Enforcer, TArray<class ABattleCharacterBaseBP_C*>& DefaultTarget, class FName ExceptDisease, class ABP_ActionCommandBase_C* Command, class UObject* __WorldContext, TArray<class ABattleCharacterBaseBP_C*>* Return);
	void AppendCharacterArray(TArray<class ABattleCharacterBase*>& ArrayA, TArray<class ABattleCharacterBase*>& ArrayB, class UObject* __WorldContext, TArray<class ABattleCharacterBase*>* Result);
	void Menu_ExecRecoveryHP(const struct FMenuAilmentHandler& Ailment, int32 EnforceerID, int32 TargetID, int32 AbilityRatio, bool IsRevive, bool HasCompesationMagic, class UObject* __WorldContext);
	void Menu_ExecAilment(const struct FMenuAilmentHandler& Ailment, int32 EnforceerID, int32 TargetID, int32 AbilityRatio, bool UseItem, bool HasCompensationMagic, class UObject* __WorldContext);
	void Battle_ExecDamageHP(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
	void Battle_ExecAilment(const struct FExecAilmentHandler& Ailment, class UObject* __WorldContext);
};

}


