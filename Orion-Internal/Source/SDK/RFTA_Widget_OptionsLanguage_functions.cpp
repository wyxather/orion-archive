// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_OptionsLanguage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_OptionsLanguage.Widget_OptionsLanguage_C.SetIsMainMenu
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsMainMenu                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_OptionsLanguage_C::SetIsMainMenu(bool* IsMainMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsLanguage.Widget_OptionsLanguage_C.SetIsMainMenu");

	UWidget_OptionsLanguage_C_SetIsMainMenu_Params params;
	params.IsMainMenu = IsMainMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsLanguage.Widget_OptionsLanguage_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_OptionsLanguage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsLanguage.Widget_OptionsLanguage_C.Construct");

	UWidget_OptionsLanguage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsLanguage.Widget_OptionsLanguage_C.ResetScrollOffset
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_OptionsLanguage_C::ResetScrollOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsLanguage.Widget_OptionsLanguage_C.ResetScrollOffset");

	UWidget_OptionsLanguage_C_ResetScrollOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsLanguage.Widget_OptionsLanguage_C.ExecuteUbergraph_Widget_OptionsLanguage
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_OptionsLanguage_C::ExecuteUbergraph_Widget_OptionsLanguage(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsLanguage.Widget_OptionsLanguage_C.ExecuteUbergraph_Widget_OptionsLanguage");

	UWidget_OptionsLanguage_C_ExecuteUbergraph_Widget_OptionsLanguage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
