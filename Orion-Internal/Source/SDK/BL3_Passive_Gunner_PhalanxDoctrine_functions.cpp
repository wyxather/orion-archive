// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Gunner_PhalanxDoctrine_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Gunner_PhalanxDoctrine.Passive_Gunner_PhalanxDoctrine_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_Gunner_PhalanxDoctrine_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_PhalanxDoctrine.Passive_Gunner_PhalanxDoctrine_C.OnActivated");

	UPassive_Gunner_PhalanxDoctrine_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_PhalanxDoctrine.Passive_Gunner_PhalanxDoctrine_C.CausedDeath_PhalanxDoctrine
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPassive_Gunner_PhalanxDoctrine_C::CausedDeath_PhalanxDoctrine(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_PhalanxDoctrine.Passive_Gunner_PhalanxDoctrine_C.CausedDeath_PhalanxDoctrine");

	UPassive_Gunner_PhalanxDoctrine_C_CausedDeath_PhalanxDoctrine_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_PhalanxDoctrine.Passive_Gunner_PhalanxDoctrine_C.ExecuteUbergraph_Passive_Gunner_PhalanxDoctrine
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Gunner_PhalanxDoctrine_C::ExecuteUbergraph_Passive_Gunner_PhalanxDoctrine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_PhalanxDoctrine.Passive_Gunner_PhalanxDoctrine_C.ExecuteUbergraph_Passive_Gunner_PhalanxDoctrine");

	UPassive_Gunner_PhalanxDoctrine_C_ExecuteUbergraph_Passive_Gunner_PhalanxDoctrine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
