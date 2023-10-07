#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x318 - 0x2D8)
// BlueprintGeneratedClass TutorialManagerBP.TutorialManagerBP_C
class ATutorialManagerBP_C : public ATutorialManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UUITutorialBase*                       AutoPopUITutorial;                                 // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TmpCharacterID;                                    // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1212[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class ETUTORIAL_TYPE>            RequestTutorialType_old;                           // 0x2F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                RequestCharaID_old;                                // 0x308(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ATutorialManagerBP_C* GetDefaultObj();

	void OpenEndCard(enum class ETUTORIAL_TYPE Type, bool ForcedDisplay, bool* IsOpen, int32 CharaID);
	void OpenTutorialListData(const struct FDataTableTutorialList& ListData, bool AutoPushPop, bool ForcedDisplay, bool* IsOpen, class UUITutorialBase** Tutorial);
	bool IsRunningTutorial();
	void OpenTutorial(enum class ETUTORIAL_TYPE Type, bool ForcedDisplay, bool* IsOpen, int32 CharaID);
	void UpdateMain();
	void UpdateFinish();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_TutorialManagerBP(int32 EntryPoint);
};

}


