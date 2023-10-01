#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_QuestNotification_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_QuestNotification.Widget_QuestNotification_C
// 0x001C (0x0265 - 0x0249)
class UWidget_QuestNotification_C : public UWidget_UserWidget_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0249(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                QuestUpdates;                                             // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                              Spacing;                                                  // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsHidden;                                                 // 0x0264(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_QuestNotification.Widget_QuestNotification_C");
		return ptr;
	}


	void GetZoneQuest(class ARemnantQuest** Quest);
	void UpdateQuestPinning(bool* DoUnpin);
	void IsValidQuest(class ARemnantQuest** Quest, bool* Out);
	void ObjectiveSuccess(struct FRemnantQuestReward* QuestReward);
	void InitQuests();
	void QuestSuccess(struct FRemnantQuestReward* QuestReward);
	void QuestComplete(class AQuest** Quest);
	void FindWidgetForQuest(class AQuest** Quest, class UWidget_QuestNotification_Quest_C** Widget);
	void UpdateQuest(class ARemnantQuest** Quest, class ARemnantQuest** CallingQuest);
	void Construct();
	void OnQuestObjectivesUpdate(class AQuest** Quest);
	void OnQuestCompleted(class AQuest** Quest);
	void OnFinishTravel();
	void OnBeginTravel();
	void ExecuteUbergraph_Widget_QuestNotification(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
