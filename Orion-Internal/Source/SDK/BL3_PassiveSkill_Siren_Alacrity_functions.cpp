// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_Alacrity_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Siren_Alacrity.PassiveSkill_Siren_Alacrity_C.SirenActionAbilityTrigger
// (BlueprintCallable, BlueprintEvent)

void UPassiveSkill_Siren_Alacrity_C::SirenActionAbilityTrigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Alacrity.PassiveSkill_Siren_Alacrity_C.SirenActionAbilityTrigger");

	UPassiveSkill_Siren_Alacrity_C_SirenActionAbilityTrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_Alacrity.PassiveSkill_Siren_Alacrity_C.ExecuteUbergraph_PassiveSkill_Siren_Alacrity
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_Alacrity_C::ExecuteUbergraph_PassiveSkill_Siren_Alacrity(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Alacrity.PassiveSkill_Siren_Alacrity_C.ExecuteUbergraph_PassiveSkill_Siren_Alacrity");

	UPassiveSkill_Siren_Alacrity_C_ExecuteUbergraph_PassiveSkill_Siren_Alacrity_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
