// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_ControllScheme_Single_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_ControllScheme_Single.Widget_ControllScheme_Single_C.Get_ControlIconDisplay_Brush_1
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UWidget_ControllScheme_Single_C::Get_ControlIconDisplay_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ControllScheme_Single.Widget_ControllScheme_Single_C.Get_ControlIconDisplay_Brush_1");

	UWidget_ControllScheme_Single_C_Get_ControlIconDisplay_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_ControllScheme_Single.Widget_ControllScheme_Single_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_ControllScheme_Single_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ControllScheme_Single.Widget_ControllScheme_Single_C.Construct");

	UWidget_ControllScheme_Single_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ControllScheme_Single.Widget_ControllScheme_Single_C.ExecuteUbergraph_Widget_ControllScheme_Single
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_ControllScheme_Single_C::ExecuteUbergraph_Widget_ControllScheme_Single(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ControllScheme_Single.Widget_ControllScheme_Single_C.ExecuteUbergraph_Widget_ControllScheme_Single");

	UWidget_ControllScheme_Single_C_ExecuteUbergraph_Widget_ControllScheme_Single_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
