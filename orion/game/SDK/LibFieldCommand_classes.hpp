#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass LibFieldCommand.LibFieldCommand_C
class ULibFieldCommand_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibFieldCommand_C* GetDefaultObj();

	void GetRandomForFC(class UObject* __WorldContext, int32* Random);
	void GetFieldCommandCharacterType(enum class EMJFieldCommandType FieldCommandType, class UObject* __WorldContext, enum class EPlayableCharacterID* CharacterType);
	void SetUnFollowingFlag(bool IsFollow, class FName NPCLabel, class UObject* __WorldContext);
	void SetFollowingFlag(bool IsFollow, class FName NPCLabel, class UObject* __WorldContext);
	void SetFollowFlag(bool IsFollow, class FName NPCLabel, class UObject* __WorldContext);
	void GetHireFieldCommandNeedMoney(struct FNPCLeadDataBase& NPCLeadData, class UObject* __WorldContext, int32* NeedMoney);
	void GetHearFieldCommandNeedLevel(struct FNPCHearDataBase& NPCHearData, class UObject* __WorldContext, int32* NeedLevel);
	void GetLeadFieldCommandNeedLevel(struct FNPCLeadDataBase& NPCLeadData, class UObject* __WorldContext, int32* NeedLevel);
	void GetBattleFieldCommandNeedLevel(struct FNPCBattleData& NPCBattleData, class UObject* __WorldContext, int32* NeedLevel);
	void PrintFieldCommandProbability(enum class EMJFieldCommandType FCType, float BaseProbability, float CorrectedProbability, float RandValue, bool IsSuccess, class UObject* __WorldContext);
	void GetNpcSerifLabel(class FName SerifLabel, enum class EFC_NpcSerifType SerifType, int32 NpcUniqueIndex, class UObject* __WorldContext, class FName* OutputSerifLabel);
	void GetSupportLimit(class FName NPCLabel, class UObject* __WorldContext, int32* SupportLimit);
	void GetNpcBattleDataByNpcLabel(class FName PlacementLabel, class UObject* __WorldContext, struct FNPCBattleData* OutBattleData);
	void IsItemPurchased(class FName NPCLabel, int32 PurchaseIndex, class UObject* __WorldContext, bool* Output);
	bool HasItemMaxCount(class FName ItemLabel, class UObject* __WorldContext);
	void IsOnSaleRobItem(struct FPurchaseItemInfoData& PurchaseItemInfoData, class UObject* __WorldContext, bool* Return, bool* HasMaxCount);
	void AddPurchasedList(class FName PlacementLabel, int32 PurchaseIndex, class UObject* __WorldContext);
	void CheckOutOfRobStocks(class FName NPCLabel, class UObject* __WorldContext, bool* OutOfStocks);
	void Swoon_NPC(class AKSCharacterBase* TargetNpc, enum class ENpcSwoonType SwoonType, class UObject* __WorldContext);
	void CheckOutOfStocks(class FName PlacementLabel, int32 FCBitmask, class UObject* __WorldContext, bool* OutOfStocks);
	void CheckOutOfBegStocks(class FName NPCLabel, class UObject* __WorldContext, bool* OutOfStocks);
	void CheckOutOfPurchaseStocks(class FName NPCLabel, class UObject* __WorldContext, bool* OutOfStocks);
	void CheckOutOfStealStocks(class FName NPCLabel, class UObject* __WorldContext, bool* OutOfStocks);
	void GetNPCShopList(class FName PlacementLabel, class UObject* __WorldContext, TArray<class FName>* ShopList);
	void GetNPCPurchaseItemList(class FName NPCLabel, class UObject* __WorldContext, TArray<struct FPurchaseItemInfoData>* PuechaseData);
	void GetTameMonsterList(class UObject* __WorldContext, TArray<struct FMonsterListData>* TameMonsterList);
	void GetSearchProbability(float& BaseProbability, class UObject* __WorldContext, int32* Rate);
	void GetSearchSuccessRate(int32 SearchLv, class UObject* __WorldContext, float* Rate);
	void IsAvailableNightFieldCommand(enum class ETimeZoneType TimeZone, class UObject* __WorldContext, bool* Available);
	void IsAvailableDayTimeFieldCommand(enum class ETimeZoneType TimeZone, class UObject* __WorldContext, bool* Available);
	void GetFieldCommandType(int32 PlayerID, class UObject* __WorldContext, TArray<enum class EMJFieldCommandType>* FieldCommandType);
	void GetAvailableFieldCommandInCharacter(const struct FPlayableCharacterData& PlayableCharacterData, class UObject* __WorldContext, enum class EMJFieldCommandType* AvailableFieldCommand, int32* ImpossibleFlag);
	void CheckCharacterHaveFieldCommandType(const struct FPlayableCharacterData& PlayableCharacterData, enum class EMJFieldCommandType CheckType, bool CheckTimeZone, class UObject* __WorldContext, bool* HaveFieldCommand, int32* ImpossibleFlag);
	void Face_Each_Other(class AKSCharacterBase* CharacterA, class AKSCharacterBase* CharacterB, class UObject* __WorldContext);
	void GetNPCLeadData(class FName PlacementLabel, class UObject* __WorldContext, struct FNPCLeadDataBase* NPCLeadData, bool* Success);
	void CheckHearFlag(class UNpcPropertyComponent* TargetNpcProperty, class UObject* __WorldContext, bool* HearFlag);
	void CheckHaveInformation(class UNpcPropertyComponent* NpcProperty, class UObject* __WorldContext, bool* HaveInfo);
	void GetTownName(int32 TownID, class UObject* __WorldContext, class FText* TownName);
	void GetFieldCommandParam(int32 FieldCommandLevel, class UObject* __WorldContext, struct FFieldCommandParam* FCParameter);
	void CheckHaveFieldCommandItem(enum class EMJFieldCommandType CommandType, class UObject* __WorldContext, bool* FindItem, float* BenefitValue);
	void GetFieldCommandLevelFromType(enum class EMJFieldCommandType CommandType, bool CheckFCItem, bool CheckTimeZone, class UObject* __WorldContext, int32* FieldCommandLevel);
	void OpenGetInfoDialog(TArray<class FName>& GetItemLabelList, class UObject* __WorldContext);
	void GetInvadeLabelList(TArray<struct FTameMonsterData>& TameMonsterList, class UObject* __WorldContext, TArray<class FName>* InvadeLabel);
	void SetImageColor(class UAcqImage* Input, const struct FSlateColor& TintColor, class UObject* __WorldContext);
	void CheckSearchSuccess(class FName NPCLabel, int32 SearchLv, class UObject* __WorldContext, bool* IsSuccess);
	void GetSearchSuccessPerc(struct FNPCHearDataBase& NPCHearData, int32 SearchLv, class UObject* __WorldContext, int32* SuccessPerc);
	void GetNPCHearData(class FName PlacementLabel, class UObject* __WorldContext, struct FNPCHearDataBase* Out_Row);
	void GetNPCHearInfoLabelList(class FName NPCLabel, class UObject* __WorldContext, TArray<class FName>* LabelList);
	void GetLureProbability(float& BaseProbability, class UObject* __WorldContext, int32* Rate);
	void GetLureSuccessRate(int32 LureLevel, class UObject* __WorldContext, float* SuccessRate);
	void Setup_and_Refresh_Follow_NPC(class FName NPCLabel, int32 NPCID, enum class EPlayableCharacterID PlayerID, enum class EMJFieldCommandType FieldCommandType, class UObject* __WorldContext);
	void Release_Placate_Follow_NPC(class AKSCharacterBase* ReleaseCharacter, class UObject* __WorldContext);
	void ReleaseHireFollowNPC(class AKSCharacterBase* ReleaseCharacter, class UObject* __WorldContext);
	void SetPlayerTalk(class FName RowName, class AActor* Target, class UObject* __WorldContext);
	void GetInformationEvent(class AKSCharacterBase* TargetCharacter, class UObject* __WorldContext, TArray<class FName>* NotificationList, TArray<class FName>* AddItemList);
	void NPCRelease_OLD(int32 NPCUniqID, class UObject* __WorldContext);
	void ReleaseLeadFollowNPC(class AKSCharacterBase* ReleaseCharacter, class UObject* __WorldContext);
	void ReleaseLureFollowNPC(class AKSCharacterBase* ReleaseCharacter, class UObject* __WorldContext);
	void SetupFollowNPC(class FName NPCLabel, class UObject* __WorldContext);
	void IsFixedFollowNPC(enum class EMJFieldCommandType FC_Type, class UObject* __WorldContext, bool* IsFixed);
	void GetCalcIDList(TArray<class FName>& ID, class UObject* __WorldContext, TArray<class FName>* IDList);
	void AddConnectionValue(int32 TownID, int32 AddValue, class UObject* __WorldContext);
	void Sub_Relation_Value(class FName NPCLabel, class UObject* __WorldContext);
	void NPCSwoon_Talk(class AKSCharacterBase* TargetCharacter, class UObject* __WorldContext, bool* EventComplete);
};

}


