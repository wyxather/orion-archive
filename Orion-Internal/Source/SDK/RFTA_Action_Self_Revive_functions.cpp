// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Self_Revive_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Self_Revive.Action_Self_Revive_C.Set Dragon Heart Quantity
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Self_Revive_C::Set_Dragon_Heart_Quantity(class UObject** Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Self_Revive.Action_Self_Revive_C.Set Dragon Heart Quantity");

	UAction_Self_Revive_C_Set_Dragon_Heart_Quantity_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Self_Revive.Action_Self_Revive_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Self_Revive_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Self_Revive.Action_Self_Revive_C.OnActionStart");

	UAction_Self_Revive_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Self_Revive.Action_Self_Revive_C.ExecuteUbergraph_Action_Self_Revive
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Self_Revive_C::ExecuteUbergraph_Action_Self_Revive(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Self_Revive.Action_Self_Revive_C.ExecuteUbergraph_Action_Self_Revive");

	UAction_Self_Revive_C_ExecuteUbergraph_Action_Self_Revive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
