// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Weapon_VLA_HW_Mongol_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_Weapon_VLA_HW_Mongol.Proj_Weapon_VLA_HW_Mongol_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_Weapon_VLA_HW_Mongol_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_VLA_HW_Mongol.Proj_Weapon_VLA_HW_Mongol_C.UserConstructionScript");

	AProj_Weapon_VLA_HW_Mongol_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_VLA_HW_Mongol.Proj_Weapon_VLA_HW_Mongol_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProj_Weapon_VLA_HW_Mongol_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_VLA_HW_Mongol.Proj_Weapon_VLA_HW_Mongol_C.ReceiveBeginPlay");

	AProj_Weapon_VLA_HW_Mongol_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_VLA_HW_Mongol.Proj_Weapon_VLA_HW_Mongol_C.ContinueFiring
// (BlueprintCallable, BlueprintEvent)

void AProj_Weapon_VLA_HW_Mongol_C::ContinueFiring()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_VLA_HW_Mongol.Proj_Weapon_VLA_HW_Mongol_C.ContinueFiring");

	AProj_Weapon_VLA_HW_Mongol_C_ContinueFiring_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_VLA_HW_Mongol.Proj_Weapon_VLA_HW_Mongol_C.FireVolley
// (BlueprintCallable, BlueprintEvent)

void AProj_Weapon_VLA_HW_Mongol_C::FireVolley()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_VLA_HW_Mongol.Proj_Weapon_VLA_HW_Mongol_C.FireVolley");

	AProj_Weapon_VLA_HW_Mongol_C_FireVolley_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_VLA_HW_Mongol.Proj_Weapon_VLA_HW_Mongol_C.ExecuteUbergraph_Proj_Weapon_VLA_HW_Mongol
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_Weapon_VLA_HW_Mongol_C::ExecuteUbergraph_Proj_Weapon_VLA_HW_Mongol(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_VLA_HW_Mongol.Proj_Weapon_VLA_HW_Mongol_C.ExecuteUbergraph_Proj_Weapon_VLA_HW_Mongol");

	AProj_Weapon_VLA_HW_Mongol_C_ExecuteUbergraph_Proj_Weapon_VLA_HW_Mongol_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
