// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Shield_Manawell_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Shield_Manawell.Ability_Shield_Manawell_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Shield_Manawell_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Shield_Manawell.Ability_Shield_Manawell_C.OnActivated");

	UAbility_Shield_Manawell_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Shield_Manawell.Ability_Shield_Manawell_C.SlamEnd
// (Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGroundSlamEndedDetails Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_Shield_Manawell_C::SlamEnd(const struct FGroundSlamEndedDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Shield_Manawell.Ability_Shield_Manawell_C.SlamEnd");

	UAbility_Shield_Manawell_C_SlamEnd_Params params;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Shield_Manawell.Ability_Shield_Manawell_C.StopEffect
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void UAbility_Shield_Manawell_C::StopEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Shield_Manawell.Ability_Shield_Manawell_C.StopEffect");

	UAbility_Shield_Manawell_C_StopEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Shield_Manawell.Ability_Shield_Manawell_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Shield_Manawell_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Shield_Manawell.Ability_Shield_Manawell_C.OnDeactivated");

	UAbility_Shield_Manawell_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Shield_Manawell.Ability_Shield_Manawell_C.DrainShield
// (BlueprintCallable, BlueprintEvent)

void UAbility_Shield_Manawell_C::DrainShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Shield_Manawell.Ability_Shield_Manawell_C.DrainShield");

	UAbility_Shield_Manawell_C_DrainShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Shield_Manawell.Ability_Shield_Manawell_C.ExecuteUbergraph_Ability_Shield_Manawell
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Shield_Manawell_C::ExecuteUbergraph_Ability_Shield_Manawell(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Shield_Manawell.Ability_Shield_Manawell_C.ExecuteUbergraph_Ability_Shield_Manawell");

	UAbility_Shield_Manawell_C_ExecuteUbergraph_Ability_Shield_Manawell_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
