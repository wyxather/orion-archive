// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Gunner_ExperimentalMunitions_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Gunner_ExperimentalMunitions.Passive_Gunner_ExperimentalMunitions_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_Gunner_ExperimentalMunitions_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_ExperimentalMunitions.Passive_Gunner_ExperimentalMunitions_C.OnActivated");

	UPassive_Gunner_ExperimentalMunitions_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_ExperimentalMunitions.Passive_Gunner_ExperimentalMunitions_C.ExperimentalMunitions_IronBearReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter_IronBear*  IronBear                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Gunner_ExperimentalMunitions_C::ExperimentalMunitions_IronBearReady(class AOakCharacter_IronBear* IronBear)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_ExperimentalMunitions.Passive_Gunner_ExperimentalMunitions_C.ExperimentalMunitions_IronBearReady");

	UPassive_Gunner_ExperimentalMunitions_C_ExperimentalMunitions_IronBearReady_Params params;
	params.IronBear = IronBear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_ExperimentalMunitions.Passive_Gunner_ExperimentalMunitions_C.ExecuteUbergraph_Passive_Gunner_ExperimentalMunitions
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Gunner_ExperimentalMunitions_C::ExecuteUbergraph_Passive_Gunner_ExperimentalMunitions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_ExperimentalMunitions.Passive_Gunner_ExperimentalMunitions_C.ExecuteUbergraph_Passive_Gunner_ExperimentalMunitions");

	UPassive_Gunner_ExperimentalMunitions_C_ExecuteUbergraph_Passive_Gunner_ExperimentalMunitions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
