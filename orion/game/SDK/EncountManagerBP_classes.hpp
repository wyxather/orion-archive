#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C4 (0x564 - 0x2A0)
// BlueprintGeneratedClass EncountManagerBP.EncountManagerBP_C
class AEncountManagerBP_C : public AEncountManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         HasActiveEncount;                                  // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12C2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StepCount;                                         // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RandomStepA;                                       // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        EncountStepMin;                                    // 0x2BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RandomStepB;                                       // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EncountEnable;                                     // 0x2C4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12C4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               PrePlayerPos;                                      // 0x2C8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBATTLE_ENCOUNT_TYPE              EncountType;                                       // 0x2D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12C5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBattleEncounterBase                  CurrentEncounter;                                  // 0x2D8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                  EnemyGroupID;                                      // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ItemEffect;                                        // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseEventBGM;                                       // 0x304(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsSingleBattleMode;                                // 0x305(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EPlayableCharacterID              SingleBattleCharacterID;                           // 0x306(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12C6[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EncounterLevel;                                    // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FirstEncount;                                      // 0x30C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EBATTLE_START_TYPE                BattleStartType;                                   // 0x30D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12C7[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EncountDashRevision;                               // 0x310(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Debug_DisableStepRandom;                           // 0x314(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Debug_EncountSoon;                                 // 0x315(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12C8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BackupStepCount;                                   // 0x318(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               BackupPrePlayerPos;                                // 0x31C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SkipLiquidation;                                   // 0x328(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12C9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DangerLevel;                                       // 0x32C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AfterMainMenu;                                     // 0x330(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12CA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEncountTriggerData                   CurrentEncountTrigger;                             // 0x338(0x58)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                               EncountCameraPosition;                             // 0x390(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              EncountCameraRotation;                             // 0x39C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class AKSTriggerBase*>                EncountTriggerList;                                // 0x3A8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                        Force_Stop_Encount_Step_Count;                     // 0x3B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12CB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEncountVolume                        CurrentEncountVolume;                              // 0x3C0(0x60)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         EnableRareEnemy;                                   // 0x420(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12CD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BattleMapIndex;                                    // 0x424(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPartyCharacterData>           PartyData;                                         // 0x428(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsWaterSideBattle;                                 // 0x438(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12CE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ActiveEncountVolumeName;                           // 0x43C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12CF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          Debug_RandomSwordList;                             // 0x448(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          Debug_RandomLanceList;                             // 0x458(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          Debug_RandomDaggerList;                            // 0x468(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          Debug_RandomAxeList;                               // 0x478(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          Debug_RandomBowList;                               // 0x488(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          Debug_RandomRodList;                               // 0x498(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          Debug_RandomShieldList;                            // 0x4A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          Debug_RandomHeadList;                              // 0x4B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          Debug_RandomBodyList;                              // 0x4C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          Debug_RandomAccessoryList;                         // 0x4D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<enum class EJOB_TYPE>                 Debug_JobCanddidateList;                           // 0x4E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRareEnemyParam                       RareCatlinParam;                                   // 0x4F8(0x14)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EAreaID                           AreaType;                                          // 0x50C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12D3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPartyCharacterData>           SubPartyData;                                      // 0x510(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Debug_IsEinghtBattle;                              // 0x520(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12D4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EPlayableCharacterID>      MainPartyListForEightBattle;                       // 0x528(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<enum class EPlayableCharacterID>      SubPartyListForEightBattle;                        // 0x538(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRareEnemyParam                       RareOctlinParam;                                   // 0x548(0x14)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        FirstEncountStepRatio;                             // 0x55C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DecreaseStepCount;                                 // 0x560(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AEncountManagerBP_C* GetDefaultObj();

	void Debug_GetEncountInfo(class FString* OutDebugInfo);
	bool GeRareEnemyParameter(struct FRareEnemyParam* CRareCatlinParam, struct FRareEnemyParam* CRareOctlinParam, enum class EAreaID* EArea);
	void GetCurrentEncountVolume(struct FEncountTriggerData& ChkEncTrg, class FName* EncountVolumeName, float* EncountVolumeDecreaseValue, struct FEncountVolume* EncountVolumeData);
	void Debug_ScreenShot(const class FString& Filename);
	bool StartEightBattle(class FName EnemyGroupID, bool IsPlayEventAfterBattle, int32 NBattleMapIndex, TArray<enum class EPlayableCharacterID>& MainParty, TArray<enum class EPlayableCharacterID>& SubParty);
	bool Debug_SetBattleMode(enum class EBATTLE_ENCOUNT_TYPE EBattleMode);
	bool StartPreparationBattle(class FName EnemyGroupID, bool IsPlayEventAfterBattle, int32 NBattleMapIndex);
	bool Debug_SetEightBattle(int32 PartyLevel, int32 LevelRange, bool bEnableEightBattle);
	void GetSubPartyParam_Old(TArray<struct FPartyCharacterData>* SubPartyData);
	struct FEncountTriggerData GetCurrentEncountTrigger();
	void GetSupportAbilityInvocationValue(enum class ESUPPORT_AILMENT_TYPE AilmentType, int32* InvocationValue);
	struct FPartyCharacterData Debug_CreateRandomPartyData_OLD(int32 CharacterID, int32 PartyLevel, bool UseExtraJob);
	bool Debug_CreateRandomPartyData(int32 CharacterID, int32 PartyLevel, bool UseExtraJob);
	bool Debug_SetBattleRandomParty(int32 PartyLevel, int32 LevelRange, int32 PartyNum, bool UseExtraJob, bool UseRandomParty);
	void SetEncounter();
	void SequenceRequestCallback(enum class EREQUEST_RESULT Result);
	void AddSequeceRequestFromEncountType();
	class FName Debug_GetActiveEncountVolumeLabel();
	bool RestoreEncountVolumeFromSaveData();
	bool Debug_StartViewerBattle();
	bool Debug_SetBattleViewerSituation(enum class EBATTLE_START_TYPE FixedSituation, bool UseFixedSituation);
	bool Debug_SetBattleViewerParty(TArray<enum class EPlayableCharacterID>& PartyList, bool UseBattleViewerParty);
	bool Debug_SetBattleViewerMode(enum class EBATTLE_VIEWER_MODE ViewerMode);
	bool Debug_SetBattleViewerMap(class FName ViewerMapID, bool IsWaterSide, bool UseBattleViewerMap);
	bool BattleStartExec();
	bool Debug_SetBattleViewerEnemy(class FName EnemyGroupID, TArray<class FName>& EnemyIDList, class FName PlacementID);
	void Debug_GetDisableStepRandom(bool* Enable);
	bool Debug_SetEncountSoon(bool Enable);
	bool Debug_SetDisableStepRandom(bool Enable);
	void Debug_GetFixedEncount(bool* Fixed);
	bool Debug_SetFixedEnemyGroupID(class FName GrounpID);
	bool Debug_SetFixedEncount(bool Fixed);
	bool Debug_SetFixedSituation(int32 Situation);
	void Debug_GetEncountSoon(bool* Enable);
	int32 GetDangerLevel();
	void GetEncountCameraRotation(struct FRotator* EncountSign);
	bool GetViewerParameter(enum class EBATTLE_VIEWER_MODE* EViewerMode, TArray<class FName>* AstrEnemyIDList, class FName* StrPlacementID);
	bool SettingBattleParam();
	bool StartEventBattle(class FName EncountVolumeID, bool IsEventBGM, bool SingleBattle, enum class EPlayableCharacterID CharacterID, bool IsNextEvent, enum class EPlayableCharacterID FixFirstOrderPlayer);
	bool StartRevealBattle(class FName EnemyGroupID, bool IsPlayEventAfterBattle, int32 NBattleMapIndex);
	bool StartInvadeBattle(class FName EnemyGroupID, enum class EBATTLE_START_TYPE StartType, bool IsPlayEventAfterBattle, int32 NBattleMapIndex);
	bool StartRobBattle(class FName EnemyGroupID, enum class EBATTLE_START_TYPE StartType, bool IsPlayEventAfterBattle, int32 NBattleMapIndex);
	bool StartBoutBattle(class FName EnemyGroupID, bool IsPlayEventAfterBattle, int32 NBattleMapIndex, enum class EPlayableCharacterID EBattleCHaraID);
	bool RestoreEncount();
	bool BackupEncount();
	bool SetForceStopEncountStep(int32 NForceStopEncountStepCount);
	void GetEncountType(enum class EBATTLE_ENCOUNT_TYPE* EncountType);
	bool AddEncountTrigger(class AKSTriggerBase* Trigger);
	bool ResetTrigger();
	bool SetAfterMainMenu();
	bool ResetEncountStep();
	void GetEncountTriggerID(int32* TriggerID);
	bool RefleshEncountVolume();
	bool SetEncountVolume(const struct FEncountTriggerData& TriggerData);
	bool ResetEncountVolume();
	void GetLiquidationSkip(bool* SkipLiquidation);
	bool SetLiquidationSkip(bool SkipLiquidation);
	void CalcEncounterLevel(int32 LevelId, int32* EncounterLevel, int32* DangerLevel);
	int32 GetEncounterLevel();
	void GetEncountParam_Old(TArray<struct FPartyCharacterData>* PartyData, class FName* EnemyGropID, bool* IsEventBGM, enum class EBATTLE_ENCOUNT_TYPE* EncountType);
	void GetEncountCameraPosition(struct FVector* EncountCameraPosition);
	void GetEncountPlayerDir(enum class EKSCharacterDir* NewParam);
	void GetEncountPlayerPosition(struct FVector* EncountPlayerPosition);
	void CalcDecreaseStepCount(float DashRevision, float AbilityRevision, float EquipmentRevision, float* DecreaseValue);
	void CharacterIDToPartyData(int32 CharacterID, struct FPartyCharacterData* PartyCharacterData);
	void StartEventBattleByEncountVolume(class FName EncountVolumeID, bool IsEventBGM);
	void JudgeBattleSituation(class FName GroupID, enum class EBATTLE_START_TYPE* StartType);
	void SetItemEncountEffect(float Percent, int32 NoEncountMin, int32 NoEncountMax);
	void CalcEncountStepCount();
	void SetAbilityEncountEffect(float DownPercent, int32 NoEncountMin, int32 NoEncountMax);
	void UpdatePlayerStep(bool* Update);
	void PlayerStepCounter();
	void CreatePartyData(TArray<struct FPartyCharacterData>* PartyData);
	void GetEncountEnable(bool* EncountEnable);
	void SetEncountEnable(bool EncountEnable, bool* Result);
	void IsExecEncount(bool* Encount);
	void ClearEncountDataAll();
	void ReceiveTick(float DeltaSeconds);
	void BattleSequenceStart();
	void PlayEventBattleStartFlow();
	void PlayBattleStartFlow(class UParticleSystemComponent* EmotionEffext);
	void OnBeginPlay();
	void ExecuteUbergraph_EncountManagerBP(int32 EntryPoint);
};

}


