// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_BlindBandit_Epic_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_BlindBandit_Epic.Ability_BlindBandit_Epic_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_BlindBandit_Epic_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_BlindBandit_Epic.Ability_BlindBandit_Epic_C.OnActivated");

	UAbility_BlindBandit_Epic_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_BlindBandit_Epic.Ability_BlindBandit_Epic_C.OnCausedDeath_Event
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_BlindBandit_Epic_C::OnCausedDeath_Event(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_BlindBandit_Epic.Ability_BlindBandit_Epic_C.OnCausedDeath_Event");

	UAbility_BlindBandit_Epic_C_OnCausedDeath_Event_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_BlindBandit_Epic.Ability_BlindBandit_Epic_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_BlindBandit_Epic_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_BlindBandit_Epic.Ability_BlindBandit_Epic_C.OnDeactivated");

	UAbility_BlindBandit_Epic_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_BlindBandit_Epic.Ability_BlindBandit_Epic_C.ExecuteUbergraph_Ability_BlindBandit_Epic
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_BlindBandit_Epic_C::ExecuteUbergraph_Ability_BlindBandit_Epic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_BlindBandit_Epic.Ability_BlindBandit_Epic_C.ExecuteUbergraph_Ability_BlindBandit_Epic");

	UAbility_BlindBandit_Epic_C_ExecuteUbergraph_Ability_BlindBandit_Epic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
