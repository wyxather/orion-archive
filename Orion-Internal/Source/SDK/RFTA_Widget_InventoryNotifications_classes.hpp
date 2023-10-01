#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_InventoryNotifications_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_InventoryNotifications.Widget_InventoryNotifications_C
// 0x003F (0x0288 - 0x0249)
class UWidget_InventoryNotifications_C : public UWidget_UserWidget_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0249(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                                InventoryUpdates;                                         // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                InventoryUpdatesSmall;                                    // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               NotifyTraits;                                             // 0x0268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0269(0x0007) MISSED OFFSET
	class ACharacterGunfire*                           CurrentCharacter;                                         // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FItemNotificationEntry>              Queue;                                                    // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_InventoryNotifications.Widget_InventoryNotifications_C");
		return ptr;
	}


	bool CanCheckQueue();
	void ClearNotificationQueue(bool* EndCurrentNotification);
	void GetRelevantCharacter(class ACharacterGunfire** Character);
	void GetItemLevel(class UClass** Item, int* Level);
	void Add_Loot_Entry(class UClass** Item, int* Quantity);
	void Construct();
	void OnPickupItem_Event_1(class UClass** ItemBP, int* Quantity, int* Level, EItemNotifyReason* Reason);
	void UpdatePawn();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void CheckQueue();
	void ExecuteUbergraph_Widget_InventoryNotifications(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
