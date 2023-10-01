// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_SelfModulatingShields_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Operative_SelfModulatingShields.PassiveSkill_Operative_SelfModulatingShields_C.Remove Status Effect Modifier
// (Public, BlueprintCallable, BlueprintEvent)

void UPassiveSkill_Operative_SelfModulatingShields_C::Remove_Status_Effect_Modifier()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_SelfModulatingShields.PassiveSkill_Operative_SelfModulatingShields_C.Remove Status Effect Modifier");

	UPassiveSkill_Operative_SelfModulatingShields_C_Remove_Status_Effect_Modifier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_SelfModulatingShields.PassiveSkill_Operative_SelfModulatingShields_C.Add Status Effect Modifier
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPassiveSkill_Operative_SelfModulatingShields_C::Add_Status_Effect_Modifier()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_SelfModulatingShields.PassiveSkill_Operative_SelfModulatingShields_C.Add Status Effect Modifier");

	UPassiveSkill_Operative_SelfModulatingShields_C_Add_Status_Effect_Modifier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_SelfModulatingShields.PassiveSkill_Operative_SelfModulatingShields_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Operative_SelfModulatingShields_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_SelfModulatingShields.PassiveSkill_Operative_SelfModulatingShields_C.OnActivated");

	UPassiveSkill_Operative_SelfModulatingShields_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_SelfModulatingShields.PassiveSkill_Operative_SelfModulatingShields_C.Self-Modulating Shields OnTakeAnyDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageCauserComponent*  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FReceivedDamageDetails  Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UPassiveSkill_Operative_SelfModulatingShields_C::Self_Modulating_Shields_OnTakeAnyDamage(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_SelfModulatingShields.PassiveSkill_Operative_SelfModulatingShields_C.Self-Modulating Shields OnTakeAnyDamage");

	UPassiveSkill_Operative_SelfModulatingShields_C_Self_Modulating_Shields_OnTakeAnyDamage_Params params;
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


// Function PassiveSkill_Operative_SelfModulatingShields.PassiveSkill_Operative_SelfModulatingShields_C.ExecuteUbergraph_PassiveSkill_Operative_SelfModulatingShields
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Operative_SelfModulatingShields_C::ExecuteUbergraph_PassiveSkill_Operative_SelfModulatingShields(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_SelfModulatingShields.PassiveSkill_Operative_SelfModulatingShields_C.ExecuteUbergraph_PassiveSkill_Operative_SelfModulatingShields");

	UPassiveSkill_Operative_SelfModulatingShields_C_ExecuteUbergraph_PassiveSkill_Operative_SelfModulatingShields_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
