// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_SM_TED_PatMk3_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeap_SM_TED_PatMk3.BPWeap_SM_TED_PatMk3_C.Tediore_WeaponData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DamageRadius                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageTypeClass                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            NumMirvProjectiles             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          FireRate                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          LoadedAmmo                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ThrowType                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPWeap_SM_TED_PatMk3_C::Tediore_WeaponData(float* DamageRadius, class UClass** DamageTypeClass, int* NumMirvProjectiles, float* FireRate, float* LoadedAmmo, int* ThrowType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SM_TED_PatMk3.BPWeap_SM_TED_PatMk3_C.Tediore_WeaponData");

	ABPWeap_SM_TED_PatMk3_C_Tediore_WeaponData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageRadius != nullptr)
		*DamageRadius = params.DamageRadius;
	if (DamageTypeClass != nullptr)
		*DamageTypeClass = params.DamageTypeClass;
	if (NumMirvProjectiles != nullptr)
		*NumMirvProjectiles = params.NumMirvProjectiles;
	if (FireRate != nullptr)
		*FireRate = params.FireRate;
	if (LoadedAmmo != nullptr)
		*LoadedAmmo = params.LoadedAmmo;
	if (ThrowType != nullptr)
		*ThrowType = params.ThrowType;
}


// Function BPWeap_SM_TED_PatMk3.BPWeap_SM_TED_PatMk3_C.TryAdvancingAudio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPWeap_SM_TED_PatMk3_C::TryAdvancingAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SM_TED_PatMk3.BPWeap_SM_TED_PatMk3_C.TryAdvancingAudio");

	ABPWeap_SM_TED_PatMk3_C_TryAdvancingAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_SM_TED_PatMk3.BPWeap_SM_TED_PatMk3_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_SM_TED_PatMk3_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SM_TED_PatMk3.BPWeap_SM_TED_PatMk3_C.UserConstructionScript");

	ABPWeap_SM_TED_PatMk3_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_SM_TED_PatMk3.BPWeap_SM_TED_PatMk3_C.WeaponAttached
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_SM_TED_PatMk3_C::WeaponAttached()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SM_TED_PatMk3.BPWeap_SM_TED_PatMk3_C.WeaponAttached");

	ABPWeap_SM_TED_PatMk3_C_WeaponAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_SM_TED_PatMk3.BPWeap_SM_TED_PatMk3_C.EquipEventNotify
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_SM_TED_PatMk3_C::EquipEventNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SM_TED_PatMk3.BPWeap_SM_TED_PatMk3_C.EquipEventNotify");

	ABPWeap_SM_TED_PatMk3_C_EquipEventNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_SM_TED_PatMk3.BPWeap_SM_TED_PatMk3_C.WeaponPutDownEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_SM_TED_PatMk3_C::WeaponPutDownEvent(class AWeapon* EventWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SM_TED_PatMk3.BPWeap_SM_TED_PatMk3_C.WeaponPutDownEvent");

	ABPWeap_SM_TED_PatMk3_C_WeaponPutDownEvent_Params params;
	params.EventWeapon = EventWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_SM_TED_PatMk3.BPWeap_SM_TED_PatMk3_C.OnKilledEnemy_Event
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABPWeap_SM_TED_PatMk3_C::OnKilledEnemy_Event(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SM_TED_PatMk3.BPWeap_SM_TED_PatMk3_C.OnKilledEnemy_Event");

	ABPWeap_SM_TED_PatMk3_C_OnKilledEnemy_Event_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_SM_TED_PatMk3.BPWeap_SM_TED_PatMk3_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPWeap_SM_TED_PatMk3_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SM_TED_PatMk3.BPWeap_SM_TED_PatMk3_C.ReceiveBeginPlay");

	ABPWeap_SM_TED_PatMk3_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_SM_TED_PatMk3.BPWeap_SM_TED_PatMk3_C.ExecuteUbergraph_BPWeap_SM_TED_PatMk3
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_SM_TED_PatMk3_C::ExecuteUbergraph_BPWeap_SM_TED_PatMk3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SM_TED_PatMk3.BPWeap_SM_TED_PatMk3_C.ExecuteUbergraph_BPWeap_SM_TED_PatMk3");

	ABPWeap_SM_TED_PatMk3_C_ExecuteUbergraph_BPWeap_SM_TED_PatMk3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
