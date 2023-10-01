// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Gunner_ForceFeedback_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Gunner_ForceFeedback.PassiveSkill_Gunner_ForceFeedback_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Gunner_ForceFeedback_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_ForceFeedback.PassiveSkill_Gunner_ForceFeedback_C.OnActivated");

	UPassiveSkill_Gunner_ForceFeedback_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Gunner_ForceFeedback.PassiveSkill_Gunner_ForceFeedback_C.Capacitation On Caused Death
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPassiveSkill_Gunner_ForceFeedback_C::Capacitation_On_Caused_Death(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_ForceFeedback.PassiveSkill_Gunner_ForceFeedback_C.Capacitation On Caused Death");

	UPassiveSkill_Gunner_ForceFeedback_C_Capacitation_On_Caused_Death_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Gunner_ForceFeedback.PassiveSkill_Gunner_ForceFeedback_C.ExecuteUbergraph_PassiveSkill_Gunner_ForceFeedback
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Gunner_ForceFeedback_C::ExecuteUbergraph_PassiveSkill_Gunner_ForceFeedback(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_ForceFeedback.PassiveSkill_Gunner_ForceFeedback_C.ExecuteUbergraph_PassiveSkill_Gunner_ForceFeedback");

	UPassiveSkill_Gunner_ForceFeedback_C_ExecuteUbergraph_PassiveSkill_Gunner_ForceFeedback_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
