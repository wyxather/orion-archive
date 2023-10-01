// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Trinket_BrutalMark_Cooldown_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Trinket_BrutalMark_Cooldown.Action_Trinket_BrutalMark_Cooldown_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Trinket_BrutalMark_Cooldown_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Trinket_BrutalMark_Cooldown.Action_Trinket_BrutalMark_Cooldown_C.OnActionStart");

	UAction_Trinket_BrutalMark_Cooldown_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Trinket_BrutalMark_Cooldown.Action_Trinket_BrutalMark_Cooldown_C.OnActionStop
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Trinket_BrutalMark_Cooldown_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Trinket_BrutalMark_Cooldown.Action_Trinket_BrutalMark_Cooldown_C.OnActionStop");

	UAction_Trinket_BrutalMark_Cooldown_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Trinket_BrutalMark_Cooldown.Action_Trinket_BrutalMark_Cooldown_C.ExecuteUbergraph_Action_Trinket_BrutalMark_Cooldown
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Trinket_BrutalMark_Cooldown_C::ExecuteUbergraph_Action_Trinket_BrutalMark_Cooldown(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Trinket_BrutalMark_Cooldown.Action_Trinket_BrutalMark_Cooldown_C.ExecuteUbergraph_Action_Trinket_BrutalMark_Cooldown");

	UAction_Trinket_BrutalMark_Cooldown_C_ExecuteUbergraph_Action_Trinket_BrutalMark_Cooldown_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
