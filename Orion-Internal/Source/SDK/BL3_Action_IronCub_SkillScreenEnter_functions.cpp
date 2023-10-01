// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_IronCub_SkillScreenEnter_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_IronCub_SkillScreenEnter.Action_IronCub_SkillScreenEnter_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_IronCub_SkillScreenEnter_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_IronCub_SkillScreenEnter.Action_IronCub_SkillScreenEnter_C.OnBegin");

	UAction_IronCub_SkillScreenEnter_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_IronCub_SkillScreenEnter.Action_IronCub_SkillScreenEnter_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_IronCub_SkillScreenEnter_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_IronCub_SkillScreenEnter.Action_IronCub_SkillScreenEnter_C.OnEnd");

	UAction_IronCub_SkillScreenEnter_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_IronCub_SkillScreenEnter.Action_IronCub_SkillScreenEnter_C.ExecuteUbergraph_Action_IronCub_SkillScreenEnter
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_IronCub_SkillScreenEnter_C::ExecuteUbergraph_Action_IronCub_SkillScreenEnter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_IronCub_SkillScreenEnter.Action_IronCub_SkillScreenEnter_C.ExecuteUbergraph_Action_IronCub_SkillScreenEnter");

	UAction_IronCub_SkillScreenEnter_C_ExecuteUbergraph_Action_IronCub_SkillScreenEnter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
