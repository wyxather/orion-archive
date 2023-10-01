// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_SkillScreen_Unlocked_Beastmaster_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_SkillScreen_Unlocked_Beastmaster.Action_SkillScreen_Unlocked_Beastmaster_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_SkillScreen_Unlocked_Beastmaster_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_SkillScreen_Unlocked_Beastmaster.Action_SkillScreen_Unlocked_Beastmaster_C.OnEnd");

	UAction_SkillScreen_Unlocked_Beastmaster_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_SkillScreen_Unlocked_Beastmaster.Action_SkillScreen_Unlocked_Beastmaster_C.ExecuteUbergraph_Action_SkillScreen_Unlocked_Beastmaster
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_SkillScreen_Unlocked_Beastmaster_C::ExecuteUbergraph_Action_SkillScreen_Unlocked_Beastmaster(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_SkillScreen_Unlocked_Beastmaster.Action_SkillScreen_Unlocked_Beastmaster_C.ExecuteUbergraph_Action_SkillScreen_Unlocked_Beastmaster");

	UAction_SkillScreen_Unlocked_Beastmaster_C_ExecuteUbergraph_Action_SkillScreen_Unlocked_Beastmaster_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
