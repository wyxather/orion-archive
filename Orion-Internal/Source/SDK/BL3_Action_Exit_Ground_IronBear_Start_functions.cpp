// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Exit_Ground_IronBear_Start_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Exit_Ground_IronBear_Start.Action_Exit_Ground_IronBear_Start_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Exit_Ground_IronBear_Start_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Exit_Ground_IronBear_Start.Action_Exit_Ground_IronBear_Start_C.OnBegin");

	UAction_Exit_Ground_IronBear_Start_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Exit_Ground_IronBear_Start.Action_Exit_Ground_IronBear_Start_C.OnAnimEnd
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Exit_Ground_IronBear_Start_C::OnAnimEnd(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Exit_Ground_IronBear_Start.Action_Exit_Ground_IronBear_Start_C.OnAnimEnd");

	UAction_Exit_Ground_IronBear_Start_C_OnAnimEnd_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Exit_Ground_IronBear_Start.Action_Exit_Ground_IronBear_Start_C.ExecuteUbergraph_Action_Exit_Ground_IronBear_Start
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Exit_Ground_IronBear_Start_C::ExecuteUbergraph_Action_Exit_Ground_IronBear_Start(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Exit_Ground_IronBear_Start.Action_Exit_Ground_IronBear_Start_C.ExecuteUbergraph_Action_Exit_Ground_IronBear_Start");

	UAction_Exit_Ground_IronBear_Start_C_ExecuteUbergraph_Action_Exit_Ground_IronBear_Start_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
