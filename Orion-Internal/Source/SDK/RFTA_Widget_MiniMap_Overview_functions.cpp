// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_MiniMap_Overview_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_MiniMap_Overview.Widget_MiniMap_Overview_C.TryUnregisterPanel
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_MiniMap_Overview_C::TryUnregisterPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MiniMap_Overview.Widget_MiniMap_Overview_C.TryUnregisterPanel");

	UWidget_MiniMap_Overview_C_TryUnregisterPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MiniMap_Overview.Widget_MiniMap_Overview_C.InitMiniMapWidget
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMiniMapDisplayActor**   DisplayActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_MiniMap_Overview_C::InitMiniMapWidget(class AMiniMapDisplayActor** DisplayActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MiniMap_Overview.Widget_MiniMap_Overview_C.InitMiniMapWidget");

	UWidget_MiniMap_Overview_C_InitMiniMapWidget_Params params;
	params.DisplayActor = DisplayActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MiniMap_Overview.Widget_MiniMap_Overview_C.Destruct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_MiniMap_Overview_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MiniMap_Overview.Widget_MiniMap_Overview_C.Destruct");

	UWidget_MiniMap_Overview_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_MiniMap_Overview.Widget_MiniMap_Overview_C.ExecuteUbergraph_Widget_MiniMap_Overview
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_MiniMap_Overview_C::ExecuteUbergraph_Widget_MiniMap_Overview(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_MiniMap_Overview.Widget_MiniMap_Overview_C.ExecuteUbergraph_Widget_MiniMap_Overview");

	UWidget_MiniMap_Overview_C_ExecuteUbergraph_Widget_MiniMap_Overview_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
