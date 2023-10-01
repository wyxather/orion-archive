// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Boogeyman_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Boogeyman.Ability_Boogeyman_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Boogeyman_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Boogeyman.Ability_Boogeyman_C.OnActivated");

	UAbility_Boogeyman_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Boogeyman.Ability_Boogeyman_C.WeaponFired
// (BlueprintCallable, BlueprintEvent)

void UAbility_Boogeyman_C::WeaponFired()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Boogeyman.Ability_Boogeyman_C.WeaponFired");

	UAbility_Boogeyman_C_WeaponFired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Boogeyman.Ability_Boogeyman_C.OnCausedDeath_Event
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_Boogeyman_C::OnCausedDeath_Event(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Boogeyman.Ability_Boogeyman_C.OnCausedDeath_Event");

	UAbility_Boogeyman_C_OnCausedDeath_Event_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Boogeyman.Ability_Boogeyman_C.ExecuteUbergraph_Ability_Boogeyman
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Boogeyman_C::ExecuteUbergraph_Ability_Boogeyman(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Boogeyman.Ability_Boogeyman_C.ExecuteUbergraph_Ability_Boogeyman");

	UAbility_Boogeyman_C_ExecuteUbergraph_Ability_Boogeyman_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
