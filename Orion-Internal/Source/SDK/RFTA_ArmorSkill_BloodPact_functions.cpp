// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_ArmorSkill_BloodPact_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ArmorSkill_BloodPact.ArmorSkill_BloodPact_C.IncrementModPower
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UArmorSkill_BloodPact_C::IncrementModPower()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_BloodPact.ArmorSkill_BloodPact_C.IncrementModPower");

	UArmorSkill_BloodPact_C_IncrementModPower_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArmorSkill_BloodPact.ArmorSkill_BloodPact_C.GetTierDescription
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Tier                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Out                            (Parm, OutParm)

void UArmorSkill_BloodPact_C::GetTierDescription(class AActor** Actor, int* Tier, struct FText* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_BloodPact.ArmorSkill_BloodPact_C.GetTierDescription");

	UArmorSkill_BloodPact_C_GetTierDescription_Params params;
	params.Actor = Actor;
	params.Tier = Tier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function ArmorSkill_BloodPact.ArmorSkill_BloodPact_C.GetDescription
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Out                            (Parm, OutParm)

void UArmorSkill_BloodPact_C::GetDescription(class AActor** Actor, struct FText* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_BloodPact.ArmorSkill_BloodPact_C.GetDescription");

	UArmorSkill_BloodPact_C_GetDescription_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function ArmorSkill_BloodPact.ArmorSkill_BloodPact_C.GetModDurationMod
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Tier                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArmorSkill_BloodPact_C::GetModDurationMod(int* Tier, float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_BloodPact.ArmorSkill_BloodPact_C.GetModDurationMod");

	UArmorSkill_BloodPact_C_GetModDurationMod_Params params;
	params.Tier = Tier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function ArmorSkill_BloodPact.ArmorSkill_BloodPact_C.Trigger
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UArmorSkill_BloodPact_C::Trigger(struct FDamageInfo* Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_BloodPact.ArmorSkill_BloodPact_C.Trigger");

	UArmorSkill_BloodPact_C_Trigger_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArmorSkill_BloodPact.ArmorSkill_BloodPact_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UArmorSkill_BloodPact_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_BloodPact.ArmorSkill_BloodPact_C.OnActionStart");

	UArmorSkill_BloodPact_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArmorSkill_BloodPact.ArmorSkill_BloodPact_C.OnActionStop
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UArmorSkill_BloodPact_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_BloodPact.ArmorSkill_BloodPact_C.OnActionStop");

	UArmorSkill_BloodPact_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArmorSkill_BloodPact.ArmorSkill_BloodPact_C.OnComputeStats
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UArmorSkill_BloodPact_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_BloodPact.ArmorSkill_BloodPact_C.OnComputeStats");

	UArmorSkill_BloodPact_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArmorSkill_BloodPact.ArmorSkill_BloodPact_C.ExecuteUbergraph_ArmorSkill_BloodPact
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArmorSkill_BloodPact_C::ExecuteUbergraph_ArmorSkill_BloodPact(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_BloodPact.ArmorSkill_BloodPact_C.ExecuteUbergraph_ArmorSkill_BloodPact");

	UArmorSkill_BloodPact_C_ExecuteUbergraph_ArmorSkill_BloodPact_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
