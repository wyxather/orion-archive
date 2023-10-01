// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Weapon_Fearmonger_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Weapon_Fearmonger.Ability_Weapon_Fearmonger_C.OnRegistered
// (Event, Protected, BlueprintEvent)

void UAbility_Weapon_Fearmonger_C::OnRegistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Weapon_Fearmonger.Ability_Weapon_Fearmonger_C.OnRegistered");

	UAbility_Weapon_Fearmonger_C_OnRegistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Weapon_Fearmonger.Ability_Weapon_Fearmonger_C.TerrorUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameResourcePoolReference ResourcePool                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UAbility_Weapon_Fearmonger_C::TerrorUpdated(const struct FGameResourcePoolReference& ResourcePool)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Weapon_Fearmonger.Ability_Weapon_Fearmonger_C.TerrorUpdated");

	UAbility_Weapon_Fearmonger_C_TerrorUpdated_Params params;
	params.ResourcePool = ResourcePool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Weapon_Fearmonger.Ability_Weapon_Fearmonger_C.ExecuteUbergraph_Ability_Weapon_Fearmonger
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Weapon_Fearmonger_C::ExecuteUbergraph_Ability_Weapon_Fearmonger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Weapon_Fearmonger.Ability_Weapon_Fearmonger_C.ExecuteUbergraph_Ability_Weapon_Fearmonger");

	UAbility_Weapon_Fearmonger_C_ExecuteUbergraph_Ability_Weapon_Fearmonger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
