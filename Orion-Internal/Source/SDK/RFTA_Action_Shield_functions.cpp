// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Shield_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Shield.Action_Shield_C.ShieldBreak
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_Shield_C::ShieldBreak()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Shield.Action_Shield_C.ShieldBreak");

	UAction_Shield_C_ShieldBreak_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Shield.Action_Shield_C.GetShieldMax
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Shield_C::GetShieldMax(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Shield.Action_Shield_C.GetShieldMax");

	UAction_Shield_C_GetShieldMax_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Action_Shield.Action_Shield_C.OnRep_ShieldValue
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UAction_Shield_C::OnRep_ShieldValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Shield.Action_Shield_C.OnRep_ShieldValue");

	UAction_Shield_C_OnRep_ShieldValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Shield.Action_Shield_C.GetShieldPct
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Shield_C::GetShieldPct(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Shield.Action_Shield_C.GetShieldPct");

	UAction_Shield_C_GetShieldPct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Action_Shield.Action_Shield_C.ApplyShieldDelta
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             DamageInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UAction_Shield_C::ApplyShieldDelta(struct FDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Shield.Action_Shield_C.ApplyShieldDelta");

	UAction_Shield_C_ApplyShieldDelta_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageInfo != nullptr)
		*DamageInfo = params.DamageInfo;
}


// Function Action_Shield.Action_Shield_C.PlayVFX
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem**        EmitterTemplate                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName*                  AttachPointName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Shield_C::PlayVFX(class UParticleSystem** EmitterTemplate, struct FName* AttachPointName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Shield.Action_Shield_C.PlayVFX");

	UAction_Shield_C_PlayVFX_Params params;
	params.EmitterTemplate = EmitterTemplate;
	params.AttachPointName = AttachPointName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Shield.Action_Shield_C.DamageShieldMaterialAmount
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         amt                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Shield_C::DamageShieldMaterialAmount(float* amt)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Shield.Action_Shield_C.DamageShieldMaterialAmount");

	UAction_Shield_C_DamageShieldMaterialAmount_Params params;
	params.amt = amt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Shield.Action_Shield_C.PlaySound
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase**             Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          StoreSound                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Shield_C::PlaySound(class USoundBase** Sound, bool* StoreSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Shield.Action_Shield_C.PlaySound");

	UAction_Shield_C_PlaySound_Params params;
	params.Sound = Sound;
	params.StoreSound = StoreSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Shield.Action_Shield_C.SetShieldAmount
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         amt                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Shield_C::SetShieldAmount(float* amt)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Shield.Action_Shield_C.SetShieldAmount");

	UAction_Shield_C_SetShieldAmount_Params params;
	params.amt = amt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Shield.Action_Shield_C.FilterIncomingDamage
// 00007FF6F8B35350
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FDamageInfo             DamageInfoOut                  (Parm, OutParm, ContainsInstancedReference)
// bool                           ShouldApplyDamage              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Shield_C::FilterIncomingDamage(struct FDamageInfo* DamageInfo, struct FDamageInfo* DamageInfoOut, bool* ShouldApplyDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Shield.Action_Shield_C.FilterIncomingDamage");

	UAction_Shield_C_FilterIncomingDamage_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageInfoOut != nullptr)
		*DamageInfoOut = params.DamageInfoOut;
	if (ShouldApplyDamage != nullptr)
		*ShouldApplyDamage = params.ShouldApplyDamage;
}


// Function Action_Shield.Action_Shield_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Shield_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Shield.Action_Shield_C.OnActionStart");

	UAction_Shield_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Shield.Action_Shield_C.OnActionStop
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Shield_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Shield.Action_Shield_C.OnActionStop");

	UAction_Shield_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Shield.Action_Shield_C.ClientShieldHit
// 00007FF6F8B35350
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void UAction_Shield_C::ClientShieldHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Shield.Action_Shield_C.ClientShieldHit");

	UAction_Shield_C_ClientShieldHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Shield.Action_Shield_C.ExecuteUbergraph_Action_Shield
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Shield_C::ExecuteUbergraph_Action_Shield(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Shield.Action_Shield_C.ExecuteUbergraph_Action_Shield");

	UAction_Shield_C_ExecuteUbergraph_Action_Shield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Shield.Action_Shield_C.OnShieldEmpty__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         MinDuration                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         MaxDuration                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Shield_C::OnShieldEmpty__DelegateSignature(float* MinDuration, float* MaxDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Shield.Action_Shield_C.OnShieldEmpty__DelegateSignature");

	UAction_Shield_C_OnShieldEmpty__DelegateSignature_Params params;
	params.MinDuration = MinDuration;
	params.MaxDuration = MaxDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Shield.Action_Shield_C.OnHit__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UAction_Shield_C::OnHit__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Shield.Action_Shield_C.OnHit__DelegateSignature");

	UAction_Shield_C_OnHit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
