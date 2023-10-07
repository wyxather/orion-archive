#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x350 - 0x2B0)
// BlueprintGeneratedClass BPC_StoryManager.BPC_StoryManager_C
class ABPC_StoryManager_C : public AStoryManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FSubMissionData                       SubStoryData;                                      // 0x2C0(0x90)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABPC_StoryManager_C* GetDefaultObj();

	void OnClosedSubStoryResultDialog(int32 SelectIndex);
	void PushSubStoryNotification();
	void Debug_StartAutoPlay(const class FString& ScenarioFileName);
	bool CompleteFakeSubStory(class FName SubStoryLabel);
	void OnFinishSubStoryCompleteEvent();
	void OnFinishSubStoryStartEvent();
	void ShowSubStoryResult();
	void Temp_SubStoryResult(class FName SubStoryLabel);
	void ShowSubStoryStartUI();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BPC_StoryManager(int32 EntryPoint);
};

}


