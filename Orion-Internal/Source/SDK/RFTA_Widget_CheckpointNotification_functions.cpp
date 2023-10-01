// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_CheckpointNotification_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_CheckpointNotification.Widget_CheckpointNotification_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_CheckpointNotification_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CheckpointNotification.Widget_CheckpointNotification_C.Construct");

	UWidget_CheckpointNotification_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_CheckpointNotification.Widget_CheckpointNotification_C.RemoveSelf
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_CheckpointNotification_C::RemoveSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CheckpointNotification.Widget_CheckpointNotification_C.RemoveSelf");

	UWidget_CheckpointNotification_C_RemoveSelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_CheckpointNotification.Widget_CheckpointNotification_C.StartCountdown
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_CheckpointNotification_C::StartCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CheckpointNotification.Widget_CheckpointNotification_C.StartCountdown");

	UWidget_CheckpointNotification_C_StartCountdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_CheckpointNotification.Widget_CheckpointNotification_C.ExecuteUbergraph_Widget_CheckpointNotification
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_CheckpointNotification_C::ExecuteUbergraph_Widget_CheckpointNotification(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_CheckpointNotification.Widget_CheckpointNotification_C.ExecuteUbergraph_Widget_CheckpointNotification");

	UWidget_CheckpointNotification_C_ExecuteUbergraph_Widget_CheckpointNotification_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
