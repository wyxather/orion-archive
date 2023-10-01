#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_ItemInfo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_ItemInfo.Widget_ItemInfo_C
// 0x011B (0x035B - 0x0240)
class UWidget_ItemInfo_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  AttributeName;                                            // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ItemInfo_Default_C*                  Default;                                                  // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      divider;                                                  // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_8;                                                  // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ItemInfo_MeleeWeapon_C*              MeleeWeapon;                                              // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                NoItem;                                                   // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    Overlay_1;                                                // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    Overlay_91;                                               // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ItemInfo_RangedWeapon_C*             RangedWeapon;                                             // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             Switcher;                                                 // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryComponent*                         Inventory;                                                // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ItemID;                                                   // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02A4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnModClicked;                                             // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnModSelected;                                            // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FInspectInfo                                InspectInfo;                                              // 0x02C8(0x0080) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnSubAction;                                              // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               ShowDescription;                                          // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AllowInputFocus;                                          // 0x0359(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsHidden;                                                 // 0x035A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ItemInfo.Widget_ItemInfo_C");
		return ptr;
	}


	void SetSizeModifier(int* Mod);
	ESlateVisibility GetEmptyVisibility_2();
	ESlateVisibility GetEmptyVisibility_1();
	void SetInfoHidden(bool* Hidden);
	void DoAction();
	void HasInputFocus(bool* Out);
	void EndInputFocus();
	void GetCompareInspectInfo(int* ItemID, bool* Compare, struct FInspectInfo* CompareInspectInfo);
	ESlateVisibility GetVisibility_1();
	struct FText Get_AttributeName_Text_1();
	void SetInspectInfo(class UInventoryComponent** Inventory, int* ItemID, struct FInspectInfo* InspectInfo, bool* Comparing, struct FInspectInfo* InspectInfoCompare);
	void GetInventoryItem(struct FInventoryItem* Item);
	void SetItem(class UInventoryComponent** Inventory, int* ItemID, int* CompareItemID);
	void Construct();
	void BndEvt__Weapons_K2Node_ComponentBoundEvent_5_OnClickMod__DelegateSignature(class UWidget_ItemModSlot_C** ModSlot);
	void BndEvt__Weapons_K2Node_ComponentBoundEvent_17_OnSelectMod__DelegateSignature(class UWidget_ItemModSlot_C** ModSlot);
	void BndEvt__RangedWeapon_K2Node_ComponentBoundEvent_0_OnSubAction__DelegateSignature(struct FText* ActionLabel);
	void ExecuteUbergraph_Widget_ItemInfo(int* EntryPoint);
	void OnSubAction__DelegateSignature(struct FText* ActionLabel);
	void OnModSelected__DelegateSignature(class UWidget_ItemModSlot_C** ModSlot);
	void OnModClicked__DelegateSignature(class UWidget_ItemModSlot_C** ModSlot);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
