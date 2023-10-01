// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_ArmorSkill_TriggerOnHit_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ArmorSkill_TriggerOnHit.ArmorSkill_TriggerOnHit_C.Trigger
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Power                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArmorSkill_TriggerOnHit_C::Trigger(int* Power)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_TriggerOnHit.ArmorSkill_TriggerOnHit_C.Trigger");

	UArmorSkill_TriggerOnHit_C_Trigger_Params params;
	params.Power = Power;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArmorSkill_TriggerOnHit.ArmorSkill_TriggerOnHit_C.OnTakeDamage
// 00007FF6F8B35350
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UArmorSkill_TriggerOnHit_C::OnTakeDamage(struct FDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_TriggerOnHit.ArmorSkill_TriggerOnHit_C.OnTakeDamage");

	UArmorSkill_TriggerOnHit_C_OnTakeDamage_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArmorSkill_TriggerOnHit.ArmorSkill_TriggerOnHit_C.ExecuteUbergraph_ArmorSkill_TriggerOnHit
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArmorSkill_TriggerOnHit_C::ExecuteUbergraph_ArmorSkill_TriggerOnHit(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_TriggerOnHit.ArmorSkill_TriggerOnHit_C.ExecuteUbergraph_ArmorSkill_TriggerOnHit");

	UArmorSkill_TriggerOnHit_C_ExecuteUbergraph_ArmorSkill_TriggerOnHit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
