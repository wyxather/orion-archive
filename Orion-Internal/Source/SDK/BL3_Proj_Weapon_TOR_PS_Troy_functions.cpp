// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Weapon_TOR_PS_Troy_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_Weapon_TOR_PS_Troy.Proj_Weapon_TOR_PS_Troy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_Weapon_TOR_PS_Troy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_TOR_PS_Troy.Proj_Weapon_TOR_PS_Troy_C.UserConstructionScript");

	AProj_Weapon_TOR_PS_Troy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_TOR_PS_Troy.Proj_Weapon_TOR_PS_Troy_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProj_Weapon_TOR_PS_Troy_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_TOR_PS_Troy.Proj_Weapon_TOR_PS_Troy_C.ReceiveBeginPlay");

	AProj_Weapon_TOR_PS_Troy_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_TOR_PS_Troy.Proj_Weapon_TOR_PS_Troy_C.SpawnChildren
// (BlueprintCallable, BlueprintEvent)

void AProj_Weapon_TOR_PS_Troy_C::SpawnChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_TOR_PS_Troy.Proj_Weapon_TOR_PS_Troy_C.SpawnChildren");

	AProj_Weapon_TOR_PS_Troy_C_SpawnChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_TOR_PS_Troy.Proj_Weapon_TOR_PS_Troy_C.ExecuteUbergraph_Proj_Weapon_TOR_PS_Troy
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_Weapon_TOR_PS_Troy_C::ExecuteUbergraph_Proj_Weapon_TOR_PS_Troy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_TOR_PS_Troy.Proj_Weapon_TOR_PS_Troy_C.ExecuteUbergraph_Proj_Weapon_TOR_PS_Troy");

	AProj_Weapon_TOR_PS_Troy_C_ExecuteUbergraph_Proj_Weapon_TOR_PS_Troy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
