// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Weapon_Hardpoint_Salamander_Normal_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weapon_Hardpoint_Salamander_Normal.Weapon_Hardpoint_Salamander_Normal_C.SetupMod1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWeapon_Hardpoint_Salamander_Normal_C::SetupMod1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Salamander_Normal.Weapon_Hardpoint_Salamander_Normal_C.SetupMod1");

	AWeapon_Hardpoint_Salamander_Normal_C_SetupMod1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Hardpoint_Salamander_Normal.Weapon_Hardpoint_Salamander_Normal_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWeapon_Hardpoint_Salamander_Normal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Salamander_Normal.Weapon_Hardpoint_Salamander_Normal_C.UserConstructionScript");

	AWeapon_Hardpoint_Salamander_Normal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Hardpoint_Salamander_Normal.Weapon_Hardpoint_Salamander_Normal_C.K2_InitializeMod
// (Event, Protected, BlueprintEvent)

void AWeapon_Hardpoint_Salamander_Normal_C::K2_InitializeMod()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Salamander_Normal.Weapon_Hardpoint_Salamander_Normal_C.K2_InitializeMod");

	AWeapon_Hardpoint_Salamander_Normal_C_K2_InitializeMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Hardpoint_Salamander_Normal.Weapon_Hardpoint_Salamander_Normal_C.ExecuteUbergraph_Weapon_Hardpoint_Salamander_Normal
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeapon_Hardpoint_Salamander_Normal_C::ExecuteUbergraph_Weapon_Hardpoint_Salamander_Normal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Hardpoint_Salamander_Normal.Weapon_Hardpoint_Salamander_Normal_C.ExecuteUbergraph_Weapon_Hardpoint_Salamander_Normal");

	AWeapon_Hardpoint_Salamander_Normal_C_ExecuteUbergraph_Weapon_Hardpoint_Salamander_Normal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
