// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_MiniMap_Player_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_MiniMap_Player.Widget_MiniMap_Player_C.UpdateLevelVisibility
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           DisplayLevel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           MyLevel                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_MiniMap_Player_C::UpdateLevelVisibility(int* DisplayLevel, int* MyLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MiniMap_Player.Widget_MiniMap_Player_C.UpdateLevelVisibility");

	UWidget_MiniMap_Player_C_UpdateLevelVisibility_Params params;
	params.DisplayLevel = DisplayLevel;
	params.MyLevel = MyLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MiniMap_Player.Widget_MiniMap_Player_C.OnRegisteredToPanel
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMiniMapPanel**          MiniMapPanel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_MiniMap_Player_C::OnRegisteredToPanel(class UMiniMapPanel** MiniMapPanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MiniMap_Player.Widget_MiniMap_Player_C.OnRegisteredToPanel");

	UWidget_MiniMap_Player_C_OnRegisteredToPanel_Params params;
	params.MiniMapPanel = MiniMapPanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MiniMap_Player.Widget_MiniMap_Player_C.ExecuteUbergraph_Widget_MiniMap_Player
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_MiniMap_Player_C::ExecuteUbergraph_Widget_MiniMap_Player(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MiniMap_Player.Widget_MiniMap_Player_C.ExecuteUbergraph_Widget_MiniMap_Player");

	UWidget_MiniMap_Player_C_ExecuteUbergraph_Widget_MiniMap_Player_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
