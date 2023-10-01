// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PunkFemale_Dance1_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_PunkFemale_Dance1.Action_PunkFemale_Dance1_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PunkFemale_Dance1_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PunkFemale_Dance1.Action_PunkFemale_Dance1_C.OnEnd");

	UAction_PunkFemale_Dance1_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PunkFemale_Dance1.Action_PunkFemale_Dance1_C.ExecuteUbergraph_Action_PunkFemale_Dance1
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PunkFemale_Dance1_C::ExecuteUbergraph_Action_PunkFemale_Dance1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PunkFemale_Dance1.Action_PunkFemale_Dance1_C.ExecuteUbergraph_Action_PunkFemale_Dance1");

	UAction_PunkFemale_Dance1_C_ExecuteUbergraph_Action_PunkFemale_Dance1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
