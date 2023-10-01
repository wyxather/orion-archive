// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Swamp_ButchersFlail_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weapon_Swamp_ButchersFlail.Weapon_Swamp_ButchersFlail_C.ModifyInspectInfo
// 00007FF6F8B35350
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInstanceData**      InInstanceData                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWeapon_Swamp_ButchersFlail_C::ModifyInspectInfo(class AActor** Actor, class UItemInstanceData** InInstanceData, struct FInspectInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Swamp_ButchersFlail.Weapon_Swamp_ButchersFlail_C.ModifyInspectInfo");

	AWeapon_Swamp_ButchersFlail_C_ModifyInspectInfo_Params params;
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


// Function Weapon_Swamp_ButchersFlail.Weapon_Swamp_ButchersFlail_C.OnHitTarget
// 00007FF6F8B35350
// (BlueprintAuthorityOnly, Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AWeapon_Swamp_ButchersFlail_C::OnHitTarget(struct FDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Swamp_ButchersFlail.Weapon_Swamp_ButchersFlail_C.OnHitTarget");

	AWeapon_Swamp_ButchersFlail_C_OnHitTarget_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Swamp_ButchersFlail.Weapon_Swamp_ButchersFlail_C.ExecuteUbergraph_Weapon_Swamp_ButchersFlail
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeapon_Swamp_ButchersFlail_C::ExecuteUbergraph_Weapon_Swamp_ButchersFlail(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Swamp_ButchersFlail.Weapon_Swamp_ButchersFlail_C.ExecuteUbergraph_Weapon_Swamp_ButchersFlail");

	AWeapon_Swamp_ButchersFlail_C_ExecuteUbergraph_Weapon_Swamp_ButchersFlail_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
