// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_SplatterGun_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Artifact_SplatterGun.Ability_Artifact_SplatterGun_C.Ammo Return
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Artifact_SplatterGun_C::Ammo_Return(class AOakCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_SplatterGun.Ability_Artifact_SplatterGun_C.Ammo Return");

	UAbility_Artifact_SplatterGun_C_Ammo_Return_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_SplatterGun.Ability_Artifact_SplatterGun_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Artifact_SplatterGun_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_SplatterGun.Ability_Artifact_SplatterGun_C.OnActivated");

	UAbility_Artifact_SplatterGun_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_SplatterGun.Ability_Artifact_SplatterGun_C.StartSlide
// (BlueprintCallable, BlueprintEvent)

void UAbility_Artifact_SplatterGun_C::StartSlide()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_SplatterGun.Ability_Artifact_SplatterGun_C.StartSlide");

	UAbility_Artifact_SplatterGun_C_StartSlide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_SplatterGun.Ability_Artifact_SplatterGun_C.EndSlide
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlideEndedDetails      Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_Artifact_SplatterGun_C::EndSlide(const struct FSlideEndedDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_SplatterGun.Ability_Artifact_SplatterGun_C.EndSlide");

	UAbility_Artifact_SplatterGun_C_EndSlide_Params params;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_SplatterGun.Ability_Artifact_SplatterGun_C.ExecuteUbergraph_Ability_Artifact_SplatterGun
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Artifact_SplatterGun_C::ExecuteUbergraph_Ability_Artifact_SplatterGun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_SplatterGun.Ability_Artifact_SplatterGun_C.ExecuteUbergraph_Ability_Artifact_SplatterGun");

	UAbility_Artifact_SplatterGun_C_ExecuteUbergraph_Ability_Artifact_SplatterGun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
