// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Shotgun_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weapon_Shotgun.Weapon_Shotgun_C.OnActivated
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AWeapon_Shotgun_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Shotgun.Weapon_Shotgun_C.OnActivated");

	AWeapon_Shotgun_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Shotgun.Weapon_Shotgun_C.ExecuteUbergraph_Weapon_Shotgun
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeapon_Shotgun_C::ExecuteUbergraph_Weapon_Shotgun(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Shotgun.Weapon_Shotgun_C.ExecuteUbergraph_Weapon_Shotgun");

	AWeapon_Shotgun_C_ExecuteUbergraph_Weapon_Shotgun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
