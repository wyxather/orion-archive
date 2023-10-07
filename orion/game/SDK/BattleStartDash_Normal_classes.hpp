#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x48 - 0x40)
// BlueprintGeneratedClass BattleStartDash_Normal.SequenceDirector_C
class USequenceDirector_C : public UBattleEventDirector
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x40(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class USequenceDirector_C* GetDefaultObj();

	void SequenceEvent__ENTRYPOINTSequenceDirector_29(class ABattleCharacterBase* Character);
	void SequenceEvent__ENTRYPOINTSequenceDirector_28(class ABattleCharacterBase* Character);
	void SequenceEvent__ENTRYPOINTSequenceDirector_27(class ABattleCharacterBase* Character);
	void SequenceEvent__ENTRYPOINTSequenceDirector_26(class ABattleCharacterBase* Character);
	void SequenceEvent__ENTRYPOINTSequenceDirector_25(class ABattleCharacterBase* Character);
	void SequenceEvent__ENTRYPOINTSequenceDirector_24(class ABattleCharacterBase* Character);
	void SequenceEvent__ENTRYPOINTSequenceDirector_23(class ABattleCharacterBase* Character);
	void SequenceEvent__ENTRYPOINTSequenceDirector_22(class ABattleCharacterBase* Character);
	void SequenceEvent__ENTRYPOINTSequenceDirector_21(class ABattleCharacterBase* Character);
	void SequenceEvent__ENTRYPOINTSequenceDirector_20(class ABattleCharacterBase* Character);
	void SequenceEvent__ENTRYPOINTSequenceDirector_19(class ABattleCharacterBase* Character);
	void SequenceEvent__ENTRYPOINTSequenceDirector_18(class ABattleCharacterBase* Character);
	void SequenceEvent__ENTRYPOINTSequenceDirector_17(class ABattleCharacterBase* Character);
	void SequenceEvent__ENTRYPOINTSequenceDirector_16(class ABattleCharacterBase* Character);
	void SequenceEvent__ENTRYPOINTSequenceDirector_15(class ABattleCharacterBase* Character);
	void SequenceEvent__ENTRYPOINTSequenceDirector_14(class ABattleCharacterBase* Character);
	void SequenceEvent__ENTRYPOINTSequenceDirector_13(class ABattleCharacterBase* Character);
	void SequenceEvent__ENTRYPOINTSequenceDirector_12(class ABattleCharacterBase* Character);
	void SequenceEvent__ENTRYPOINTSequenceDirector_11(class ABattleCharacterBase* Character);
	void SequenceEvent__ENTRYPOINTSequenceDirector_10(class ABattleCharacterBase* Character);
	void SequenceEvent__ENTRYPOINTSequenceDirector_9(class ABattleCharacterBase* Character);
	void SequenceEvent__ENTRYPOINTSequenceDirector_8(class ABattleCharacterBase* Character);
	void SequenceEvent__ENTRYPOINTSequenceDirector_7(class ABattleCharacterBase* Character);
	void SequenceEvent__ENTRYPOINTSequenceDirector_6(class ABattleCharacterBase* Character);
	void SequenceEvent__ENTRYPOINTSequenceDirector_5(class ABattleCharacterBase* Character);
	void SequenceEvent__ENTRYPOINTSequenceDirector_4(class ABattleCharacterBase* Character);
	void SequenceEvent__ENTRYPOINTSequenceDirector_3(class ABattleCharacterBase* Character);
	void SequenceEvent__ENTRYPOINTSequenceDirector_2(class ABattleCharacterBase* Character);
	void SequenceEvent__ENTRYPOINTSequenceDirector_1(class ABattleCharacterBase* Character);
	void SequenceEvent__ENTRYPOINTSequenceDirector_0(class ABattleCharacterBase* Character);
	void PlayAction(class ABattleCharacterBase* Character, enum class EKSCharacterAction BattleActionID);
	void JumpToFrame(int32 Frame);
	void RandomJumpToFrame(float Rate, int32 Frame);
	void PlaySE(class FName SEID);
	void PlayVibration(class FName VibrationID, enum class EVibrationPower Power);
	void PlaySE_StartDash(class ABattleCharacterBase* Character);
	void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
};

}


