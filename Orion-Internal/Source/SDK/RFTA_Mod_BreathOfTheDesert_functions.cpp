// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_BreathOfTheDesert_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mod_BreathOfTheDesert.Mod_BreathOfTheDesert_C.ModifyDamage
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMod_BreathOfTheDesert_C::ModifyDamage(struct FDamageInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_BreathOfTheDesert.Mod_BreathOfTheDesert_C.ModifyDamage");

	AMod_BreathOfTheDesert_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;
}


// Function Mod_BreathOfTheDesert.Mod_BreathOfTheDesert_C.DoAction
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActionComponent**       ActionComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ActionID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_BreathOfTheDesert_C::DoAction(class UActionComponent** ActionComponent, int* ActionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_BreathOfTheDesert.Mod_BreathOfTheDesert_C.DoAction");

	AMod_BreathOfTheDesert_C_DoAction_Params params;
	params.ActionComponent = ActionComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActionID != nullptr)
		*ActionID = params.ActionID;
}


// Function Mod_BreathOfTheDesert.Mod_BreathOfTheDesert_C.ModifyInspectInfo
// 00007FF6F8B35350
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInstanceData**      InInstanceData                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMod_BreathOfTheDesert_C::ModifyInspectInfo(class AActor** Actor, class UItemInstanceData** InInstanceData, struct FInspectInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_BreathOfTheDesert.Mod_BreathOfTheDesert_C.ModifyInspectInfo");

	AMod_BreathOfTheDesert_C_ModifyInspectInfo_Params params;
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


// Function Mod_BreathOfTheDesert.Mod_BreathOfTheDesert_C.OnBeginUse
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AMod_BreathOfTheDesert_C::OnBeginUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_BreathOfTheDesert.Mod_BreathOfTheDesert_C.OnBeginUse");

	AMod_BreathOfTheDesert_C_OnBeginUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_BreathOfTheDesert.Mod_BreathOfTheDesert_C.OnEndUse
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AMod_BreathOfTheDesert_C::OnEndUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_BreathOfTheDesert.Mod_BreathOfTheDesert_C.OnEndUse");

	AMod_BreathOfTheDesert_C_OnEndUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_BreathOfTheDesert.Mod_BreathOfTheDesert_C.OnPreviewStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AMod_BreathOfTheDesert_C::OnPreviewStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_BreathOfTheDesert.Mod_BreathOfTheDesert_C.OnPreviewStart");

	AMod_BreathOfTheDesert_C_OnPreviewStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_BreathOfTheDesert.Mod_BreathOfTheDesert_C.ExecuteUbergraph_Mod_BreathOfTheDesert
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_BreathOfTheDesert_C::ExecuteUbergraph_Mod_BreathOfTheDesert(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_BreathOfTheDesert.Mod_BreathOfTheDesert_C.ExecuteUbergraph_Mod_BreathOfTheDesert");

	AMod_BreathOfTheDesert_C_ExecuteUbergraph_Mod_BreathOfTheDesert_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
