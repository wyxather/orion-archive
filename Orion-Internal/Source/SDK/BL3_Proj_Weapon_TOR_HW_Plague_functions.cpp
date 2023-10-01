// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Weapon_TOR_HW_Plague_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_Weapon_TOR_HW_Plague.Proj_Weapon_TOR_HW_Plague_C.GenerateEndLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector AProj_Weapon_TOR_HW_Plague_C::GenerateEndLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_TOR_HW_Plague.Proj_Weapon_TOR_HW_Plague_C.GenerateEndLocation");

	AProj_Weapon_TOR_HW_Plague_C_GenerateEndLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Proj_Weapon_TOR_HW_Plague.Proj_Weapon_TOR_HW_Plague_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_Weapon_TOR_HW_Plague_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_TOR_HW_Plague.Proj_Weapon_TOR_HW_Plague_C.UserConstructionScript");

	AProj_Weapon_TOR_HW_Plague_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_TOR_HW_Plague.Proj_Weapon_TOR_HW_Plague_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProj_Weapon_TOR_HW_Plague_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_TOR_HW_Plague.Proj_Weapon_TOR_HW_Plague_C.ReceiveBeginPlay");

	AProj_Weapon_TOR_HW_Plague_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_TOR_HW_Plague.Proj_Weapon_TOR_HW_Plague_C.FindHomingTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_Weapon_TOR_HW_Plague_C::FindHomingTarget(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_TOR_HW_Plague.Proj_Weapon_TOR_HW_Plague_C.FindHomingTarget");

	AProj_Weapon_TOR_HW_Plague_C_FindHomingTarget_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_TOR_HW_Plague.Proj_Weapon_TOR_HW_Plague_C.TargetFound
// (BlueprintCallable, BlueprintEvent)

void AProj_Weapon_TOR_HW_Plague_C::TargetFound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_TOR_HW_Plague.Proj_Weapon_TOR_HW_Plague_C.TargetFound");

	AProj_Weapon_TOR_HW_Plague_C_TargetFound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_TOR_HW_Plague.Proj_Weapon_TOR_HW_Plague_C.InitSwarm
// (BlueprintCallable, BlueprintEvent)

void AProj_Weapon_TOR_HW_Plague_C::InitSwarm()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_TOR_HW_Plague.Proj_Weapon_TOR_HW_Plague_C.InitSwarm");

	AProj_Weapon_TOR_HW_Plague_C_InitSwarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_TOR_HW_Plague.Proj_Weapon_TOR_HW_Plague_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProj_Weapon_TOR_HW_Plague_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_TOR_HW_Plague.Proj_Weapon_TOR_HW_Plague_C.OnExplode");

	AProj_Weapon_TOR_HW_Plague_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Weapon_TOR_HW_Plague.Proj_Weapon_TOR_HW_Plague_C.ExecuteUbergraph_Proj_Weapon_TOR_HW_Plague
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_Weapon_TOR_HW_Plague_C::ExecuteUbergraph_Proj_Weapon_TOR_HW_Plague(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Weapon_TOR_HW_Plague.Proj_Weapon_TOR_HW_Plague_C.ExecuteUbergraph_Proj_Weapon_TOR_HW_Plague");

	AProj_Weapon_TOR_HW_Plague_C_ExecuteUbergraph_Proj_Weapon_TOR_HW_Plague_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
