// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Wasteland_WorldBreaker_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weapon_Wasteland_WorldBreaker.Weapon_Wasteland_WorldBreaker_C.ModifyInspectInfo
// 00007FF6F8B35350
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInstanceData**      InInstanceData                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWeapon_Wasteland_WorldBreaker_C::ModifyInspectInfo(class AActor** Actor, class UItemInstanceData** InInstanceData, struct FInspectInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Wasteland_WorldBreaker.Weapon_Wasteland_WorldBreaker_C.ModifyInspectInfo");

	AWeapon_Wasteland_WorldBreaker_C_ModifyInspectInfo_Params params;
	params.Actor = Actor;
	params.InInstanceData = InInstanceData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;
}


// Function Weapon_Wasteland_WorldBreaker.Weapon_Wasteland_WorldBreaker_C.OnHitTarget
// 00007FF6F8B35350
// (BlueprintAuthorityOnly, Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AWeapon_Wasteland_WorldBreaker_C::OnHitTarget(struct FDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Wasteland_WorldBreaker.Weapon_Wasteland_WorldBreaker_C.OnHitTarget");

	AWeapon_Wasteland_WorldBreaker_C_OnHitTarget_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Wasteland_WorldBreaker.Weapon_Wasteland_WorldBreaker_C.MeleeChargeAttack
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AWeapon_Wasteland_WorldBreaker_C::MeleeChargeAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Wasteland_WorldBreaker.Weapon_Wasteland_WorldBreaker_C.MeleeChargeAttack");

	AWeapon_Wasteland_WorldBreaker_C_MeleeChargeAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Wasteland_WorldBreaker.Weapon_Wasteland_WorldBreaker_C.OnEquipped
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AWeapon_Wasteland_WorldBreaker_C::OnEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Wasteland_WorldBreaker.Weapon_Wasteland_WorldBreaker_C.OnEquipped");

	AWeapon_Wasteland_WorldBreaker_C_OnEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Wasteland_WorldBreaker.Weapon_Wasteland_WorldBreaker_C.OnUnequipped
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AWeapon_Wasteland_WorldBreaker_C::OnUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Wasteland_WorldBreaker.Weapon_Wasteland_WorldBreaker_C.OnUnequipped");

	AWeapon_Wasteland_WorldBreaker_C_OnUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Wasteland_WorldBreaker.Weapon_Wasteland_WorldBreaker_C.OnStateChange
// 00007FF6F8B35350
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  StateName                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName*                  PreviousStateName              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeapon_Wasteland_WorldBreaker_C::OnStateChange(struct FName* StateName, struct FName* PreviousStateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Wasteland_WorldBreaker.Weapon_Wasteland_WorldBreaker_C.OnStateChange");

	AWeapon_Wasteland_WorldBreaker_C_OnStateChange_Params params;
	params.StateName = StateName;
	params.PreviousStateName = PreviousStateName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Wasteland_WorldBreaker.Weapon_Wasteland_WorldBreaker_C.ExecuteUbergraph_Weapon_Wasteland_WorldBreaker
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeapon_Wasteland_WorldBreaker_C::ExecuteUbergraph_Weapon_Wasteland_WorldBreaker(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Wasteland_WorldBreaker.Weapon_Wasteland_WorldBreaker_C.ExecuteUbergraph_Weapon_Wasteland_WorldBreaker");

	AWeapon_Wasteland_WorldBreaker_C_ExecuteUbergraph_Weapon_Wasteland_WorldBreaker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
