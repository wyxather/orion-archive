// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_All_SlideRegenShields_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_All_SlideRegenShields_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C.OnActivated");

	UAbility_All_SlideRegenShields_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_All_SlideRegenShields_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C.OnDeactivated");

	UAbility_All_SlideRegenShields_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C.BuildEnergy
// (BlueprintCallable, BlueprintEvent)

void UAbility_All_SlideRegenShields_C::BuildEnergy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C.BuildEnergy");

	UAbility_All_SlideRegenShields_C_BuildEnergy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C.ReleaseEnergy
// (BlueprintCallable, BlueprintEvent)

void UAbility_All_SlideRegenShields_C::ReleaseEnergy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C.ReleaseEnergy");

	UAbility_All_SlideRegenShields_C_ReleaseEnergy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C.SlideStart
// (BlueprintCallable, BlueprintEvent)

void UAbility_All_SlideRegenShields_C::SlideStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C.SlideStart");

	UAbility_All_SlideRegenShields_C_SlideStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C.SlideEnd
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlideEndedDetails      Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_All_SlideRegenShields_C::SlideEnd(const struct FSlideEndedDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C.SlideEnd");

	UAbility_All_SlideRegenShields_C_SlideEnd_Params params;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C.ExecuteUbergraph_Ability_All_SlideRegenShields
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_All_SlideRegenShields_C::ExecuteUbergraph_Ability_All_SlideRegenShields(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_SlideRegenShields.Ability_All_SlideRegenShields_C.ExecuteUbergraph_Ability_All_SlideRegenShields");

	UAbility_All_SlideRegenShields_C_ExecuteUbergraph_Ability_All_SlideRegenShields_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
