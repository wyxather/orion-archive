// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_IronBear_BearFist_AutoBear_R_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_IronBear_BearFist_AutoBear_R.Action_IronBear_BearFist_AutoBear_R_C.IronBearMeleeNotify
// (BlueprintCallable, BlueprintEvent)

void UAction_IronBear_BearFist_AutoBear_R_C::IronBearMeleeNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_IronBear_BearFist_AutoBear_R.Action_IronBear_BearFist_AutoBear_R_C.IronBearMeleeNotify");

	UAction_IronBear_BearFist_AutoBear_R_C_IronBearMeleeNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_IronBear_BearFist_AutoBear_R.Action_IronBear_BearFist_AutoBear_R_C.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_IronBear_BearFist_AutoBear_R_C::OnServerBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_IronBear_BearFist_AutoBear_R.Action_IronBear_BearFist_AutoBear_R_C.OnServerBegin");

	UAction_IronBear_BearFist_AutoBear_R_C_OnServerBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_IronBear_BearFist_AutoBear_R.Action_IronBear_BearFist_AutoBear_R_C.ExecuteUbergraph_Action_IronBear_BearFist_AutoBear_R
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_IronBear_BearFist_AutoBear_R_C::ExecuteUbergraph_Action_IronBear_BearFist_AutoBear_R(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_IronBear_BearFist_AutoBear_R.Action_IronBear_BearFist_AutoBear_R_C.ExecuteUbergraph_Action_IronBear_BearFist_AutoBear_R");

	UAction_IronBear_BearFist_AutoBear_R_C_ExecuteUbergraph_Action_IronBear_BearFist_AutoBear_R_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
