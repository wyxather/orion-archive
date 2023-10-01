// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Weapon_Hardpoint_FalconStrike_Nuke_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weapon_Hardpoint_FalconStrike_Nuke.Weapon_Hardpoint_FalconStrike_Nuke_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWeapon_Hardpoint_FalconStrike_Nuke_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_FalconStrike_Nuke.Weapon_Hardpoint_FalconStrike_Nuke_C.UserConstructionScript");

	AWeapon_Hardpoint_FalconStrike_Nuke_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Hardpoint_FalconStrike_Nuke.Weapon_Hardpoint_FalconStrike_Nuke_C.InitAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBPAnim_IronBear_FalconStrike_C** Anim                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeapon_Hardpoint_FalconStrike_Nuke_C::InitAnimation(class UBPAnim_IronBear_FalconStrike_C** Anim)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_FalconStrike_Nuke.Weapon_Hardpoint_FalconStrike_Nuke_C.InitAnimation");

	AWeapon_Hardpoint_FalconStrike_Nuke_C_InitAnimation_Params params;
	params.Anim = Anim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Hardpoint_FalconStrike_Nuke.Weapon_Hardpoint_FalconStrike_Nuke_C.K2_Initialize
// (Event, Protected, BlueprintEvent)

void AWeapon_Hardpoint_FalconStrike_Nuke_C::K2_Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_FalconStrike_Nuke.Weapon_Hardpoint_FalconStrike_Nuke_C.K2_Initialize");

	AWeapon_Hardpoint_FalconStrike_Nuke_C_K2_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Hardpoint_FalconStrike_Nuke.Weapon_Hardpoint_FalconStrike_Nuke_C.ExecuteUbergraph_Weapon_Hardpoint_FalconStrike_Nuke
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeapon_Hardpoint_FalconStrike_Nuke_C::ExecuteUbergraph_Weapon_Hardpoint_FalconStrike_Nuke(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_FalconStrike_Nuke.Weapon_Hardpoint_FalconStrike_Nuke_C.ExecuteUbergraph_Weapon_Hardpoint_FalconStrike_Nuke");

	AWeapon_Hardpoint_FalconStrike_Nuke_C_ExecuteUbergraph_Weapon_Hardpoint_FalconStrike_Nuke_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
