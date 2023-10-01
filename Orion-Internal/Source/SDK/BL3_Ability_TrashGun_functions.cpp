// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_TrashGun_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_TrashGun.Ability_TrashGun_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_TrashGun_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_TrashGun.Ability_TrashGun_C.OnActivated");

	UAbility_TrashGun_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_TrashGun.Ability_TrashGun_C.RandomRandomness
// (BlueprintCallable, BlueprintEvent)

void UAbility_TrashGun_C::RandomRandomness()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_TrashGun.Ability_TrashGun_C.RandomRandomness");

	UAbility_TrashGun_C_RandomRandomness_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_TrashGun.Ability_TrashGun_C.KillCDM
// (BlueprintCallable, BlueprintEvent)

void UAbility_TrashGun_C::KillCDM()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_TrashGun.Ability_TrashGun_C.KillCDM");

	UAbility_TrashGun_C_KillCDM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_TrashGun.Ability_TrashGun_C.ExecuteUbergraph_Ability_TrashGun
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_TrashGun_C::ExecuteUbergraph_Ability_TrashGun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_TrashGun.Ability_TrashGun_C.ExecuteUbergraph_Ability_TrashGun");

	UAbility_TrashGun_C_ExecuteUbergraph_Ability_TrashGun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
