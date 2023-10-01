// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_RiftWalker_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mod_RiftWalker.Mod_RiftWalker_C.GetDamage
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                          ApplyDamageScalar              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float AMod_RiftWalker_C::GetDamage(bool* ApplyDamageScalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_RiftWalker.Mod_RiftWalker_C.GetDamage");

	AMod_RiftWalker_C_GetDamage_Params params;
	params.ApplyDamageScalar = ApplyDamageScalar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Mod_RiftWalker.Mod_RiftWalker_C.GetPlayerMaxHealth
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 OverrideActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Health                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_RiftWalker_C::GetPlayerMaxHealth(class AActor** OverrideActor, float* Health)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_RiftWalker.Mod_RiftWalker_C.GetPlayerMaxHealth");

	AMod_RiftWalker_C_GetPlayerMaxHealth_Params params;
	params.OverrideActor = OverrideActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Health != nullptr)
		*Health = params.Health;
}


// Function Mod_RiftWalker.Mod_RiftWalker_C.GetHealthMax
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 OverrideActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_RiftWalker_C::GetHealthMax(class AActor** OverrideActor, float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_RiftWalker.Mod_RiftWalker_C.GetHealthMax");

	AMod_RiftWalker_C_GetHealthMax_Params params;
	params.OverrideActor = OverrideActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Mod_RiftWalker.Mod_RiftWalker_C.ModifyDamage
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMod_RiftWalker_C::ModifyDamage(struct FDamageInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_RiftWalker.Mod_RiftWalker_C.ModifyDamage");

	AMod_RiftWalker_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;
}


// Function Mod_RiftWalker.Mod_RiftWalker_C.DoAction
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActionComponent**       ActionComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ActionID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_RiftWalker_C::DoAction(class UActionComponent** ActionComponent, int* ActionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_RiftWalker.Mod_RiftWalker_C.DoAction");

	AMod_RiftWalker_C_DoAction_Params params;
	params.ActionComponent = ActionComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActionID != nullptr)
		*ActionID = params.ActionID;
}


// Function Mod_RiftWalker.Mod_RiftWalker_C.ModifyInspectInfo
// 00007FF6F8B35350
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInstanceData**      InInstanceData                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMod_RiftWalker_C::ModifyInspectInfo(class AActor** Actor, class UItemInstanceData** InInstanceData, struct FInspectInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_RiftWalker.Mod_RiftWalker_C.ModifyInspectInfo");

	AMod_RiftWalker_C_ModifyInspectInfo_Params params;
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


// Function Mod_RiftWalker.Mod_RiftWalker_C.AddModPower
// 00007FF6F8B35350
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         BonusModPowerMod               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_RiftWalker_C::AddModPower(float* Damage, float* BonusModPowerMod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_RiftWalker.Mod_RiftWalker_C.AddModPower");

	AMod_RiftWalker_C_AddModPower_Params params;
	params.Damage = Damage;
	params.BonusModPowerMod = BonusModPowerMod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_RiftWalker.Mod_RiftWalker_C.ExecuteUbergraph_Mod_RiftWalker
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_RiftWalker_C::ExecuteUbergraph_Mod_RiftWalker(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_RiftWalker.Mod_RiftWalker_C.ExecuteUbergraph_Mod_RiftWalker");

	AMod_RiftWalker_C_ExecuteUbergraph_Mod_RiftWalker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
