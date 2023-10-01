// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_DroneProj_ATL_OPQ_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DroneProj_ATL_OPQ.DroneProj_ATL_OPQ_C.DistanceCHeck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ADroneProj_ATL_OPQ_C::DistanceCHeck()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroneProj_ATL_OPQ.DroneProj_ATL_OPQ_C.DistanceCHeck");

	ADroneProj_ATL_OPQ_C_DistanceCHeck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroneProj_ATL_OPQ.DroneProj_ATL_OPQ_C.NoFriends
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ADroneProj_ATL_OPQ_C::NoFriends()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroneProj_ATL_OPQ.DroneProj_ATL_OPQ_C.NoFriends");

	ADroneProj_ATL_OPQ_C_NoFriends_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroneProj_ATL_OPQ.DroneProj_ATL_OPQ_C.StopFire
// (Public, BlueprintCallable, BlueprintEvent)

void ADroneProj_ATL_OPQ_C::StopFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroneProj_ATL_OPQ.DroneProj_ATL_OPQ_C.StopFire");

	ADroneProj_ATL_OPQ_C_StopFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroneProj_ATL_OPQ.DroneProj_ATL_OPQ_C.StartFire
// (Public, BlueprintCallable, BlueprintEvent)

void ADroneProj_ATL_OPQ_C::StartFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroneProj_ATL_OPQ.DroneProj_ATL_OPQ_C.StartFire");

	ADroneProj_ATL_OPQ_C_StartFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroneProj_ATL_OPQ.DroneProj_ATL_OPQ_C.FireWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ADroneProj_ATL_OPQ_C::FireWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroneProj_ATL_OPQ.DroneProj_ATL_OPQ_C.FireWeapon");

	ADroneProj_ATL_OPQ_C_FireWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroneProj_ATL_OPQ.DroneProj_ATL_OPQ_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADroneProj_ATL_OPQ_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroneProj_ATL_OPQ.DroneProj_ATL_OPQ_C.UserConstructionScript");

	ADroneProj_ATL_OPQ_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroneProj_ATL_OPQ.DroneProj_ATL_OPQ_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADroneProj_ATL_OPQ_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroneProj_ATL_OPQ.DroneProj_ATL_OPQ_C.ReceiveBeginPlay");

	ADroneProj_ATL_OPQ_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroneProj_ATL_OPQ.DroneProj_ATL_OPQ_C.BndEvt__DroneMovement_K2Node_ComponentBoundEvent_0_OakDroneProjectileFacingTargetChangedDelegate__DelegateSignature_DroneProj_TED_TenGallon
// (BlueprintEvent)
// Parameters:
// class AOakDroneProjectile*     Drone                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADroneProj_ATL_OPQ_C::BndEvt__DroneMovement_K2Node_ComponentBoundEvent_0_OakDroneProjectileFacingTargetChangedDelegate__DelegateSignature_DroneProj_TED_TenGallon(class AOakDroneProjectile* Drone)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroneProj_ATL_OPQ.DroneProj_ATL_OPQ_C.BndEvt__DroneMovement_K2Node_ComponentBoundEvent_0_OakDroneProjectileFacingTargetChangedDelegate__DelegateSignature_DroneProj_TED_TenGallon");

	ADroneProj_ATL_OPQ_C_BndEvt__DroneMovement_K2Node_ComponentBoundEvent_0_OakDroneProjectileFacingTargetChangedDelegate__DelegateSignature_DroneProj_TED_TenGallon_Params params;
	params.Drone = Drone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroneProj_ATL_OPQ.DroneProj_ATL_OPQ_C.PutDownNotify
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADroneProj_ATL_OPQ_C::PutDownNotify(class AWeapon* EventWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroneProj_ATL_OPQ.DroneProj_ATL_OPQ_C.PutDownNotify");

	ADroneProj_ATL_OPQ_C_PutDownNotify_Params params;
	params.EventWeapon = EventWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroneProj_ATL_OPQ.DroneProj_ATL_OPQ_C.OnBeginExplode
// (Event, Protected, BlueprintEvent)

void ADroneProj_ATL_OPQ_C::OnBeginExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroneProj_ATL_OPQ.DroneProj_ATL_OPQ_C.OnBeginExplode");

	ADroneProj_ATL_OPQ_C_OnBeginExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroneProj_ATL_OPQ.DroneProj_ATL_OPQ_C.ExecuteUbergraph_DroneProj_ATL_OPQ
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADroneProj_ATL_OPQ_C::ExecuteUbergraph_DroneProj_ATL_OPQ(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroneProj_ATL_OPQ.DroneProj_ATL_OPQ_C.ExecuteUbergraph_DroneProj_ATL_OPQ");

	ADroneProj_ATL_OPQ_C_ExecuteUbergraph_DroneProj_ATL_OPQ_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
