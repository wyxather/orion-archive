// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_ArmorSkill_Harden_Action_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ArmorSkill_Harden_Action.ArmorSkill_Harden_Action_C.PlayMaterialTransitionSound
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArmorSkill_Harden_Action_C::PlayMaterialTransitionSound(int* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Harden_Action.ArmorSkill_Harden_Action_C.PlayMaterialTransitionSound");

	UArmorSkill_Harden_Action_C_PlayMaterialTransitionSound_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArmorSkill_Harden_Action.ArmorSkill_Harden_Action_C.FilterIncomingDamage
// 00007FF6F8B35350
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FDamageInfo             DamageInfoOut                  (Parm, OutParm, ContainsInstancedReference)
// bool                           ShouldApplyDamage              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UArmorSkill_Harden_Action_C::FilterIncomingDamage(struct FDamageInfo* DamageInfo, struct FDamageInfo* DamageInfoOut, bool* ShouldApplyDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Harden_Action.ArmorSkill_Harden_Action_C.FilterIncomingDamage");

	UArmorSkill_Harden_Action_C_FilterIncomingDamage_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageInfoOut != nullptr)
		*DamageInfoOut = params.DamageInfoOut;
	if (ShouldApplyDamage != nullptr)
		*ShouldApplyDamage = params.ShouldApplyDamage;
}


// Function ArmorSkill_Harden_Action.ArmorSkill_Harden_Action_C.OnReapplyBuff
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UArmorSkill_Harden_Action_C::OnReapplyBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Harden_Action.ArmorSkill_Harden_Action_C.OnReapplyBuff");

	UArmorSkill_Harden_Action_C_OnReapplyBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArmorSkill_Harden_Action.ArmorSkill_Harden_Action_C.OnLevelChanged
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UArmorSkill_Harden_Action_C::OnLevelChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Harden_Action.ArmorSkill_Harden_Action_C.OnLevelChanged");

	UArmorSkill_Harden_Action_C_OnLevelChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArmorSkill_Harden_Action.ArmorSkill_Harden_Action_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UArmorSkill_Harden_Action_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Harden_Action.ArmorSkill_Harden_Action_C.OnActionStart");

	UArmorSkill_Harden_Action_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArmorSkill_Harden_Action.ArmorSkill_Harden_Action_C.OnActionStop
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UArmorSkill_Harden_Action_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Harden_Action.ArmorSkill_Harden_Action_C.OnActionStop");

	UArmorSkill_Harden_Action_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArmorSkill_Harden_Action.ArmorSkill_Harden_Action_C.ExecuteUbergraph_ArmorSkill_Harden_Action
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArmorSkill_Harden_Action_C::ExecuteUbergraph_ArmorSkill_Harden_Action(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Harden_Action.ArmorSkill_Harden_Action_C.ExecuteUbergraph_ArmorSkill_Harden_Action");

	UArmorSkill_Harden_Action_C_ExecuteUbergraph_ArmorSkill_Harden_Action_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
