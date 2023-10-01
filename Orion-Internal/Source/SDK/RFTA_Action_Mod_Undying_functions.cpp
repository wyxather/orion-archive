// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_Undying_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Mod_Undying.Action_Mod_Undying_C.GetShieldValue
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ShieldValue                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_Undying_C::GetShieldValue(float* ShieldValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Undying.Action_Mod_Undying_C.GetShieldValue");

	UAction_Mod_Undying_C_GetShieldValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShieldValue != nullptr)
		*ShieldValue = params.ShieldValue;
}


// Function Action_Mod_Undying.Action_Mod_Undying_C.IsInAbortableInteractive
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Mod_Undying_C::IsInAbortableInteractive(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Undying.Action_Mod_Undying_C.IsInAbortableInteractive");

	UAction_Mod_Undying_C_IsInAbortableInteractive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Action_Mod_Undying.Action_Mod_Undying_C.GetOwnerHealth
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacterGunfire*       AsCharacter_Gunfire            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UAction_Mod_Undying_C::GetOwnerHealth(class ACharacterGunfire** AsCharacter_Gunfire)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Undying.Action_Mod_Undying_C.GetOwnerHealth");

	UAction_Mod_Undying_C_GetOwnerHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsCharacter_Gunfire != nullptr)
		*AsCharacter_Gunfire = params.AsCharacter_Gunfire;

	return params.ReturnValue;
}


// Function Action_Mod_Undying.Action_Mod_Undying_C.UpdateReviving
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_Mod_Undying_C::UpdateReviving()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Undying.Action_Mod_Undying_C.UpdateReviving");

	UAction_Mod_Undying_C_UpdateReviving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_Undying.Action_Mod_Undying_C.OnRep_Reviving
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UAction_Mod_Undying_C::OnRep_Reviving()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Undying.Action_Mod_Undying_C.OnRep_Reviving");

	UAction_Mod_Undying_C_OnRep_Reviving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_Undying.Action_Mod_Undying_C.FilterIncomingDamage
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FDamageInfo             DamageInfoOut                  (Parm, OutParm, ContainsInstancedReference)
// bool                           ShouldApplyDamage              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Mod_Undying_C::FilterIncomingDamage(struct FDamageInfo* DamageInfo, struct FDamageInfo* DamageInfoOut, bool* ShouldApplyDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Undying.Action_Mod_Undying_C.FilterIncomingDamage");

	UAction_Mod_Undying_C_FilterIncomingDamage_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageInfoOut != nullptr)
		*DamageInfoOut = params.DamageInfoOut;
	if (ShouldApplyDamage != nullptr)
		*ShouldApplyDamage = params.ShouldApplyDamage;
}


// Function Action_Mod_Undying.Action_Mod_Undying_C.OnStateChanged
// 00007FF6F8B35350
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  StateName                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName*                  PreviousStateName              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_Undying_C::OnStateChanged(struct FName* StateName, struct FName* PreviousStateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Undying.Action_Mod_Undying_C.OnStateChanged");

	UAction_Mod_Undying_C_OnStateChanged_Params params;
	params.StateName = StateName;
	params.PreviousStateName = PreviousStateName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_Undying.Action_Mod_Undying_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Mod_Undying_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Undying.Action_Mod_Undying_C.OnActionStart");

	UAction_Mod_Undying_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_Undying.Action_Mod_Undying_C.OnActionStop
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Mod_Undying_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Undying.Action_Mod_Undying_C.OnActionStop");

	UAction_Mod_Undying_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_Undying.Action_Mod_Undying_C.DamageTaken
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UAction_Mod_Undying_C::DamageTaken()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Undying.Action_Mod_Undying_C.DamageTaken");

	UAction_Mod_Undying_C_DamageTaken_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_Undying.Action_Mod_Undying_C.ExecuteUbergraph_Action_Mod_Undying
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_Undying_C::ExecuteUbergraph_Action_Mod_Undying(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Undying.Action_Mod_Undying_C.ExecuteUbergraph_Action_Mod_Undying");

	UAction_Mod_Undying_C_ExecuteUbergraph_Action_Mod_Undying_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
