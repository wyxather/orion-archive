// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Beast_RakkSlag_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Beast_RakkSlag.Ability_Beast_RakkSlag_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Beast_RakkSlag_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Beast_RakkSlag.Ability_Beast_RakkSlag_C.OnActivated");

	UAbility_Beast_RakkSlag_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Beast_RakkSlag.Ability_Beast_RakkSlag_C.RakkDamageDealt
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedEnemy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Beast_RakkSlag_C::RakkDamageDealt(class AActor* DamagedEnemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Beast_RakkSlag.Ability_Beast_RakkSlag_C.RakkDamageDealt");

	UAbility_Beast_RakkSlag_C_RakkDamageDealt_Params params;
	params.DamagedEnemy = DamagedEnemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Beast_RakkSlag.Ability_Beast_RakkSlag_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Beast_RakkSlag_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Beast_RakkSlag.Ability_Beast_RakkSlag_C.OnDeactivated");

	UAbility_Beast_RakkSlag_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Beast_RakkSlag.Ability_Beast_RakkSlag_C.ExecuteUbergraph_Ability_Beast_RakkSlag
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Beast_RakkSlag_C::ExecuteUbergraph_Ability_Beast_RakkSlag(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Beast_RakkSlag.Ability_Beast_RakkSlag_C.ExecuteUbergraph_Ability_Beast_RakkSlag");

	UAbility_Beast_RakkSlag_C_ExecuteUbergraph_Ability_Beast_RakkSlag_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
