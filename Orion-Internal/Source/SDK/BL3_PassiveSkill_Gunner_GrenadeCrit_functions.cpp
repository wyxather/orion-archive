// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Gunner_GrenadeCrit_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Gunner_GrenadeCrit.PassiveSkill_Gunner_GrenadeCrit_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Gunner_GrenadeCrit_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_GrenadeCrit.PassiveSkill_Gunner_GrenadeCrit_C.OnActivated");

	UPassiveSkill_Gunner_GrenadeCrit_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Gunner_GrenadeCrit.PassiveSkill_Gunner_GrenadeCrit_C.ExecuteUbergraph_PassiveSkill_Gunner_GrenadeCrit
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Gunner_GrenadeCrit_C::ExecuteUbergraph_PassiveSkill_Gunner_GrenadeCrit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_GrenadeCrit.PassiveSkill_Gunner_GrenadeCrit_C.ExecuteUbergraph_PassiveSkill_Gunner_GrenadeCrit");

	UPassiveSkill_Gunner_GrenadeCrit_C_ExecuteUbergraph_PassiveSkill_Gunner_GrenadeCrit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
