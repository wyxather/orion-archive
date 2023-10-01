// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_COV_BaseWeapon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.DisableWaterBottle
// (Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_COV_BaseWeapon_C::DisableWaterBottle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.DisableWaterBottle");

	ABPWeap_COV_BaseWeapon_C_DisableWaterBottle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.EnableWaterBottle
// (Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_COV_BaseWeapon_C::EnableWaterBottle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.EnableWaterBottle");

	ABPWeap_COV_BaseWeapon_C_EnableWaterBottle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.GetRepairStyle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Param                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPWeap_COV_BaseWeapon_C::GetRepairStyle(int* Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.GetRepairStyle");

	ABPWeap_COV_BaseWeapon_C_GetRepairStyle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Param != nullptr)
		*Param = params.Param;
}


// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_COV_BaseWeapon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.UserConstructionScript");

	ABPWeap_COV_BaseWeapon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPWeap_COV_BaseWeapon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.ReceiveBeginPlay");

	ABPWeap_COV_BaseWeapon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.WeaponOnFire
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_COV_BaseWeapon_C::WeaponOnFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.WeaponOnFire");

	ABPWeap_COV_BaseWeapon_C_WeaponOnFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.WeaponPutOut
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_COV_BaseWeapon_C::WeaponPutOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.WeaponPutOut");

	ABPWeap_COV_BaseWeapon_C_WeaponPutOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.WeaponSmokeStop
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_COV_BaseWeapon_C::WeaponSmokeStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.WeaponSmokeStop");

	ABPWeap_COV_BaseWeapon_C_WeaponSmokeStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.FirstPersonCreated
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_COV_BaseWeapon_C::FirstPersonCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.FirstPersonCreated");

	ABPWeap_COV_BaseWeapon_C_FirstPersonCreated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.EngineStart
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_COV_BaseWeapon_C::EngineStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.EngineStart");

	ABPWeap_COV_BaseWeapon_C_EngineStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.Notify_ReloadEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bCompleted                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_COV_BaseWeapon_C::Notify_ReloadEnded(bool* bCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.Notify_ReloadEnded");

	ABPWeap_COV_BaseWeapon_C_Notify_ReloadEnded_Params params;
	params.bCompleted = bCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.StarterSparks
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_COV_BaseWeapon_C::StarterSparks()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.StarterSparks");

	ABPWeap_COV_BaseWeapon_C_StarterSparks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.WeaponStartWatering
// (BlueprintCallable, BlueprintEvent)

void ABPWeap_COV_BaseWeapon_C::WeaponStartWatering()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.WeaponStartWatering");

	ABPWeap_COV_BaseWeapon_C_WeaponStartWatering_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.ExecuteUbergraph_BPWeap_COV_BaseWeapon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_COV_BaseWeapon_C::ExecuteUbergraph_BPWeap_COV_BaseWeapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_COV_BaseWeapon.BPWeap_COV_BaseWeapon_C.ExecuteUbergraph_BPWeap_COV_BaseWeapon");

	ABPWeap_COV_BaseWeapon_C_ExecuteUbergraph_BPWeap_COV_BaseWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
