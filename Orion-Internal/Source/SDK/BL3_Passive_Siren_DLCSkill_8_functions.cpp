// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Siren_DLCSkill_8_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Siren_DLCSkill_8.Passive_Siren_DLCSkill_7_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_Siren_DLCSkill_7_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Siren_DLCSkill_8.Passive_Siren_DLCSkill_7_C.OnActivated");

	UPassive_Siren_DLCSkill_7_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Siren_DLCSkill_8.Passive_Siren_DLCSkill_7_C.DLCSkill7_OnCausedDeath
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPassive_Siren_DLCSkill_7_C::DLCSkill7_OnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Siren_DLCSkill_8.Passive_Siren_DLCSkill_7_C.DLCSkill7_OnCausedDeath");

	UPassive_Siren_DLCSkill_7_C_DLCSkill7_OnCausedDeath_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Siren_DLCSkill_8.Passive_Siren_DLCSkill_7_C.ExecuteUbergraph_Passive_Siren_DLCSkill_8
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Siren_DLCSkill_7_C::ExecuteUbergraph_Passive_Siren_DLCSkill_8(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Siren_DLCSkill_8.Passive_Siren_DLCSkill_7_C.ExecuteUbergraph_Passive_Siren_DLCSkill_8");

	UPassive_Siren_DLCSkill_7_C_ExecuteUbergraph_Passive_Siren_DLCSkill_8_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
