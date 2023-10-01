// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_GuardianRank_Harmageddon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_GuardianRank_Harmageddon.Ability_GuardianRank_Harmageddon_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_GuardianRank_Harmageddon_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_GuardianRank_Harmageddon.Ability_GuardianRank_Harmageddon_C.OnActivated");

	UAbility_GuardianRank_Harmageddon_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_GuardianRank_Harmageddon.Ability_GuardianRank_Harmageddon_C.ApplyDebuffOnCausedElementalEffect
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FStatusEffectSpec       Spec                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_GuardianRank_Harmageddon_C::ApplyDebuffOnCausedElementalEffect(class AActor* Target, const struct FStatusEffectSpec& Spec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_GuardianRank_Harmageddon.Ability_GuardianRank_Harmageddon_C.ApplyDebuffOnCausedElementalEffect");

	UAbility_GuardianRank_Harmageddon_C_ApplyDebuffOnCausedElementalEffect_Params params;
	params.Target = Target;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_GuardianRank_Harmageddon.Ability_GuardianRank_Harmageddon_C.ExecuteUbergraph_Ability_GuardianRank_Harmageddon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_GuardianRank_Harmageddon_C::ExecuteUbergraph_Ability_GuardianRank_Harmageddon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_GuardianRank_Harmageddon.Ability_GuardianRank_Harmageddon_C.ExecuteUbergraph_Ability_GuardianRank_Harmageddon");

	UAbility_GuardianRank_Harmageddon_C_ExecuteUbergraph_Ability_GuardianRank_Harmageddon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
