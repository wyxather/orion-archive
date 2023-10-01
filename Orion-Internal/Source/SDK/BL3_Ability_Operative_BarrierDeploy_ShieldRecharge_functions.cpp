// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Operative_BarrierDeploy_ShieldRecharge_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Operative_BarrierDeploy_ShieldRecharge.Ability_Operative_BarrierDeploy_ShieldRecharge_C.AnointTriggerEffect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          TriggerEffect                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbility_Operative_BarrierDeploy_ShieldRecharge_C::AnointTriggerEffect(bool* TriggerEffect, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Operative_BarrierDeploy_ShieldRecharge.Ability_Operative_BarrierDeploy_ShieldRecharge_C.AnointTriggerEffect");

	UAbility_Operative_BarrierDeploy_ShieldRecharge_C_AnointTriggerEffect_Params params;
	params.TriggerEffect = TriggerEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
