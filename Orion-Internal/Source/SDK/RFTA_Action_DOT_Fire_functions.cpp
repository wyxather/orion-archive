// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_DOT_Fire_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_DOT_Fire.Action_DOT_Fire_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_DOT_Fire_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DOT_Fire.Action_DOT_Fire_C.OnActionStart");

	UAction_DOT_Fire_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_DOT_Fire.Action_DOT_Fire_C.OnCharacterEvent
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_DOT_Fire_C::OnCharacterEvent(struct FName* EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DOT_Fire.Action_DOT_Fire_C.OnCharacterEvent");

	UAction_DOT_Fire_C_OnCharacterEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_DOT_Fire.Action_DOT_Fire_C.OnActionStop
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_DOT_Fire_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DOT_Fire.Action_DOT_Fire_C.OnActionStop");

	UAction_DOT_Fire_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_DOT_Fire.Action_DOT_Fire_C.ExecuteUbergraph_Action_DOT_Fire
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_DOT_Fire_C::ExecuteUbergraph_Action_DOT_Fire(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DOT_Fire.Action_DOT_Fire_C.ExecuteUbergraph_Action_DOT_Fire");

	UAction_DOT_Fire_C_ExecuteUbergraph_Action_DOT_Fire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
