// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_TentacleShot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mod_TentacleShot.Mod_TentacleShot_C.GetTentacleHealthScalar
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_TentacleShot_C::GetTentacleHealthScalar(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_TentacleShot.Mod_TentacleShot_C.GetTentacleHealthScalar");

	AMod_TentacleShot_C_GetTentacleHealthScalar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Mod_TentacleShot.Mod_TentacleShot_C.GetHealthPerHitScalar
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Scalar                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_TentacleShot_C::GetHealthPerHitScalar(float* Scalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_TentacleShot.Mod_TentacleShot_C.GetHealthPerHitScalar");

	AMod_TentacleShot_C_GetHealthPerHitScalar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scalar != nullptr)
		*Scalar = params.Scalar;
}


// Function Mod_TentacleShot.Mod_TentacleShot_C.GetDamage
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_TentacleShot_C::GetDamage(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_TentacleShot.Mod_TentacleShot_C.GetDamage");

	AMod_TentacleShot_C_GetDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Mod_TentacleShot.Mod_TentacleShot_C.GetDuration
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_TentacleShot_C::GetDuration(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_TentacleShot.Mod_TentacleShot_C.GetDuration");

	AMod_TentacleShot_C_GetDuration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Mod_TentacleShot.Mod_TentacleShot_C.ModifyDamage
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMod_TentacleShot_C::ModifyDamage(struct FDamageInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_TentacleShot.Mod_TentacleShot_C.ModifyDamage");

	AMod_TentacleShot_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;
}


// Function Mod_TentacleShot.Mod_TentacleShot_C.ModifyInspectInfo
// 00007FF6F8B35350
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInstanceData**      InInstanceData                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMod_TentacleShot_C::ModifyInspectInfo(class AActor** Actor, class UItemInstanceData** InInstanceData, struct FInspectInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_TentacleShot.Mod_TentacleShot_C.ModifyInspectInfo");

	AMod_TentacleShot_C_ModifyInspectInfo_Params params;
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


// Function Mod_TentacleShot.Mod_TentacleShot_C.GetHealthMax
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_TentacleShot_C::GetHealthMax(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_TentacleShot.Mod_TentacleShot_C.GetHealthMax");

	AMod_TentacleShot_C_GetHealthMax_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Mod_TentacleShot.Mod_TentacleShot_C.OnFire
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                from                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector*                to                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WeaponSpread                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_TentacleShot_C::OnFire(struct FVector* from, struct FVector* to, float* WeaponSpread)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_TentacleShot.Mod_TentacleShot_C.OnFire");

	AMod_TentacleShot_C_OnFire_Params params;
	params.from = from;
	params.to = to;
	params.WeaponSpread = WeaponSpread;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_TentacleShot.Mod_TentacleShot_C.OnPreActivate
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AMod_TentacleShot_C::OnPreActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_TentacleShot.Mod_TentacleShot_C.OnPreActivate");

	AMod_TentacleShot_C_OnPreActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_TentacleShot.Mod_TentacleShot_C.ExecuteUbergraph_Mod_TentacleShot
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_TentacleShot_C::ExecuteUbergraph_Mod_TentacleShot(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_TentacleShot.Mod_TentacleShot_C.ExecuteUbergraph_Mod_TentacleShot");

	AMod_TentacleShot_C_ExecuteUbergraph_Mod_TentacleShot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
