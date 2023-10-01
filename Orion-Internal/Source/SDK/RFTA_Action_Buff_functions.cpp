// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Buff_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Buff.Action_Buff_C.GetDesiredVisual
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Slot                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   ID                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAction_Buff_C::GetDesiredVisual(struct FName* Slot, struct FName* ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Buff.Action_Buff_C.GetDesiredVisual");

	UAction_Buff_C_GetDesiredVisual_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Slot != nullptr)
		*Slot = params.Slot;
	if (ID != nullptr)
		*ID = params.ID;

	return params.ReturnValue;
}


// Function Action_Buff.Action_Buff_C.UpdateIcon
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_Buff_C::UpdateIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Buff.Action_Buff_C.UpdateIcon");

	UAction_Buff_C_UpdateIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Buff.Action_Buff_C.OnReapplyBuff
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_Buff_C::OnReapplyBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Buff.Action_Buff_C.OnReapplyBuff");

	UAction_Buff_C_OnReapplyBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Buff.Action_Buff_C.ClearVisual
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_Buff_C::ClearVisual()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Buff.Action_Buff_C.ClearVisual");

	UAction_Buff_C_ClearVisual_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Buff.Action_Buff_C.SetVisual
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_Buff_C::SetVisual()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Buff.Action_Buff_C.SetVisual");

	UAction_Buff_C_SetVisual_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Buff.Action_Buff_C.GetActionCount
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Buff_C::GetActionCount(int* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Buff.Action_Buff_C.GetActionCount");

	UAction_Buff_C_GetActionCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Action_Buff.Action_Buff_C.AllowAction
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 ActionBP                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FDamageInfo*            InDamageInfo                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAction_Buff_C::AllowAction(class UClass** ActionBP, struct FDamageInfo* InDamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Buff.Action_Buff_C.AllowAction");

	UAction_Buff_C_AllowAction_Params params;
	params.ActionBP = ActionBP;
	params.InDamageInfo = InDamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Action_Buff.Action_Buff_C.OnDurationTimer
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UAction_Buff_C::OnDurationTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Buff.Action_Buff_C.OnDurationTimer");

	UAction_Buff_C_OnDurationTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Buff.Action_Buff_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Buff_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Buff.Action_Buff_C.OnActionStart");

	UAction_Buff_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Buff.Action_Buff_C.OnTakeDamage
// 00007FF6F8B35350
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UAction_Buff_C::OnTakeDamage(struct FDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Buff.Action_Buff_C.OnTakeDamage");

	UAction_Buff_C_OnTakeDamage_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Buff.Action_Buff_C.MulticastResetTimer
// 00007FF6F8B35350
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void UAction_Buff_C::MulticastResetTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Buff.Action_Buff_C.MulticastResetTimer");

	UAction_Buff_C_MulticastResetTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Buff.Action_Buff_C.OnActionStop
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Buff_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Buff.Action_Buff_C.OnActionStop");

	UAction_Buff_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Buff.Action_Buff_C.OnDead_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char*                 Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Cause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Buff_C::OnDead_Event_1(unsigned char* Reason, class ACharacterGunfire** Character, class AActor** Cause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Buff.Action_Buff_C.OnDead_Event_1");

	UAction_Buff_C_OnDead_Event_1_Params params;
	params.Reason = Reason;
	params.Character = Character;
	params.Cause = Cause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Buff.Action_Buff_C.OnRevived
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UAction_Buff_C::OnRevived()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Buff.Action_Buff_C.OnRevived");

	UAction_Buff_C_OnRevived_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Buff.Action_Buff_C.OnLevelChanged
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Buff_C::OnLevelChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Buff.Action_Buff_C.OnLevelChanged");

	UAction_Buff_C_OnLevelChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Buff.Action_Buff_C.MulticastReapplyBuff
// 00007FF6F8B35350
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void UAction_Buff_C::MulticastReapplyBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Buff.Action_Buff_C.MulticastReapplyBuff");

	UAction_Buff_C_MulticastReapplyBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Buff.Action_Buff_C.OnWorldReset
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UAction_Buff_C::OnWorldReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Buff.Action_Buff_C.OnWorldReset");

	UAction_Buff_C_OnWorldReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Buff.Action_Buff_C.ExecuteUbergraph_Action_Buff
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Buff_C::ExecuteUbergraph_Action_Buff(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Buff.Action_Buff_C.ExecuteUbergraph_Action_Buff");

	UAction_Buff_C_ExecuteUbergraph_Action_Buff_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Buff.Action_Buff_C.LevelChanged__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UAction_Buff_C::LevelChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Buff.Action_Buff_C.LevelChanged__DelegateSignature");

	UAction_Buff_C_LevelChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
