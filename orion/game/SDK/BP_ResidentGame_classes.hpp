#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA1 (0x2C1 - 0x220)
// BlueprintGeneratedClass BP_ResidentGame.BP_ResidentGame_C
class ABP_ResidentGame_C : public AResidentGameBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AEffectManagerBP_C*                    EffectManager;                                     // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABattleManager*                        BattleManager;                                     // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADBAccessManagerBP_C*                  DBAccessManager;                                   // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKSCharacterManager*                   CharacterManager;                                  // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AUIResourceManager*                    UIResourceManager;                                 // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CreatedInGameManagers;                             // 0x258(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         StartInitEffect;                                   // 0x259(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1593[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BattleStepCount;                                   // 0x25C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        UIResourceStep;                                    // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NewInitStep;                                       // 0x264(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        KickStep;                                          // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CheatStep;                                         // 0x26C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DBAccessStep;                                      // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        StepCount;                                         // 0x274(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        UITitleStep;                                       // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MakeManagerFinish;                                 // 0x27C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         UITickFinish;                                      // 0x27D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1594[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CharacterStepCount;                                // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DirectLoadGameStep;                                // 0x284(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DirectLoadGameFlow;                                // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1595[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TitleWidgetLoadCounter;                            // 0x28C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UObject*>                       LoadedUIMainTitleWidgets;                          // 0x290(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        RootCounter;                                       // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SaveDataClearnupStep;                              // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDeleted;                                         // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1598[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameDataClearnupWorker*               GameDataClearnupWorker;                            // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASystemDataCleanupWorker*              SystemDataClearnupWorker;                          // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EKSLanguage                       PrevLang;                                          // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ResidentGame_C* GetDefaultObj();

	void Tick_SaveDataClearnup();
	void StopResidentGame();
	void PreLoadTitleWidgets(TArray<TSoftObjectPtr<class UObject>>* Array);
	void OnLoaded_UIMainTitle(TArray<class UObject*>& ObjList);
	void DirectLoadGame_OnFailedLoadGame();
	void TickDirectLoadGame();
	void DirectLoadGame_CallbackLoadGame(const class FString& SlotName, int32 UserIndex, class UMJSaveData* SaveGame);
	void DirectLoadGame_CallbackChangeMap(enum class EREQUEST_RESULT Result);
	void Step_Load_Common_UIResources(bool* Result);
	void Tick_UIMainTitle();
	void Tick_ResidentGame();
	void CheckPoint(const class FString& Tag);
	void CheckTime(const class FString& Tag);
	void IsLevelManagerReady(bool* Result);
	void InitForDebugStart();
	void Set_DBNotice_Delegate();
	void StepInitSaveData(bool* Result);
	void StepPlayerController(bool* Result);
	void StepCharacter(bool* Result);
	void StepDebug(bool* Result);
	void StepEffect(bool* Result);
	void StepFinish(bool* Result);
	void StepUIResource(bool* Result);
	void SetupAfterLoadedDB();
	void StepBattle(bool* Result);
	void StepDBAccess(bool* Result);
	void Setup_Manager(bool* Result);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ResidentGame(int32 EntryPoint);
};

}


