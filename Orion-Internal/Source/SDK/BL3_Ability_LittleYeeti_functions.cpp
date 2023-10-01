// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_LittleYeeti_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_LittleYeeti.Ability_LittleYeeti_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_LittleYeeti_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_LittleYeeti.Ability_LittleYeeti_C.OnActivated");

	UAbility_LittleYeeti_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_LittleYeeti.Ability_LittleYeeti_C.CausedDeath
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_LittleYeeti_C::CausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_LittleYeeti.Ability_LittleYeeti_C.CausedDeath");

	UAbility_LittleYeeti_C_CausedDeath_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_LittleYeeti.Ability_LittleYeeti_C.ExecuteUbergraph_Ability_LittleYeeti
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_LittleYeeti_C::ExecuteUbergraph_Ability_LittleYeeti(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_LittleYeeti.Ability_LittleYeeti_C.ExecuteUbergraph_Ability_LittleYeeti");

	UAbility_LittleYeeti_C_ExecuteUbergraph_Ability_LittleYeeti_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
