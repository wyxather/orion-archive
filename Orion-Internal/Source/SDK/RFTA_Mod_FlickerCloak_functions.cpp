// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_FlickerCloak_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mod_FlickerCloak.Mod_FlickerCloak_C.GetShieldHealthPctScalar
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_FlickerCloak_C::GetShieldHealthPctScalar(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FlickerCloak.Mod_FlickerCloak_C.GetShieldHealthPctScalar");

	AMod_FlickerCloak_C_GetShieldHealthPctScalar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Mod_FlickerCloak.Mod_FlickerCloak_C.DoAction
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActionComponent**       ActionComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ActionID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_FlickerCloak_C::DoAction(class UActionComponent** ActionComponent, int* ActionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FlickerCloak.Mod_FlickerCloak_C.DoAction");

	AMod_FlickerCloak_C_DoAction_Params params;
	params.ActionComponent = ActionComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActionID != nullptr)
		*ActionID = params.ActionID;
}


// Function Mod_FlickerCloak.Mod_FlickerCloak_C.GetModActiveRemainingPct
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float AMod_FlickerCloak_C::GetModActiveRemainingPct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FlickerCloak.Mod_FlickerCloak_C.GetModActiveRemainingPct");

	AMod_FlickerCloak_C_GetModActiveRemainingPct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Mod_FlickerCloak.Mod_FlickerCloak_C.ModifyInspectInfo
// 00007FF6F8B35350
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInstanceData**      InInstanceData                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMod_FlickerCloak_C::ModifyInspectInfo(class AActor** Actor, class UItemInstanceData** InInstanceData, struct FInspectInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FlickerCloak.Mod_FlickerCloak_C.ModifyInspectInfo");

	AMod_FlickerCloak_C_ModifyInspectInfo_Params params;
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


// Function Mod_FlickerCloak.Mod_FlickerCloak_C.OnBeginUse
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AMod_FlickerCloak_C::OnBeginUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FlickerCloak.Mod_FlickerCloak_C.OnBeginUse");

	AMod_FlickerCloak_C_OnBeginUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_FlickerCloak.Mod_FlickerCloak_C.AddModPower
// 00007FF6F8B35350
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         BonusModPowerMod               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_FlickerCloak_C::AddModPower(float* Damage, float* BonusModPowerMod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FlickerCloak.Mod_FlickerCloak_C.AddModPower");

	AMod_FlickerCloak_C_AddModPower_Params params;
	params.Damage = Damage;
	params.BonusModPowerMod = BonusModPowerMod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_FlickerCloak.Mod_FlickerCloak_C.ExecuteUbergraph_Mod_FlickerCloak
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_FlickerCloak_C::ExecuteUbergraph_Mod_FlickerCloak(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FlickerCloak.Mod_FlickerCloak_C.ExecuteUbergraph_Mod_FlickerCloak");

	AMod_FlickerCloak_C_ExecuteUbergraph_Mod_FlickerCloak_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
