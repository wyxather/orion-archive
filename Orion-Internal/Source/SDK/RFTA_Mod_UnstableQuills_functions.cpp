// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_UnstableQuills_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mod_UnstableQuills.Mod_UnstableQuills_C.GetBaseDamageScalar
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          BaseDamage                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_UnstableQuills_C::GetBaseDamageScalar(float* BaseDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_UnstableQuills.Mod_UnstableQuills_C.GetBaseDamageScalar");

	AMod_UnstableQuills_C_GetBaseDamageScalar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BaseDamage != nullptr)
		*BaseDamage = params.BaseDamage;
}


// Function Mod_UnstableQuills.Mod_UnstableQuills_C.GetMaxDamageScalar
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          MaxDamage                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_UnstableQuills_C::GetMaxDamageScalar(float* MaxDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_UnstableQuills.Mod_UnstableQuills_C.GetMaxDamageScalar");

	AMod_UnstableQuills_C_GetMaxDamageScalar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaxDamage != nullptr)
		*MaxDamage = params.MaxDamage;
}


// Function Mod_UnstableQuills.Mod_UnstableQuills_C.IsActionEndable
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Endable                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMod_UnstableQuills_C::IsActionEndable(bool* Endable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_UnstableQuills.Mod_UnstableQuills_C.IsActionEndable");

	AMod_UnstableQuills_C_IsActionEndable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Endable != nullptr)
		*Endable = params.Endable;
}


// Function Mod_UnstableQuills.Mod_UnstableQuills_C.EndProjectileAction
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AMod_UnstableQuills_C::EndProjectileAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_UnstableQuills.Mod_UnstableQuills_C.EndProjectileAction");

	AMod_UnstableQuills_C_EndProjectileAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_UnstableQuills.Mod_UnstableQuills_C.DoSecondaryAction
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AMod_UnstableQuills_C::DoSecondaryAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_UnstableQuills.Mod_UnstableQuills_C.DoSecondaryAction");

	AMod_UnstableQuills_C_DoSecondaryAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_UnstableQuills.Mod_UnstableQuills_C.DetonateAllAttachedProjectiles
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AMod_UnstableQuills_C::DetonateAllAttachedProjectiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_UnstableQuills.Mod_UnstableQuills_C.DetonateAllAttachedProjectiles");

	AMod_UnstableQuills_C_DetonateAllAttachedProjectiles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_UnstableQuills.Mod_UnstableQuills_C.RemoveAttachedProjectileInfo
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AProjectileSphere**      ProjectileInfo                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_UnstableQuills_C::RemoveAttachedProjectileInfo(class AProjectileSphere** ProjectileInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_UnstableQuills.Mod_UnstableQuills_C.RemoveAttachedProjectileInfo");

	AMod_UnstableQuills_C_RemoveAttachedProjectileInfo_Params params;
	params.ProjectileInfo = ProjectileInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_UnstableQuills.Mod_UnstableQuills_C.GiveAttachedProjectileInfo
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AProjectileSphere**      NewProjectile                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_UnstableQuills_C::GiveAttachedProjectileInfo(class AProjectileSphere** NewProjectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_UnstableQuills.Mod_UnstableQuills_C.GiveAttachedProjectileInfo");

	AMod_UnstableQuills_C_GiveAttachedProjectileInfo_Params params;
	params.NewProjectile = NewProjectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_UnstableQuills.Mod_UnstableQuills_C.ModifyDamage
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMod_UnstableQuills_C::ModifyDamage(struct FDamageInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_UnstableQuills.Mod_UnstableQuills_C.ModifyDamage");

	AMod_UnstableQuills_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;
}


// Function Mod_UnstableQuills.Mod_UnstableQuills_C.DoAction
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActionComponent**       ActionComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ActionID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_UnstableQuills_C::DoAction(class UActionComponent** ActionComponent, int* ActionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_UnstableQuills.Mod_UnstableQuills_C.DoAction");

	AMod_UnstableQuills_C_DoAction_Params params;
	params.ActionComponent = ActionComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActionID != nullptr)
		*ActionID = params.ActionID;
}


// Function Mod_UnstableQuills.Mod_UnstableQuills_C.ModifyInspectInfo
// 00007FF6F8B35350
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInstanceData**      InInstanceData                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMod_UnstableQuills_C::ModifyInspectInfo(class AActor** Actor, class UItemInstanceData** InInstanceData, struct FInspectInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_UnstableQuills.Mod_UnstableQuills_C.ModifyInspectInfo");

	AMod_UnstableQuills_C_ModifyInspectInfo_Params params;
	params.Actor = Actor;
	params.InInstanceData = InInstanceData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;
}


// Function Mod_UnstableQuills.Mod_UnstableQuills_C.OnSecondaryActivate
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AMod_UnstableQuills_C::OnSecondaryActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_UnstableQuills.Mod_UnstableQuills_C.OnSecondaryActivate");

	AMod_UnstableQuills_C_OnSecondaryActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_UnstableQuills.Mod_UnstableQuills_C.ServerFireProjectile
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Origin                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector*                End                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_UnstableQuills_C::ServerFireProjectile(struct FVector* Origin, struct FVector* End)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_UnstableQuills.Mod_UnstableQuills_C.ServerFireProjectile");

	AMod_UnstableQuills_C_ServerFireProjectile_Params params;
	params.Origin = Origin;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_UnstableQuills.Mod_UnstableQuills_C.OnBeginUse
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AMod_UnstableQuills_C::OnBeginUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_UnstableQuills.Mod_UnstableQuills_C.OnBeginUse");

	AMod_UnstableQuills_C_OnBeginUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_UnstableQuills.Mod_UnstableQuills_C.ExecuteUbergraph_Mod_UnstableQuills
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_UnstableQuills_C::ExecuteUbergraph_Mod_UnstableQuills(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_UnstableQuills.Mod_UnstableQuills_C.ExecuteUbergraph_Mod_UnstableQuills");

	AMod_UnstableQuills_C_ExecuteUbergraph_Mod_UnstableQuills_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
