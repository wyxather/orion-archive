#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x1A0 - 0x120)
// BlueprintGeneratedClass BP_BattleAI_Base.BP_BattleAI_Base_C
class UBP_BattleAI_Base_C : public UBattleAIBase
{
public:
	class ABattleCharacterBaseBP_C*              Owner_Old;                                         // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                RestAbilityTable;                                  // 0x128(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                AbilityRateList;                                   // 0x138(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         InAdditional_Turn;                                 // 0x148(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         UseBoostAction;                                    // 0x149(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ExacFirstActionPattern;                            // 0x14A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         MultiActionFlag;                                   // 0x14B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                        UsedAbilityIndex;                                  // 0x14C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Phase;                                             // 0x150(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_147F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                FirstAbilityTable;                                 // 0x158(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         UseMultiActionSign;                                // 0x168(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1480[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AbilityTable;                                      // 0x16C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MultiActionTableIndex;                             // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ResetActionTable;                                  // 0x174(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1481[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TuenForDoAnyTimes;                                 // 0x178(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1482[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                TempActionPatternList;                             // 0x180(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                TempActionTableList;                               // 0x190(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_BattleAI_Base_C* GetDefaultObj();

	void UpdateThinkForConfusion(class FName* CommandName);
	bool PostSignOfBoost();
	void GetCounterAbility(class FName* CommandName);
	bool PostUpdateThink();
	void SelectBattleTarget(TArray<class ABattleCharacterBase*>& PlayerList, TArray<class ABattleCharacterBase*>& EnemyList, enum class EBATTLE_TARGET_TYPE TargetType, TArray<class ABattleCharacterBase*>* TargetList);
	void UpdateThink(class FName* CommandName);
	bool PreUpdateThink();
	bool AIInitialize();
	void SwitchPahse(float HpRateOfPhase1, float HpRateOfPhase2, float HpRateOfPhase3, int32* Phase);
	void DoAnyTimes(int32 ExecNum, bool& ExecCondition, bool* Exec);
	void CountSpecialTurnVariable(int32 SpecialTurn, int32& TurnVariable, bool* IsSpesialTurn);
	void GetAbilityPattern(TArray<int32>& ActionPattern, bool MultiAction, bool* FinishAbilityPattern, class FName* AbilityName, int32* AbilityIndex);
	void GetFirstActionPattern(TArray<int32>& FirstActionPattern, class FName* AbilityName, bool* Finish);
	void GetAbilityTable(TArray<int32>& AbilityTable, bool MultiAction, bool FixFirstAbility, class FName* AbilityName, int32* AbilityIndex, bool* FinishAbilityTable);
	void AddSignActionTurn(bool NotMultiActionSign);
	void CheckUniqueAbility(bool* UseNormalAttack);
	void TakeDamage_Old(int32 Damage, class ABattleCharacterBaseBP_C* Enforcer, enum class EATTRIBUTE_TYPE Attribute, enum class EWEAPON_CATEGORY Weapon, bool* Return);
	void SetOwner_old(class ABattleCharacterBaseBP_C* Owner);
	void GetHPRate(float* HPRate);
};

}


