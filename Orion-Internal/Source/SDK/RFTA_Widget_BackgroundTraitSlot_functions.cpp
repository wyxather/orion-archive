// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_BackgroundTraitSlot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_BackgroundTraitSlot.Widget_BackgroundTraitSlot_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_BackgroundTraitSlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BackgroundTraitSlot.Widget_BackgroundTraitSlot_C.Construct");

	UWidget_BackgroundTraitSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BackgroundTraitSlot.Widget_BackgroundTraitSlot_C.ExecuteUbergraph_Widget_BackgroundTraitSlot
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_BackgroundTraitSlot_C::ExecuteUbergraph_Widget_BackgroundTraitSlot(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BackgroundTraitSlot.Widget_BackgroundTraitSlot_C.ExecuteUbergraph_Widget_BackgroundTraitSlot");

	UWidget_BackgroundTraitSlot_C_ExecuteUbergraph_Widget_BackgroundTraitSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
