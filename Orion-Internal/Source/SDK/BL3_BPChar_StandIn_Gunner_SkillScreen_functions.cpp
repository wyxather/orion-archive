// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_StandIn_Gunner_SkillScreen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_StandIn_Gunner_SkillScreen.BPChar_StandIn_Gunner_SkillScreen_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_StandIn_Gunner_SkillScreen_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_StandIn_Gunner_SkillScreen.BPChar_StandIn_Gunner_SkillScreen_C.UserConstructionScript");

	ABPChar_StandIn_Gunner_SkillScreen_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_StandIn_Gunner_SkillScreen.BPChar_StandIn_Gunner_SkillScreen_C.HideHologramProjector
// (BlueprintCallable, BlueprintEvent)

void ABPChar_StandIn_Gunner_SkillScreen_C::HideHologramProjector()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_StandIn_Gunner_SkillScreen.BPChar_StandIn_Gunner_SkillScreen_C.HideHologramProjector");

	ABPChar_StandIn_Gunner_SkillScreen_C_HideHologramProjector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_StandIn_Gunner_SkillScreen.BPChar_StandIn_Gunner_SkillScreen_C.ShowHologramProjector
// (BlueprintCallable, BlueprintEvent)

void ABPChar_StandIn_Gunner_SkillScreen_C::ShowHologramProjector()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_StandIn_Gunner_SkillScreen.BPChar_StandIn_Gunner_SkillScreen_C.ShowHologramProjector");

	ABPChar_StandIn_Gunner_SkillScreen_C_ShowHologramProjector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_StandIn_Gunner_SkillScreen.BPChar_StandIn_Gunner_SkillScreen_C.ExecuteUbergraph_BPChar_StandIn_Gunner_SkillScreen
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_StandIn_Gunner_SkillScreen_C::ExecuteUbergraph_BPChar_StandIn_Gunner_SkillScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_StandIn_Gunner_SkillScreen.BPChar_StandIn_Gunner_SkillScreen_C.ExecuteUbergraph_BPChar_StandIn_Gunner_SkillScreen");

	ABPChar_StandIn_Gunner_SkillScreen_C_ExecuteUbergraph_BPChar_StandIn_Gunner_SkillScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
