// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Gunner_EnterExit_Nova_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Gunner_EnterExit_Nova.Ability_Gunner_EnterExit_Nova_C.AnointTriggerEffect
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          TriggerEffect                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbility_Gunner_EnterExit_Nova_C::AnointTriggerEffect(bool* TriggerEffect, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Gunner_EnterExit_Nova.Ability_Gunner_EnterExit_Nova_C.AnointTriggerEffect");

	UAbility_Gunner_EnterExit_Nova_C_AnointTriggerEffect_Params params;
	params.TriggerEffect = TriggerEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Ability_Gunner_EnterExit_Nova.Ability_Gunner_EnterExit_Nova_C.AnointIronIronBearStarted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter_IronBear** IronBear                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Gunner_EnterExit_Nova_C::AnointIronIronBearStarted(class AOakCharacter_IronBear** IronBear)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Gunner_EnterExit_Nova.Ability_Gunner_EnterExit_Nova_C.AnointIronIronBearStarted");

	UAbility_Gunner_EnterExit_Nova_C_AnointIronIronBearStarted_Params params;
	params.IronBear = IronBear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Gunner_EnterExit_Nova.Ability_Gunner_EnterExit_Nova_C.AnointIronBearEnded
// (Public, BlueprintCallable, BlueprintEvent)

void UAbility_Gunner_EnterExit_Nova_C::AnointIronBearEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Gunner_EnterExit_Nova.Ability_Gunner_EnterExit_Nova_C.AnointIronBearEnded");

	UAbility_Gunner_EnterExit_Nova_C_AnointIronBearEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Gunner_EnterExit_Nova.Ability_Gunner_EnterExit_Nova_C.ExecuteUbergraph_Ability_Gunner_EnterExit_Nova
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Gunner_EnterExit_Nova_C::ExecuteUbergraph_Ability_Gunner_EnterExit_Nova(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Gunner_EnterExit_Nova.Ability_Gunner_EnterExit_Nova_C.ExecuteUbergraph_Ability_Gunner_EnterExit_Nova");

	UAbility_Gunner_EnterExit_Nova_C_ExecuteUbergraph_Ability_Gunner_EnterExit_Nova_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
