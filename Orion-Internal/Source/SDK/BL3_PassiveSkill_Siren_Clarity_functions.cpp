// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_Clarity_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Siren_Clarity.PassiveSkill_Siren_Clarity_C.SirenActionAbilityTrigger
// (BlueprintCallable, BlueprintEvent)

void UPassiveSkill_Siren_Clarity_C::SirenActionAbilityTrigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Clarity.PassiveSkill_Siren_Clarity_C.SirenActionAbilityTrigger");

	UPassiveSkill_Siren_Clarity_C_SirenActionAbilityTrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_Clarity.PassiveSkill_Siren_Clarity_C.ExecuteUbergraph_PassiveSkill_Siren_Clarity
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_Clarity_C::ExecuteUbergraph_PassiveSkill_Siren_Clarity(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Clarity.PassiveSkill_Siren_Clarity_C.ExecuteUbergraph_PassiveSkill_Siren_Clarity");

	UPassiveSkill_Siren_Clarity_C_ExecuteUbergraph_PassiveSkill_Siren_Clarity_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
