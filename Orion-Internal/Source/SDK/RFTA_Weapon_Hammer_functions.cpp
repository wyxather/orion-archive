// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Hammer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weapon_Hammer.Weapon_Hammer_C.ModifyDamage
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWeapon_Hammer_C::ModifyDamage(struct FDamageInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Hammer.Weapon_Hammer_C.ModifyDamage");

	AWeapon_Hammer_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;
}


// Function Weapon_Hammer.Weapon_Hammer_C.DoHammerAOE
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AWeapon_Hammer_C::DoHammerAOE()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Hammer.Weapon_Hammer_C.DoHammerAOE");

	AWeapon_Hammer_C_DoHammerAOE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Hammer.Weapon_Hammer_C.DoChargeHammerAOE
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AWeapon_Hammer_C::DoChargeHammerAOE()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Hammer.Weapon_Hammer_C.DoChargeHammerAOE");

	AWeapon_Hammer_C_DoChargeHammerAOE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Hammer.Weapon_Hammer_C.OnEquipped
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AWeapon_Hammer_C::OnEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Hammer.Weapon_Hammer_C.OnEquipped");

	AWeapon_Hammer_C_OnEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Hammer.Weapon_Hammer_C.OnUnequipped
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AWeapon_Hammer_C::OnUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Hammer.Weapon_Hammer_C.OnUnequipped");

	AWeapon_Hammer_C_OnUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Hammer.Weapon_Hammer_C.OnStateChange
// 00007FF6F8B35350
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  StateName                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName*                  PreviousStateName              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeapon_Hammer_C::OnStateChange(struct FName* StateName, struct FName* PreviousStateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Hammer.Weapon_Hammer_C.OnStateChange");

	AWeapon_Hammer_C_OnStateChange_Params params;
	params.StateName = StateName;
	params.PreviousStateName = PreviousStateName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Hammer.Weapon_Hammer_C.NotifyHitTarget
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AWeapon_Hammer_C::NotifyHitTarget(struct FDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Hammer.Weapon_Hammer_C.NotifyHitTarget");

	AWeapon_Hammer_C_NotifyHitTarget_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Hammer.Weapon_Hammer_C.ExecuteUbergraph_Weapon_Hammer
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeapon_Hammer_C::ExecuteUbergraph_Weapon_Hammer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Hammer.Weapon_Hammer_C.ExecuteUbergraph_Weapon_Hammer");

	AWeapon_Hammer_C_ExecuteUbergraph_Weapon_Hammer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
