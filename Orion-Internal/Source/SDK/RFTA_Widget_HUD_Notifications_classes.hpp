#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_HUD_Notifications_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_HUD_Notifications.Widget_HUD_Notifications_C
// 0x0018 (0x0258 - 0x0240)
class UWidget_HUD_Notifications_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidget_InventoryNotifications_C*            InventoryNotifications;                                   // 0x0248(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_Notifications_C*                     Notifications;                                            // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_HUD_Notifications.Widget_HUD_Notifications_C");
		return ptr;
	}


	void UpdatePawn();
	void ClearNotificationQueue(bool* EndCurrentNotificaiton);
	void ExecuteUbergraph_Widget_HUD_Notifications(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
