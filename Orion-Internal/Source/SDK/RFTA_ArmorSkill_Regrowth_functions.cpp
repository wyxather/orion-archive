// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_ArmorSkill_Regrowth_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ArmorSkill_Regrowth.ArmorSkill_Regrowth_C.GetValue
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Tier                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArmorSkill_Regrowth_C::GetValue(int* Tier, float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Regrowth.ArmorSkill_Regrowth_C.GetValue");

	UArmorSkill_Regrowth_C_GetValue_Params params;
	params.Tier = Tier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function ArmorSkill_Regrowth.ArmorSkill_Regrowth_C.GetDamageScalar
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Tier                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          RangedDamageScalar             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MeleeDamageScalar              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ModDamageScalar                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SummonedCreatureDamageScalar   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArmorSkill_Regrowth_C::GetDamageScalar(int* Tier, float* RangedDamageScalar, float* MeleeDamageScalar, float* ModDamageScalar, float* SummonedCreatureDamageScalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Regrowth.ArmorSkill_Regrowth_C.GetDamageScalar");

	UArmorSkill_Regrowth_C_GetDamageScalar_Params params;
	params.Tier = Tier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RangedDamageScalar != nullptr)
		*RangedDamageScalar = params.RangedDamageScalar;
	if (MeleeDamageScalar != nullptr)
		*MeleeDamageScalar = params.MeleeDamageScalar;
	if (ModDamageScalar != nullptr)
		*ModDamageScalar = params.ModDamageScalar;
	if (SummonedCreatureDamageScalar != nullptr)
		*SummonedCreatureDamageScalar = params.SummonedCreatureDamageScalar;
}


// Function ArmorSkill_Regrowth.ArmorSkill_Regrowth_C.GetDescription
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Out                            (Parm, OutParm)

void UArmorSkill_Regrowth_C::GetDescription(class AActor** Actor, struct FText* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Regrowth.ArmorSkill_Regrowth_C.GetDescription");

	UArmorSkill_Regrowth_C_GetDescription_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function ArmorSkill_Regrowth.ArmorSkill_Regrowth_C.GetHealthRegenDisplay
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         InRegen                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Regen                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArmorSkill_Regrowth_C::GetHealthRegenDisplay(float* InRegen, class AActor** Owner, float* Regen)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Regrowth.ArmorSkill_Regrowth_C.GetHealthRegenDisplay");

	UArmorSkill_Regrowth_C_GetHealthRegenDisplay_Params params;
	params.InRegen = InRegen;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Regen != nullptr)
		*Regen = params.Regen;
}


// Function ArmorSkill_Regrowth.ArmorSkill_Regrowth_C.GetTierDescription
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Tier                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Out                            (Parm, OutParm)

void UArmorSkill_Regrowth_C::GetTierDescription(class AActor** Actor, int* Tier, struct FText* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Regrowth.ArmorSkill_Regrowth_C.GetTierDescription");

	UArmorSkill_Regrowth_C_GetTierDescription_Params params;
	params.Actor = Actor;
	params.Tier = Tier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function ArmorSkill_Regrowth.ArmorSkill_Regrowth_C.OnComputeStats
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UArmorSkill_Regrowth_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Regrowth.ArmorSkill_Regrowth_C.OnComputeStats");

	UArmorSkill_Regrowth_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArmorSkill_Regrowth.ArmorSkill_Regrowth_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UArmorSkill_Regrowth_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Regrowth.ArmorSkill_Regrowth_C.OnActionStart");

	UArmorSkill_Regrowth_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArmorSkill_Regrowth.ArmorSkill_Regrowth_C.AddStack
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UArmorSkill_Regrowth_C::AddStack()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Regrowth.ArmorSkill_Regrowth_C.AddStack");

	UArmorSkill_Regrowth_C_AddStack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArmorSkill_Regrowth.ArmorSkill_Regrowth_C.OnActionStop
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UArmorSkill_Regrowth_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Regrowth.ArmorSkill_Regrowth_C.OnActionStop");

	UArmorSkill_Regrowth_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArmorSkill_Regrowth.ArmorSkill_Regrowth_C.ExecuteUbergraph_ArmorSkill_Regrowth
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArmorSkill_Regrowth_C::ExecuteUbergraph_ArmorSkill_Regrowth(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Regrowth.ArmorSkill_Regrowth_C.ExecuteUbergraph_ArmorSkill_Regrowth");

	UArmorSkill_Regrowth_C_ExecuteUbergraph_ArmorSkill_Regrowth_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
