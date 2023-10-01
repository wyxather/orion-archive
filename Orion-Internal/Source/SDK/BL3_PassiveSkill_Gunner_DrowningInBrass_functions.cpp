// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Gunner_DrowningInBrass_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Gunner_DrowningInBrass.PassiveSkill_Gunner_DrowningInBrass_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Gunner_DrowningInBrass_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_DrowningInBrass.PassiveSkill_Gunner_DrowningInBrass_C.OnActivated");

	UPassiveSkill_Gunner_DrowningInBrass_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Gunner_DrowningInBrass.PassiveSkill_Gunner_DrowningInBrass_C.CausedDeath_DrowningInBrass
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPassiveSkill_Gunner_DrowningInBrass_C::CausedDeath_DrowningInBrass(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_DrowningInBrass.PassiveSkill_Gunner_DrowningInBrass_C.CausedDeath_DrowningInBrass");

	UPassiveSkill_Gunner_DrowningInBrass_C_CausedDeath_DrowningInBrass_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Gunner_DrowningInBrass.PassiveSkill_Gunner_DrowningInBrass_C.ExecuteUbergraph_PassiveSkill_Gunner_DrowningInBrass
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Gunner_DrowningInBrass_C::ExecuteUbergraph_PassiveSkill_Gunner_DrowningInBrass(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Gunner_DrowningInBrass.PassiveSkill_Gunner_DrowningInBrass_C.ExecuteUbergraph_PassiveSkill_Gunner_DrowningInBrass");

	UPassiveSkill_Gunner_DrowningInBrass_C_ExecuteUbergraph_PassiveSkill_Gunner_DrowningInBrass_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
