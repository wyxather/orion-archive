#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x2B1 - 0x2A8)
// BlueprintGeneratedClass PlacedSequencerBP.PlacedSequencerBP_C
class APlacedSequencerBP_C : public ALevelSequenceActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         UpdateControllFlag;                                // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class APlacedSequencerBP_C* GetDefaultObj();

	void PauseSequence();
	void PlaySequence();
	void ChangeInputMode(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& Args);
	void UpdateSequencer();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_PlacedSequencerBP(int32 EntryPoint);
};

}


