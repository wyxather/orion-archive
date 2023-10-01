#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_QuestCompleteNotification_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_QuestCompleteNotification.Widget_QuestCompleteNotification_C
// 0x0017 (0x0260 - 0x0249)
class UWidget_QuestCompleteNotification_C : public UWidget_UserWidget_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0249(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                QuestUpdates;                                             // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_QuestCompleteNotification.Widget_QuestCompleteNotification_C");
		return ptr;
	}


	void ObjectiveSuccess(struct FRemnantQuestReward* QuestReward);
	void InitQuests();
	void QuestSuccess(struct FRemnantQuestReward* QuestReward);
	void QuestComplete(class AQuest** Quest);
	void FindWidgetForQuest(class AQuest** Quest, class UWidget_QuestNotification_Quest_C** Widget);
	void UpdateQuest(class ARemnantQuest** Quest);
	void Construct();
	void OnNotifyQuestReward_Event_1(struct FRemnantQuestReward* Reward);
	void ExecuteUbergraph_Widget_QuestCompleteNotification(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
