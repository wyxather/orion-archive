// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Pan_EyeOfTheStorm_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weapon_Pan_EyeOfTheStorm.Weapon_Pan_EyeOfTheStorm_C.OnActivated
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AWeapon_Pan_EyeOfTheStorm_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Pan_EyeOfTheStorm.Weapon_Pan_EyeOfTheStorm_C.OnActivated");

	AWeapon_Pan_EyeOfTheStorm_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Pan_EyeOfTheStorm.Weapon_Pan_EyeOfTheStorm_C.ExecuteUbergraph_Weapon_Pan_EyeOfTheStorm
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeapon_Pan_EyeOfTheStorm_C::ExecuteUbergraph_Weapon_Pan_EyeOfTheStorm(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Pan_EyeOfTheStorm.Weapon_Pan_EyeOfTheStorm_C.ExecuteUbergraph_Weapon_Pan_EyeOfTheStorm");

	AWeapon_Pan_EyeOfTheStorm_C_ExecuteUbergraph_Weapon_Pan_EyeOfTheStorm_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
