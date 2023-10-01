// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Consumable_FrenzyDust_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Consumable_FrenzyDust.Consumable_FrenzyDust_C.Get Reload Speed
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReloadSpeed                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AConsumable_FrenzyDust_C::Get_Reload_Speed(float* ReloadSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_FrenzyDust.Consumable_FrenzyDust_C.Get Reload Speed");

	AConsumable_FrenzyDust_C_Get_Reload_Speed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReloadSpeed != nullptr)
		*ReloadSpeed = params.ReloadSpeed;
}


// Function Consumable_FrenzyDust.Consumable_FrenzyDust_C.Get FireSpeed
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AConsumable_FrenzyDust_C::Get_FireSpeed(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_FrenzyDust.Consumable_FrenzyDust_C.Get FireSpeed");

	AConsumable_FrenzyDust_C_Get_FireSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Consumable_FrenzyDust.Consumable_FrenzyDust_C.ParamDuration
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AConsumable_FrenzyDust_C::ParamDuration(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_FrenzyDust.Consumable_FrenzyDust_C.ParamDuration");

	AConsumable_FrenzyDust_C_ParamDuration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Consumable_FrenzyDust.Consumable_FrenzyDust_C.Get Ranged Damage Mod
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AConsumable_FrenzyDust_C::Get_Ranged_Damage_Mod(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_FrenzyDust.Consumable_FrenzyDust_C.Get Ranged Damage Mod");

	AConsumable_FrenzyDust_C_Get_Ranged_Damage_Mod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Consumable_FrenzyDust.Consumable_FrenzyDust_C.ModifyInspectInfo
// 00007FF6F8B35350
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInstanceData**      InInstanceData                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AConsumable_FrenzyDust_C::ModifyInspectInfo(class AActor** Actor, class UItemInstanceData** InInstanceData, struct FInspectInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_FrenzyDust.Consumable_FrenzyDust_C.ModifyInspectInfo");

	AConsumable_FrenzyDust_C_ModifyInspectInfo_Params params;
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


// Function Consumable_FrenzyDust.Consumable_FrenzyDust_C.OnActivate
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AConsumable_FrenzyDust_C::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_FrenzyDust.Consumable_FrenzyDust_C.OnActivate");

	AConsumable_FrenzyDust_C_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Consumable_FrenzyDust.Consumable_FrenzyDust_C.DoAction
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActionComponent**       ActionComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Cause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AConsumable_FrenzyDust_C::DoAction(class UActionComponent** ActionComponent, class AActor** Cause, class AActor** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_FrenzyDust.Consumable_FrenzyDust_C.DoAction");

	AConsumable_FrenzyDust_C_DoAction_Params params;
	params.ActionComponent = ActionComponent;
	params.Cause = Cause;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Consumable_FrenzyDust.Consumable_FrenzyDust_C.ExecuteUbergraph_Consumable_FrenzyDust
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AConsumable_FrenzyDust_C::ExecuteUbergraph_Consumable_FrenzyDust(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_FrenzyDust.Consumable_FrenzyDust_C.ExecuteUbergraph_Consumable_FrenzyDust");

	AConsumable_FrenzyDust_C_ExecuteUbergraph_Consumable_FrenzyDust_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
