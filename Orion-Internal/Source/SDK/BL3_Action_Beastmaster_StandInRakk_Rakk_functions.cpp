// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Beastmaster_StandInRakk_Rakk_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Beastmaster_StandInRakk_Rakk.Action_Beastmaster_StandInRakk_Rakk_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Beastmaster_StandInRakk_Rakk_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_StandInRakk_Rakk.Action_Beastmaster_StandInRakk_Rakk_C.OnEnd");

	UAction_Beastmaster_StandInRakk_Rakk_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Beastmaster_StandInRakk_Rakk.Action_Beastmaster_StandInRakk_Rakk_C.ExecuteUbergraph_Action_Beastmaster_StandInRakk_Rakk
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Beastmaster_StandInRakk_Rakk_C::ExecuteUbergraph_Action_Beastmaster_StandInRakk_Rakk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_StandInRakk_Rakk.Action_Beastmaster_StandInRakk_Rakk_C.ExecuteUbergraph_Action_Beastmaster_StandInRakk_Rakk");

	UAction_Beastmaster_StandInRakk_Rakk_C_ExecuteUbergraph_Action_Beastmaster_StandInRakk_Rakk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
