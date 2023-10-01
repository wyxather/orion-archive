// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Siren_DLCSkill_18_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Siren_DLCSkill_18.Passive_Siren_DLCSkill_17_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_Siren_DLCSkill_17_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Siren_DLCSkill_18.Passive_Siren_DLCSkill_17_C.OnActivated");

	UPassive_Siren_DLCSkill_17_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Siren_DLCSkill_18.Passive_Siren_DLCSkill_17_C.DLCSkill17_OnResourcePoolDepleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameResourcePoolReference ResourcePool                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UPassive_Siren_DLCSkill_17_C::DLCSkill17_OnResourcePoolDepleted(const struct FGameResourcePoolReference& ResourcePool)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Siren_DLCSkill_18.Passive_Siren_DLCSkill_17_C.DLCSkill17_OnResourcePoolDepleted");

	UPassive_Siren_DLCSkill_17_C_DLCSkill17_OnResourcePoolDepleted_Params params;
	params.ResourcePool = ResourcePool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Siren_DLCSkill_18.Passive_Siren_DLCSkill_17_C.DLCSkill17_OnTakeAnyDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageCauserComponent*  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FReceivedDamageDetails  Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UPassive_Siren_DLCSkill_17_C::DLCSkill17_OnTakeAnyDamage(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Siren_DLCSkill_18.Passive_Siren_DLCSkill_17_C.DLCSkill17_OnTakeAnyDamage");

	UPassive_Siren_DLCSkill_17_C_DLCSkill17_OnTakeAnyDamage_Params params;
	params.DamageReceiver = DamageReceiver;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.DamageSource = DamageSource;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Siren_DLCSkill_18.Passive_Siren_DLCSkill_17_C.ExecuteUbergraph_Passive_Siren_DLCSkill_18
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Siren_DLCSkill_17_C::ExecuteUbergraph_Passive_Siren_DLCSkill_18(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Siren_DLCSkill_18.Passive_Siren_DLCSkill_17_C.ExecuteUbergraph_Passive_Siren_DLCSkill_18");

	UPassive_Siren_DLCSkill_17_C_ExecuteUbergraph_Passive_Siren_DLCSkill_18_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
