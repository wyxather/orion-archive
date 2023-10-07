#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x34 (0x6C5 - 0x691)
// BlueprintGeneratedClass TameMonsterCommand.TameMonsterCommand_C
class ATameMonsterCommand_C : public ABP_ActionCommandBase_C
{
public:
	uint8                                        Pad_F5C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x698(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABattleEnemyBP_C*                      TargetEnemy;                                       // 0x6A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDialog;                                          // 0x6A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F5D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMonsterListData>              MonsterList;                                       // 0x6B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        NewMonsterCount;                                   // 0x6C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TameSuccess;                                       // 0x6C4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ATameMonsterCommand_C* GetDefaultObj();

	void Setup_Action_Command(class ABattleCharacterBaseBP_C* Enforcer, TArray<class ABattleCharacterBaseBP_C*>& Target, const struct FAbilityDataBase& NewCommand, int32 BoostLevel, bool* Success);
	bool ExecSpecialAilmentCommand();
	void SaveTameMonster();
	void CheckExecCommand(bool* Exec);
	void CheckBackPackOver(bool* Over);
	void JudgeTameMonster(bool* Success);
	void TameDialogPermit();
	void TameDialogCancel();
	void TameReleaseComplete();
	void ExecTameMonsterFlow();
	void ExecuteUbergraph_TameMonsterCommand(int32 EntryPoint);
};

}


