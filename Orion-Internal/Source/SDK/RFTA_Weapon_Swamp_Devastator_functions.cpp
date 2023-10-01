// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Swamp_Devastator_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weapon_Swamp_Devastator.Weapon_Swamp_Devastator_C.OnRep_MagazineOn
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AWeapon_Swamp_Devastator_C::OnRep_MagazineOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Swamp_Devastator.Weapon_Swamp_Devastator_C.OnRep_MagazineOn");

	AWeapon_Swamp_Devastator_C_OnRep_MagazineOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Swamp_Devastator.Weapon_Swamp_Devastator_C.ModifyDamage
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWeapon_Swamp_Devastator_C::ModifyDamage(struct FDamageInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Swamp_Devastator.Weapon_Swamp_Devastator_C.ModifyDamage");

	AWeapon_Swamp_Devastator_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;
}


// Function Weapon_Swamp_Devastator.Weapon_Swamp_Devastator_C.OnActivated
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AWeapon_Swamp_Devastator_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Swamp_Devastator.Weapon_Swamp_Devastator_C.OnActivated");

	AWeapon_Swamp_Devastator_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Swamp_Devastator.Weapon_Swamp_Devastator_C.OnFire
// 00007FF6F8B35350
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                from                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector*                to                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WeaponSpread                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeapon_Swamp_Devastator_C::OnFire(struct FVector* from, struct FVector* to, float* WeaponSpread)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Swamp_Devastator.Weapon_Swamp_Devastator_C.OnFire");

	AWeapon_Swamp_Devastator_C_OnFire_Params params;
	params.from = from;
	params.to = to;
	params.WeaponSpread = WeaponSpread;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Swamp_Devastator.Weapon_Swamp_Devastator_C.OnFireEnd
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void AWeapon_Swamp_Devastator_C::OnFireEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Swamp_Devastator.Weapon_Swamp_Devastator_C.OnFireEnd");

	AWeapon_Swamp_Devastator_C_OnFireEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Swamp_Devastator.Weapon_Swamp_Devastator_C.OnServer_End
// 00007FF6F8B35350
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AWeapon_Swamp_Devastator_C::OnServer_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Swamp_Devastator.Weapon_Swamp_Devastator_C.OnServer_End");

	AWeapon_Swamp_Devastator_C_OnServer_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Swamp_Devastator.Weapon_Swamp_Devastator_C.OnServer_TurnOff
// 00007FF6F8B35350
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AWeapon_Swamp_Devastator_C::OnServer_TurnOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Swamp_Devastator.Weapon_Swamp_Devastator_C.OnServer_TurnOff");

	AWeapon_Swamp_Devastator_C_OnServer_TurnOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Swamp_Devastator.Weapon_Swamp_Devastator_C.ExecuteUbergraph_Weapon_Swamp_Devastator
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeapon_Swamp_Devastator_C::ExecuteUbergraph_Weapon_Swamp_Devastator(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Swamp_Devastator.Weapon_Swamp_Devastator_C.ExecuteUbergraph_Weapon_Swamp_Devastator");

	AWeapon_Swamp_Devastator_C_ExecuteUbergraph_Weapon_Swamp_Devastator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
