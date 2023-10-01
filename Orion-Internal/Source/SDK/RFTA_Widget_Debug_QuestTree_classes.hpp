#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Debug_QuestTree_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_Debug_QuestTree.Widget_Debug_QuestTree_C
// 0x0030 (0x0270 - 0x0240)
class UWidget_Debug_QuestTree_C : public UUserWidget
{
public:
	class UVerticalBox*                                Tree;                                                     // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int                                                TreeIndent;                                               // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TreeSpacing;                                              // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnComponentSelected;                                      // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnComponentClick;                                         // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Debug_QuestTree.Widget_Debug_QuestTree_C");
		return ptr;
	}


	void AddChildren(class USceneComponent** Component, int* Indent);
	void BuildTree(class UQuestComponent** QuestComponent, int* Indent);
	void Init(class ARemnantQuest** Quest);
	void OnComponentClick__DelegateSignature(class UQuestComponent** QuestComponent);
	void OnComponentSelected__DelegateSignature(class UQuestComponent** QuestComponent);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
