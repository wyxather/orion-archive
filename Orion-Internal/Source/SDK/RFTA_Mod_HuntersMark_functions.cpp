// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_HuntersMark_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mod_HuntersMark.Mod_HuntersMark_C.OnActionRemoved
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActionBase**            ActionObjectBase               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_HuntersMark_C::OnActionRemoved(class UActionBase** ActionObjectBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_HuntersMark.Mod_HuntersMark_C.OnActionRemoved");

	AMod_HuntersMark_C_OnActionRemoved_Params params;
	params.ActionObjectBase = ActionObjectBase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_HuntersMark.Mod_HuntersMark_C.GetCritChanceMod
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_HuntersMark_C::GetCritChanceMod(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_HuntersMark.Mod_HuntersMark_C.GetCritChanceMod");

	AMod_HuntersMark_C_GetCritChanceMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Mod_HuntersMark.Mod_HuntersMark_C.DoAction
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActionComponent**       ActionComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ActionID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_HuntersMark_C::DoAction(class UActionComponent** ActionComponent, int* ActionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_HuntersMark.Mod_HuntersMark_C.DoAction");

	AMod_HuntersMark_C_DoAction_Params params;
	params.ActionComponent = ActionComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActionID != nullptr)
		*ActionID = params.ActionID;
}


// Function Mod_HuntersMark.Mod_HuntersMark_C.ModifyInspectInfo
// 00007FF6F8B35350
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInstanceData**      InInstanceData                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMod_HuntersMark_C::ModifyInspectInfo(class AActor** Actor, class UItemInstanceData** InInstanceData, struct FInspectInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_HuntersMark.Mod_HuntersMark_C.ModifyInspectInfo");

	AMod_HuntersMark_C_ModifyInspectInfo_Params params;
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


// Function Mod_HuntersMark.Mod_HuntersMark_C.OnDetached
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AMod_HuntersMark_C::OnDetached()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_HuntersMark.Mod_HuntersMark_C.OnDetached");

	AMod_HuntersMark_C_OnDetached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_HuntersMark.Mod_HuntersMark_C.ExecuteUbergraph_Mod_HuntersMark
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_HuntersMark_C::ExecuteUbergraph_Mod_HuntersMark(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_HuntersMark.Mod_HuntersMark_C.ExecuteUbergraph_Mod_HuntersMark");

	AMod_HuntersMark_C_ExecuteUbergraph_Mod_HuntersMark_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
