// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Debuff_Corrosive_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Debuff_Corrosive.Action_Debuff_Corrosive_C.FilterIncomingDamage
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FDamageInfo             DamageInfoOut                  (Parm, OutParm, ContainsInstancedReference)
// bool                           ShouldApplyDamage              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Debuff_Corrosive_C::FilterIncomingDamage(struct FDamageInfo* DamageInfo, struct FDamageInfo* DamageInfoOut, bool* ShouldApplyDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_Corrosive.Action_Debuff_Corrosive_C.FilterIncomingDamage");

	UAction_Debuff_Corrosive_C_FilterIncomingDamage_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageInfoOut != nullptr)
		*DamageInfoOut = params.DamageInfoOut;
	if (ShouldApplyDamage != nullptr)
		*ShouldApplyDamage = params.ShouldApplyDamage;
}


// Function Action_Debuff_Corrosive.Action_Debuff_Corrosive_C.OnPostComputeStats
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Debuff_Corrosive_C::OnPostComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_Corrosive.Action_Debuff_Corrosive_C.OnPostComputeStats");

	UAction_Debuff_Corrosive_C_OnPostComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Debuff_Corrosive.Action_Debuff_Corrosive_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Debuff_Corrosive_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_Corrosive.Action_Debuff_Corrosive_C.OnActionStart");

	UAction_Debuff_Corrosive_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Debuff_Corrosive.Action_Debuff_Corrosive_C.ExecuteUbergraph_Action_Debuff_Corrosive
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Debuff_Corrosive_C::ExecuteUbergraph_Action_Debuff_Corrosive(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_Corrosive.Action_Debuff_Corrosive_C.ExecuteUbergraph_Action_Debuff_Corrosive");

	UAction_Debuff_Corrosive_C_ExecuteUbergraph_Action_Debuff_Corrosive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
