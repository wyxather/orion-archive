// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_CoolerHeads_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Operative_CoolerHeads.PassiveSkill_Operative_CoolerHeads_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Operative_CoolerHeads_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_CoolerHeads.PassiveSkill_Operative_CoolerHeads_C.OnActivated");

	UPassiveSkill_Operative_CoolerHeads_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_CoolerHeads.PassiveSkill_Operative_CoolerHeads_C.Experimental Bullets on Critial Hit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UPassiveSkill_Operative_CoolerHeads_C::Experimental_Bullets_on_Critial_Hit(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_CoolerHeads.PassiveSkill_Operative_CoolerHeads_C.Experimental Bullets on Critial Hit");

	UPassiveSkill_Operative_CoolerHeads_C_Experimental_Bullets_on_Critial_Hit_Params params;
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


// Function PassiveSkill_Operative_CoolerHeads.PassiveSkill_Operative_CoolerHeads_C.ExecuteUbergraph_PassiveSkill_Operative_CoolerHeads
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Operative_CoolerHeads_C::ExecuteUbergraph_PassiveSkill_Operative_CoolerHeads(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_CoolerHeads.PassiveSkill_Operative_CoolerHeads_C.ExecuteUbergraph_PassiveSkill_Operative_CoolerHeads");

	UPassiveSkill_Operative_CoolerHeads_C_ExecuteUbergraph_PassiveSkill_Operative_CoolerHeads_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
