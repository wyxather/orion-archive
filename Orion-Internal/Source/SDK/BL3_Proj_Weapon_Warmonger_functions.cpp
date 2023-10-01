// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Weapon_Warmonger_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_Weapon_Warmonger.Proj_Weapon_Warmonger_C.SplitVisuals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProj_Weapon_Warmonger_C::SplitVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_Warmonger.Proj_Weapon_Warmonger_C.SplitVisuals");

	AProj_Weapon_Warmonger_C_SplitVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_Warmonger.Proj_Weapon_Warmonger_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_Weapon_Warmonger_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_Warmonger.Proj_Weapon_Warmonger_C.UserConstructionScript");

	AProj_Weapon_Warmonger_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_Warmonger.Proj_Weapon_Warmonger_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProj_Weapon_Warmonger_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_Warmonger.Proj_Weapon_Warmonger_C.ReceiveBeginPlay");

	AProj_Weapon_Warmonger_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_Warmonger.Proj_Weapon_Warmonger_C.Split
// (BlueprintCallable, BlueprintEvent)

void AProj_Weapon_Warmonger_C::Split()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_Warmonger.Proj_Weapon_Warmonger_C.Split");

	AProj_Weapon_Warmonger_C_Split_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_Warmonger.Proj_Weapon_Warmonger_C.ExecuteUbergraph_Proj_Weapon_Warmonger
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_Weapon_Warmonger_C::ExecuteUbergraph_Proj_Weapon_Warmonger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_Warmonger.Proj_Weapon_Warmonger_C.ExecuteUbergraph_Proj_Weapon_Warmonger");

	AProj_Weapon_Warmonger_C_ExecuteUbergraph_Proj_Weapon_Warmonger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
