// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Gunner_CloudOfLead_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Gunner_CloudOfLead.PassiveSkill_Gunner_CloudOfLead_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Gunner_CloudOfLead_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_CloudOfLead.PassiveSkill_Gunner_CloudOfLead_C.OnActivated");

	UPassiveSkill_Gunner_CloudOfLead_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Gunner_CloudOfLead.PassiveSkill_Gunner_CloudOfLead_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Gunner_CloudOfLead_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_CloudOfLead.PassiveSkill_Gunner_CloudOfLead_C.OnDeactivated");

	UPassiveSkill_Gunner_CloudOfLead_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Gunner_CloudOfLead.PassiveSkill_Gunner_CloudOfLead_C.OnPaused
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Gunner_CloudOfLead_C::OnPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_CloudOfLead.PassiveSkill_Gunner_CloudOfLead_C.OnPaused");

	UPassiveSkill_Gunner_CloudOfLead_C_OnPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Gunner_CloudOfLead.PassiveSkill_Gunner_CloudOfLead_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter_IronBear*  IronBear                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Gunner_CloudOfLead_C::CustomEvent_1(class AOakCharacter_IronBear* IronBear)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_CloudOfLead.PassiveSkill_Gunner_CloudOfLead_C.CustomEvent_1");

	UPassiveSkill_Gunner_CloudOfLead_C_CustomEvent_1_Params params;
	params.IronBear = IronBear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Gunner_CloudOfLead.PassiveSkill_Gunner_CloudOfLead_C.ExecuteUbergraph_PassiveSkill_Gunner_CloudOfLead
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Gunner_CloudOfLead_C::ExecuteUbergraph_PassiveSkill_Gunner_CloudOfLead(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_CloudOfLead.PassiveSkill_Gunner_CloudOfLead_C.ExecuteUbergraph_PassiveSkill_Gunner_CloudOfLead");

	UPassiveSkill_Gunner_CloudOfLead_C_ExecuteUbergraph_PassiveSkill_Gunner_CloudOfLead_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
