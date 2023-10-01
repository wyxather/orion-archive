// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_Bond2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_Bond2.Passive_Beastmaster_Bond2_C.TryRefillAttackCommandPool
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPassive_Beastmaster_Bond2_C::TryRefillAttackCommandPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond2.Passive_Beastmaster_Bond2_C.TryRefillAttackCommandPool");

	UPassive_Beastmaster_Bond2_C_TryRefillAttackCommandPool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Bond2.Passive_Beastmaster_Bond2_C.RandomChanceByGrade
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPassive_Beastmaster_Bond2_C::RandomChanceByGrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond2.Passive_Beastmaster_Bond2_C.RandomChanceByGrade");

	UPassive_Beastmaster_Bond2_C_RandomChanceByGrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Passive_Beastmaster_Bond2.Passive_Beastmaster_Bond2_C.OnKilledEnemy_Bond2
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPassive_Beastmaster_Bond2_C::OnKilledEnemy_Bond2(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond2.Passive_Beastmaster_Bond2_C.OnKilledEnemy_Bond2");

	UPassive_Beastmaster_Bond2_C_OnKilledEnemy_Bond2_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Bond2.Passive_Beastmaster_Bond2_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_Beastmaster_Bond2_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond2.Passive_Beastmaster_Bond2_C.OnActivated");

	UPassive_Beastmaster_Bond2_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Bond2.Passive_Beastmaster_Bond2_C.DoCooldownReduction_Bond2
// (BlueprintCallable, BlueprintEvent)

void UPassive_Beastmaster_Bond2_C::DoCooldownReduction_Bond2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond2.Passive_Beastmaster_Bond2_C.DoCooldownReduction_Bond2");

	UPassive_Beastmaster_Bond2_C_DoCooldownReduction_Bond2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Bond2.Passive_Beastmaster_Bond2_C.ExecuteUbergraph_Passive_Beastmaster_Bond2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_Bond2_C::ExecuteUbergraph_Passive_Beastmaster_Bond2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond2.Passive_Beastmaster_Bond2_C.ExecuteUbergraph_Passive_Beastmaster_Bond2");

	UPassive_Beastmaster_Bond2_C_ExecuteUbergraph_Passive_Beastmaster_Bond2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
