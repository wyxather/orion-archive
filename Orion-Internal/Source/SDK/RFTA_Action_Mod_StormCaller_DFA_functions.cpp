// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_StormCaller_DFA_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Mod_StormCaller_DFA.Action_Mod_StormCaller_DFA_C.OnActionAdded
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActionBase**            Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_StormCaller_DFA_C::OnActionAdded(class UActionBase** Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_StormCaller_DFA.Action_Mod_StormCaller_DFA_C.OnActionAdded");

	UAction_Mod_StormCaller_DFA_C_OnActionAdded_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_StormCaller_DFA.Action_Mod_StormCaller_DFA_C.FilterIncomingDamage
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FDamageInfo             DamageInfoOut                  (Parm, OutParm, ContainsInstancedReference)
// bool                           ShouldApplyDamage              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Mod_StormCaller_DFA_C::FilterIncomingDamage(struct FDamageInfo* DamageInfo, struct FDamageInfo* DamageInfoOut, bool* ShouldApplyDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_StormCaller_DFA.Action_Mod_StormCaller_DFA_C.FilterIncomingDamage");

	UAction_Mod_StormCaller_DFA_C_FilterIncomingDamage_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageInfoOut != nullptr)
		*DamageInfoOut = params.DamageInfoOut;
	if (ShouldApplyDamage != nullptr)
		*ShouldApplyDamage = params.ShouldApplyDamage;
}


// Function Action_Mod_StormCaller_DFA.Action_Mod_StormCaller_DFA_C.ModifyDamage
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Mod_StormCaller_DFA_C::ModifyDamage(struct FDamageInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_StormCaller_DFA.Action_Mod_StormCaller_DFA_C.ModifyDamage");

	UAction_Mod_StormCaller_DFA_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;
}


// Function Action_Mod_StormCaller_DFA.Action_Mod_StormCaller_DFA_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Mod_StormCaller_DFA_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_StormCaller_DFA.Action_Mod_StormCaller_DFA_C.OnActionStart");

	UAction_Mod_StormCaller_DFA_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_StormCaller_DFA.Action_Mod_StormCaller_DFA_C.OnDOT
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UAction_Mod_StormCaller_DFA_C::OnDOT()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_StormCaller_DFA.Action_Mod_StormCaller_DFA_C.OnDOT");

	UAction_Mod_StormCaller_DFA_C_OnDOT_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_StormCaller_DFA.Action_Mod_StormCaller_DFA_C.OnActionStop
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Mod_StormCaller_DFA_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_StormCaller_DFA.Action_Mod_StormCaller_DFA_C.OnActionStop");

	UAction_Mod_StormCaller_DFA_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_StormCaller_DFA.Action_Mod_StormCaller_DFA_C.OnOwnerEnteredInteractive
// 00007FF6F8B35350
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  StateName                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_StormCaller_DFA_C::OnOwnerEnteredInteractive(struct FName* StateName, class AActor** Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_StormCaller_DFA.Action_Mod_StormCaller_DFA_C.OnOwnerEnteredInteractive");

	UAction_Mod_StormCaller_DFA_C_OnOwnerEnteredInteractive_Params params;
	params.StateName = StateName;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_StormCaller_DFA.Action_Mod_StormCaller_DFA_C.ExecuteUbergraph_Action_Mod_StormCaller_DFA
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_StormCaller_DFA_C::ExecuteUbergraph_Action_Mod_StormCaller_DFA(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_StormCaller_DFA.Action_Mod_StormCaller_DFA_C.ExecuteUbergraph_Action_Mod_StormCaller_DFA");

	UAction_Mod_StormCaller_DFA_C_ExecuteUbergraph_Action_Mod_StormCaller_DFA_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
