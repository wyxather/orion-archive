// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_AnointParent_Gunner_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C.AnointAutoBearEnded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasValidTarget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ChargeTarget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_AnointParent_Gunner_C::AnointAutoBearEnded(bool HasValidTarget, class AActor* ChargeTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C.AnointAutoBearEnded");

	UAbility_AnointParent_Gunner_C_AnointAutoBearEnded_Params params;
	params.HasValidTarget = HasValidTarget;
	params.ChargeTarget = ChargeTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C.AnointAutoBearStarted
// (Public, BlueprintCallable, BlueprintEvent)

void UAbility_AnointParent_Gunner_C::AnointAutoBearStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C.AnointAutoBearStarted");

	UAbility_AnointParent_Gunner_C_AnointAutoBearStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C.AnointIronBearEnded
// (Public, BlueprintCallable, BlueprintEvent)

void UAbility_AnointParent_Gunner_C::AnointIronBearEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C.AnointIronBearEnded");

	UAbility_AnointParent_Gunner_C_AnointIronBearEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C.AnointIronIronBearStarted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter_IronBear*  IronBear                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_AnointParent_Gunner_C::AnointIronIronBearStarted(class AOakCharacter_IronBear* IronBear)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C.AnointIronIronBearStarted");

	UAbility_AnointParent_Gunner_C_AnointIronIronBearStarted_Params params;
	params.IronBear = IronBear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_AnointParent_Gunner_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C.OnActivated");

	UAbility_AnointParent_Gunner_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C.BindGunnerEvents
// (BlueprintCallable, BlueprintEvent)

void UAbility_AnointParent_Gunner_C::BindGunnerEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C.BindGunnerEvents");

	UAbility_AnointParent_Gunner_C_BindGunnerEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C.ExecuteUbergraph_Ability_AnointParent_Gunner
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_AnointParent_Gunner_C::ExecuteUbergraph_Ability_AnointParent_Gunner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Gunner.Ability_AnointParent_Gunner_C.ExecuteUbergraph_Ability_AnointParent_Gunner");

	UAbility_AnointParent_Gunner_C_ExecuteUbergraph_Ability_AnointParent_Gunner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
