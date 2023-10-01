// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Melee_SkinnedBase_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weapon_Melee_SkinnedBase.Weapon_Melee_SkinnedBase_C.GetWeaponDamageScalar
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                          Inspecting                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeapon_Melee_SkinnedBase_C::GetWeaponDamageScalar(bool* Inspecting, float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Melee_SkinnedBase.Weapon_Melee_SkinnedBase_C.GetWeaponDamageScalar");

	AWeapon_Melee_SkinnedBase_C_GetWeaponDamageScalar_Params params;
	params.Inspecting = Inspecting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
