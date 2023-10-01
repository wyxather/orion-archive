// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Gunner_NextMagFireDamage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Gunner_NextMagFireDamage.Ability_Gunner_NextMagFireDamage_C.ReloadedWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon**                EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAutoReload                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Gunner_NextMagFireDamage_C::ReloadedWeapon(class AWeapon** EventWeapon, bool* bAutoReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Gunner_NextMagFireDamage.Ability_Gunner_NextMagFireDamage_C.ReloadedWeapon");

	UAbility_Gunner_NextMagFireDamage_C_ReloadedWeapon_Params params;
	params.EventWeapon = EventWeapon;
	params.bAutoReload = bAutoReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Gunner_NextMagFireDamage.Ability_Gunner_NextMagFireDamage_C.ExecuteUbergraph_Ability_Gunner_NextMagFireDamage
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Gunner_NextMagFireDamage_C::ExecuteUbergraph_Ability_Gunner_NextMagFireDamage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Gunner_NextMagFireDamage.Ability_Gunner_NextMagFireDamage_C.ExecuteUbergraph_Ability_Gunner_NextMagFireDamage");

	UAbility_Gunner_NextMagFireDamage_C_ExecuteUbergraph_Ability_Gunner_NextMagFireDamage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
