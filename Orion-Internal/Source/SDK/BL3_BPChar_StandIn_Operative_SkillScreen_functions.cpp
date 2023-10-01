// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_StandIn_Operative_SkillScreen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_StandIn_Operative_SkillScreen.BPChar_StandIn_Operative_SkillScreen_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_StandIn_Operative_SkillScreen_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_StandIn_Operative_SkillScreen.BPChar_StandIn_Operative_SkillScreen_C.UserConstructionScript");

	ABPChar_StandIn_Operative_SkillScreen_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_StandIn_Operative_SkillScreen.BPChar_StandIn_Operative_SkillScreen_C.ShowShoulderCannon
// (BlueprintCallable, BlueprintEvent)

void ABPChar_StandIn_Operative_SkillScreen_C::ShowShoulderCannon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_StandIn_Operative_SkillScreen.BPChar_StandIn_Operative_SkillScreen_C.ShowShoulderCannon");

	ABPChar_StandIn_Operative_SkillScreen_C_ShowShoulderCannon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_StandIn_Operative_SkillScreen.BPChar_StandIn_Operative_SkillScreen_C.HideShoulderCannon
// (BlueprintCallable, BlueprintEvent)

void ABPChar_StandIn_Operative_SkillScreen_C::HideShoulderCannon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_StandIn_Operative_SkillScreen.BPChar_StandIn_Operative_SkillScreen_C.HideShoulderCannon");

	ABPChar_StandIn_Operative_SkillScreen_C_HideShoulderCannon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_StandIn_Operative_SkillScreen.BPChar_StandIn_Operative_SkillScreen_C.ExecuteUbergraph_BPChar_StandIn_Operative_SkillScreen
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_StandIn_Operative_SkillScreen_C::ExecuteUbergraph_BPChar_StandIn_Operative_SkillScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_StandIn_Operative_SkillScreen.BPChar_StandIn_Operative_SkillScreen_C.ExecuteUbergraph_BPChar_StandIn_Operative_SkillScreen");

	ABPChar_StandIn_Operative_SkillScreen_C_ExecuteUbergraph_BPChar_StandIn_Operative_SkillScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
