// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ActionParent_Siren_SkillArms_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ActionParent_Siren_SkillArms.ActionParent_Siren_SkillArms_C.AnimNotify_FadeOutArms
// (BlueprintCallable, BlueprintEvent)

void UActionParent_Siren_SkillArms_C::AnimNotify_FadeOutArms()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionParent_Siren_SkillArms.ActionParent_Siren_SkillArms_C.AnimNotify_FadeOutArms");

	UActionParent_Siren_SkillArms_C_AnimNotify_FadeOutArms_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionParent_Siren_SkillArms.ActionParent_Siren_SkillArms_C.AnimNotify_FadeInArms
// (BlueprintCallable, BlueprintEvent)

void UActionParent_Siren_SkillArms_C::AnimNotify_FadeInArms()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionParent_Siren_SkillArms.ActionParent_Siren_SkillArms_C.AnimNotify_FadeInArms");

	UActionParent_Siren_SkillArms_C_AnimNotify_FadeInArms_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionParent_Siren_SkillArms.ActionParent_Siren_SkillArms_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UActionParent_Siren_SkillArms_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionParent_Siren_SkillArms.ActionParent_Siren_SkillArms_C.OnBegin");

	UActionParent_Siren_SkillArms_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionParent_Siren_SkillArms.ActionParent_Siren_SkillArms_C.ExecuteUbergraph_ActionParent_Siren_SkillArms
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UActionParent_Siren_SkillArms_C::ExecuteUbergraph_ActionParent_Siren_SkillArms(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionParent_Siren_SkillArms.ActionParent_Siren_SkillArms_C.ExecuteUbergraph_ActionParent_Siren_SkillArms");

	UActionParent_Siren_SkillArms_C_ExecuteUbergraph_ActionParent_Siren_SkillArms_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
