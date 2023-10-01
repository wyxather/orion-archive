// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Pan_EyeOfTheStorm_Actions_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weapon_Pan_EyeOfTheStorm_Actions.Weapon_Pan_EyeOfTheStorm_Actions_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UWeapon_Pan_EyeOfTheStorm_Actions_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Pan_EyeOfTheStorm_Actions.Weapon_Pan_EyeOfTheStorm_Actions_C.OnActionStart");

	UWeapon_Pan_EyeOfTheStorm_Actions_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Pan_EyeOfTheStorm_Actions.Weapon_Pan_EyeOfTheStorm_Actions_C.ExecuteUbergraph_Weapon_Pan_EyeOfTheStorm_Actions
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeapon_Pan_EyeOfTheStorm_Actions_C::ExecuteUbergraph_Weapon_Pan_EyeOfTheStorm_Actions(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Pan_EyeOfTheStorm_Actions.Weapon_Pan_EyeOfTheStorm_Actions_C.ExecuteUbergraph_Weapon_Pan_EyeOfTheStorm_Actions");

	UWeapon_Pan_EyeOfTheStorm_Actions_C_ExecuteUbergraph_Weapon_Pan_EyeOfTheStorm_Actions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
