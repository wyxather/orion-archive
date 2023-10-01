// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Pan_ScarOfTheJungleGod_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weapon_Pan_ScarOfTheJungleGod.Weapon_Pan_ScarOfTheJungleGod_C.IsDefaultEquipment
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           DefaultEquipment               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWeapon_Pan_ScarOfTheJungleGod_C::IsDefaultEquipment(bool* DefaultEquipment)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Pan_ScarOfTheJungleGod.Weapon_Pan_ScarOfTheJungleGod_C.IsDefaultEquipment");

	AWeapon_Pan_ScarOfTheJungleGod_C_IsDefaultEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DefaultEquipment != nullptr)
		*DefaultEquipment = params.DefaultEquipment;
}


// Function Weapon_Pan_ScarOfTheJungleGod.Weapon_Pan_ScarOfTheJungleGod_C.ModifyInspectInfo
// 00007FF6F8B35350
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInstanceData**      InInstanceData                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWeapon_Pan_ScarOfTheJungleGod_C::ModifyInspectInfo(class AActor** Actor, class UItemInstanceData** InInstanceData, struct FInspectInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Pan_ScarOfTheJungleGod.Weapon_Pan_ScarOfTheJungleGod_C.ModifyInspectInfo");

	AWeapon_Pan_ScarOfTheJungleGod_C_ModifyInspectInfo_Params params;
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


// Function Weapon_Pan_ScarOfTheJungleGod.Weapon_Pan_ScarOfTheJungleGod_C.OnHitTarget
// 00007FF6F8B35350
// (BlueprintAuthorityOnly, Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AWeapon_Pan_ScarOfTheJungleGod_C::OnHitTarget(struct FDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Pan_ScarOfTheJungleGod.Weapon_Pan_ScarOfTheJungleGod_C.OnHitTarget");

	AWeapon_Pan_ScarOfTheJungleGod_C_OnHitTarget_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Pan_ScarOfTheJungleGod.Weapon_Pan_ScarOfTheJungleGod_C.ExecuteUbergraph_Weapon_Pan_ScarOfTheJungleGod
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeapon_Pan_ScarOfTheJungleGod_C::ExecuteUbergraph_Weapon_Pan_ScarOfTheJungleGod(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Pan_ScarOfTheJungleGod.Weapon_Pan_ScarOfTheJungleGod_C.ExecuteUbergraph_Weapon_Pan_ScarOfTheJungleGod");

	AWeapon_Pan_ScarOfTheJungleGod_C_ExecuteUbergraph_Weapon_Pan_ScarOfTheJungleGod_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
