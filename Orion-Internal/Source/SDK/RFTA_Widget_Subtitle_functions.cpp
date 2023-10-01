// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Subtitle_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Subtitle.Widget_Subtitle_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Subtitle_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Subtitle.Widget_Subtitle_C.Construct");

	UWidget_Subtitle_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Subtitle.Widget_Subtitle_C.OnTextReady
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Subtitle_C::OnTextReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Subtitle.Widget_Subtitle_C.OnTextReady");

	UWidget_Subtitle_C_OnTextReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Subtitle.Widget_Subtitle_C.ExecuteUbergraph_Widget_Subtitle
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Subtitle_C::ExecuteUbergraph_Widget_Subtitle(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Subtitle.Widget_Subtitle_C.ExecuteUbergraph_Widget_Subtitle");

	UWidget_Subtitle_C_ExecuteUbergraph_Widget_Subtitle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
