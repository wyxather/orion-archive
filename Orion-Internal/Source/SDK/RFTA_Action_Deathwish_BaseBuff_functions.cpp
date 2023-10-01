// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Deathwish_BaseBuff_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Deathwish_BaseBuff.Action_Deathwish_BaseBuff_C.GetLifeStealPercent
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scalar                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Deathwish_BaseBuff_C::GetLifeStealPercent(float* Scalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Deathwish_BaseBuff.Action_Deathwish_BaseBuff_C.GetLifeStealPercent");

	UAction_Deathwish_BaseBuff_C_GetLifeStealPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scalar != nullptr)
		*Scalar = params.Scalar;
}


// Function Action_Deathwish_BaseBuff.Action_Deathwish_BaseBuff_C.GetSiphonerTraitLifeStealMod
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ModDamage                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Deathwish_BaseBuff_C::GetSiphonerTraitLifeStealMod(float* ModDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Deathwish_BaseBuff.Action_Deathwish_BaseBuff_C.GetSiphonerTraitLifeStealMod");

	UAction_Deathwish_BaseBuff_C_GetSiphonerTraitLifeStealMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ModDamage != nullptr)
		*ModDamage = params.ModDamage;
}


// Function Action_Deathwish_BaseBuff.Action_Deathwish_BaseBuff_C.GetCharactersForDevotion
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Ref                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ACharacterGunfire*> Characters                     (Parm, OutParm, ZeroConstructor)

void UAction_Deathwish_BaseBuff_C::GetCharactersForDevotion(class AActor** Ref, TArray<class ACharacterGunfire*>* Characters)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Deathwish_BaseBuff.Action_Deathwish_BaseBuff_C.GetCharactersForDevotion");

	UAction_Deathwish_BaseBuff_C_GetCharactersForDevotion_Params params;
	params.Ref = Ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Characters != nullptr)
		*Characters = params.Characters;
}


// Function Action_Deathwish_BaseBuff.Action_Deathwish_BaseBuff_C.DoDevoted
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Heal                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Deathwish_BaseBuff_C::DoDevoted(float* Heal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Deathwish_BaseBuff.Action_Deathwish_BaseBuff_C.DoDevoted");

	UAction_Deathwish_BaseBuff_C_DoDevoted_Params params;
	params.Heal = Heal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Deathwish_BaseBuff.Action_Deathwish_BaseBuff_C.HealDamage
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Deathwish_BaseBuff_C::HealDamage(float* Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Deathwish_BaseBuff.Action_Deathwish_BaseBuff_C.HealDamage");

	UAction_Deathwish_BaseBuff_C_HealDamage_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Deathwish_BaseBuff.Action_Deathwish_BaseBuff_C.DecreaseScaling
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Cause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          AdjustedDamage                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Deathwish_BaseBuff_C::DecreaseScaling(float* Damage, class AActor** Cause, float* AdjustedDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Deathwish_BaseBuff.Action_Deathwish_BaseBuff_C.DecreaseScaling");

	UAction_Deathwish_BaseBuff_C_DecreaseScaling_Params params;
	params.Damage = Damage;
	params.Cause = Cause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AdjustedDamage != nullptr)
		*AdjustedDamage = params.AdjustedDamage;
}


// Function Action_Deathwish_BaseBuff.Action_Deathwish_BaseBuff_C.ModifyDamage
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Deathwish_BaseBuff_C::ModifyDamage(struct FDamageInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Deathwish_BaseBuff.Action_Deathwish_BaseBuff_C.ModifyDamage");

	UAction_Deathwish_BaseBuff_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;
}


// Function Action_Deathwish_BaseBuff.Action_Deathwish_BaseBuff_C.OnActionStop
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Deathwish_BaseBuff_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Deathwish_BaseBuff.Action_Deathwish_BaseBuff_C.OnActionStop");

	UAction_Deathwish_BaseBuff_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Deathwish_BaseBuff.Action_Deathwish_BaseBuff_C.OnTick
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Deathwish_BaseBuff_C::OnTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Deathwish_BaseBuff.Action_Deathwish_BaseBuff_C.OnTick");

	UAction_Deathwish_BaseBuff_C_OnTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Deathwish_BaseBuff.Action_Deathwish_BaseBuff_C.OnHitTarget
// 00007FF6F8B35350
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UAction_Deathwish_BaseBuff_C::OnHitTarget(struct FDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Deathwish_BaseBuff.Action_Deathwish_BaseBuff_C.OnHitTarget");

	UAction_Deathwish_BaseBuff_C_OnHitTarget_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Deathwish_BaseBuff.Action_Deathwish_BaseBuff_C.StopForCinematic
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerControllerGunfire** Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          bIsInCinematic                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Deathwish_BaseBuff_C::StopForCinematic(class APlayerControllerGunfire** Player, bool* bIsInCinematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Deathwish_BaseBuff.Action_Deathwish_BaseBuff_C.StopForCinematic");

	UAction_Deathwish_BaseBuff_C_StopForCinematic_Params params;
	params.Player = Player;
	params.bIsInCinematic = bIsInCinematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Deathwish_BaseBuff.Action_Deathwish_BaseBuff_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Deathwish_BaseBuff_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Deathwish_BaseBuff.Action_Deathwish_BaseBuff_C.OnActionStart");

	UAction_Deathwish_BaseBuff_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Deathwish_BaseBuff.Action_Deathwish_BaseBuff_C.ExecuteUbergraph_Action_Deathwish_BaseBuff
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Deathwish_BaseBuff_C::ExecuteUbergraph_Action_Deathwish_BaseBuff(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Deathwish_BaseBuff.Action_Deathwish_BaseBuff_C.ExecuteUbergraph_Action_Deathwish_BaseBuff");

	UAction_Deathwish_BaseBuff_C_ExecuteUbergraph_Action_Deathwish_BaseBuff_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
