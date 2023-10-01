// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_TEDProjectile_TenGallon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TEDProjectile_TenGallon.TEDProjectile_TenGallon_C.RemoveAmmo
// (Public, BlueprintCallable, BlueprintEvent)

void ATEDProjectile_TenGallon_C::RemoveAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_TenGallon.TEDProjectile_TenGallon_C.RemoveAmmo");

	ATEDProjectile_TenGallon_C_RemoveAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_TenGallon.TEDProjectile_TenGallon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATEDProjectile_TenGallon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_TenGallon.TEDProjectile_TenGallon_C.UserConstructionScript");

	ATEDProjectile_TenGallon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_TenGallon.TEDProjectile_TenGallon_C.GbxAsyncRequest_Spawned_FEAE3B894C826C7A82741594B3C3BAB6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InstanceIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATEDProjectile_TenGallon_C::GbxAsyncRequest_Spawned_FEAE3B894C826C7A82741594B3C3BAB6(class AActor* Actor, int InstanceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_TenGallon.TEDProjectile_TenGallon_C.GbxAsyncRequest_Spawned_FEAE3B894C826C7A82741594B3C3BAB6");

	ATEDProjectile_TenGallon_C_GbxAsyncRequest_Spawned_FEAE3B894C826C7A82741594B3C3BAB6_Params params;
	params.Actor = Actor;
	params.InstanceIndex = InstanceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_TenGallon.TEDProjectile_TenGallon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATEDProjectile_TenGallon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_TenGallon.TEDProjectile_TenGallon_C.ReceiveBeginPlay");

	ATEDProjectile_TenGallon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_TenGallon.TEDProjectile_TenGallon_C.OnExplode
// (Event, Protected, BlueprintEvent)

void ATEDProjectile_TenGallon_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_TenGallon.TEDProjectile_TenGallon_C.OnExplode");

	ATEDProjectile_TenGallon_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TEDProjectile_TenGallon.TEDProjectile_TenGallon_C.ExecuteUbergraph_TEDProjectile_TenGallon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATEDProjectile_TenGallon_C::ExecuteUbergraph_TEDProjectile_TenGallon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TEDProjectile_TenGallon.TEDProjectile_TenGallon_C.ExecuteUbergraph_TEDProjectile_TenGallon");

	ATEDProjectile_TenGallon_C_ExecuteUbergraph_TEDProjectile_TenGallon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
