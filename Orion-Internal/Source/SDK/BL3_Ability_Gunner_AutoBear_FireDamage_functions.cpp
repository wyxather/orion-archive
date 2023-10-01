// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Gunner_AutoBear_FireDamage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Gunner_AutoBear_FireDamage.Ability_Gunner_AutoBear_FireDamage_C.AnointAutoBearEnded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          HasValidTarget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 ChargeTarget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Gunner_AutoBear_FireDamage_C::AnointAutoBearEnded(bool* HasValidTarget, class AActor** ChargeTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Gunner_AutoBear_FireDamage.Ability_Gunner_AutoBear_FireDamage_C.AnointAutoBearEnded");

	UAbility_Gunner_AutoBear_FireDamage_C_AnointAutoBearEnded_Params params;
	params.HasValidTarget = HasValidTarget;
	params.ChargeTarget = ChargeTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Gunner_AutoBear_FireDamage.Ability_Gunner_AutoBear_FireDamage_C.ExecuteUbergraph_Ability_Gunner_AutoBear_FireDamage
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Gunner_AutoBear_FireDamage_C::ExecuteUbergraph_Ability_Gunner_AutoBear_FireDamage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Gunner_AutoBear_FireDamage.Ability_Gunner_AutoBear_FireDamage_C.ExecuteUbergraph_Ability_Gunner_AutoBear_FireDamage");

	UAbility_Gunner_AutoBear_FireDamage_C_ExecuteUbergraph_Ability_Gunner_AutoBear_FireDamage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
