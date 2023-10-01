// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_GoodMisfortune_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Operative_GoodMisfortune.PassiveSkill_Operative_GoodMisfortune_C.GetDurationReturn
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxDuration                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Operative_GoodMisfortune_C::GetDurationReturn(int Count, float MaxDuration, float* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_GoodMisfortune.PassiveSkill_Operative_GoodMisfortune_C.GetDurationReturn");

	UPassiveSkill_Operative_GoodMisfortune_C_GetDurationReturn_Params params;
	params.Count = Count;
	params.MaxDuration = MaxDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function PassiveSkill_Operative_GoodMisfortune.PassiveSkill_Operative_GoodMisfortune_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Operative_GoodMisfortune_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_GoodMisfortune.PassiveSkill_Operative_GoodMisfortune_C.OnActivated");

	UPassiveSkill_Operative_GoodMisfortune_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_GoodMisfortune.PassiveSkill_Operative_GoodMisfortune_C.GoodMisfortuneSNTRYActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Operative_GoodMisfortune_C::GoodMisfortuneSNTRYActivated(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_GoodMisfortune.PassiveSkill_Operative_GoodMisfortune_C.GoodMisfortuneSNTRYActivated");

	UPassiveSkill_Operative_GoodMisfortune_C_GoodMisfortuneSNTRYActivated_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_GoodMisfortune.PassiveSkill_Operative_GoodMisfortune_C.OperativeTriggerKillSkillEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                KillLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor**                 KilledEnemy                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Operative_GoodMisfortune_C::OperativeTriggerKillSkillEffect(struct FVector* KillLocation, class AActor** KilledEnemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_GoodMisfortune.PassiveSkill_Operative_GoodMisfortune_C.OperativeTriggerKillSkillEffect");

	UPassiveSkill_Operative_GoodMisfortune_C_OperativeTriggerKillSkillEffect_Params params;
	params.KillLocation = KillLocation;
	params.KilledEnemy = KilledEnemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_GoodMisfortune.PassiveSkill_Operative_GoodMisfortune_C.ExecuteUbergraph_PassiveSkill_Operative_GoodMisfortune
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Operative_GoodMisfortune_C::ExecuteUbergraph_PassiveSkill_Operative_GoodMisfortune(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_GoodMisfortune.PassiveSkill_Operative_GoodMisfortune_C.ExecuteUbergraph_PassiveSkill_Operative_GoodMisfortune");

	UPassiveSkill_Operative_GoodMisfortune_C_ExecuteUbergraph_PassiveSkill_Operative_GoodMisfortune_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
