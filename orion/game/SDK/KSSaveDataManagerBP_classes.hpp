#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x2F0 - 0x2C8)
// BlueprintGeneratedClass KSSaveDataManagerBP.KSSaveDataManagerBP_C
class AKSSaveDataManagerBP_C : public AKSSaveDataManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UKSSaveGameBP_C*                       SaveData;                                          // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSSaveSlotName                   ActiveSaveSlotName;                                // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OverrideBattleSpeed;                               // 0x2E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32[0x2];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InitBattleSpeedTimer;                              // 0x2E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DelayTime;                                         // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SetGameTime;                                       // 0x2EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AKSSaveDataManagerBP_C* GetDefaultObj();

	void SetEndrollSegmentBattleReplay(enum class EEndRollSegmentSet SegmentID);
	void UpdateSlotData(enum class EKSSaveSlotName SlotIdx);
	void SetGameSaveData_BP(class UMJSaveData* SaveData);
	bool InitGameData();
	float GetCalcBaseBattleSpeed();
	void SetBattleSpeed();
	void ResetBattleSpeed();
	void ChangeBattleSpeed();
	bool InitSystemData();
	void CheckPartyMainMember(enum class EPlayableCharacterID CharaID, bool* IsHit);
	bool RestoreParty();
	bool SetupLastDungeonParty(TArray<int32>& Party1, TArray<int32>& Party2);
	bool SetupReminiscenceParty(enum class EPlayableCharacterID CharacterID);
	void GetActiveSaveSlot(enum class EKSSaveSlotName* SaveSlotName);
	void SetActiveSaveSlot(enum class EKSSaveSlotName SaveSlotName);
	void CloseAutoSaveUI();
	void OpenAutoSaveUI();
	bool StartAutoSave(FDelegateProperty_& AutoSavedDelegate);
	void OnEndAutoSave();
	void ExecuteUbergraph_KSSaveDataManagerBP(int32 EntryPoint);
};

}


