// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_Undying_Revived_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Mod_Undying_Revived.Action_Mod_Undying_Revived_C.FilterIncomingDamage
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FDamageInfo             DamageInfoOut                  (Parm, OutParm, ContainsInstancedReference)
// bool                           ShouldApplyDamage              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Mod_Undying_Revived_C::FilterIncomingDamage(struct FDamageInfo* DamageInfo, struct FDamageInfo* DamageInfoOut, bool* ShouldApplyDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Undying_Revived.Action_Mod_Undying_Revived_C.FilterIncomingDamage");

	UAction_Mod_Undying_Revived_C_FilterIncomingDamage_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageInfoOut != nullptr)
		*DamageInfoOut = params.DamageInfoOut;
	if (ShouldApplyDamage != nullptr)
		*ShouldApplyDamage = params.ShouldApplyDamage;
}


// Function Action_Mod_Undying_Revived.Action_Mod_Undying_Revived_C.OnComputeStats
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Mod_Undying_Revived_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Undying_Revived.Action_Mod_Undying_Revived_C.OnComputeStats");

	UAction_Mod_Undying_Revived_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_Undying_Revived.Action_Mod_Undying_Revived_C.ExecuteUbergraph_Action_Mod_Undying_Revived
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_Undying_Revived_C::ExecuteUbergraph_Action_Mod_Undying_Revived(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Undying_Revived.Action_Mod_Undying_Revived_C.ExecuteUbergraph_Action_Mod_Undying_Revived");

	UAction_Mod_Undying_Revived_C_ExecuteUbergraph_Action_Mod_Undying_Revived_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
