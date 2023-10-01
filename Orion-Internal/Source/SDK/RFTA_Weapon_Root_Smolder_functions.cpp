// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Root_Smolder_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weapon_Root_Smolder.Weapon_Root_Smolder_C.ModifyInspectInfo
// 00007FF6F8B35350
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInstanceData**      InInstanceData                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWeapon_Root_Smolder_C::ModifyInspectInfo(class AActor** Actor, class UItemInstanceData** InInstanceData, struct FInspectInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Root_Smolder.Weapon_Root_Smolder_C.ModifyInspectInfo");

	AWeapon_Root_Smolder_C_ModifyInspectInfo_Params params;
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


// Function Weapon_Root_Smolder.Weapon_Root_Smolder_C.Set Light Intensity
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         NewIntensity                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeapon_Root_Smolder_C::Set_Light_Intensity(float* NewIntensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Root_Smolder.Weapon_Root_Smolder_C.Set Light Intensity");

	AWeapon_Root_Smolder_C_Set_Light_Intensity_Params params;
	params.NewIntensity = NewIntensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Root_Smolder.Weapon_Root_Smolder_C.OnNotInHand
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AWeapon_Root_Smolder_C::OnNotInHand()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Root_Smolder.Weapon_Root_Smolder_C.OnNotInHand");

	AWeapon_Root_Smolder_C_OnNotInHand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Root_Smolder.Weapon_Root_Smolder_C.OnActivated
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AWeapon_Root_Smolder_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Root_Smolder.Weapon_Root_Smolder_C.OnActivated");

	AWeapon_Root_Smolder_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Root_Smolder.Weapon_Root_Smolder_C.OnInHand
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AWeapon_Root_Smolder_C::OnInHand()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Root_Smolder.Weapon_Root_Smolder_C.OnInHand");

	AWeapon_Root_Smolder_C_OnInHand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Root_Smolder.Weapon_Root_Smolder_C.OnHitTarget
// 00007FF6F8B35350
// (BlueprintAuthorityOnly, Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AWeapon_Root_Smolder_C::OnHitTarget(struct FDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Root_Smolder.Weapon_Root_Smolder_C.OnHitTarget");

	AWeapon_Root_Smolder_C_OnHitTarget_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Root_Smolder.Weapon_Root_Smolder_C.ExecuteUbergraph_Weapon_Root_Smolder
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeapon_Root_Smolder_C::ExecuteUbergraph_Weapon_Root_Smolder(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Root_Smolder.Weapon_Root_Smolder_C.ExecuteUbergraph_Weapon_Root_Smolder");

	AWeapon_Root_Smolder_C_ExecuteUbergraph_Weapon_Root_Smolder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
