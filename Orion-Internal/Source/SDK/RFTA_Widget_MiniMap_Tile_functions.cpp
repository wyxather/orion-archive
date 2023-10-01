// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_MiniMap_Tile_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_MiniMap_Tile.Widget_MiniMap_Tile_C.UpdateMiniMapWidget
// 00007FF6F8B35350
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWidgetTransform*       InTransform                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FWidgetTransform        ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor)

struct FWidgetTransform UWidget_MiniMap_Tile_C::UpdateMiniMapWidget(struct FWidgetTransform* InTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MiniMap_Tile.Widget_MiniMap_Tile_C.UpdateMiniMapWidget");

	UWidget_MiniMap_Tile_C_UpdateMiniMapWidget_Params params;
	params.InTransform = InTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_MiniMap_Tile.Widget_MiniMap_Tile_C.OnRegisteredToPanel
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMiniMapPanel**          MiniMapPanel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_MiniMap_Tile_C::OnRegisteredToPanel(class UMiniMapPanel** MiniMapPanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MiniMap_Tile.Widget_MiniMap_Tile_C.OnRegisteredToPanel");

	UWidget_MiniMap_Tile_C_OnRegisteredToPanel_Params params;
	params.MiniMapPanel = MiniMapPanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MiniMap_Tile.Widget_MiniMap_Tile_C.UpdateLevelVisibility
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           DisplayLevel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           MyLevel                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_MiniMap_Tile_C::UpdateLevelVisibility(int* DisplayLevel, int* MyLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MiniMap_Tile.Widget_MiniMap_Tile_C.UpdateLevelVisibility");

	UWidget_MiniMap_Tile_C_UpdateLevelVisibility_Params params;
	params.DisplayLevel = DisplayLevel;
	params.MyLevel = MyLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MiniMap_Tile.Widget_MiniMap_Tile_C.ExecuteUbergraph_Widget_MiniMap_Tile
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_MiniMap_Tile_C::ExecuteUbergraph_Widget_MiniMap_Tile(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MiniMap_Tile.Widget_MiniMap_Tile_C.ExecuteUbergraph_Widget_MiniMap_Tile");

	UWidget_MiniMap_Tile_C_ExecuteUbergraph_Widget_MiniMap_Tile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
