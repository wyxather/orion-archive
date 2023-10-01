#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_ItemModSlot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_ItemModSlot.Widget_ItemModSlot_C
// 0x01CB (0x0420 - 0x0255)
class UWidget_ItemModSlot_C : public UWidget_StatBase_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0255(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0258(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  Empty;                                                    // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFocusButtonWidget*                          FocusButtonWidget_1;                                      // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Icon;                                                     // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Label;                                                    // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      OverlayIcon;                                              // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                Stats;                                                    // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	unsigned char                                      SlotID;                                                   // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0291(0x0007) MISSED OFFSET
	struct FInspectInfo                                InspectInfo;                                              // 0x0298(0x0080) (Edit, BlueprintVisible, AdvancedDisplay, ExposeOnSpawn)
	struct FInspectMod                                 ModInspectInfo;                                           // 0x0318(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               InspectInfoValid;                                         // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0379(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnModSelected;                                            // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnModClicked;                                             // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FInspectInfo                                DefaultModInspectInfo;                                    // 0x03A0(0x0080) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ItemModSlot.Widget_ItemModSlot_C");
		return ptr;
	}


	void GetSlotLabel(struct FText* Label);
	ESlateVisibility GetVisibility_1();
	void CacheInspectInfo();
	void Refresh();
	void Construct();
	void BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_200_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget);
	void BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_236_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget);
	void BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_254_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget);
	void InitFromInspectInfo(struct FInspectInfo* InspectInfo, bool* Comparing, struct FInspectInfo* InspectInfoCompare);
	void OnInstanceDataChanged();
	void ExecuteUbergraph_Widget_ItemModSlot(int* EntryPoint);
	void OnModClicked__DelegateSignature(class UWidget_ItemModSlot_C** ModSlot);
	void OnModSelected__DelegateSignature(class UWidget_ItemModSlot_C** ModSlot);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
