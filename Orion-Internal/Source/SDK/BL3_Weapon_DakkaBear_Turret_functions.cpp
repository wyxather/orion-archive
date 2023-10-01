// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Weapon_DakkaBear_Turret_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weapon_DakkaBear_Turret.Weapon_DakkaBear_Turret_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWeapon_DakkaBear_Turret_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_DakkaBear_Turret.Weapon_DakkaBear_Turret_C.UserConstructionScript");

	AWeapon_DakkaBear_Turret_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
