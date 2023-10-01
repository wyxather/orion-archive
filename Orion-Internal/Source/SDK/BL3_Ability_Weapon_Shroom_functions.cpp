// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Weapon_Shroom_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Weapon_Shroom.Ability_Weapon_Shroom_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Weapon_Shroom_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Weapon_Shroom.Ability_Weapon_Shroom_C.OnActivated");

	UAbility_Weapon_Shroom_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Weapon_Shroom.Ability_Weapon_Shroom_C.KilledEvilTink
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_Weapon_Shroom_C::KilledEvilTink(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Weapon_Shroom.Ability_Weapon_Shroom_C.KilledEvilTink");

	UAbility_Weapon_Shroom_C_KilledEvilTink_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Weapon_Shroom.Ability_Weapon_Shroom_C.ExecuteUbergraph_Ability_Weapon_Shroom
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Weapon_Shroom_C::ExecuteUbergraph_Ability_Weapon_Shroom(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Weapon_Shroom.Ability_Weapon_Shroom_C.ExecuteUbergraph_Ability_Weapon_Shroom");

	UAbility_Weapon_Shroom_C_ExecuteUbergraph_Ability_Weapon_Shroom_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
