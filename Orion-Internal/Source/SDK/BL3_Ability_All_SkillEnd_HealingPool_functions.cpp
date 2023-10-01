// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_All_SkillEnd_HealingPool_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_All_SkillEnd_HealingPool.Ability_All_SkillEnd_HealingPool_C.AnointTriggerEffect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          TriggerEffect                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbility_All_SkillEnd_HealingPool_C::AnointTriggerEffect(bool* TriggerEffect, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_SkillEnd_HealingPool.Ability_All_SkillEnd_HealingPool_C.AnointTriggerEffect");

	UAbility_All_SkillEnd_HealingPool_C_AnointTriggerEffect_Params params;
	params.TriggerEffect = TriggerEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Ability_All_SkillEnd_HealingPool.Ability_All_SkillEnd_HealingPool_C.SpawnSplat
// (BlueprintCallable, BlueprintEvent)

void UAbility_All_SkillEnd_HealingPool_C::SpawnSplat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_SkillEnd_HealingPool.Ability_All_SkillEnd_HealingPool_C.SpawnSplat");

	UAbility_All_SkillEnd_HealingPool_C_SpawnSplat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_All_SkillEnd_HealingPool.Ability_All_SkillEnd_HealingPool_C.ExecuteUbergraph_Ability_All_SkillEnd_HealingPool
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_All_SkillEnd_HealingPool_C::ExecuteUbergraph_Ability_All_SkillEnd_HealingPool(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_All_SkillEnd_HealingPool.Ability_All_SkillEnd_HealingPool_C.ExecuteUbergraph_Ability_All_SkillEnd_HealingPool");

	UAbility_All_SkillEnd_HealingPool_C_ExecuteUbergraph_Ability_All_SkillEnd_HealingPool_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
