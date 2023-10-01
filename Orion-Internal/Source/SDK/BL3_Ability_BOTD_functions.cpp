// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_BOTD_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_BOTD.Ability_BOTD_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_BOTD_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_BOTD.Ability_BOTD_C.OnActivated");

	UAbility_BOTD_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_BOTD.Ability_BOTD_C.OnCausedDeath_Event
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_BOTD_C::OnCausedDeath_Event(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_BOTD.Ability_BOTD_C.OnCausedDeath_Event");

	UAbility_BOTD_C_OnCausedDeath_Event_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_BOTD.Ability_BOTD_C.ExecuteUbergraph_Ability_BOTD
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_BOTD_C::ExecuteUbergraph_Ability_BOTD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_BOTD.Ability_BOTD_C.ExecuteUbergraph_Ability_BOTD");

	UAbility_BOTD_C_ExecuteUbergraph_Ability_BOTD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
