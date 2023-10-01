// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_Jakobs_BaseWeapon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeap_Jakobs_BaseWeapon.BPWeap_Jakobs_BaseWeapon_C.ShowMagBones
// (Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_Jakobs_BaseWeapon_C::ShowMagBones()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Jakobs_BaseWeapon.BPWeap_Jakobs_BaseWeapon_C.ShowMagBones");

	ABPWeap_Jakobs_BaseWeapon_C_ShowMagBones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_Jakobs_BaseWeapon.BPWeap_Jakobs_BaseWeapon_C.HideMagBones
// (Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_Jakobs_BaseWeapon_C::HideMagBones()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Jakobs_BaseWeapon.BPWeap_Jakobs_BaseWeapon_C.HideMagBones");

	ABPWeap_Jakobs_BaseWeapon_C_HideMagBones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_Jakobs_BaseWeapon.BPWeap_Jakobs_BaseWeapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_Jakobs_BaseWeapon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Jakobs_BaseWeapon.BPWeap_Jakobs_BaseWeapon_C.UserConstructionScript");

	ABPWeap_Jakobs_BaseWeapon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
