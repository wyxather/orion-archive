// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_HealOverTime_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_HealOverTime.Action_HealOverTime_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_HealOverTime_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_HealOverTime.Action_HealOverTime_C.OnActionStart");

	UAction_HealOverTime_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_HealOverTime.Action_HealOverTime_C.OnComputeStats
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_HealOverTime_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_HealOverTime.Action_HealOverTime_C.OnComputeStats");

	UAction_HealOverTime_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_HealOverTime.Action_HealOverTime_C.ExecuteUbergraph_Action_HealOverTime
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_HealOverTime_C::ExecuteUbergraph_Action_HealOverTime(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_HealOverTime.Action_HealOverTime_C.ExecuteUbergraph_Action_HealOverTime");

	UAction_HealOverTime_C_ExecuteUbergraph_Action_HealOverTime_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
