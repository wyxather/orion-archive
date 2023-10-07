#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x48 - 0x40)
// BlueprintGeneratedClass NormalResultCamera_EightBattle_Front.SequenceDirector_C
class USequenceDirector_C : public UBattleEventDirector
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x40(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class USequenceDirector_C* GetDefaultObj();

	void SequenceEvent__ENTRYPOINTSequenceDirector_5(class ABattleCharacterBase* Character);
	void SequenceEvent__ENTRYPOINTSequenceDirector_4(class ABattleCharacterBase* Character);
	void SequenceEvent__ENTRYPOINTSequenceDirector_3();
	void SequenceEvent__ENTRYPOINTSequenceDirector_2();
	void SequenceEvent__ENTRYPOINTSequenceDirector_1();
	void SequenceEvent__ENTRYPOINTSequenceDirector_0();
	void WaitResultUIFinish();
	void StartFade();
	void ExecResultDash();
	void PlayAction(class ABattleCharacterBase* Character, enum class EKSCharacterAction BattleActionID);
	void OpenResultUI();
	void JumpToFrame(int32 Frame);
	void RandomJumpToFrame(float Rate, int32 Frame);
	void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
};

}


