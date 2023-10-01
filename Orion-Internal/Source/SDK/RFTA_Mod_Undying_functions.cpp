// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_Undying_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mod_Undying.Mod_Undying_C.HasEzlansBand
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           HasEzlans                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMod_Undying_C::HasEzlansBand(class AActor** Actor, bool* HasEzlans)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Undying.Mod_Undying_C.HasEzlansBand");

	AMod_Undying_C_HasEzlansBand_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasEzlans != nullptr)
		*HasEzlans = params.HasEzlans;
}


// Function Mod_Undying.Mod_Undying_C.GetResurrectionBuffDurationScalar
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_Undying_C::GetResurrectionBuffDurationScalar(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Undying.Mod_Undying_C.GetResurrectionBuffDurationScalar");

	AMod_Undying_C_GetResurrectionBuffDurationScalar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Mod_Undying.Mod_Undying_C.GetDispalyHealthScalar
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Scalar                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_Undying_C::GetDispalyHealthScalar(float* Scalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Undying.Mod_Undying_C.GetDispalyHealthScalar");

	AMod_Undying_C_GetDispalyHealthScalar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scalar != nullptr)
		*Scalar = params.Scalar;
}


// Function Mod_Undying.Mod_Undying_C.GetReviveHealthScalar
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          HealthScalar                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_Undying_C::GetReviveHealthScalar(float* HealthScalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Undying.Mod_Undying_C.GetReviveHealthScalar");

	AMod_Undying_C_GetReviveHealthScalar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HealthScalar != nullptr)
		*HealthScalar = params.HealthScalar;
}


// Function Mod_Undying.Mod_Undying_C.DoAction
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActionComponent**       ActionComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ActionID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_Undying_C::DoAction(class UActionComponent** ActionComponent, int* ActionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Undying.Mod_Undying_C.DoAction");

	AMod_Undying_C_DoAction_Params params;
	params.ActionComponent = ActionComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActionID != nullptr)
		*ActionID = params.ActionID;
}


// Function Mod_Undying.Mod_Undying_C.ModifyInspectInfo
// 00007FF6F8B35350
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInstanceData**      InInstanceData                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMod_Undying_C::ModifyInspectInfo(class AActor** Actor, class UItemInstanceData** InInstanceData, struct FInspectInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Undying.Mod_Undying_C.ModifyInspectInfo");

	AMod_Undying_C_ModifyInspectInfo_Params params;
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


// Function Mod_Undying.Mod_Undying_C.OnChargesChanged
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Charges                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_Undying_C::OnChargesChanged(int* Charges)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Undying.Mod_Undying_C.OnChargesChanged");

	AMod_Undying_C_OnChargesChanged_Params params;
	params.Charges = Charges;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_Undying.Mod_Undying_C.OnAttached
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AMod_Undying_C::OnAttached()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Undying.Mod_Undying_C.OnAttached");

	AMod_Undying_C_OnAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_Undying.Mod_Undying_C.AddModPower
// 00007FF6F8B35350
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         BonusModPowerMod               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_Undying_C::AddModPower(float* Damage, float* BonusModPowerMod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Undying.Mod_Undying_C.AddModPower");

	AMod_Undying_C_AddModPower_Params params;
	params.Damage = Damage;
	params.BonusModPowerMod = BonusModPowerMod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_Undying.Mod_Undying_C.ExecuteUbergraph_Mod_Undying
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_Undying_C::ExecuteUbergraph_Mod_Undying(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Undying.Mod_Undying_C.ExecuteUbergraph_Mod_Undying");

	AMod_Undying_C_ExecuteUbergraph_Mod_Undying_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
