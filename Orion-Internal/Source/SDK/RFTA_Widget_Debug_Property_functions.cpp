// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Debug_Property_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Debug_Property.Widget_Debug_Property_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Debug_Property_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Debug_Property.Widget_Debug_Property_C.Construct");

	UWidget_Debug_Property_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Debug_Property.Widget_Debug_Property_C.ExecuteUbergraph_Widget_Debug_Property
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Debug_Property_C::ExecuteUbergraph_Widget_Debug_Property(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Debug_Property.Widget_Debug_Property_C.ExecuteUbergraph_Widget_Debug_Property");

	UWidget_Debug_Property_C_ExecuteUbergraph_Widget_Debug_Property_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
