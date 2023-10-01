// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_HYP_Shield_AmpDamage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_HYP_Shield_AmpDamage.BP_HYP_Shield_AmpDamage_C.OnShieldCreated
// (Event, Protected, BlueprintEvent)

void UBP_HYP_Shield_AmpDamage_C::OnShieldCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HYP_Shield_AmpDamage.BP_HYP_Shield_AmpDamage_C.OnShieldCreated");

	UBP_HYP_Shield_AmpDamage_C_OnShieldCreated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HYP_Shield_AmpDamage.BP_HYP_Shield_AmpDamage_C.OnTakeWeaponShieldDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ShieldDamage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageCauserComponent*  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_HYP_Shield_AmpDamage_C::OnTakeWeaponShieldDamage(class UDamageComponent* DamageReceiver, float ShieldDamage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HYP_Shield_AmpDamage.BP_HYP_Shield_AmpDamage_C.OnTakeWeaponShieldDamage");

	UBP_HYP_Shield_AmpDamage_C_OnTakeWeaponShieldDamage_Params params;
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


// Function BP_HYP_Shield_AmpDamage.BP_HYP_Shield_AmpDamage_C.OnShieldBreak
// (BlueprintCallable, BlueprintEvent)

void UBP_HYP_Shield_AmpDamage_C::OnShieldBreak()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HYP_Shield_AmpDamage.BP_HYP_Shield_AmpDamage_C.OnShieldBreak");

	UBP_HYP_Shield_AmpDamage_C_OnShieldBreak_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HYP_Shield_AmpDamage.BP_HYP_Shield_AmpDamage_C.Weapon Equip
// (BlueprintCallable, BlueprintEvent)

void UBP_HYP_Shield_AmpDamage_C::Weapon_Equip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HYP_Shield_AmpDamage.BP_HYP_Shield_AmpDamage_C.Weapon Equip");

	UBP_HYP_Shield_AmpDamage_C_Weapon_Equip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HYP_Shield_AmpDamage.BP_HYP_Shield_AmpDamage_C.Weapon Put Down
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HYP_Shield_AmpDamage_C::Weapon_Put_Down(class AWeapon* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HYP_Shield_AmpDamage.BP_HYP_Shield_AmpDamage_C.Weapon Put Down");

	UBP_HYP_Shield_AmpDamage_C_Weapon_Put_Down_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HYP_Shield_AmpDamage.BP_HYP_Shield_AmpDamage_C.OnWeaponUsed
// (Event, Protected, BlueprintEvent)

void UBP_HYP_Shield_AmpDamage_C::OnWeaponUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HYP_Shield_AmpDamage.BP_HYP_Shield_AmpDamage_C.OnWeaponUsed");

	UBP_HYP_Shield_AmpDamage_C_OnWeaponUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HYP_Shield_AmpDamage.BP_HYP_Shield_AmpDamage_C.ExecuteUbergraph_BP_HYP_Shield_AmpDamage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HYP_Shield_AmpDamage_C::ExecuteUbergraph_BP_HYP_Shield_AmpDamage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HYP_Shield_AmpDamage.BP_HYP_Shield_AmpDamage_C.ExecuteUbergraph_BP_HYP_Shield_AmpDamage");

	UBP_HYP_Shield_AmpDamage_C_ExecuteUbergraph_BP_HYP_Shield_AmpDamage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
