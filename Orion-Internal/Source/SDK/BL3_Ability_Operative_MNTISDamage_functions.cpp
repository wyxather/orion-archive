// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Operative_MNTISDamage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Operative_MNTISDamage.Ability_Operative_MNTISDamage_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Operative_MNTISDamage_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Operative_MNTISDamage.Ability_Operative_MNTISDamage_C.OnActivated");

	UAbility_Operative_MNTISDamage_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Operative_MNTISDamage.Ability_Operative_MNTISDamage_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Operative_MNTISDamage_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Operative_MNTISDamage.Ability_Operative_MNTISDamage_C.OnDeactivated");

	UAbility_Operative_MNTISDamage_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Operative_MNTISDamage.Ability_Operative_MNTISDamage_C.ExecuteUbergraph_Ability_Operative_MNTISDamage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Operative_MNTISDamage_C::ExecuteUbergraph_Ability_Operative_MNTISDamage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Operative_MNTISDamage.Ability_Operative_MNTISDamage_C.ExecuteUbergraph_Ability_Operative_MNTISDamage");

	UAbility_Operative_MNTISDamage_C_ExecuteUbergraph_Ability_Operative_MNTISDamage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
