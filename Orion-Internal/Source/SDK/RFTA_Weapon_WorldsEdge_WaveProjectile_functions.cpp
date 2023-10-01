// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_WorldsEdge_WaveProjectile_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weapon_WorldsEdge_WaveProjectile.Weapon_WorldsEdge_WaveProjectile_C.SetRoll
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Roll                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeapon_WorldsEdge_WaveProjectile_C::SetRoll(float* Roll)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_WorldsEdge_WaveProjectile.Weapon_WorldsEdge_WaveProjectile_C.SetRoll");

	AWeapon_WorldsEdge_WaveProjectile_C_SetRoll_Params params;
	params.Roll = Roll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_WorldsEdge_WaveProjectile.Weapon_WorldsEdge_WaveProjectile_C.ReceiveTick
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeapon_WorldsEdge_WaveProjectile_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_WorldsEdge_WaveProjectile.Weapon_WorldsEdge_WaveProjectile_C.ReceiveTick");

	AWeapon_WorldsEdge_WaveProjectile_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_WorldsEdge_WaveProjectile.Weapon_WorldsEdge_WaveProjectile_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void AWeapon_WorldsEdge_WaveProjectile_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_WorldsEdge_WaveProjectile.Weapon_WorldsEdge_WaveProjectile_C.ReceiveBeginPlay");

	AWeapon_WorldsEdge_WaveProjectile_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_WorldsEdge_WaveProjectile.Weapon_WorldsEdge_WaveProjectile_C.OnProjectileHit
// 00007FF6F8B35350
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AWeapon_WorldsEdge_WaveProjectile_C::OnProjectileHit(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_WorldsEdge_WaveProjectile.Weapon_WorldsEdge_WaveProjectile_C.OnProjectileHit");

	AWeapon_WorldsEdge_WaveProjectile_C_OnProjectileHit_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_WorldsEdge_WaveProjectile.Weapon_WorldsEdge_WaveProjectile_C.ExecuteUbergraph_Weapon_WorldsEdge_WaveProjectile
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeapon_WorldsEdge_WaveProjectile_C::ExecuteUbergraph_Weapon_WorldsEdge_WaveProjectile(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_WorldsEdge_WaveProjectile.Weapon_WorldsEdge_WaveProjectile_C.ExecuteUbergraph_Weapon_WorldsEdge_WaveProjectile");

	AWeapon_WorldsEdge_WaveProjectile_C_ExecuteUbergraph_Weapon_WorldsEdge_WaveProjectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
