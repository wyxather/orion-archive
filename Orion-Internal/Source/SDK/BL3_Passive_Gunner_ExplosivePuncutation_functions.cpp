// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Gunner_ExplosivePuncutation_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Gunner_ExplosivePuncutation.Passive_Gunner_ExplosivePuncutation_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_Gunner_ExplosivePuncutation_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_ExplosivePuncutation.Passive_Gunner_ExplosivePuncutation_C.OnActivated");

	UPassive_Gunner_ExplosivePuncutation_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_ExplosivePuncutation.Passive_Gunner_ExplosivePuncutation_C.CausedDamage_ExplosivePunctuation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UPassive_Gunner_ExplosivePuncutation_C::CausedDamage_ExplosivePunctuation(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_ExplosivePuncutation.Passive_Gunner_ExplosivePuncutation_C.CausedDamage_ExplosivePunctuation");

	UPassive_Gunner_ExplosivePuncutation_C_CausedDamage_ExplosivePunctuation_Params params;
	params.DamageInstigator = DamageInstigator;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.DamageSource = DamageSource;
	params.DamagedActor = DamagedActor;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_ExplosivePuncutation.Passive_Gunner_ExplosivePuncutation_C.ExecuteUbergraph_Passive_Gunner_ExplosivePuncutation
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Gunner_ExplosivePuncutation_C::ExecuteUbergraph_Passive_Gunner_ExplosivePuncutation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_ExplosivePuncutation.Passive_Gunner_ExplosivePuncutation_C.ExecuteUbergraph_Passive_Gunner_ExplosivePuncutation");

	UPassive_Gunner_ExplosivePuncutation_C_ExecuteUbergraph_Passive_Gunner_ExplosivePuncutation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
