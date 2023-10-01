// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_DOT_Bleeding_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_DOT_Bleeding.Action_DOT_Bleeding_C.Get Tag
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName*                  Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAction_DOT_Bleeding_C::Get_Tag(struct FName* Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DOT_Bleeding.Action_DOT_Bleeding_C.Get Tag");

	UAction_DOT_Bleeding_C_Get_Tag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Action_DOT_Bleeding.Action_DOT_Bleeding_C.GetDamageScalar
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_DOT_Bleeding_C::GetDamageScalar(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DOT_Bleeding.Action_DOT_Bleeding_C.GetDamageScalar");

	UAction_DOT_Bleeding_C_GetDamageScalar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Action_DOT_Bleeding.Action_DOT_Bleeding_C.UpdateDamageScalar
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_DOT_Bleeding_C::UpdateDamageScalar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DOT_Bleeding.Action_DOT_Bleeding_C.UpdateDamageScalar");

	UAction_DOT_Bleeding_C_UpdateDamageScalar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_DOT_Bleeding.Action_DOT_Bleeding_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_DOT_Bleeding_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DOT_Bleeding.Action_DOT_Bleeding_C.OnActionStart");

	UAction_DOT_Bleeding_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_DOT_Bleeding.Action_DOT_Bleeding_C.OnStateChange_Event_1
// 00007FF6F8B35350
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  StateName                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName*                  PreviousStateName              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_DOT_Bleeding_C::OnStateChange_Event_1(struct FName* StateName, struct FName* PreviousStateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DOT_Bleeding.Action_DOT_Bleeding_C.OnStateChange_Event_1");

	UAction_DOT_Bleeding_C_OnStateChange_Event_1_Params params;
	params.StateName = StateName;
	params.PreviousStateName = PreviousStateName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_DOT_Bleeding.Action_DOT_Bleeding_C.OnComputeStats
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_DOT_Bleeding_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DOT_Bleeding.Action_DOT_Bleeding_C.OnComputeStats");

	UAction_DOT_Bleeding_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_DOT_Bleeding.Action_DOT_Bleeding_C.ExecuteUbergraph_Action_DOT_Bleeding
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_DOT_Bleeding_C::ExecuteUbergraph_Action_DOT_Bleeding(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DOT_Bleeding.Action_DOT_Bleeding_C.ExecuteUbergraph_Action_DOT_Bleeding");

	UAction_DOT_Bleeding_C_ExecuteUbergraph_Action_DOT_Bleeding_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
