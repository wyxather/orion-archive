#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_HUD_Notifications_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_HUD_Notifications.Widget_HUD_Notifications_C.UpdatePawn
struct UWidget_HUD_Notifications_C_UpdatePawn_Params
{
};

// Function Widget_HUD_Notifications.Widget_HUD_Notifications_C.ClearNotificationQueue
struct UWidget_HUD_Notifications_C_ClearNotificationQueue_Params
{
	bool*                                              EndCurrentNotificaiton;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_HUD_Notifications.Widget_HUD_Notifications_C.ExecuteUbergraph_Widget_HUD_Notifications
struct UWidget_HUD_Notifications_C_ExecuteUbergraph_Widget_HUD_Notifications_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
