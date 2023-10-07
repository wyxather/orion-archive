#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x7D0 - 0x7A0)
// BlueprintGeneratedClass BPC_MJLevelManager.BPC_MJLevelManager_C
class ABPC_MJLevelManager_C : public AMJLevelManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class URevivalObjectManageComponent*         RevivalObjectManage;                               // 0x7A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x7B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            CompletedFadeIn;                                   // 0x7B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         GameOverLevelLoad;                                 // 0x7C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EDC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        GameOverCursorIndex;                               // 0x7CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABPC_MJLevelManager_C* GetDefaultObj();

	void GameOverUIFinishEvent(int32 NSelectCursor);
	void Proc_StartUnloadLevel();
	void Proc_EndLevelLoad();
	void Proc_StartLevelLoad();
	bool IsFadeInAllowed();
	bool FinishBattleLevel();
	bool RequestLoadFieldLevel(class FName Map, enum class ELevelTriggerID TriggerID, bool Fade, bool ChangeBGM);
	void SaveVisitedMap_Impl(class FName LevelId);
	void Proc_EndChangeLevel();
	void Proc_StartFadeIn();
	void Proc_PrevFadeIn_Exit();
	void Proc_PrevFadeIn_Entry();
	void Proc_EndUnloadLevel();
	void Proc_EndFadeOut();
	void Proc_StartChangeLevel();
	void Proc_NotifyLevelLoader(class FName LevelName, enum class ELEVEL_TYPE LevelType, enum class ELevelLoaderNotice Notice);
	void Proc_NotifyLevelTransition(class FName LevelId, enum class ELEVEL_TYPE LevelType, enum class ELevelTransitionNotice Notice);
	void Initialize();
	bool IsRunningFadeOut();
	bool IsRunningFadeIn();
	bool StartFadeOut();
	bool StartFadeIn();
	void SaveVisitedMap(class FName SaveLevel);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPC_MJLevelManager(int32 EntryPoint);
	void CompletedFadeIn__DelegateSignature();
};

}


