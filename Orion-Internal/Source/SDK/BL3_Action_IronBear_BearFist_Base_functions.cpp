// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_IronBear_BearFist_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_IronBear_BearFist_Base.Action_IronBear_BearFist_Base_C.NotifyUsed
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_IronBear_BearFist_Base_C::NotifyUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_IronBear_BearFist_Base.Action_IronBear_BearFist_Base_C.NotifyUsed");

	UAction_IronBear_BearFist_Base_C_NotifyUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_IronBear_BearFist_Base.Action_IronBear_BearFist_Base_C.DoBearFistMeleeHit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NormalFireMode                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_IronBear_BearFist_Base_C::DoBearFistMeleeHit(bool NormalFireMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_IronBear_BearFist_Base.Action_IronBear_BearFist_Base_C.DoBearFistMeleeHit");

	UAction_IronBear_BearFist_Base_C_DoBearFistMeleeHit_Params params;
	params.NormalFireMode = NormalFireMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_IronBear_BearFist_Base.Action_IronBear_BearFist_Base_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_IronBear_BearFist_Base_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_IronBear_BearFist_Base.Action_IronBear_BearFist_Base_C.OnBegin");

	UAction_IronBear_BearFist_Base_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_IronBear_BearFist_Base.Action_IronBear_BearFist_Base_C.ExecuteUbergraph_Action_IronBear_BearFist_Base
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_IronBear_BearFist_Base_C::ExecuteUbergraph_Action_IronBear_BearFist_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_IronBear_BearFist_Base.Action_IronBear_BearFist_Base_C.ExecuteUbergraph_Action_IronBear_BearFist_Base");

	UAction_IronBear_BearFist_Base_C_ExecuteUbergraph_Action_IronBear_BearFist_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
