#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xBE8 - 0xBE8)
// BlueprintGeneratedClass KSSaveGameBP.KSSaveGameBP_C
class UKSSaveGameBP_C : public UMJSaveData
{
public:

	static class UClass* StaticClass();
	static class UKSSaveGameBP_C* GetDefaultObj();

	void CheckPartyEquipmentAilmentEnable(enum class EAILMENT_TYPE Type, bool* IsFound, struct FAilment* Ailment, struct FAilmentHandler* AilmentHandler);
	void AddParticipationOrderCharacter(enum class EPlayableCharacterID JoinCharaID);
	void SetCharacterFixedEquipment(int32 CharacterID, enum class EEQUIPMENT_PART Part, bool IsFixed);
	void GetPartyMember(TArray<struct FSavePlayerCharacterData>* PartyMemberData);
	void Set_Character_POT(int32 CharacterID, int32 POT);
	void GetPlayerExp(int32 Level, int32* NextExp, int32* TotalExp);
	void CheckAlreadyLearned(int32 CheckID, bool* IsAlreadyLearned);
	void IsLearnAbilityFull(bool* IsFull, int32* EmptyIndex);
	void DeleteFollowNpc(enum class EPlayableCharacterID CharacterID, bool* IsDelete);
	void GetClearedMainScenarioDataMax(int32* DataMax);
	void InitClearedMainScenario();
	void SetBattleReplayData(const struct FBattleReplayData& ReplayData, enum class EEndRollSegmentSet EndRollSegment);
	void GetBattleReplayData(enum class EEndRollSegmentSet EndRollSegment, struct FBattleReplayData* ReplayData);
	void SubSupportLimit(int32 SubValue, enum class EPlayableCharacterID CharacterID, bool* LimitOver);
	void SetNPCHearFlag(class FName NPCLabel, bool HearFlag);
	void DelSubParty(enum class EPlayableCharacterID CharacterID);
	void DelMainParty(enum class EPlayableCharacterID CharacterID);
	void LeaveCharacterToParty(enum class EPlayableCharacterID CharaID);
	void JoinGuestCharacterToParty(enum class EPlayableCharacterID CharacterID, bool* Result);
	void CreatePartySet1And2(TArray<int32>& Set1_Main, TArray<int32>& Set1_Sub, TArray<int32>& Set2_Main, TArray<int32>& Set2_Sub);
	void InitializationMapChangeHistory();
	void IsMaxMapChangeHistory(bool* IsMax);
	void GetParameterGrow(int32 CharacterID, struct FCharacterParam* GrowParam);
	void SetParameterGrow(int32 CharacterID, const struct FCharacterParam& GrowParam);
	void SetPreparationKnown(int32 PreparationID);
	void GetPreparationKnown(int32 PreparationID, bool* Known);
	void CheckPartySupportAilmentEnable(enum class ESUPPORT_AILMENT_TYPE Type, bool* Enable);
	void ClearLastBgmID();
	void GetLastBgmID(int32* LastBgmID);
	void SetFirstSelectCharacterID(int32 CharacterID);
	void SetSupportAbility(int32 CharacterID, int32 AbilityID, int32 Slot);
	void IsCompletedMainMission_DEPRECATED(enum class EPlayableCharacterID CharacterID, bool* IsCompleted);
	void MakeInitializedArrayOfBool(int32 Size, bool InitValue, TArray<bool>* BoolArray);
	void GetSubMemberCharacterIDs(TArray<int32>* CharacterID);
	void GetMainMemberCharacterIDs(TArray<int32>* CharacterID);
	void DeleteFollowNPCWithUniqueID(int32 UniqueId, bool* IsDelete);
	void SetCharacterEquipmentID(int32 CharacterID, enum class EEQUIPMENT_PART Part, int32 EquipmentID);
	void GetSubMemberIDs_DEPRECATED(TArray<int32>* SubMemberID);
	void ConvertLabelToItemId(class FName ItemLabel, int32* ItemId);
	void SetVisitedAllMap(bool SetBit);
	void GetMainMemberIDs_DEPRECATED(TArray<int32>* MainMemberID);
	void SubPlayerMoney(int32 Money);
	void AddPlayerMoney(int32 Money);
	void GetSubMember_DEPRECATED(TArray<struct FSavePlayerCharacterData>* BattleMemberData);
	void GetBattleMember_DEPRECATED(TArray<struct FSavePlayerCharacterData>* BattleMemberData);
	void SetJobPoint(int32 CharacterID, int32 JobPoint);
	void MakeInitializedArrayOfInt(int32 Size, int32 InitValue, TArray<int32>* Array);
	void SettingLoadGameData();
	void SettingPlusNewGameData();
	void SetCharacterMP(int32 CharacterID, int32 MP);
	void GetCharacterData(int32 CharacterID, struct FSavePlayerCharacterData* CharacterData);
	void SetNPCPurchasedItem(class FName NPCLabel, int32 PurchaseIndex, bool Flag, int32 PurchaseRestock, int32* UpdateIndex);
	void SetCharacterHP(int32 CharacterID, int32 HP);
	void SetCharacterJob(int32 CharacterID, int32 JobID);
	void SetBackpackItemList(TArray<struct FSaveBackPackItem>& ItemList);
	void GetBackpackItemList(TArray<struct FSaveBackPackItem>* Player_Backpack_Item_List);
	void GetPlayerMoney_DEPRECATED(int32* PlayerMoney);
	void SetPlayerMoney_DEPRECATED(int32 SetValue);
};

}


