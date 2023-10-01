// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_ArmorSkill_TriggerOnDamage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ArmorSkill_TriggerOnDamage.ArmorSkill_TriggerOnDamage_C.Trigger
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UArmorSkill_TriggerOnDamage_C::Trigger(struct FDamageInfo* Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_TriggerOnDamage.ArmorSkill_TriggerOnDamage_C.Trigger");

	UArmorSkill_TriggerOnDamage_C_Trigger_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArmorSkill_TriggerOnDamage.ArmorSkill_TriggerOnDamage_C.OnHitTarget
// 00007FF6F8B35350
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UArmorSkill_TriggerOnDamage_C::OnHitTarget(struct FDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_TriggerOnDamage.ArmorSkill_TriggerOnDamage_C.OnHitTarget");

	UArmorSkill_TriggerOnDamage_C_OnHitTarget_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArmorSkill_TriggerOnDamage.ArmorSkill_TriggerOnDamage_C.ExecuteUbergraph_ArmorSkill_TriggerOnDamage
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArmorSkill_TriggerOnDamage_C::ExecuteUbergraph_ArmorSkill_TriggerOnDamage(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_TriggerOnDamage.ArmorSkill_TriggerOnDamage_C.ExecuteUbergraph_ArmorSkill_TriggerOnDamage");

	UArmorSkill_TriggerOnDamage_C_ExecuteUbergraph_ArmorSkill_TriggerOnDamage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
