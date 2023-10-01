// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Siren_ClassMod_Hib_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OakAbility_Siren_ClassMod_Hib.OakAbility_Siren_ClassMod_Hib_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UOakAbility_Siren_ClassMod_Hib_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Hib.OakAbility_Siren_ClassMod_Hib_C.OnActivated");

	UOakAbility_Siren_ClassMod_Hib_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakAbility_Siren_ClassMod_Hib.OakAbility_Siren_ClassMod_Hib_C.HibiscusClassMod_OnTakeAnyDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageCauserComponent*  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FReceivedDamageDetails  Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UOakAbility_Siren_ClassMod_Hib_C::HibiscusClassMod_OnTakeAnyDamage(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Hib.OakAbility_Siren_ClassMod_Hib_C.HibiscusClassMod_OnTakeAnyDamage");

	UOakAbility_Siren_ClassMod_Hib_C_HibiscusClassMod_OnTakeAnyDamage_Params params;
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


// Function OakAbility_Siren_ClassMod_Hib.OakAbility_Siren_ClassMod_Hib_C.ExecuteUbergraph_OakAbility_Siren_ClassMod_Hib
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakAbility_Siren_ClassMod_Hib_C::ExecuteUbergraph_OakAbility_Siren_ClassMod_Hib(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakAbility_Siren_ClassMod_Hib.OakAbility_Siren_ClassMod_Hib_C.ExecuteUbergraph_OakAbility_Siren_ClassMod_Hib");

	UOakAbility_Siren_ClassMod_Hib_C_ExecuteUbergraph_OakAbility_Siren_ClassMod_Hib_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
