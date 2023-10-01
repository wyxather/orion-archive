// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_HowlersImmunity_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Mod_HowlersImmunity.Action_Mod_HowlersImmunity_C.Check Is Friendly?
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AActor*                  Cause                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAction_Mod_HowlersImmunity_C::Check_Is_Friendly_(class AActor** Cause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_HowlersImmunity.Action_Mod_HowlersImmunity_C.Check Is Friendly?");

	UAction_Mod_HowlersImmunity_C_Check_Is_Friendly__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cause != nullptr)
		*Cause = params.Cause;

	return params.ReturnValue;
}


// Function Action_Mod_HowlersImmunity.Action_Mod_HowlersImmunity_C.OnPostComputeStats
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Mod_HowlersImmunity_C::OnPostComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_HowlersImmunity.Action_Mod_HowlersImmunity_C.OnPostComputeStats");

	UAction_Mod_HowlersImmunity_C_OnPostComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_HowlersImmunity.Action_Mod_HowlersImmunity_C.ExecuteUbergraph_Action_Mod_HowlersImmunity
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_HowlersImmunity_C::ExecuteUbergraph_Action_Mod_HowlersImmunity(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_HowlersImmunity.Action_Mod_HowlersImmunity_C.ExecuteUbergraph_Action_Mod_HowlersImmunity");

	UAction_Mod_HowlersImmunity_C_ExecuteUbergraph_Action_Mod_HowlersImmunity_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
