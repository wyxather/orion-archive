// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_MantleOfThorns_Buff_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_MantleOfThorns_Buff.Action_MantleOfThorns_Buff_C.ReflectDamage
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UAction_MantleOfThorns_Buff_C::ReflectDamage(struct FDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_MantleOfThorns_Buff.Action_MantleOfThorns_Buff_C.ReflectDamage");

	UAction_MantleOfThorns_Buff_C_ReflectDamage_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_MantleOfThorns_Buff.Action_MantleOfThorns_Buff_C.FilterIncomingDamage
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FDamageInfo             DamageInfoOut                  (Parm, OutParm, ContainsInstancedReference)
// bool                           ShouldApplyDamage              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_MantleOfThorns_Buff_C::FilterIncomingDamage(struct FDamageInfo* DamageInfo, struct FDamageInfo* DamageInfoOut, bool* ShouldApplyDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_MantleOfThorns_Buff.Action_MantleOfThorns_Buff_C.FilterIncomingDamage");

	UAction_MantleOfThorns_Buff_C_FilterIncomingDamage_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageInfoOut != nullptr)
		*DamageInfoOut = params.DamageInfoOut;
	if (ShouldApplyDamage != nullptr)
		*ShouldApplyDamage = params.ShouldApplyDamage;
}


// Function Action_MantleOfThorns_Buff.Action_MantleOfThorns_Buff_C.ModifyDamage
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_MantleOfThorns_Buff_C::ModifyDamage(struct FDamageInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_MantleOfThorns_Buff.Action_MantleOfThorns_Buff_C.ModifyDamage");

	UAction_MantleOfThorns_Buff_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;
}


// Function Action_MantleOfThorns_Buff.Action_MantleOfThorns_Buff_C.IsMeleeClass
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass**                 Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAction_MantleOfThorns_Buff_C::IsMeleeClass(class UClass** Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_MantleOfThorns_Buff.Action_MantleOfThorns_Buff_C.IsMeleeClass");

	UAction_MantleOfThorns_Buff_C_IsMeleeClass_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Action_MantleOfThorns_Buff.Action_MantleOfThorns_Buff_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_MantleOfThorns_Buff_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_MantleOfThorns_Buff.Action_MantleOfThorns_Buff_C.OnActionStart");

	UAction_MantleOfThorns_Buff_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_MantleOfThorns_Buff.Action_MantleOfThorns_Buff_C.OnActionStop
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_MantleOfThorns_Buff_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_MantleOfThorns_Buff.Action_MantleOfThorns_Buff_C.OnActionStop");

	UAction_MantleOfThorns_Buff_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_MantleOfThorns_Buff.Action_MantleOfThorns_Buff_C.ExecuteUbergraph_Action_MantleOfThorns_Buff
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_MantleOfThorns_Buff_C::ExecuteUbergraph_Action_MantleOfThorns_Buff(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_MantleOfThorns_Buff.Action_MantleOfThorns_Buff_C.ExecuteUbergraph_Action_MantleOfThorns_Buff");

	UAction_MantleOfThorns_Buff_C_ExecuteUbergraph_Action_MantleOfThorns_Buff_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
