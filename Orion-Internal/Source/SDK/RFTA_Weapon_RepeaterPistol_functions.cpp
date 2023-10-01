// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_RepeaterPistol_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weapon_RepeaterPistol.Weapon_RepeaterPistol_C.OnActivated
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AWeapon_RepeaterPistol_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_RepeaterPistol.Weapon_RepeaterPistol_C.OnActivated");

	AWeapon_RepeaterPistol_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_RepeaterPistol.Weapon_RepeaterPistol_C.ExecuteUbergraph_Weapon_RepeaterPistol
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeapon_RepeaterPistol_C::ExecuteUbergraph_Weapon_RepeaterPistol(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_RepeaterPistol.Weapon_RepeaterPistol_C.ExecuteUbergraph_Weapon_RepeaterPistol");

	AWeapon_RepeaterPistol_C_ExecuteUbergraph_Weapon_RepeaterPistol_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
