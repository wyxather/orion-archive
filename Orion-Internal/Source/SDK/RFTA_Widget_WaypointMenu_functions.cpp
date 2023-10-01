// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_WaypointMenu_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_WaypointMenu.Widget_WaypointMenu_C.Init
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Waypoint                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_WaypointMenu_C::Init(class AActor** Waypoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WaypointMenu.Widget_WaypointMenu_C.Init");

	UWidget_WaypointMenu_C_Init_Params params;
	params.Waypoint = Waypoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_WaypointMenu.Widget_WaypointMenu_C.FocusFirst
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_WaypointMenu_C::FocusFirst()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WaypointMenu.Widget_WaypointMenu_C.FocusFirst");

	UWidget_WaypointMenu_C_FocusFirst_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_WaypointMenu.Widget_WaypointMenu_C.Get_Load_Visibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_WaypointMenu_C::Get_Load_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WaypointMenu.Widget_WaypointMenu_C.Get_Load_Visibility_1");

	UWidget_WaypointMenu_C_Get_Load_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_WaypointMenu.Widget_WaypointMenu_C.BuildList
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_WaypointMenu_C::BuildList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WaypointMenu.Widget_WaypointMenu_C.BuildList");

	UWidget_WaypointMenu_C_BuildList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_WaypointMenu.Widget_WaypointMenu_C.OnFocusWaypoint
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_WaypointMenu_C::OnFocusWaypoint(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WaypointMenu.Widget_WaypointMenu_C.OnFocusWaypoint");

	UWidget_WaypointMenu_C_OnFocusWaypoint_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_WaypointMenu.Widget_WaypointMenu_C.BndEvt__Load_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_WaypointMenu_C::BndEvt__Load_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WaypointMenu.Widget_WaypointMenu_C.BndEvt__Load_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_WaypointMenu_C_BndEvt__Load_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_WaypointMenu.Widget_WaypointMenu_C.OnClickedWaypoint
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_WaypointMenu_C::OnClickedWaypoint(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WaypointMenu.Widget_WaypointMenu_C.OnClickedWaypoint");

	UWidget_WaypointMenu_C_OnClickedWaypoint_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_WaypointMenu.Widget_WaypointMenu_C.ExecuteUbergraph_Widget_WaypointMenu
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_WaypointMenu_C::ExecuteUbergraph_Widget_WaypointMenu(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_WaypointMenu.Widget_WaypointMenu_C.ExecuteUbergraph_Widget_WaypointMenu");

	UWidget_WaypointMenu_C_ExecuteUbergraph_Widget_WaypointMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
