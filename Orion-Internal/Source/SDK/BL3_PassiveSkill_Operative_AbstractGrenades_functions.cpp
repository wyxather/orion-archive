// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_AbstractGrenades_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Operative_AbstractGrenades.PassiveSkill_Operative_AbstractGrenades_C.OperativeTriggerKillSkillEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                KillLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor**                 KilledEnemy                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Operative_AbstractGrenades_C::OperativeTriggerKillSkillEffect(struct FVector* KillLocation, class AActor** KilledEnemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_AbstractGrenades.PassiveSkill_Operative_AbstractGrenades_C.OperativeTriggerKillSkillEffect");

	UPassiveSkill_Operative_AbstractGrenades_C_OperativeTriggerKillSkillEffect_Params params;
	params.KillLocation = KillLocation;
	params.KilledEnemy = KilledEnemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_AbstractGrenades.PassiveSkill_Operative_AbstractGrenades_C.ExecuteUbergraph_PassiveSkill_Operative_AbstractGrenades
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Operative_AbstractGrenades_C::ExecuteUbergraph_PassiveSkill_Operative_AbstractGrenades(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_AbstractGrenades.PassiveSkill_Operative_AbstractGrenades_C.ExecuteUbergraph_PassiveSkill_Operative_AbstractGrenades");

	UPassiveSkill_Operative_AbstractGrenades_C_ExecuteUbergraph_PassiveSkill_Operative_AbstractGrenades_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
