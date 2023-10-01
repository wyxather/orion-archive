// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_ControllerDiagram_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_ControllerDiagram.Widget_ControllerDiagram_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_ControllerDiagram_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ControllerDiagram.Widget_ControllerDiagram_C.Construct");

	UWidget_ControllerDiagram_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ControllerDiagram.Widget_ControllerDiagram_C.ExecuteUbergraph_Widget_ControllerDiagram
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_ControllerDiagram_C::ExecuteUbergraph_Widget_ControllerDiagram(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ControllerDiagram.Widget_ControllerDiagram_C.ExecuteUbergraph_Widget_ControllerDiagram");

	UWidget_ControllerDiagram_C_ExecuteUbergraph_Widget_ControllerDiagram_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
