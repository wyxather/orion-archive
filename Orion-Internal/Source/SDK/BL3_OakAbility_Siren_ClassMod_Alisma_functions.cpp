// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Siren_ClassMod_Alisma_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OakAbility_Siren_ClassMod_Alisma.OakAbility_Siren_ClassMod_Alisma_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UOakAbility_Siren_ClassMod_Alisma_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Alisma.OakAbility_Siren_ClassMod_Alisma_C.OnActivated");

	UOakAbility_Siren_ClassMod_Alisma_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Siren_ClassMod_Alisma.OakAbility_Siren_ClassMod_Alisma_C.Alisma_OnDealtAnyDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOakAbility_Siren_ClassMod_Alisma_C::Alisma_OnDealtAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Alisma.OakAbility_Siren_ClassMod_Alisma_C.Alisma_OnDealtAnyDamage");

	UOakAbility_Siren_ClassMod_Alisma_C_Alisma_OnDealtAnyDamage_Params params;
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


// Function OakAbility_Siren_ClassMod_Alisma.OakAbility_Siren_ClassMod_Alisma_C.TimerReset
// (BlueprintCallable, BlueprintEvent)

void UOakAbility_Siren_ClassMod_Alisma_C::TimerReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Alisma.OakAbility_Siren_ClassMod_Alisma_C.TimerReset");

	UOakAbility_Siren_ClassMod_Alisma_C_TimerReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Siren_ClassMod_Alisma.OakAbility_Siren_ClassMod_Alisma_C.OnResumed
// (Event, Protected, BlueprintEvent)

void UOakAbility_Siren_ClassMod_Alisma_C::OnResumed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Alisma.OakAbility_Siren_ClassMod_Alisma_C.OnResumed");

	UOakAbility_Siren_ClassMod_Alisma_C_OnResumed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Siren_ClassMod_Alisma.OakAbility_Siren_ClassMod_Alisma_C.ExecuteUbergraph_OakAbility_Siren_ClassMod_Alisma
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Siren_ClassMod_Alisma_C::ExecuteUbergraph_OakAbility_Siren_ClassMod_Alisma(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Alisma.OakAbility_Siren_ClassMod_Alisma_C.ExecuteUbergraph_OakAbility_Siren_ClassMod_Alisma");

	UOakAbility_Siren_ClassMod_Alisma_C_ExecuteUbergraph_OakAbility_Siren_ClassMod_Alisma_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
