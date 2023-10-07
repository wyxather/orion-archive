#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass LevelFunction.LevelFunction_C
class ULevelFunction_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULevelFunction_C* GetDefaultObj();

	void RefreshPlayerLevelArea(class UObject* __WorldContext);
	void EqualsPlayerCharaLevelArea(const struct FVector& VPos, class UObject* __WorldContext, bool* IsSame);
	void GetRequestedLevelTriggerCameraLock(class UObject* __WorldContext, struct FCameraLockParams* CameraLockParam);
	void GetFirstLevelTrigger(class UObject* __WorldContext, class ALevelTriggerActor** LevelTrigger);
	void DebugSpawnPlayer(class UObject* __WorldContext, bool* Result);
	void DebugInitLevel(class UObject* __WorldContext);
	void SortSwitchIndoorTrigger(TArray<class ASwitchIndoorTriggerBP_C*>& SwitchIndoorTrigger, class UObject* __WorldContext, TArray<class ASwitchIndoorTriggerBP_C*>* Ret);
	void LevelChangeHouseSetting(class ALevelTriggerActor* LevelTrigger, class UObject* __WorldContext);
	void GetMapAndRegionNameByLevelID(int32 LevelId, int32 Selection, class UObject* __WorldContext, class FText* RegionName, class FText* MapName);
	void ViewerLevelBeginPlay(class UObject* __WorldContext);
	bool IsLevelChanged(class UObject* __WorldContext);
	void IsLevelChanging(class UObject* __WorldContext, bool* IsChanging);
	void SetEvent_CompletedLevelChangeFadeIn(FDelegateProperty_& CompletedFadeIn, class UObject* __WorldContext);
	void RequestInvadeBattleStart(TArray<struct FPartyCharacterData>& Player, class FName EnemyGroupID, int32 BattleMapIndex, class UObject* __WorldContext);
	bool RequestMapChangeByNameForEvent(class FName NextMapName, enum class ELevelTriggerID ReqTrigger, bool UseFadeUI, bool ChangeBGM, class UObject* __WorldContext);
	bool RequestMapChangeForEvent(int32 NextMapID, enum class ELevelTriggerID ReqTrigger, bool UseFadeUI, bool ChangeBGM, class UObject* __WorldContext);
	void RequestMapChangeByNameWithBGM(class FName NextMapName, enum class ELevelTriggerID ReqTrigger, bool UseFadeUI, bool ChangeBGM, class UObject* __WorldContext);
	void RequestBattleStart(TArray<struct FPartyCharacterData>& Player, class FName EnemyGroupID, bool IsEventBGM, int32 BattleMapIndex, class UObject* __WorldContext);
	void RequestMapChangeWithBGM(int32 NextMapID, enum class ELevelTriggerID ReqTrigger, bool UseFadeUI, bool ChangeBGM, class UObject* __WorldContext);
	void RequestMapChangeByName(class FName NextMapName, enum class ELevelTriggerID ReqTrigger, bool UseFadeUI, class UObject* __WorldContext);
	void RequestMapChange(int32 NextMapID, enum class ELevelTriggerID ReqTrigger, bool UseFadeUI, class UObject* __WorldContext);
	void LevelBeginPlay(class UObject* __WorldContext);
	void TriggerSpawnPlayer(class ALevelTriggerActor* LevelTrigger, class UObject* __WorldContext);
	void SetPlayerLocation(struct FVector& Location, enum class EKSCharacterDir InputPin, class UObject* __WorldContext);
	void LoadPlayerLocation(class UObject* __WorldContext);
	void LevelEndPlay(class UObject* __WorldContext);
};

}


