// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AIAction_Patrol_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIAction_Patrol.AIAction_Patrol_C.BndEvt__OnInitializeInstanceEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Patrol
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AGbxAIController*        AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGbxCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAIActionBlueprintContext Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAIAction_Patrol_C::BndEvt__OnInitializeInstanceEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Patrol(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_Patrol.AIAction_Patrol_C.BndEvt__OnInitializeInstanceEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Patrol");

	UAIAction_Patrol_C_BndEvt__OnInitializeInstanceEventBP_AIActionBlueprintDelegate__DelegateSignature_AIAction_Patrol_Params params;
	params.AIController = AIController;
	params.Character = Character;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AIAction_Patrol.AIAction_Patrol_C.ExecuteUbergraph_AIAction_Patrol
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAIAction_Patrol_C::ExecuteUbergraph_AIAction_Patrol(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AIAction_Patrol.AIAction_Patrol_C.ExecuteUbergraph_AIAction_Patrol");

	UAIAction_Patrol_C_ExecuteUbergraph_AIAction_Patrol_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
