// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_RemnantRangedWeaponMod_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RemnantRangedWeaponMod.RemnantRangedWeaponMod_C.GetLabyrinthArmorModDamageScalar
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ModDamageScalar                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnantRangedWeaponMod_C::GetLabyrinthArmorModDamageScalar(float* ModDamageScalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemnantRangedWeaponMod.RemnantRangedWeaponMod_C.GetLabyrinthArmorModDamageScalar");

	ARemnantRangedWeaponMod_C_GetLabyrinthArmorModDamageScalar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ModDamageScalar != nullptr)
		*ModDamageScalar = params.ModDamageScalar;
}


// Function RemnantRangedWeaponMod.RemnantRangedWeaponMod_C.GetLevelScalar
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnantRangedWeaponMod_C::GetLevelScalar(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemnantRangedWeaponMod.RemnantRangedWeaponMod_C.GetLevelScalar");

	ARemnantRangedWeaponMod_C_GetLevelScalar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function RemnantRangedWeaponMod.RemnantRangedWeaponMod_C.GetInvokerTraitSummonDamageMod
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          SummonedCreatureModDamage      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnantRangedWeaponMod_C::GetInvokerTraitSummonDamageMod(float* SummonedCreatureModDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemnantRangedWeaponMod.RemnantRangedWeaponMod_C.GetInvokerTraitSummonDamageMod");

	ARemnantRangedWeaponMod_C_GetInvokerTraitSummonDamageMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SummonedCreatureModDamage != nullptr)
		*SummonedCreatureModDamage = params.SummonedCreatureModDamage;
}


// Function RemnantRangedWeaponMod.RemnantRangedWeaponMod_C.GetConcentrationTraitDurationMod
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ModDuration                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnantRangedWeaponMod_C::GetConcentrationTraitDurationMod(float* ModDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemnantRangedWeaponMod.RemnantRangedWeaponMod_C.GetConcentrationTraitDurationMod");

	ARemnantRangedWeaponMod_C_GetConcentrationTraitDurationMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ModDuration != nullptr)
		*ModDuration = params.ModDuration;
}


// Function RemnantRangedWeaponMod.RemnantRangedWeaponMod_C.GetEvocationTraitDamageMod
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ModDamage                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnantRangedWeaponMod_C::GetEvocationTraitDamageMod(float* ModDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemnantRangedWeaponMod.RemnantRangedWeaponMod_C.GetEvocationTraitDamageMod");

	ARemnantRangedWeaponMod_C_GetEvocationTraitDamageMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ModDamage != nullptr)
		*ModDamage = params.ModDamage;
}


// Function RemnantRangedWeaponMod.RemnantRangedWeaponMod_C.CanUse
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ARemnantRangedWeaponMod_C::CanUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemnantRangedWeaponMod.RemnantRangedWeaponMod_C.CanUse");

	ARemnantRangedWeaponMod_C_CanUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RemnantRangedWeaponMod.RemnantRangedWeaponMod_C.GetWeaponDamageScalar
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                          ApplyLevelDamageScalar         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnantRangedWeaponMod_C::GetWeaponDamageScalar(bool* ApplyLevelDamageScalar, float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemnantRangedWeaponMod.RemnantRangedWeaponMod_C.GetWeaponDamageScalar");

	ARemnantRangedWeaponMod_C_GetWeaponDamageScalar_Params params;
	params.ApplyLevelDamageScalar = ApplyLevelDamageScalar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function RemnantRangedWeaponMod.RemnantRangedWeaponMod_C.GetSpiritScalar
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnantRangedWeaponMod_C::GetSpiritScalar(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemnantRangedWeaponMod.RemnantRangedWeaponMod_C.GetSpiritScalar");

	ARemnantRangedWeaponMod_C_GetSpiritScalar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function RemnantRangedWeaponMod.RemnantRangedWeaponMod_C.OnFire
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                from                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector*                to                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WeaponSpread                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnantRangedWeaponMod_C::OnFire(struct FVector* from, struct FVector* to, float* WeaponSpread)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemnantRangedWeaponMod.RemnantRangedWeaponMod_C.OnFire");

	ARemnantRangedWeaponMod_C_OnFire_Params params;
	params.from = from;
	params.to = to;
	params.WeaponSpread = WeaponSpread;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RemnantRangedWeaponMod.RemnantRangedWeaponMod_C.ExecuteUbergraph_RemnantRangedWeaponMod
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARemnantRangedWeaponMod_C::ExecuteUbergraph_RemnantRangedWeaponMod(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RemnantRangedWeaponMod.RemnantRangedWeaponMod_C.ExecuteUbergraph_RemnantRangedWeaponMod");

	ARemnantRangedWeaponMod_C_ExecuteUbergraph_RemnantRangedWeaponMod_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
