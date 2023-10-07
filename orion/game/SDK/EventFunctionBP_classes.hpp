#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass EventFunctionBP.EventFunctionBP_C
class UEventFunctionBP_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UEventFunctionBP_C* GetDefaultObj();

	void GetStartEventFadeColor(struct FEventListData& EventListData, class UObject* __WorldContext, struct FLinearColor* Color);
	void IsCheckPartyMemberNum(int32 PartyNum, class UObject* __WorldContext, bool* IsEnable);
	void CheckPartyJoinCharacter(const class FString& SearchCharacter, class UObject* __WorldContext, bool* Join);
	void IsCheckPartyFullMember(class UObject* __WorldContext, bool* IsEnable);
	void IsCheckLeadCharacters(class FName Param1, class FName Param2, class FName Param3, class FName Param4, class UObject* __WorldContext, bool* IsEnable);
	bool CheckPlayEvent(class AKSCharacterBase* TargetCharacter, enum class ENPCEVENT_TYPE EventType, FDelegateProperty_ Delegate, class UObject* __WorldContext, class FName* EventName);
	bool GetPlayEventFromEventTypeAndParam(class FName NPCLabel, enum class ENPCEVENT_TYPE EventType, class FName EventParam, class UObject* __WorldContext, class FName* EventName, int32* EventNo);
	bool CheckHaveEventData(class FName NPCLabel, enum class ENPCEVENT_TYPE EventType, class UObject* __WorldContext);
	void Check_Play_Event_Type(enum class ENPCEVENT_TYPE EventType, enum class ENPCEVENT_TYPE CheckEventType, int32 StartFlag, int32 EndFlag, class FName EventParam, class FName CheckEventParam, class UObject* __WorldContext, bool* CanPlayEvent);
	void PlayEventType(enum class ENPCEVENT_TYPE EventType, enum class ENPCEVENT_TYPE CheckEventType, int32 StartFlag, int32 EndFlag, class FName EventParam, class FName CheckEventParam, class FName EventName, class AKSCharacterBase* TargetCharacter, class UObject* __WorldContext, bool* PlayEvent);
	void IsNPCAndItemDeliveryCheck(int32 NPCIndex, class FName ItemLabel1, int32 ItemNum1, class FName ItemLabel2, int32 ItemNum2, class FName ItemLabel3, int32 ItemNum3, class FName ItemLabel4, int32 ItemNum4, class UObject* __WorldContext, bool* Enable);
	void IsInfoAndItemDeliveryCheck(class FName InfoItemLabel, class FName ItemLabel1, int32 ItemNum1, class FName ItemLabel2, int32 ItemNum2, class FName ItemLabel3, int32 ItemNum3, class FName ItemLabel4, int32 ItemNum4, class UObject* __WorldContext, bool* Enable);
	void ActiveEventCheck(const struct FPlacementData& PlacementInfo, class UObject* __WorldContext, TArray<class FName>* EventLabels);
	void IsLeadOtherTargetNPC(int32 NPCUnqIndex, class UObject* __WorldContext, bool* IsEnable);
	void IsEventClear(uint8 EventType, int32 StartFlag, int32 EndFlag, class FName Param1, class FName Param2, class FName Param3, class FName Param4, class FName Param5, class FName Param6, class FName Param7, class FName Param8, class FName Param9, class FName Param10, class UObject* __WorldContext, bool* IsSubEventClear);
	void IsItemDeliveryCheck(class FName ItemLabel1, int32 ItemCnt1, class FName ItemLabel2, int32 ItemCnt2, class FName ItemLabel3, int32 ItemCnt3, class FName ItemLabel4, int32 ItemCnt4, class FName ItemLabel5, int32 ItemCnt5, class UObject* __WorldContext, bool* Enable);
	void Is_Event_Flag_Check_DEPRECATED(int32 StartFlag, int32 EndFlag, class UObject* __WorldContext, bool* IsPlayEvent);
};

}


