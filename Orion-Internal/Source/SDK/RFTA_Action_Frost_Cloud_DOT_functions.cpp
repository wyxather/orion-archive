// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Frost_Cloud_DOT_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Frost_Cloud_DOT.Action_Frost_Cloud_DOT_C.CheckTag
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Frost_Cloud_DOT_C::CheckTag(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Frost_Cloud_DOT.Action_Frost_Cloud_DOT_C.CheckTag");

	UAction_Frost_Cloud_DOT_C_CheckTag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Action_Frost_Cloud_DOT.Action_Frost_Cloud_DOT_C.IsHostile
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Frost_Cloud_DOT_C::IsHostile(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Frost_Cloud_DOT.Action_Frost_Cloud_DOT_C.IsHostile");

	UAction_Frost_Cloud_DOT_C_IsHostile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Action_Frost_Cloud_DOT.Action_Frost_Cloud_DOT_C.IsPlayer
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Frost_Cloud_DOT_C::IsPlayer(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Frost_Cloud_DOT.Action_Frost_Cloud_DOT_C.IsPlayer");

	UAction_Frost_Cloud_DOT_C_IsPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Action_Frost_Cloud_DOT.Action_Frost_Cloud_DOT_C.IsBoss
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Frost_Cloud_DOT_C::IsBoss(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Frost_Cloud_DOT.Action_Frost_Cloud_DOT_C.IsBoss");

	UAction_Frost_Cloud_DOT_C_IsBoss_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Action_Frost_Cloud_DOT.Action_Frost_Cloud_DOT_C.CanDoDamage
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Frost_Cloud_DOT_C::CanDoDamage(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Frost_Cloud_DOT.Action_Frost_Cloud_DOT_C.CanDoDamage");

	UAction_Frost_Cloud_DOT_C_CanDoDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Action_Frost_Cloud_DOT.Action_Frost_Cloud_DOT_C.Release
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_Frost_Cloud_DOT_C::Release()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Frost_Cloud_DOT.Action_Frost_Cloud_DOT_C.Release");

	UAction_Frost_Cloud_DOT_C_Release_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Frost_Cloud_DOT.Action_Frost_Cloud_DOT_C.AllowAction
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 ActionBP                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FDamageInfo*            InDamageInfo                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAction_Frost_Cloud_DOT_C::AllowAction(class UClass** ActionBP, struct FDamageInfo* InDamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Frost_Cloud_DOT.Action_Frost_Cloud_DOT_C.AllowAction");

	UAction_Frost_Cloud_DOT_C_AllowAction_Params params;
	params.ActionBP = ActionBP;
	params.InDamageInfo = InDamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Action_Frost_Cloud_DOT.Action_Frost_Cloud_DOT_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Frost_Cloud_DOT_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Frost_Cloud_DOT.Action_Frost_Cloud_DOT_C.OnActionStart");

	UAction_Frost_Cloud_DOT_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Frost_Cloud_DOT.Action_Frost_Cloud_DOT_C.OnActionStop
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Frost_Cloud_DOT_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Frost_Cloud_DOT.Action_Frost_Cloud_DOT_C.OnActionStop");

	UAction_Frost_Cloud_DOT_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Frost_Cloud_DOT.Action_Frost_Cloud_DOT_C.ExecuteUbergraph_Action_Frost_Cloud_DOT
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Frost_Cloud_DOT_C::ExecuteUbergraph_Action_Frost_Cloud_DOT(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Frost_Cloud_DOT.Action_Frost_Cloud_DOT_C.ExecuteUbergraph_Action_Frost_Cloud_DOT");

	UAction_Frost_Cloud_DOT_C_ExecuteUbergraph_Action_Frost_Cloud_DOT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
