// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_ArchetypeInfo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_ArchetypeInfo.Widget_ArchetypeInfo_C.SetSelected
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_ArchetypeInfo_C::SetSelected(bool* IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ArchetypeInfo.Widget_ArchetypeInfo_C.SetSelected");

	UWidget_ArchetypeInfo_C_SetSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ArchetypeInfo.Widget_ArchetypeInfo_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_ArchetypeInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ArchetypeInfo.Widget_ArchetypeInfo_C.Construct");

	UWidget_ArchetypeInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ArchetypeInfo.Widget_ArchetypeInfo_C.UpdateInfo
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_ArchetypeInfo_C::UpdateInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ArchetypeInfo.Widget_ArchetypeInfo_C.UpdateInfo");

	UWidget_ArchetypeInfo_C_UpdateInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ArchetypeInfo.Widget_ArchetypeInfo_C.ToggleInfo
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_ArchetypeInfo_C::ToggleInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ArchetypeInfo.Widget_ArchetypeInfo_C.ToggleInfo");

	UWidget_ArchetypeInfo_C_ToggleInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ArchetypeInfo.Widget_ArchetypeInfo_C.ExecuteUbergraph_Widget_ArchetypeInfo
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_ArchetypeInfo_C::ExecuteUbergraph_Widget_ArchetypeInfo(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ArchetypeInfo.Widget_ArchetypeInfo_C.ExecuteUbergraph_Widget_ArchetypeInfo");

	UWidget_ArchetypeInfo_C_ExecuteUbergraph_Widget_ArchetypeInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
