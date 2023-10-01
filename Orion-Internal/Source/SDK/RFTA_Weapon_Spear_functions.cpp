// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Spear_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weapon_Spear.Weapon_Spear_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void AWeapon_Spear_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Spear.Weapon_Spear_C.ReceiveBeginPlay");

	AWeapon_Spear_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Spear.Weapon_Spear_C.OnInHand
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AWeapon_Spear_C::OnInHand()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Spear.Weapon_Spear_C.OnInHand");

	AWeapon_Spear_C_OnInHand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Spear.Weapon_Spear_C.OnNotInHand
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AWeapon_Spear_C::OnNotInHand()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Spear.Weapon_Spear_C.OnNotInHand");

	AWeapon_Spear_C_OnNotInHand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Spear.Weapon_Spear_C.ExecuteUbergraph_Weapon_Spear
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeapon_Spear_C::ExecuteUbergraph_Weapon_Spear(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Spear.Weapon_Spear_C.ExecuteUbergraph_Weapon_Spear");

	AWeapon_Spear_C_ExecuteUbergraph_Weapon_Spear_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
