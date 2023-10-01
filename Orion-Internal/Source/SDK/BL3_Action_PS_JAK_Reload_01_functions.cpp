// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PS_JAK_Reload_01_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_PS_JAK_Reload_01.Action_PS_JAK_Reload_01_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PS_JAK_Reload_01_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PS_JAK_Reload_01.Action_PS_JAK_Reload_01_C.OnEnd");

	UAction_PS_JAK_Reload_01_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PS_JAK_Reload_01.Action_PS_JAK_Reload_01_C.OnAnimEnd
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PS_JAK_Reload_01_C::OnAnimEnd(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PS_JAK_Reload_01.Action_PS_JAK_Reload_01_C.OnAnimEnd");

	UAction_PS_JAK_Reload_01_C_OnAnimEnd_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PS_JAK_Reload_01.Action_PS_JAK_Reload_01_C.ExecuteUbergraph_Action_PS_JAK_Reload_01
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PS_JAK_Reload_01_C::ExecuteUbergraph_Action_PS_JAK_Reload_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PS_JAK_Reload_01.Action_PS_JAK_Reload_01_C.ExecuteUbergraph_Action_PS_JAK_Reload_01");

	UAction_PS_JAK_Reload_01_C_ExecuteUbergraph_Action_PS_JAK_Reload_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
