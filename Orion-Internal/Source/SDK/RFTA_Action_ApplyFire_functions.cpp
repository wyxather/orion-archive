// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_ApplyFire_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_ApplyFire.Action_ApplyFire_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_ApplyFire_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_ApplyFire.Action_ApplyFire_C.OnActionStart");

	UAction_ApplyFire_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_ApplyFire.Action_ApplyFire_C.ExecuteUbergraph_Action_ApplyFire
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_ApplyFire_C::ExecuteUbergraph_Action_ApplyFire(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_ApplyFire.Action_ApplyFire_C.ExecuteUbergraph_Action_ApplyFire");

	UAction_ApplyFire_C_ExecuteUbergraph_Action_ApplyFire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
