// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Quest_Intro_NoDieAction_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Quest_Intro_NoDieAction.Quest_Intro_NoDieAction_C.FilterIncomingDamage
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FDamageInfo             DamageInfoOut                  (Parm, OutParm, ContainsInstancedReference)
// bool                           ShouldApplyDamage              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuest_Intro_NoDieAction_C::FilterIncomingDamage(struct FDamageInfo* DamageInfo, struct FDamageInfo* DamageInfoOut, bool* ShouldApplyDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro_NoDieAction.Quest_Intro_NoDieAction_C.FilterIncomingDamage");

	UQuest_Intro_NoDieAction_C_FilterIncomingDamage_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageInfoOut != nullptr)
		*DamageInfoOut = params.DamageInfoOut;
	if (ShouldApplyDamage != nullptr)
		*ShouldApplyDamage = params.ShouldApplyDamage;
}


// Function Quest_Intro_NoDieAction.Quest_Intro_NoDieAction_C.OnComputeStats
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UQuest_Intro_NoDieAction_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro_NoDieAction.Quest_Intro_NoDieAction_C.OnComputeStats");

	UQuest_Intro_NoDieAction_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Intro_NoDieAction.Quest_Intro_NoDieAction_C.ExecuteUbergraph_Quest_Intro_NoDieAction
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuest_Intro_NoDieAction_C::ExecuteUbergraph_Quest_Intro_NoDieAction(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Intro_NoDieAction.Quest_Intro_NoDieAction_C.ExecuteUbergraph_Quest_Intro_NoDieAction");

	UQuest_Intro_NoDieAction_C_ExecuteUbergraph_Quest_Intro_NoDieAction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
