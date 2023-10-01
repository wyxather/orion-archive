// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_MiniMap_Ping_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_MiniMap_Ping.Widget_MiniMap_Ping_C.UpdateMinimapDisplay
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_MiniMap_Ping_C::UpdateMinimapDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MiniMap_Ping.Widget_MiniMap_Ping_C.UpdateMinimapDisplay");

	UWidget_MiniMap_Ping_C_UpdateMinimapDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MiniMap_Ping.Widget_MiniMap_Ping_C.OnRegisteredToPanel
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMiniMapPanel**          MiniMapPanel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_MiniMap_Ping_C::OnRegisteredToPanel(class UMiniMapPanel** MiniMapPanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MiniMap_Ping.Widget_MiniMap_Ping_C.OnRegisteredToPanel");

	UWidget_MiniMap_Ping_C_OnRegisteredToPanel_Params params;
	params.MiniMapPanel = MiniMapPanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MiniMap_Ping.Widget_MiniMap_Ping_C.ExecuteUbergraph_Widget_MiniMap_Ping
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_MiniMap_Ping_C::ExecuteUbergraph_Widget_MiniMap_Ping(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MiniMap_Ping.Widget_MiniMap_Ping_C.ExecuteUbergraph_Widget_MiniMap_Ping");

	UWidget_MiniMap_Ping_C_ExecuteUbergraph_Widget_MiniMap_Ping_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
