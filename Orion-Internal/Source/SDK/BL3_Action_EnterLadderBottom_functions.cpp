// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_EnterLadderBottom_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_EnterLadderBottom.Action_EnterLadderBottom_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_EnterLadderBottom_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_EnterLadderBottom.Action_EnterLadderBottom_C.OnBegin");

	UAction_EnterLadderBottom_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_EnterLadderBottom.Action_EnterLadderBottom_C.ExecuteUbergraph_Action_EnterLadderBottom
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_EnterLadderBottom_C::ExecuteUbergraph_Action_EnterLadderBottom(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_EnterLadderBottom.Action_EnterLadderBottom_C.ExecuteUbergraph_Action_EnterLadderBottom");

	UAction_EnterLadderBottom_C_ExecuteUbergraph_Action_EnterLadderBottom_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
