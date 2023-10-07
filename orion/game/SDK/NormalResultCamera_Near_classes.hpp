#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x48 - 0x40)
// BlueprintGeneratedClass NormalResultCamera_Near.SequenceDirector_C
class USequenceDirector_C : public UBattleEventDirector
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x40(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class USequenceDirector_C* GetDefaultObj();

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


