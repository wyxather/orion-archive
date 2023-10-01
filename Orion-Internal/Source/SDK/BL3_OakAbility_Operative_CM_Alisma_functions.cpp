// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Operative_CM_Alisma_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OakAbility_Operative_CM_Alisma.OakAbility_Operative_CM_Alisma_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UOakAbility_Operative_CM_Alisma_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Operative_CM_Alisma.OakAbility_Operative_CM_Alisma_C.OnActivated");

	UOakAbility_Operative_CM_Alisma_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Operative_CM_Alisma.OakAbility_Operative_CM_Alisma_C.CausedDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOakAbility_Operative_CM_Alisma_C::CausedDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Operative_CM_Alisma.OakAbility_Operative_CM_Alisma_C.CausedDamage");

	UOakAbility_Operative_CM_Alisma_C_CausedDamage_Params params;
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


// Function OakAbility_Operative_CM_Alisma.OakAbility_Operative_CM_Alisma_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UOakAbility_Operative_CM_Alisma_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Operative_CM_Alisma.OakAbility_Operative_CM_Alisma_C.OnDeactivated");

	UOakAbility_Operative_CM_Alisma_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Operative_CM_Alisma.OakAbility_Operative_CM_Alisma_C.ExecuteUbergraph_OakAbility_Operative_CM_Alisma
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Operative_CM_Alisma_C::ExecuteUbergraph_OakAbility_Operative_CM_Alisma(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Operative_CM_Alisma.OakAbility_Operative_CM_Alisma_C.ExecuteUbergraph_OakAbility_Operative_CM_Alisma");

	UOakAbility_Operative_CM_Alisma_C_ExecuteUbergraph_OakAbility_Operative_CM_Alisma_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
