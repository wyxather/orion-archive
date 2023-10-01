// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_HW_COV_Mechanic_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_HW_COV_Mechanic.Proj_HW_COV_Mechanic_C.ProjectileDisarm
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProj_HW_COV_Mechanic_C::ProjectileDisarm(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_HW_COV_Mechanic.Proj_HW_COV_Mechanic_C.ProjectileDisarm");

	AProj_HW_COV_Mechanic_C_ProjectileDisarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Proj_HW_COV_Mechanic.Proj_HW_COV_Mechanic_C.ProjectileArm
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProj_HW_COV_Mechanic_C::ProjectileArm(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_HW_COV_Mechanic.Proj_HW_COV_Mechanic_C.ProjectileArm");

	AProj_HW_COV_Mechanic_C_ProjectileArm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Proj_HW_COV_Mechanic.Proj_HW_COV_Mechanic_C.ProjectileDetonate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProj_HW_COV_Mechanic_C::ProjectileDetonate(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_HW_COV_Mechanic.Proj_HW_COV_Mechanic_C.ProjectileDetonate");

	AProj_HW_COV_Mechanic_C_ProjectileDetonate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Proj_HW_COV_Mechanic.Proj_HW_COV_Mechanic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_HW_COV_Mechanic_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_HW_COV_Mechanic.Proj_HW_COV_Mechanic_C.UserConstructionScript");

	AProj_HW_COV_Mechanic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_HW_COV_Mechanic.Proj_HW_COV_Mechanic_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProj_HW_COV_Mechanic_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_HW_COV_Mechanic.Proj_HW_COV_Mechanic_C.ReceiveBeginPlay");

	AProj_HW_COV_Mechanic_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_HW_COV_Mechanic.Proj_HW_COV_Mechanic_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProj_HW_COV_Mechanic_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_HW_COV_Mechanic.Proj_HW_COV_Mechanic_C.OnExplode");

	AProj_HW_COV_Mechanic_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_HW_COV_Mechanic.Proj_HW_COV_Mechanic_C.OnHitWorld
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_HW_COV_Mechanic_C::OnHitWorld(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_HW_COV_Mechanic.Proj_HW_COV_Mechanic_C.OnHitWorld");

	AProj_HW_COV_Mechanic_C_OnHitWorld_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_HW_COV_Mechanic.Proj_HW_COV_Mechanic_C.ExecuteUbergraph_Proj_HW_COV_Mechanic
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_HW_COV_Mechanic_C::ExecuteUbergraph_Proj_HW_COV_Mechanic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_HW_COV_Mechanic.Proj_HW_COV_Mechanic_C.ExecuteUbergraph_Proj_HW_COV_Mechanic");

	AProj_HW_COV_Mechanic_C_ExecuteUbergraph_Proj_HW_COV_Mechanic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
