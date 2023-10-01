#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_InspectableBar_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_InspectableBar.Widget_InspectableBar_C
// 0x0060 (0x02A9 - 0x0249)
class UWidget_InspectableBar_C : public UWidget_UserWidget_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0249(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidget_ButtonEx_C*                          CloseButton;                                              // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonEx_C*                          LoreButton;                                               // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonEx_C*                          QuestInventoryButton;                                     // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               ShowCloseButton;                                          // 0x0270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0271(0x0003) MISSED OFFSET
	struct FName                                       EndDialogResult;                                          // 0x0274(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x4];                                       // 0x027C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    ToggleQuestInventory;                                     // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               ShowQuestInventoryButton;                                 // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0291(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    ToggleInspectableInfo;                                    // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               ShowLoreButton;                                           // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_InspectableBar.Widget_InspectableBar_C");
		return ptr;
	}


	ESlateVisibility Get_LoreButton_Visibility_1();
	void InitReadableButton();
	ESlateVisibility Get_QuestInventoryButton_Visibility_1();
	ESlateVisibility Get_Overlay_Visibility_1();
	ESlateVisibility Get_Close_Visibility_1();
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget);
	void BndEvt__QuestInventoryButton_K2Node_ComponentBoundEvent_92_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget);
	void Construct();
	void OnCloseButton();
	void OnQuestInventoryButton();
	void OnLoreButton();
	void BndEvt__LoreButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget);
	void ExecuteUbergraph_Widget_InspectableBar(int* EntryPoint);
	void ToggleInspectableInfo__DelegateSignature(bool* IsManualOpen);
	void ToggleQuestInventory__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
