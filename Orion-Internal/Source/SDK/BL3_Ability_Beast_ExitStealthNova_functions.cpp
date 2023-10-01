// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Beast_ExitStealthNova_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Beast_ExitStealthNova.Ability_Beast_ExitStealthNova_C.AnointTriggerEffect
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          TriggerEffect                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbility_Beast_ExitStealthNova_C::AnointTriggerEffect(bool* TriggerEffect, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Beast_ExitStealthNova.Ability_Beast_ExitStealthNova_C.AnointTriggerEffect");

	UAbility_Beast_ExitStealthNova_C_AnointTriggerEffect_Params params;
	params.TriggerEffect = TriggerEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Ability_Beast_ExitStealthNova.Ability_Beast_ExitStealthNova_C.ExitStealth
// (BlueprintCallable, BlueprintEvent)

void UAbility_Beast_ExitStealthNova_C::ExitStealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Beast_ExitStealthNova.Ability_Beast_ExitStealthNova_C.ExitStealth");

	UAbility_Beast_ExitStealthNova_C_ExitStealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Beast_ExitStealthNova.Ability_Beast_ExitStealthNova_C.ExecuteUbergraph_Ability_Beast_ExitStealthNova
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Beast_ExitStealthNova_C::ExecuteUbergraph_Ability_Beast_ExitStealthNova(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Beast_ExitStealthNova.Ability_Beast_ExitStealthNova_C.ExecuteUbergraph_Ability_Beast_ExitStealthNova");

	UAbility_Beast_ExitStealthNova_C_ExecuteUbergraph_Ability_Beast_ExitStealthNova_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
