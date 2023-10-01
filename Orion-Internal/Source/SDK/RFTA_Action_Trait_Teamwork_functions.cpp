// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Trait_Teamwork_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Trait_Teamwork.Action_Trait_Teamwork_C.ModifyInspectInfo
// 00007FF6F8B35350
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           InspectLevel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Trait_Teamwork_C::ModifyInspectInfo(class AActor** Actor, int* InspectLevel, struct FInspectInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Trait_Teamwork.Action_Trait_Teamwork_C.ModifyInspectInfo");

	UAction_Trait_Teamwork_C_ModifyInspectInfo_Params params;
	params.Actor = Actor;
	params.InspectLevel = InspectLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;
}


// Function Action_Trait_Teamwork.Action_Trait_Teamwork_C.GetExperienceMod
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Trait_Teamwork_C::GetExperienceMod(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Trait_Teamwork.Action_Trait_Teamwork_C.GetExperienceMod");

	UAction_Trait_Teamwork_C_GetExperienceMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Action_Trait_Teamwork.Action_Trait_Teamwork_C.GetModPowerMod
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Trait_Teamwork_C::GetModPowerMod(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Trait_Teamwork.Action_Trait_Teamwork_C.GetModPowerMod");

	UAction_Trait_Teamwork_C_GetModPowerMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Action_Trait_Teamwork.Action_Trait_Teamwork_C.OnComputeStats
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Trait_Teamwork_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Trait_Teamwork.Action_Trait_Teamwork_C.OnComputeStats");

	UAction_Trait_Teamwork_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Trait_Teamwork.Action_Trait_Teamwork_C.OnReapplyBuff
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_Trait_Teamwork_C::OnReapplyBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Trait_Teamwork.Action_Trait_Teamwork_C.OnReapplyBuff");

	UAction_Trait_Teamwork_C_OnReapplyBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Trait_Teamwork.Action_Trait_Teamwork_C.OnLevelChanged
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Trait_Teamwork_C::OnLevelChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Trait_Teamwork.Action_Trait_Teamwork_C.OnLevelChanged");

	UAction_Trait_Teamwork_C_OnLevelChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Trait_Teamwork.Action_Trait_Teamwork_C.ExecuteUbergraph_Action_Trait_Teamwork
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Trait_Teamwork_C::ExecuteUbergraph_Action_Trait_Teamwork(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Trait_Teamwork.Action_Trait_Teamwork_C.ExecuteUbergraph_Action_Trait_Teamwork");

	UAction_Trait_Teamwork_C_ExecuteUbergraph_Action_Trait_Teamwork_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
