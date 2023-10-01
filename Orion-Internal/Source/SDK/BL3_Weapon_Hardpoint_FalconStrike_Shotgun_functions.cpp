// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Weapon_Hardpoint_FalconStrike_Shotgun_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weapon_Hardpoint_FalconStrike_Shotgun.Weapon_Hardpoint_FalconStrike_Shotgun_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWeapon_Hardpoint_FalconStrike_Shotgun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_FalconStrike_Shotgun.Weapon_Hardpoint_FalconStrike_Shotgun_C.UserConstructionScript");

	AWeapon_Hardpoint_FalconStrike_Shotgun_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Hardpoint_FalconStrike_Shotgun.Weapon_Hardpoint_FalconStrike_Shotgun_C.BndEvt__BPWeaponFireProjectile_Gunner_FalconStrike_K2Node_ComponentBoundEvent_0_WeaponUsedEvent__DelegateSignature_Weapon_Hardpoint_FalconStrike_DumbFire
// (BlueprintEvent)

void AWeapon_Hardpoint_FalconStrike_Shotgun_C::BndEvt__BPWeaponFireProjectile_Gunner_FalconStrike_K2Node_ComponentBoundEvent_0_WeaponUsedEvent__DelegateSignature_Weapon_Hardpoint_FalconStrike_DumbFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_FalconStrike_Shotgun.Weapon_Hardpoint_FalconStrike_Shotgun_C.BndEvt__BPWeaponFireProjectile_Gunner_FalconStrike_K2Node_ComponentBoundEvent_0_WeaponUsedEvent__DelegateSignature_Weapon_Hardpoint_FalconStrike_DumbFire");

	AWeapon_Hardpoint_FalconStrike_Shotgun_C_BndEvt__BPWeaponFireProjectile_Gunner_FalconStrike_K2Node_ComponentBoundEvent_0_WeaponUsedEvent__DelegateSignature_Weapon_Hardpoint_FalconStrike_DumbFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Hardpoint_FalconStrike_Shotgun.Weapon_Hardpoint_FalconStrike_Shotgun_C.ExecuteUbergraph_Weapon_Hardpoint_FalconStrike_Shotgun
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeapon_Hardpoint_FalconStrike_Shotgun_C::ExecuteUbergraph_Weapon_Hardpoint_FalconStrike_Shotgun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_FalconStrike_Shotgun.Weapon_Hardpoint_FalconStrike_Shotgun_C.ExecuteUbergraph_Weapon_Hardpoint_FalconStrike_Shotgun");

	AWeapon_Hardpoint_FalconStrike_Shotgun_C_ExecuteUbergraph_Weapon_Hardpoint_FalconStrike_Shotgun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
