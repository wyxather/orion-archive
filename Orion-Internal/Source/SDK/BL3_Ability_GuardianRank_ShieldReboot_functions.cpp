// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_GuardianRank_ShieldReboot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_GuardianRank_ShieldReboot.Ability_GuardianRank_ShieldReboot_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_GuardianRank_ShieldReboot_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_GuardianRank_ShieldReboot.Ability_GuardianRank_ShieldReboot_C.OnActivated");

	UAbility_GuardianRank_ShieldReboot_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_GuardianRank_ShieldReboot.Ability_GuardianRank_ShieldReboot_C.CausedDeath
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_GuardianRank_ShieldReboot_C::CausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_GuardianRank_ShieldReboot.Ability_GuardianRank_ShieldReboot_C.CausedDeath");

	UAbility_GuardianRank_ShieldReboot_C_CausedDeath_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_GuardianRank_ShieldReboot.Ability_GuardianRank_ShieldReboot_C.ExecuteUbergraph_Ability_GuardianRank_ShieldReboot
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_GuardianRank_ShieldReboot_C::ExecuteUbergraph_Ability_GuardianRank_ShieldReboot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_GuardianRank_ShieldReboot.Ability_GuardianRank_ShieldReboot_C.ExecuteUbergraph_Ability_GuardianRank_ShieldReboot");

	UAbility_GuardianRank_ShieldReboot_C_ExecuteUbergraph_Ability_GuardianRank_ShieldReboot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
