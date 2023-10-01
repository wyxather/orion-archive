#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_RadialShortcutComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_RadialShortcutComponent.BP_RadialShortcutComponent_C
// 0x0048 (0x0140 - 0x00F8)
class UBP_RadialShortcutComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FSTR_Radial>                         Radials;                                                  // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FRadialShortcut>                     Items;                                                    // 0x0110(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, RepNotify)
	struct FScriptMulticastDelegate                    OnChanged;                                                // 0x0120(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnSlotUsed;                                               // 0x0130(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RadialShortcutComponent.BP_RadialShortcutComponent_C");
		return ptr;
	}


	void HandleEntitlement(class UClass** ItemBP, bool* Handled);
	void ValidateEntitlements();
	void AutoPopulate();
	void HasSlottedItem(struct FName* Radial, class UClass** ItemBP, int* NumSlots, bool* Out);
	void OnRep_Items();
	void AutoSlotItem(class UClass** ItemBP);
	void RemoveBySlot(struct FName* Radial, int* Slot);
	void RemoveByItem(struct FName* Radial, class UClass** Item);
	void SetSlot(struct FName* Radial, int* Slot, class UClass** ItemBP);
	void GetSlotCount(struct FName* Radial, int* Out);
	void GetSlot(struct FName* Radial, int* Slot, class UClass** Out);
	void ServerSetSlot(struct FName* Radial, int* Slot, class UClass** ItemBP);
	void UseItem(unsigned char* Slot);
	void SimulateSetSlot(struct FName* Radial, int* Slot, class UClass** ItemBP);
	void ServerUseItem(unsigned char* Slot);
	void ReceiveBeginPlay();
	void OnAddItem(class UClass** ItemBP, int* Quantity);
	void ExecuteUbergraph_BP_RadialShortcutComponent(int* EntryPoint);
	void OnSlotUsed__DelegateSignature(unsigned char* Slot);
	void OnChanged__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
