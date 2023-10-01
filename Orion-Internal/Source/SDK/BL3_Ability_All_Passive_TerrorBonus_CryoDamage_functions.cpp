// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_All_Passive_TerrorBonus_CryoDamage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_All_Passive_TerrorBonus_CryoDamage.Ability_All_Passive_TerrorBonus_CryoDamage_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_All_Passive_TerrorBonus_CryoDamage_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_Passive_TerrorBonus_CryoDamage.Ability_All_Passive_TerrorBonus_CryoDamage_C.OnActivated");

	UAbility_All_Passive_TerrorBonus_CryoDamage_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_All_Passive_TerrorBonus_CryoDamage.Ability_All_Passive_TerrorBonus_CryoDamage_C.CheckTerror
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameResourcePoolReference ResourcePool                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UAbility_All_Passive_TerrorBonus_CryoDamage_C::CheckTerror(const struct FGameResourcePoolReference& ResourcePool)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_Passive_TerrorBonus_CryoDamage.Ability_All_Passive_TerrorBonus_CryoDamage_C.CheckTerror");

	UAbility_All_Passive_TerrorBonus_CryoDamage_C_CheckTerror_Params params;
	params.ResourcePool = ResourcePool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_All_Passive_TerrorBonus_CryoDamage.Ability_All_Passive_TerrorBonus_CryoDamage_C.TerrorDepleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameResourcePoolReference ResourcePool                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UAbility_All_Passive_TerrorBonus_CryoDamage_C::TerrorDepleted(const struct FGameResourcePoolReference& ResourcePool)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_Passive_TerrorBonus_CryoDamage.Ability_All_Passive_TerrorBonus_CryoDamage_C.TerrorDepleted");

	UAbility_All_Passive_TerrorBonus_CryoDamage_C_TerrorDepleted_Params params;
	params.ResourcePool = ResourcePool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_All_Passive_TerrorBonus_CryoDamage.Ability_All_Passive_TerrorBonus_CryoDamage_C.ExecuteUbergraph_Ability_All_Passive_TerrorBonus_CryoDamage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_All_Passive_TerrorBonus_CryoDamage_C::ExecuteUbergraph_Ability_All_Passive_TerrorBonus_CryoDamage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_Passive_TerrorBonus_CryoDamage.Ability_All_Passive_TerrorBonus_CryoDamage_C.ExecuteUbergraph_Ability_All_Passive_TerrorBonus_CryoDamage");

	UAbility_All_Passive_TerrorBonus_CryoDamage_C_ExecuteUbergraph_Ability_All_Passive_TerrorBonus_CryoDamage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
