// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_Bond5_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_Bond5.Passive_Beastmaster_Bond5_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_Beastmaster_Bond5_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond5.Passive_Beastmaster_Bond5_C.OnActivated");

	UPassive_Beastmaster_Bond5_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Bond5.Passive_Beastmaster_Bond5_C.CausedDeath_Bond5
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPassive_Beastmaster_Bond5_C::CausedDeath_Bond5(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond5.Passive_Beastmaster_Bond5_C.CausedDeath_Bond5");

	UPassive_Beastmaster_Bond5_C_CausedDeath_Bond5_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Bond5.Passive_Beastmaster_Bond5_C.ClassModUnique03_KillSkillTrigger
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_Bond5_C::ClassModUnique03_KillSkillTrigger(class AActor* DamagedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond5.Passive_Beastmaster_Bond5_C.ClassModUnique03_KillSkillTrigger");

	UPassive_Beastmaster_Bond5_C_ClassModUnique03_KillSkillTrigger_Params params;
	params.DamagedActor = DamagedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_Bond5.Passive_Beastmaster_Bond5_C.ExecuteUbergraph_Passive_Beastmaster_Bond5
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_Bond5_C::ExecuteUbergraph_Passive_Beastmaster_Bond5(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_Bond5.Passive_Beastmaster_Bond5_C.ExecuteUbergraph_Passive_Beastmaster_Bond5");

	UPassive_Beastmaster_Bond5_C_ExecuteUbergraph_Passive_Beastmaster_Bond5_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
