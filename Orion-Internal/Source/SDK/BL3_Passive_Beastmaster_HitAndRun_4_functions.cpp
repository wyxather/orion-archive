// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_HitAndRun_4_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_HitAndRun_4.Passive_Beastmaster_HitAndRun_3_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_Beastmaster_HitAndRun_3_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_HitAndRun_4.Passive_Beastmaster_HitAndRun_3_C.OnActivated");

	UPassive_Beastmaster_HitAndRun_3_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_HitAndRun_4.Passive_Beastmaster_HitAndRun_3_C.CausedDeath_Beastmaster_HitAndRun3
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPassive_Beastmaster_HitAndRun_3_C::CausedDeath_Beastmaster_HitAndRun3(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_HitAndRun_4.Passive_Beastmaster_HitAndRun_3_C.CausedDeath_Beastmaster_HitAndRun3");

	UPassive_Beastmaster_HitAndRun_3_C_CausedDeath_Beastmaster_HitAndRun3_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_HitAndRun_4.Passive_Beastmaster_HitAndRun_3_C.ExecuteUbergraph_Passive_Beastmaster_HitAndRun_4
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_HitAndRun_3_C::ExecuteUbergraph_Passive_Beastmaster_HitAndRun_4(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_HitAndRun_4.Passive_Beastmaster_HitAndRun_3_C.ExecuteUbergraph_Passive_Beastmaster_HitAndRun_4");

	UPassive_Beastmaster_HitAndRun_3_C_ExecuteUbergraph_Passive_Beastmaster_HitAndRun_4_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
