#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_InventoryNotifications_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_InventoryNotifications.Widget_InventoryNotifications_C.CanCheckQueue
struct UWidget_InventoryNotifications_C_CanCheckQueue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Widget_InventoryNotifications.Widget_InventoryNotifications_C.ClearNotificationQueue
struct UWidget_InventoryNotifications_C_ClearNotificationQueue_Params
{
	bool*                                              EndCurrentNotification;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_InventoryNotifications.Widget_InventoryNotifications_C.GetRelevantCharacter
struct UWidget_InventoryNotifications_C_GetRelevantCharacter_Params
{
	class ACharacterGunfire*                           Character;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryNotifications.Widget_InventoryNotifications_C.GetItemLevel
struct UWidget_InventoryNotifications_C_GetItemLevel_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Level;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryNotifications.Widget_InventoryNotifications_C.Add Loot Entry
struct UWidget_InventoryNotifications_C_Add_Loot_Entry_Params
{
	class UClass**                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryNotifications.Widget_InventoryNotifications_C.Construct
struct UWidget_InventoryNotifications_C_Construct_Params
{
};

// Function Widget_InventoryNotifications.Widget_InventoryNotifications_C.OnPickupItem_Event_1
struct UWidget_InventoryNotifications_C_OnPickupItem_Event_1_Params
{
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemNotifyReason*                                 Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryNotifications.Widget_InventoryNotifications_C.UpdatePawn
struct UWidget_InventoryNotifications_C_UpdatePawn_Params
{
};

// Function Widget_InventoryNotifications.Widget_InventoryNotifications_C.Tick
struct UWidget_InventoryNotifications_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryNotifications.Widget_InventoryNotifications_C.CheckQueue
struct UWidget_InventoryNotifications_C_CheckQueue_Params
{
};

// Function Widget_InventoryNotifications.Widget_InventoryNotifications_C.ExecuteUbergraph_Widget_InventoryNotifications
struct UWidget_InventoryNotifications_C_ExecuteUbergraph_Widget_InventoryNotifications_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
