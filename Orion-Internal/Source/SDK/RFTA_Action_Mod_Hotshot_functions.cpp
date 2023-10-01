// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_Hotshot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Mod_Hotshot.Action_Mod_Hotshot_C.EvocationTraitDamageMod
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ModDamage                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_Hotshot_C::EvocationTraitDamageMod(float* ModDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Hotshot.Action_Mod_Hotshot_C.EvocationTraitDamageMod");

	UAction_Mod_Hotshot_C_EvocationTraitDamageMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ModDamage != nullptr)
		*ModDamage = params.ModDamage;
}


// Function Action_Mod_Hotshot.Action_Mod_Hotshot_C.ModifyDamage
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Mod_Hotshot_C::ModifyDamage(struct FDamageInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Hotshot.Action_Mod_Hotshot_C.ModifyDamage");

	UAction_Mod_Hotshot_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;
}


// Function Action_Mod_Hotshot.Action_Mod_Hotshot_C.OnPostComputeStats
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Mod_Hotshot_C::OnPostComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Hotshot.Action_Mod_Hotshot_C.OnPostComputeStats");

	UAction_Mod_Hotshot_C_OnPostComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_Hotshot.Action_Mod_Hotshot_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Mod_Hotshot_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Hotshot.Action_Mod_Hotshot_C.OnActionStart");

	UAction_Mod_Hotshot_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_Hotshot.Action_Mod_Hotshot_C.OnCharacterEvent
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_Hotshot_C::OnCharacterEvent(struct FName* EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Hotshot.Action_Mod_Hotshot_C.OnCharacterEvent");

	UAction_Mod_Hotshot_C_OnCharacterEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_Hotshot.Action_Mod_Hotshot_C.OnActionStop
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Mod_Hotshot_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Hotshot.Action_Mod_Hotshot_C.OnActionStop");

	UAction_Mod_Hotshot_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_Hotshot.Action_Mod_Hotshot_C.ExecuteUbergraph_Action_Mod_Hotshot
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_Hotshot_C::ExecuteUbergraph_Action_Mod_Hotshot(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Hotshot.Action_Mod_Hotshot_C.ExecuteUbergraph_Action_Mod_Hotshot");

	UAction_Mod_Hotshot_C_ExecuteUbergraph_Action_Mod_Hotshot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
