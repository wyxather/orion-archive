// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Vehicle_Weapon_BarrelLauncher_V4_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Vehicle_Weapon_BarrelLauncher_V4.BP_Vehicle_Weapon_BarrelLauncher_V4_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Vehicle_Weapon_BarrelLauncher_V4_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Vehicle_Weapon_BarrelLauncher_V4.BP_Vehicle_Weapon_BarrelLauncher_V4_C.UserConstructionScript");

	ABP_Vehicle_Weapon_BarrelLauncher_V4_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Vehicle_Weapon_BarrelLauncher_V4.BP_Vehicle_Weapon_BarrelLauncher_V4_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Vehicle_Weapon_BarrelLauncher_V4_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Vehicle_Weapon_BarrelLauncher_V4.BP_Vehicle_Weapon_BarrelLauncher_V4_C.ReceiveBeginPlay");

	ABP_Vehicle_Weapon_BarrelLauncher_V4_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Vehicle_Weapon_BarrelLauncher_V4.BP_Vehicle_Weapon_BarrelLauncher_V4_C.BndEvt__OakVehicleWeaponFireProjectile_K2Node_ComponentBoundEvent_1_WeaponUsedEvent__DelegateSignature_BP_Vehicle_Weapon_PropelledBombsLauncher
// (BlueprintEvent)

void ABP_Vehicle_Weapon_BarrelLauncher_V4_C::BndEvt__OakVehicleWeaponFireProjectile_K2Node_ComponentBoundEvent_1_WeaponUsedEvent__DelegateSignature_BP_Vehicle_Weapon_PropelledBombsLauncher()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Vehicle_Weapon_BarrelLauncher_V4.BP_Vehicle_Weapon_BarrelLauncher_V4_C.BndEvt__OakVehicleWeaponFireProjectile_K2Node_ComponentBoundEvent_1_WeaponUsedEvent__DelegateSignature_BP_Vehicle_Weapon_PropelledBombsLauncher");

	ABP_Vehicle_Weapon_BarrelLauncher_V4_C_BndEvt__OakVehicleWeaponFireProjectile_K2Node_ComponentBoundEvent_1_WeaponUsedEvent__DelegateSignature_BP_Vehicle_Weapon_PropelledBombsLauncher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Vehicle_Weapon_BarrelLauncher_V4.BP_Vehicle_Weapon_BarrelLauncher_V4_C.OnZoomingIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Vehicle_Weapon_BarrelLauncher_V4_C::OnZoomingIn(unsigned char Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Vehicle_Weapon_BarrelLauncher_V4.BP_Vehicle_Weapon_BarrelLauncher_V4_C.OnZoomingIn");

	ABP_Vehicle_Weapon_BarrelLauncher_V4_C_OnZoomingIn_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Vehicle_Weapon_BarrelLauncher_V4.BP_Vehicle_Weapon_BarrelLauncher_V4_C.BndEvt__WeaponClipReload_K2Node_ComponentBoundEvent_2_WeaponReloadStartedEvent__DelegateSignature_BP_Vehicle_Weapon_BarrelLauncher_V4
// (BlueprintEvent)
// Parameters:
// bool                           bAutoReload                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Vehicle_Weapon_BarrelLauncher_V4_C::BndEvt__WeaponClipReload_K2Node_ComponentBoundEvent_2_WeaponReloadStartedEvent__DelegateSignature_BP_Vehicle_Weapon_BarrelLauncher_V4(bool bAutoReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Vehicle_Weapon_BarrelLauncher_V4.BP_Vehicle_Weapon_BarrelLauncher_V4_C.BndEvt__WeaponClipReload_K2Node_ComponentBoundEvent_2_WeaponReloadStartedEvent__DelegateSignature_BP_Vehicle_Weapon_BarrelLauncher_V4");

	ABP_Vehicle_Weapon_BarrelLauncher_V4_C_BndEvt__WeaponClipReload_K2Node_ComponentBoundEvent_2_WeaponReloadStartedEvent__DelegateSignature_BP_Vehicle_Weapon_BarrelLauncher_V4_Params params;
	params.bAutoReload = bAutoReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Vehicle_Weapon_BarrelLauncher_V4.BP_Vehicle_Weapon_BarrelLauncher_V4_C.ExecuteUbergraph_BP_Vehicle_Weapon_BarrelLauncher_V4
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Vehicle_Weapon_BarrelLauncher_V4_C::ExecuteUbergraph_BP_Vehicle_Weapon_BarrelLauncher_V4(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Vehicle_Weapon_BarrelLauncher_V4.BP_Vehicle_Weapon_BarrelLauncher_V4_C.ExecuteUbergraph_BP_Vehicle_Weapon_BarrelLauncher_V4");

	ABP_Vehicle_Weapon_BarrelLauncher_V4_C_ExecuteUbergraph_BP_Vehicle_Weapon_BarrelLauncher_V4_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Vehicle_Weapon_BarrelLauncher_V4.BP_Vehicle_Weapon_BarrelLauncher_V4_C.OnDetonate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Vehicle_Weapon_BarrelLauncher_V4_C::OnDetonate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Vehicle_Weapon_BarrelLauncher_V4.BP_Vehicle_Weapon_BarrelLauncher_V4_C.OnDetonate__DelegateSignature");

	ABP_Vehicle_Weapon_BarrelLauncher_V4_C_OnDetonate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
