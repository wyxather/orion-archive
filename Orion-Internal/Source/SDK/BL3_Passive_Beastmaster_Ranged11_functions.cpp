// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_Ranged11_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_Ranged11.Passive_Beastmaster_Ranged11_C.NewFunction_1
// (Public, BlueprintCallable, BlueprintEvent)

void UPassive_Beastmaster_Ranged11_C::NewFunction_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged11.Passive_Beastmaster_Ranged11_C.NewFunction_1");

	UPassive_Beastmaster_Ranged11_C_NewFunction_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Ranged11.Passive_Beastmaster_Ranged11_C.CalculateAbilityState
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EGbxAbilityState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGbxAbilityState UPassive_Beastmaster_Ranged11_C::CalculateAbilityState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged11.Passive_Beastmaster_Ranged11_C.CalculateAbilityState");

	UPassive_Beastmaster_Ranged11_C_CalculateAbilityState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Passive_Beastmaster_Ranged11.Passive_Beastmaster_Ranged11_C.RandomChanceByGrade
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPassive_Beastmaster_Ranged11_C::RandomChanceByGrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged11.Passive_Beastmaster_Ranged11_C.RandomChanceByGrade");

	UPassive_Beastmaster_Ranged11_C_RandomChanceByGrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Passive_Beastmaster_Ranged11.Passive_Beastmaster_Ranged11_C.OnResumed
// (Event, Protected, BlueprintEvent)

void UPassive_Beastmaster_Ranged11_C::OnResumed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged11.Passive_Beastmaster_Ranged11_C.OnResumed");

	UPassive_Beastmaster_Ranged11_C_OnResumed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Ranged11.Passive_Beastmaster_Ranged11_C.OnCausedDamage_Ranged11
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UPassive_Beastmaster_Ranged11_C::OnCausedDamage_Ranged11(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged11.Passive_Beastmaster_Ranged11_C.OnCausedDamage_Ranged11");

	UPassive_Beastmaster_Ranged11_C_OnCausedDamage_Ranged11_Params params;
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


// Function Passive_Beastmaster_Ranged11.Passive_Beastmaster_Ranged11_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_Beastmaster_Ranged11_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged11.Passive_Beastmaster_Ranged11_C.OnActivated");

	UPassive_Beastmaster_Ranged11_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Ranged11.Passive_Beastmaster_Ranged11_C.ExecuteUbergraph_Passive_Beastmaster_Ranged11
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_Ranged11_C::ExecuteUbergraph_Passive_Beastmaster_Ranged11(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Ranged11.Passive_Beastmaster_Ranged11_C.ExecuteUbergraph_Passive_Beastmaster_Ranged11");

	UPassive_Beastmaster_Ranged11_C_ExecuteUbergraph_Passive_Beastmaster_Ranged11_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
