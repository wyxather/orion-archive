// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_SkagSpit_Backup_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_SkagSpit_Backup.Proj_SkagSpit_Backup_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_SkagSpit_Backup_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_SkagSpit_Backup.Proj_SkagSpit_Backup_C.UserConstructionScript");

	AProj_SkagSpit_Backup_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_SkagSpit_Backup.Proj_SkagSpit_Backup_C.GbxAsyncRequest_Miss_C8453E1249B64FF3DDA2A7BD878B7E64
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_SkagSpit_Backup_C::GbxAsyncRequest_Miss_C8453E1249B64FF3DDA2A7BD878B7E64(const struct FHitResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_SkagSpit_Backup.Proj_SkagSpit_Backup_C.GbxAsyncRequest_Miss_C8453E1249B64FF3DDA2A7BD878B7E64");

	AProj_SkagSpit_Backup_C_GbxAsyncRequest_Miss_C8453E1249B64FF3DDA2A7BD878B7E64_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_SkagSpit_Backup.Proj_SkagSpit_Backup_C.GbxAsyncRequest_Hit_C8453E1249B64FF3DDA2A7BD878B7E64
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_SkagSpit_Backup_C::GbxAsyncRequest_Hit_C8453E1249B64FF3DDA2A7BD878B7E64(const struct FHitResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_SkagSpit_Backup.Proj_SkagSpit_Backup_C.GbxAsyncRequest_Hit_C8453E1249B64FF3DDA2A7BD878B7E64");

	AProj_SkagSpit_Backup_C_GbxAsyncRequest_Hit_C8453E1249B64FF3DDA2A7BD878B7E64_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_SkagSpit_Backup.Proj_SkagSpit_Backup_C.OnHitWorld
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_SkagSpit_Backup_C::OnHitWorld(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_SkagSpit_Backup.Proj_SkagSpit_Backup_C.OnHitWorld");

	AProj_SkagSpit_Backup_C_OnHitWorld_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_SkagSpit_Backup.Proj_SkagSpit_Backup_C.OnHitDamagableObject
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_SkagSpit_Backup_C::OnHitDamagableObject(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_SkagSpit_Backup.Proj_SkagSpit_Backup_C.OnHitDamagableObject");

	AProj_SkagSpit_Backup_C_OnHitDamagableObject_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_SkagSpit_Backup.Proj_SkagSpit_Backup_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProj_SkagSpit_Backup_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_SkagSpit_Backup.Proj_SkagSpit_Backup_C.OnExplode");

	AProj_SkagSpit_Backup_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_SkagSpit_Backup.Proj_SkagSpit_Backup_C.ExecuteUbergraph_Proj_SkagSpit_Backup
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_SkagSpit_Backup_C::ExecuteUbergraph_Proj_SkagSpit_Backup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_SkagSpit_Backup.Proj_SkagSpit_Backup_C.ExecuteUbergraph_Proj_SkagSpit_Backup");

	AProj_SkagSpit_Backup_C_ExecuteUbergraph_Proj_SkagSpit_Backup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
