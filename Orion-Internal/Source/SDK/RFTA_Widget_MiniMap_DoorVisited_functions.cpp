// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_MiniMap_DoorVisited_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_MiniMap_DoorVisited.Widget_MiniMap_DoorVisited_C.UpdateMiniMapWidget
// 00007FF6F8B35350
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWidgetTransform*       InTransform                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FWidgetTransform        ReturnValue                    (Parm, OutParm, ReturnParm, NoDestructor)

struct FWidgetTransform UWidget_MiniMap_DoorVisited_C::UpdateMiniMapWidget(struct FWidgetTransform* InTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MiniMap_DoorVisited.Widget_MiniMap_DoorVisited_C.UpdateMiniMapWidget");

	UWidget_MiniMap_DoorVisited_C_UpdateMiniMapWidget_Params params;
	params.InTransform = InTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
