// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_StandIn_Siren_SkillScreen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_StandIn_Siren_SkillScreen.BPChar_StandIn_Siren_SkillScreen_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_StandIn_Siren_SkillScreen_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_StandIn_Siren_SkillScreen.BPChar_StandIn_Siren_SkillScreen_C.UserConstructionScript");

	ABPChar_StandIn_Siren_SkillScreen_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_StandIn_Siren_SkillScreen.BPChar_StandIn_Siren_SkillScreen_C.UnhideCharacterArms
// (BlueprintCallable, BlueprintEvent)

void ABPChar_StandIn_Siren_SkillScreen_C::UnhideCharacterArms()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_StandIn_Siren_SkillScreen.BPChar_StandIn_Siren_SkillScreen_C.UnhideCharacterArms");

	ABPChar_StandIn_Siren_SkillScreen_C_UnhideCharacterArms_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_StandIn_Siren_SkillScreen.BPChar_StandIn_Siren_SkillScreen_C.HideCharacterArms
// (BlueprintCallable, BlueprintEvent)

void ABPChar_StandIn_Siren_SkillScreen_C::HideCharacterArms()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_StandIn_Siren_SkillScreen.BPChar_StandIn_Siren_SkillScreen_C.HideCharacterArms");

	ABPChar_StandIn_Siren_SkillScreen_C_HideCharacterArms_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_StandIn_Siren_SkillScreen.BPChar_StandIn_Siren_SkillScreen_C.ExecuteUbergraph_BPChar_StandIn_Siren_SkillScreen
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_StandIn_Siren_SkillScreen_C::ExecuteUbergraph_BPChar_StandIn_Siren_SkillScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_StandIn_Siren_SkillScreen.BPChar_StandIn_Siren_SkillScreen_C.ExecuteUbergraph_BPChar_StandIn_Siren_SkillScreen");

	ABPChar_StandIn_Siren_SkillScreen_C_ExecuteUbergraph_BPChar_StandIn_Siren_SkillScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
