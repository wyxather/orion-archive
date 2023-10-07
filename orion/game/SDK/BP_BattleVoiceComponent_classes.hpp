#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x74 (0x1DC - 0x168)
// BlueprintGeneratedClass BP_BattleVoiceComponent.BP_BattleVoiceComponent_C
class UBP_BattleVoiceComponent_C : public UBattleVoiceComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x168(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TMap<class FName, class FName>               VoiceLabelToVoiceSetLabel;                         // 0x170(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EBATTLE_VOICE_TYPE                PrevVoiceType;                                     // 0x1C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D12[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PrevVoiceCueName;                                  // 0x1C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	float                                        PrevRemainingTime;                                 // 0x1D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_BattleVoiceComponent_C* GetDefaultObj();

	void OnFinishAudio();
	bool CheckOnTakeDamageVoice(enum class EBATTLE_VOICE_TYPE VoiceType);
	void ResetVoiceFlagForPreAction();
	void CheckBattleVoiceData(const struct FBattleVoiceSetData& BattleVoiceData, const struct FBattleVoiceSetData& ConditionData, bool* Enable, class FName* VoiceLabel);
	void InsertBattleVoiceData(TArray<struct FBattleVoiceSetData>& VoiceDataArray, const struct FBattleVoiceSetData& NewVoiceData);
	bool PlayBattleVoice(enum class EBATTLE_VOICE_TYPE EBattleVoiceType, const struct FBattleVoiceSetData& CPlayCondition);
	bool InitBattleVoice(class FName StrBattleVoiceID);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_BP_BattleVoiceComponent(int32 EntryPoint);
};

}


