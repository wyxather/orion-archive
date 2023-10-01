// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_StopAction_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_StopAction_Base.Action_StopAction_Base_C.Stop Action
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 ActionBP                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_StopAction_Base_C::Stop_Action(class UClass** ActionBP)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StopAction_Base.Action_StopAction_Base_C.Stop Action");

	UAction_StopAction_Base_C_Stop_Action_Params params;
	params.ActionBP = ActionBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_StopAction_Base.Action_StopAction_Base_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_StopAction_Base_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StopAction_Base.Action_StopAction_Base_C.OnActionStart");

	UAction_StopAction_Base_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_StopAction_Base.Action_StopAction_Base_C.ExecuteUbergraph_Action_StopAction_Base
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_StopAction_Base_C::ExecuteUbergraph_Action_StopAction_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StopAction_Base.Action_StopAction_Base_C.ExecuteUbergraph_Action_StopAction_Base");

	UAction_StopAction_Base_C_ExecuteUbergraph_Action_StopAction_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
