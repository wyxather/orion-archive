#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_ItemInfo_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_ItemInfo_Base.Widget_ItemInfo_Base_C
// 0x0150 (0x0390 - 0x0240)
class UWidget_ItemInfo_Base_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                      ItemClass;                                                // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShowDescription;                                          // 0x0250(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AllowInputFocus;                                          // 0x0251(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0252(0x0006) MISSED OFFSET
	struct FInspectInfo                                InspectInfo;                                              // 0x0258(0x0080) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Comparing;                                                // 0x02D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02D9(0x0007) MISSED OFFSET
	struct FInspectInfo                                CompareInspectInfo;                                       // 0x02E0(0x0080) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnSelectMod;                                              // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnClickMod;                                               // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int                                                ItemID;                                                   // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0384(0x0004) MISSED OFFSET
	class UInventoryComponent*                         Inventory;                                                // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ItemInfo_Base.Widget_ItemInfo_Base_C");
		return ptr;
	}


	void ApplySizeModifier(int* Mod);
	void Init();
	void DoAction();
	void HasInputFocus(bool* Out);
	void EndInputFocus();
	void GetLabel(struct FText* Out);
	void RefreshInspectInfo();
	void InitStats(class UPanelWidget** Root);
	void SetInspectInfo(struct FInspectInfo* InspectInfo, bool* Comparing, struct FInspectInfo* CompareInspectInfo);
	void SetItem(class UClass** ItemBP, int* Level, bool* Compare, struct FInspectInfo* CompareInspectInfo);
	void IsValid(class UClass** Item, bool* Out);
	void SetItemFromInventory(class UInventoryComponent** Inventory, int* ItemID, bool* Comparing, struct FInspectInfo* CompareInspectInfo);
	void OnSetItem();
	void ExecuteUbergraph_Widget_ItemInfo_Base(int* EntryPoint);
	void OnClickMod__DelegateSignature(class UWidget_ItemModSlot_C** ModSlot);
	void OnSelectMod__DelegateSignature(class UWidget_ItemModSlot_C** ModSlot);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
