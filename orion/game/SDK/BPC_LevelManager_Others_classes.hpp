#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x132 (0x69A - 0x568)
// BlueprintGeneratedClass BPC_LevelManager_Others.BPC_LevelManager_Others_C
class ABPC_LevelManager_Others_C : public ALevelManager_Others
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x568(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x570(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        FadeInTime;                                        // 0x578(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadeOutTime;                                       // 0x57C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPartyCharacterData>           BattlePlayerData;                                  // 0x580(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsInvadeBattle;                                    // 0x590(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FieldLevelLoadCounter;                             // 0x594(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BattleLevelReady;                                  // 0x598(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         FiledLevelHidden;                                  // 0x599(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A4[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  EnemyGroupID;                                      // 0x59C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEventBGM;                                        // 0x5A4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FadeTimer;                                         // 0x5A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LevelShownFadeRequest;                             // 0x5AC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BarPlaceCharaCnt;                                  // 0x5B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class UObject*, struct FKSLevelPostProcessData> PostProcessVolumes;                                // 0x5B8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         PrevLevelIngame;                                   // 0x608(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5AA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                CollisionDisabledNPCList;                          // 0x610(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         GameOverLevelLoad;                                 // 0x620(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5AC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        UseBattleMapIndex;                                 // 0x624(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LevelId;                                           // 0x628(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELevelTriggerID                   NextTriggerID;                                     // 0x62C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5AF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  EventStorySelectLabel;                             // 0x630(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ExistsRestoreEncount;                              // 0x638(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEncountTriggerData                   RestoreEncountAfterReminiscnece;                   // 0x640(0x58)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         TestFlag;                                          // 0x698(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         BarOneCharaSpawned;                                // 0x699(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABPC_LevelManager_Others_C* GetDefaultObj();

	void RequestBattleFinish(bool* Result);
	void RequestBattleStart(TArray<struct FPartyCharacterData>& Player, class FName EnemyGroupID, bool InvadeBattle, bool IsEventBGM, int32 BattleMapIndex, bool* Result);
	void CheckThiefChokerFlag(class FName NewParam, class FName* ReturnLabel);
	void CanOpenFastTravelTutotial(bool* Return);
	void Debug_ShowBarNPCSpawn(bool OneCharaSpawned, int32 Rand);
	void CheckStorySelect(bool CheckTutorial, bool* ExistStory);
	void OnLoadedBeforeGameOverSaveData(const class FString& SlotName, int32 UserIndex, class UMJSaveData* SaveGame);
	bool CheckEventParamCondition(struct FPlacementEventParamSet& EventParamSet);
	void RefreshPartyCharacterOnChangeLevel(bool InGame);
	void SetupInHouseOnChangeLevel();
	void ResetEncountOnChangeLevel();
	void RefreshPostProcessOnChangeLevel();
	void RefreshPlacementOnChangeLevel();
	void RefreshPlayerOnChangeLevel();
	void ShowFastTravelTutorial(bool* IsOpen);
	void Proc_OnFieldLevelShown_Last();
	void CheckStackObject(class AActor* Actor);
	void CallbackFinishFadeIn_InEvent(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& Args);
	void ShowStorySelectMenu();
	void ResetCameraLockBeforeFadeIn();
	void ResetHouseOut();
	void SpawnPlacementObject_Impl(enum class EPLACEMENT_TYPE PlacementType, class FName TempDataLabel, const struct FVector& SpawnPos, bool RefreshFollowNPC, struct FPlacementData& PlacementData, bool FadeChara, bool ForceSpawn);
	void RefreshPlacedObject_Impl(enum class EPLACEMENT_TYPE PlacementType, class FName TempDataLabel, bool RefreshFollowNPC, bool bUpdateSwoon);
	void DestroyDontPlaceObject_Impl(enum class EPLACEMENT_TYPE PlacementType, class FName TempDataLabel, bool FadeChara, TArray<int32>& FollowNPCIDs, int32 UniqIndex);
	void CheckLevelTriggerEnable_Impl();
	void SequeceRequestStorySelect(enum class EREQUEST_RESULT Result);
	void SequenceRequest_SavePointStart(enum class EREQUEST_RESULT Result);
	void SequenceRequest_GoTitleCallback(enum class EREQUEST_RESULT Result);
	void RefreshCharacterResource(class FName LevelName);
	void CheckInGameLevelTransition(bool* Result);
	bool RefreshSwoon(int32 NPCUniqID);
	bool IsGameOverLevelLoad();
	class FName GetBattleEnemyGroupID();
	void RefreshBarChangeCharacter_Impl();
	void RefreshSwoon_Impl(int32 NPCUniqID);
	void ResetCameraLockParam_Impl();
	void HouseChangeVisible_Impl(bool InHouse, int32 Floor);
	bool OnShownField_AfterBattle();
	void ChangeBarCharacter(int32 BarCharaIndex, int32 CharacterID, struct FBarTalkDefine& BarTalkDefine);
	void Proc_OnFinishLoadFieldLevel_Impl();
	void Proc_OnBeginLevelChangeFadeOut_Impl();
	void Proc_OnFinishFadeOut_Field_Last_Impl();
	void Proc_on_Finish_Fade_Out_Field_First_Impl();
	void Proc_OnFieldLevelShown_Last_Impl();
	void Proc_on_Field_Level_Shown_First_Impl();
	void Proc_OnFinishFadeIn_Impl();
	void OnStartGameOver_Impl();
	void OnFinishFadeInAfterBattle_Impl();
	void On_Shown_Field_After_Battle_Impl(bool* GotoGameOver);
	void OnFinishBattle_Impl();
	void OnStartBattle_Impl();
	void OnFinishFadeIn_Impl();
	void Try_Swoon_Revival(class AKSFieldNPCCharacter_C* NPCChara, bool bUpdateSwoon);
	void FindCollisionDisabledNPC(int32& NPCUnqID, bool* Find);
	void ClearCollisionDisabledNPC_Impl();
	void UpdateCollisionDisabled(bool IsDisable, class AKSFieldCharacter_C* Target);
	void AddCollisionDisabledNPC_Impl(int32 NPCUniqID);
	void Debug_ShowPostProcessVolumeInfo_Impl();
	void SetupSwoonEmotion(class AKSFieldNPCCharacter_C* InputPin);
	void VisibleBarCharacter_Impl();
	void Debug_Change_Bar_Chara_Impl();
	void NPCLandCheck(class AKSFieldNPCCharacter_C* SpawNPC);
	void RefreshBarCharacter();
	void ChangeBGM_OnFinishFadeOut();
	void Game_Over_UIFinish_Event(int32 SelectCursor);
	void Remove_TargetNPC(int32 NPCUnqIndex);
	void Remove(enum class EPLACEMENT_TYPE Type, class FName TargetLabel, bool* IsRemove);
	void RemoveListAll();
	void SpawnSequencer(class FName SequencerLabel, class APlacedSequencerBP_C** Sequencer);
	void SpawnEventTrigger(class FName TriggerLabel, const struct FVector& Pos, const struct FVector& Size, const struct FPlacementData& PlacementData, class AActor** EventTrigger);
	void SpawnMapObject(class FName ObjLabel, class FName ObjectId, const struct FVector& Pos, enum class EKSCharacterDir Dir, bool InHouse, class AKSObjectBase** Output_Get);
	void SpawnNPC(class FName NPCLabel, struct FPlacementData& PlacementData, bool IsFadeChara, bool IsForceSpawn, class AKSFieldNPCCharacter_C** NPCCharacter);
	void LoadedInit();
	void RecoveryNPC();
	void RemoveTargetNPC_ByID(int32 NpdUniqID);
	void SetVisibleBarChangeCharacter();
	void Debug_ChangeBarChara();
	void Debug_ShowPostProcessVolumeInfo();
	void ClearCollisionDisabledNPC();
	void EndBattleWipe(int32 GameOverCursor);
	void ReceiveBeginPlay();
	void InitOnBP();
	void Proc_OnFinishFadeIn();
	void Proc_OnFinishFadeOut_Field_First();
	void Proc_OnFinishFadeOut_Field_Last();
	void OnFinishFadeIn();
	void OnStartBattle();
	void OnFinishBattle();
	void OnFinishFadeIn_AfterBattle();
	void OnStartGameOver();
	void Proc_OnBeginLevelChangeFadeOut();
	void Proc_OnFinishLoadFieldLevel();
	void AddCollisionDisabledNPC(int32 NPCUniqID);
	void RefreshBarChangeCharacter();
	void ResetCameraLockParam();
	void HouseChangeVisible(bool InHouse, int32 Floor);
	void Proc_OnFieldLevelShown_First();
	void ChangeMapPreProcess(int32 NextMapID);
	void VisibleBarCharacter();
	void CheckLevelTriggerEnable();
	void DestroyDontPlaceObject(enum class EPLACEMENT_TYPE EPlacementType, class FName TempDataLabel, bool bFadeChara, TArray<int32>& AnFollowNPCID, int32 NUniqUndex);
	void RefreshPlacedObject(enum class EPLACEMENT_TYPE EPlacementType, class FName TempDataLabel, bool bRefreshFollowNPC, bool bUpdateSwoon);
	void SpawnPlacementObject(enum class EPLACEMENT_TYPE EPlacementType, class FName TempDataLabel, const struct FVector& VSpawnPos, bool bRefreshFollowNPC, struct FPlacementData& PPlacementData, bool bFadeChara, bool bForceSpawn);
	void ExecuteUbergraph_BPC_LevelManager_Others(int32 EntryPoint);
};

}


