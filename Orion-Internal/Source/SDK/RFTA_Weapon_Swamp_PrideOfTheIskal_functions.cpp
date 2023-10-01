// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Swamp_PrideOfTheIskal_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weapon_Swamp_PrideOfTheIskal.Weapon_Swamp_PrideOfTheIskal_C.SetInactiveVFX
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AWeapon_Swamp_PrideOfTheIskal_C::SetInactiveVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Swamp_PrideOfTheIskal.Weapon_Swamp_PrideOfTheIskal_C.SetInactiveVFX");

	AWeapon_Swamp_PrideOfTheIskal_C_SetInactiveVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Swamp_PrideOfTheIskal.Weapon_Swamp_PrideOfTheIskal_C.SetActiveVFX
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AWeapon_Swamp_PrideOfTheIskal_C::SetActiveVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Swamp_PrideOfTheIskal.Weapon_Swamp_PrideOfTheIskal_C.SetActiveVFX");

	AWeapon_Swamp_PrideOfTheIskal_C_SetActiveVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Swamp_PrideOfTheIskal.Weapon_Swamp_PrideOfTheIskal_C.OnFire
// 00007FF6F8B35350
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                from                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector*                to                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WeaponSpread                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeapon_Swamp_PrideOfTheIskal_C::OnFire(struct FVector* from, struct FVector* to, float* WeaponSpread)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Swamp_PrideOfTheIskal.Weapon_Swamp_PrideOfTheIskal_C.OnFire");

	AWeapon_Swamp_PrideOfTheIskal_C_OnFire_Params params;
	params.from = from;
	params.to = to;
	params.WeaponSpread = WeaponSpread;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Swamp_PrideOfTheIskal.Weapon_Swamp_PrideOfTheIskal_C.OnActivateMod_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EModActiveState*               ActiveState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeapon_Swamp_PrideOfTheIskal_C::OnActivateMod_Event_1(EModActiveState* ActiveState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Swamp_PrideOfTheIskal.Weapon_Swamp_PrideOfTheIskal_C.OnActivateMod_Event_1");

	AWeapon_Swamp_PrideOfTheIskal_C_OnActivateMod_Event_1_Params params;
	params.ActiveState = ActiveState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Swamp_PrideOfTheIskal.Weapon_Swamp_PrideOfTheIskal_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void AWeapon_Swamp_PrideOfTheIskal_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Swamp_PrideOfTheIskal.Weapon_Swamp_PrideOfTheIskal_C.ReceiveBeginPlay");

	AWeapon_Swamp_PrideOfTheIskal_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Swamp_PrideOfTheIskal.Weapon_Swamp_PrideOfTheIskal_C.ExecuteUbergraph_Weapon_Swamp_PrideOfTheIskal
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeapon_Swamp_PrideOfTheIskal_C::ExecuteUbergraph_Weapon_Swamp_PrideOfTheIskal(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Swamp_PrideOfTheIskal.Weapon_Swamp_PrideOfTheIskal_C.ExecuteUbergraph_Weapon_Swamp_PrideOfTheIskal");

	AWeapon_Swamp_PrideOfTheIskal_C_ExecuteUbergraph_Weapon_Swamp_PrideOfTheIskal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
