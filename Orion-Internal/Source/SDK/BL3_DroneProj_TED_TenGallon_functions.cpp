// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_DroneProj_TED_TenGallon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.DistanceCHeck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ADroneProj_TED_TenGallon_C::DistanceCHeck()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.DistanceCHeck");

	ADroneProj_TED_TenGallon_C_DistanceCHeck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.NoFriends
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ADroneProj_TED_TenGallon_C::NoFriends()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.NoFriends");

	ADroneProj_TED_TenGallon_C_NoFriends_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.StopFire
// (Public, BlueprintCallable, BlueprintEvent)

void ADroneProj_TED_TenGallon_C::StopFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.StopFire");

	ADroneProj_TED_TenGallon_C_StopFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.StartFire
// (Public, BlueprintCallable, BlueprintEvent)

void ADroneProj_TED_TenGallon_C::StartFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.StartFire");

	ADroneProj_TED_TenGallon_C_StartFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.FireWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ADroneProj_TED_TenGallon_C::FireWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.FireWeapon");

	ADroneProj_TED_TenGallon_C_FireWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADroneProj_TED_TenGallon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.UserConstructionScript");

	ADroneProj_TED_TenGallon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.RefillAmmo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          LoadedAmmo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADroneProj_TED_TenGallon_C::RefillAmmo(float LoadedAmmo)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.RefillAmmo");

	ADroneProj_TED_TenGallon_C_RefillAmmo_Params params;
	params.LoadedAmmo = LoadedAmmo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.BndEvt__DroneMovement_K2Node_ComponentBoundEvent_0_OakDroneProjectileFacingTargetChangedDelegate__DelegateSignature_DroneProj_TED_TenGallon
// (BlueprintEvent)
// Parameters:
// class AOakDroneProjectile*     Drone                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADroneProj_TED_TenGallon_C::BndEvt__DroneMovement_K2Node_ComponentBoundEvent_0_OakDroneProjectileFacingTargetChangedDelegate__DelegateSignature_DroneProj_TED_TenGallon(class AOakDroneProjectile* Drone)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.BndEvt__DroneMovement_K2Node_ComponentBoundEvent_0_OakDroneProjectileFacingTargetChangedDelegate__DelegateSignature_DroneProj_TED_TenGallon");

	ADroneProj_TED_TenGallon_C_BndEvt__DroneMovement_K2Node_ComponentBoundEvent_0_OakDroneProjectileFacingTargetChangedDelegate__DelegateSignature_DroneProj_TED_TenGallon_Params params;
	params.Drone = Drone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.PutDownNotify
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADroneProj_TED_TenGallon_C::PutDownNotify(class AWeapon* EventWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.PutDownNotify");

	ADroneProj_TED_TenGallon_C_PutDownNotify_Params params;
	params.EventWeapon = EventWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.OnBeginExplode
// (Event, Protected, BlueprintEvent)

void ADroneProj_TED_TenGallon_C::OnBeginExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.OnBeginExplode");

	ADroneProj_TED_TenGallon_C_OnBeginExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADroneProj_TED_TenGallon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.ReceiveBeginPlay");

	ADroneProj_TED_TenGallon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.ExecuteUbergraph_DroneProj_TED_TenGallon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADroneProj_TED_TenGallon_C::ExecuteUbergraph_DroneProj_TED_TenGallon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroneProj_TED_TenGallon.DroneProj_TED_TenGallon_C.ExecuteUbergraph_DroneProj_TED_TenGallon");

	ADroneProj_TED_TenGallon_C_ExecuteUbergraph_DroneProj_TED_TenGallon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
