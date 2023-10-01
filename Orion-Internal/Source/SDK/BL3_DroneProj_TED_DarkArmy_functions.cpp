// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_DroneProj_TED_DarkArmy_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.DistanceCHeck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ADroneProj_TED_DarkArmy_C::DistanceCHeck()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.DistanceCHeck");

	ADroneProj_TED_DarkArmy_C_DistanceCHeck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.DestroyDrone
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ADroneProj_TED_DarkArmy_C::DestroyDrone()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.DestroyDrone");

	ADroneProj_TED_DarkArmy_C_DestroyDrone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.FireWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ADroneProj_TED_DarkArmy_C::FireWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.FireWeapon");

	ADroneProj_TED_DarkArmy_C_FireWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADroneProj_TED_DarkArmy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.UserConstructionScript");

	ADroneProj_TED_DarkArmy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADroneProj_TED_DarkArmy_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.ReceiveBeginPlay");

	ADroneProj_TED_DarkArmy_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.PutDownNotify
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADroneProj_TED_DarkArmy_C::PutDownNotify(class AWeapon* EventWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.PutDownNotify");

	ADroneProj_TED_DarkArmy_C_PutDownNotify_Params params;
	params.EventWeapon = EventWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.OnBeginExplode
// (Event, Protected, BlueprintEvent)

void ADroneProj_TED_DarkArmy_C::OnBeginExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.OnBeginExplode");

	ADroneProj_TED_DarkArmy_C_OnBeginExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.ReloadStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoReload                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADroneProj_TED_DarkArmy_C::ReloadStarted(class AWeapon* EventWeapon, bool bAutoReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.ReloadStarted");

	ADroneProj_TED_DarkArmy_C_ReloadStarted_Params params;
	params.EventWeapon = EventWeapon;
	params.bAutoReload = bAutoReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.ExecuteUbergraph_DroneProj_TED_DarkArmy
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADroneProj_TED_DarkArmy_C::ExecuteUbergraph_DroneProj_TED_DarkArmy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C.ExecuteUbergraph_DroneProj_TED_DarkArmy");

	ADroneProj_TED_DarkArmy_C_ExecuteUbergraph_DroneProj_TED_DarkArmy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
