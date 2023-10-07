#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x1B0 - 0x1A0)
// BlueprintGeneratedClass BattleAI_Supporter.BattleAI_Supporter_C
class UBattleAI_Supporter_C : public UBP_BattleAI_Base_C
{
public:
	TArray<struct FBattleAICommandData>          CommandTable;                                      // 0x1A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBattleAI_Supporter_C* GetDefaultObj();

	void UpdateThink(class FName* CommandName);
	void SetBattleCommandTable(TArray<struct FBattleAICommandData>& AcCommandTable);
	void SelectBattleTarget(TArray<class ABattleCharacterBase*>& PlayerList, TArray<class ABattleCharacterBase*>& EnemyList, enum class EBATTLE_TARGET_TYPE TargetType, TArray<class ABattleCharacterBase*>* TargetList);
};

}


