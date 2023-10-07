#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x48 - 0x40)
// BlueprintGeneratedClass ABCamera_Lv3_TargetEnemy_Near.SequenceDirector_C
class USequenceDirector_C : public UBattleEventDirector
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x40(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class USequenceDirector_C* GetDefaultObj();

	void SequenceEvent__ENTRYPOINTSequenceDirector_1();
	void SequenceEvent__ENTRYPOINTSequenceDirector_0();
	void PlayVibration(class FName VibrationID, enum class EVibrationPower Power);
	void PlaySE(class FName SEID);
	void RemoveBoostEffect();
	void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
};

}


