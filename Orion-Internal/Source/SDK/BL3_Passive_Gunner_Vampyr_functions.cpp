// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Gunner_Vampyr_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Gunner_Vampyr.Passive_Gunner_Vampyr_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UPassive_Gunner_Vampyr_C::CustomEvent_1(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_Vampyr.Passive_Gunner_Vampyr_C.CustomEvent_1");

	UPassive_Gunner_Vampyr_C_CustomEvent_1_Params params;
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


// Function Passive_Gunner_Vampyr.Passive_Gunner_Vampyr_C.HealDamageCauser
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentHealth                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxHealth                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Scalar                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Gunner_Vampyr_C::HealDamageCauser(class AActor* DamageCauser, float CurrentHealth, float MaxHealth, class UClass* DamageType, float Scalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_Vampyr.Passive_Gunner_Vampyr_C.HealDamageCauser");

	UPassive_Gunner_Vampyr_C_HealDamageCauser_Params params;
	params.DamageCauser = DamageCauser;
	params.CurrentHealth = CurrentHealth;
	params.MaxHealth = MaxHealth;
	params.DamageType = DamageType;
	params.Scalar = Scalar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_Vampyr.Passive_Gunner_Vampyr_C.Vampyr_IronBearReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter_IronBear*  IronBear                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Gunner_Vampyr_C::Vampyr_IronBearReady(class AOakCharacter_IronBear* IronBear)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_Vampyr.Passive_Gunner_Vampyr_C.Vampyr_IronBearReady");

	UPassive_Gunner_Vampyr_C_Vampyr_IronBearReady_Params params;
	params.IronBear = IronBear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_Vampyr.Passive_Gunner_Vampyr_C.Vampyr_OnCausedAnyDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UPassive_Gunner_Vampyr_C::Vampyr_OnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_Vampyr.Passive_Gunner_Vampyr_C.Vampyr_OnCausedAnyDamage");

	UPassive_Gunner_Vampyr_C_Vampyr_OnCausedAnyDamage_Params params;
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


// Function Passive_Gunner_Vampyr.Passive_Gunner_Vampyr_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_Gunner_Vampyr_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_Vampyr.Passive_Gunner_Vampyr_C.OnActivated");

	UPassive_Gunner_Vampyr_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_Vampyr.Passive_Gunner_Vampyr_C.ExecuteUbergraph_Passive_Gunner_Vampyr
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Gunner_Vampyr_C::ExecuteUbergraph_Passive_Gunner_Vampyr(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_Vampyr.Passive_Gunner_Vampyr_C.ExecuteUbergraph_Passive_Gunner_Vampyr");

	UPassive_Gunner_Vampyr_C_ExecuteUbergraph_Passive_Gunner_Vampyr_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
