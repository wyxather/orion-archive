// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_IronBear_Charge_End_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_IronBear_Charge_End.Action_IronBear_Charge_End_C.OnAnimEnd_B40E293946052D568378BF989B320782
// (BlueprintCallable, BlueprintEvent)

void UAction_IronBear_Charge_End_C::OnAnimEnd_B40E293946052D568378BF989B320782()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_IronBear_Charge_End.Action_IronBear_Charge_End_C.OnAnimEnd_B40E293946052D568378BF989B320782");

	UAction_IronBear_Charge_End_C_OnAnimEnd_B40E293946052D568378BF989B320782_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_IronBear_Charge_End.Action_IronBear_Charge_End_C.OnEnd_B40E293946052D568378BF989B320782
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGbxActionEndState             EndState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_IronBear_Charge_End_C::OnEnd_B40E293946052D568378BF989B320782(EGbxActionEndState EndState, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_IronBear_Charge_End.Action_IronBear_Charge_End_C.OnEnd_B40E293946052D568378BF989B320782");

	UAction_IronBear_Charge_End_C_OnEnd_B40E293946052D568378BF989B320782_Params params;
	params.EndState = EndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_IronBear_Charge_End.Action_IronBear_Charge_End_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_IronBear_Charge_End_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_IronBear_Charge_End.Action_IronBear_Charge_End_C.OnBegin");

	UAction_IronBear_Charge_End_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_IronBear_Charge_End.Action_IronBear_Charge_End_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_IronBear_Charge_End_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_IronBear_Charge_End.Action_IronBear_Charge_End_C.OnEnd");

	UAction_IronBear_Charge_End_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_IronBear_Charge_End.Action_IronBear_Charge_End_C.ExecuteUbergraph_Action_IronBear_Charge_End
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_IronBear_Charge_End_C::ExecuteUbergraph_Action_IronBear_Charge_End(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_IronBear_Charge_End.Action_IronBear_Charge_End_C.ExecuteUbergraph_Action_IronBear_Charge_End");

	UAction_IronBear_Charge_End_C_ExecuteUbergraph_Action_IronBear_Charge_End_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
