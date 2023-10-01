// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_HUD_Notifications_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_HUD_Notifications.Widget_HUD_Notifications_C.UpdatePawn
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_HUD_Notifications_C::UpdatePawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD_Notifications.Widget_HUD_Notifications_C.UpdatePawn");

	UWidget_HUD_Notifications_C_UpdatePawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD_Notifications.Widget_HUD_Notifications_C.ClearNotificationQueue
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          EndCurrentNotificaiton         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_HUD_Notifications_C::ClearNotificationQueue(bool* EndCurrentNotificaiton)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD_Notifications.Widget_HUD_Notifications_C.ClearNotificationQueue");

	UWidget_HUD_Notifications_C_ClearNotificationQueue_Params params;
	params.EndCurrentNotificaiton = EndCurrentNotificaiton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD_Notifications.Widget_HUD_Notifications_C.ExecuteUbergraph_Widget_HUD_Notifications
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_HUD_Notifications_C::ExecuteUbergraph_Widget_HUD_Notifications(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD_Notifications.Widget_HUD_Notifications_C.ExecuteUbergraph_Widget_HUD_Notifications");

	UWidget_HUD_Notifications_C_ExecuteUbergraph_Widget_HUD_Notifications_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
