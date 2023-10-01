#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Quest_Debug_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_Quest_Debug.Widget_Quest_Debug_C
// 0x0078 (0x02B8 - 0x0240)
class UWidget_Quest_Debug_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFocusButtonWidget*                          BaseQuest;                                                // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  BaseQuestLabel;                                           // 0x0250(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Quest_Debug_Errors_C*                Errors;                                                   // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFocusButtonWidget*                          ParentQuest;                                              // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  ParentQuestLabel;                                         // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Debug_Properties_C*                  Properties;                                               // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Debug_QuestTree_C*                   QuestTree;                                                // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                Root;                                                     // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFocusButtonWidget*                          RootQuest;                                                // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  RootQuestLabel;                                           // 0x0290(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_43;                                             // 0x0298(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonEx_C*                          Widget_ButtonEx;                                          // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestComponent*                             SelectedComponent;                                        // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARemnantQuest*                               Quest;                                                    // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Quest_Debug.Widget_Quest_Debug_C");
		return ptr;
	}


	struct FText Get_BaseQuestLabel_Text_1();
	struct FText Get_RootQuestLabel_Text_1();
	struct FText Get_ParentQuestLabel_Text_1();
	struct FText GetText_1();
	ESlateVisibility Get_RootQuest_Visibility_1();
	ESlateVisibility Get_ParentQuest_Visibility_1();
	ESlateVisibility Get_BaseQuest_Visibility_1();
	void SelectComponent(class UQuestComponent** QuestComponent);
	void Init(class ARemnantQuest** Quest);
	void GetTile(class URemnantQuestTile** Tile);
	void GetTileID(int* ID);
	void GetTileVector(struct FTileCoord* Coord, struct FVector2D* Out);
	void GetMinPosition(class AZoneActor** Zone, struct FVector2D* Position);
	void GetZone(class UQuestComponent** QuestComponent, class AZoneActor** Zone);
	void SetZone(class AZoneActor** Zone);
	void Construct();
	void BndEvt__Widget_ButtonEx_K2Node_ComponentBoundEvent_40_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget);
	void BndEvt__QuestTree_K2Node_ComponentBoundEvent_86_OnComponentSelected__DelegateSignature(class UQuestComponent** QuestComponent);
	void BndEvt__QuestTree_K2Node_ComponentBoundEvent_16_OnComponentClick__DelegateSignature(class UQuestComponent** QuestComponent);
	void BndEvt__BaseQuest_K2Node_ComponentBoundEvent_676_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget);
	void BndEvt__ParentQuest_K2Node_ComponentBoundEvent_131_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget);
	void BndEvt__RootQuest_K2Node_ComponentBoundEvent_320_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget);
	void ExecuteUbergraph_Widget_Quest_Debug(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
