// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Melee_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weapon_Melee_Base.Weapon_Melee_Base_C.GetWeaponDamageScalar
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeapon_Melee_Base_C::GetWeaponDamageScalar(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Melee_Base.Weapon_Melee_Base_C.GetWeaponDamageScalar");

	AWeapon_Melee_Base_C_GetWeaponDamageScalar_Params params;

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
