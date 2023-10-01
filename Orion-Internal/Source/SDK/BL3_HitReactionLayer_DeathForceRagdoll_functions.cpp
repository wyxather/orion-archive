// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_HitReactionLayer_DeathForceRagdoll_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HitReactionLayer_DeathForceRagdoll.HitReactionLayer_DeathForceRagdoll_C.CalcHealthPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakDamageComponent*     Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Damage_Amount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage_Percent                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHitReactionLayer_DeathForceRagdoll_C::CalcHealthPercent(class UOakDamageComponent* Receiver, float Damage_Amount, float* Damage_Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitReactionLayer_DeathForceRagdoll.HitReactionLayer_DeathForceRagdoll_C.CalcHealthPercent");

	UHitReactionLayer_DeathForceRagdoll_C_CalcHealthPercent_Params params;
	params.Receiver = Receiver;
	params.Damage_Amount = Damage_Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Damage_Percent != nullptr)
		*Damage_Percent = params.Damage_Percent;
}


// Function HitReactionLayer_DeathForceRagdoll.HitReactionLayer_DeathForceRagdoll_C.EvaluateTag
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UDamageComponent**       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UDamageCauserComponent** Causer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float*                         DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType**         DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource**          DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UHitRegionData**         HitRegion                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UHitReactionTag**        PreviousTag                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UHitReactionTag*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHitReactionTag* UHitReactionLayer_DeathForceRagdoll_C::EvaluateTag(class UDamageComponent** Receiver, class UDamageCauserComponent** Causer, float* DamageAmount, class UGbxDamageType** DamageType, class UDamageSource** DamageSource, class UHitRegionData** HitRegion, float* Force, class UHitReactionTag** PreviousTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitReactionLayer_DeathForceRagdoll.HitReactionLayer_DeathForceRagdoll_C.EvaluateTag");

	UHitReactionLayer_DeathForceRagdoll_C_EvaluateTag_Params params;
	params.Receiver = Receiver;
	params.Causer = Causer;
	params.DamageAmount = DamageAmount;
	params.DamageType = DamageType;
	params.DamageSource = DamageSource;
	params.HitRegion = HitRegion;
	params.Force = Force;
	params.PreviousTag = PreviousTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
