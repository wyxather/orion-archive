// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Consumable_FrenzyDust_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Consumable_FrenzyDust.Action_Consumable_FrenzyDust_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Consumable_FrenzyDust_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Consumable_FrenzyDust.Action_Consumable_FrenzyDust_C.OnActionStart");

	UAction_Consumable_FrenzyDust_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Consumable_FrenzyDust.Action_Consumable_FrenzyDust_C.OnActionStop
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Consumable_FrenzyDust_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Consumable_FrenzyDust.Action_Consumable_FrenzyDust_C.OnActionStop");

	UAction_Consumable_FrenzyDust_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Consumable_FrenzyDust.Action_Consumable_FrenzyDust_C.ExecuteUbergraph_Action_Consumable_FrenzyDust
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Consumable_FrenzyDust_C::ExecuteUbergraph_Action_Consumable_FrenzyDust(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Consumable_FrenzyDust.Action_Consumable_FrenzyDust_C.ExecuteUbergraph_Action_Consumable_FrenzyDust");

	UAction_Consumable_FrenzyDust_C_ExecuteUbergraph_Action_Consumable_FrenzyDust_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
