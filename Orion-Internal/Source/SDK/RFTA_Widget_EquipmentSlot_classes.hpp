#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_EquipmentSlot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_EquipmentSlot.Widget_EquipmentSlot_C
// 0x00C0 (0x0370 - 0x02B0)
class UWidget_EquipmentSlot_C : public UWidget_FocusWidget_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FText                                       SlotLabel;                                                // 0x02B8(0x0018) (Edit, BlueprintVisible)
	struct FName                                       SlotName;                                                 // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInspectInfo                                InspectInfo;                                              // 0x02D8(0x0080) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                EquipmentId;                                              // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x035C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSelected;                                               // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_EquipmentSlot.Widget_EquipmentSlot_C");
		return ptr;
	}


	void GetEquippedItem(class AEquipment** Equipment);
	void SimulateAction();
	void GetSlotItemType(class UClass** Type);
	void Refresh();
	void Cache();
	void Construct();
	void OnInventoryChanged_Event_1();
	void ExecuteUbergraph_Widget_EquipmentSlot(int* EntryPoint);
	void OnSelected__DelegateSignature(class UWidget** Widget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
