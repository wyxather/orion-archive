// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_HYP_Shield_RestoreAmmo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_HYP_Shield_RestoreAmmo.BP_HYP_Shield_RestoreAmmo_C.OnShieldCreated
// (Event, Protected, BlueprintEvent)

void UBP_HYP_Shield_RestoreAmmo_C::OnShieldCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HYP_Shield_RestoreAmmo.BP_HYP_Shield_RestoreAmmo_C.OnShieldCreated");

	UBP_HYP_Shield_RestoreAmmo_C_OnShieldCreated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HYP_Shield_RestoreAmmo.BP_HYP_Shield_RestoreAmmo_C.OnTakeWeaponShieldDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ShieldDamage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageCauserComponent*  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_HYP_Shield_RestoreAmmo_C::OnTakeWeaponShieldDamage(class UDamageComponent* DamageReceiver, float ShieldDamage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HYP_Shield_RestoreAmmo.BP_HYP_Shield_RestoreAmmo_C.OnTakeWeaponShieldDamage");

	UBP_HYP_Shield_RestoreAmmo_C_OnTakeWeaponShieldDamage_Params params;
	params.DamageReceiver = DamageReceiver;
	params.ShieldDamage = ShieldDamage;
	params.DamageType = DamageType;
	params.DamageSource = DamageSource;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HYP_Shield_RestoreAmmo.BP_HYP_Shield_RestoreAmmo_C.ExecuteUbergraph_BP_HYP_Shield_RestoreAmmo
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HYP_Shield_RestoreAmmo_C::ExecuteUbergraph_BP_HYP_Shield_RestoreAmmo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HYP_Shield_RestoreAmmo.BP_HYP_Shield_RestoreAmmo_C.ExecuteUbergraph_BP_HYP_Shield_RestoreAmmo");

	UBP_HYP_Shield_RestoreAmmo_C_ExecuteUbergraph_BP_HYP_Shield_RestoreAmmo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
