// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_RiftWalker_DFA_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Mod_RiftWalker_DFA.Action_Mod_RiftWalker_DFA_C.ClearInvulnerability
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UAction_Mod_RiftWalker_DFA_C::ClearInvulnerability()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_RiftWalker_DFA.Action_Mod_RiftWalker_DFA_C.ClearInvulnerability");

	UAction_Mod_RiftWalker_DFA_C_ClearInvulnerability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_RiftWalker_DFA.Action_Mod_RiftWalker_DFA_C.SetInvulnerable
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAction_Mod_RiftWalker_DFA_C::SetInvulnerable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_RiftWalker_DFA.Action_Mod_RiftWalker_DFA_C.SetInvulnerable");

	UAction_Mod_RiftWalker_DFA_C_SetInvulnerable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_RiftWalker_DFA.Action_Mod_RiftWalker_DFA_C.FilterIncomingDamage
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FDamageInfo             DamageInfoOut                  (Parm, OutParm, ContainsInstancedReference)
// bool                           ShouldApplyDamage              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Mod_RiftWalker_DFA_C::FilterIncomingDamage(struct FDamageInfo* DamageInfo, struct FDamageInfo* DamageInfoOut, bool* ShouldApplyDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_RiftWalker_DFA.Action_Mod_RiftWalker_DFA_C.FilterIncomingDamage");

	UAction_Mod_RiftWalker_DFA_C_FilterIncomingDamage_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageInfoOut != nullptr)
		*DamageInfoOut = params.DamageInfoOut;
	if (ShouldApplyDamage != nullptr)
		*ShouldApplyDamage = params.ShouldApplyDamage;
}


// Function Action_Mod_RiftWalker_DFA.Action_Mod_RiftWalker_DFA_C.SpawnCharacter
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 ActorClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform*             SpawnTransform                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
// class AActor**                 Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_RiftWalker_DFA_C::SpawnCharacter(class UClass** ActorClass, struct FTransform* SpawnTransform, class AActor** Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_RiftWalker_DFA.Action_Mod_RiftWalker_DFA_C.SpawnCharacter");

	UAction_Mod_RiftWalker_DFA_C_SpawnCharacter_Params params;
	params.ActorClass = ActorClass;
	params.SpawnTransform = SpawnTransform;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_RiftWalker_DFA.Action_Mod_RiftWalker_DFA_C.Get Player Gender
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Bool                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Mod_RiftWalker_DFA_C::Get_Player_Gender(bool* Bool)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_RiftWalker_DFA.Action_Mod_RiftWalker_DFA_C.Get Player Gender");

	UAction_Mod_RiftWalker_DFA_C_Get_Player_Gender_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Bool != nullptr)
		*Bool = params.Bool;
}


// Function Action_Mod_RiftWalker_DFA.Action_Mod_RiftWalker_DFA_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Mod_RiftWalker_DFA_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_RiftWalker_DFA.Action_Mod_RiftWalker_DFA_C.OnActionStart");

	UAction_Mod_RiftWalker_DFA_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_RiftWalker_DFA.Action_Mod_RiftWalker_DFA_C.OnActionStop
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Mod_RiftWalker_DFA_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_RiftWalker_DFA.Action_Mod_RiftWalker_DFA_C.OnActionStop");

	UAction_Mod_RiftWalker_DFA_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_RiftWalker_DFA.Action_Mod_RiftWalker_DFA_C.ExecuteUbergraph_Action_Mod_RiftWalker_DFA
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_RiftWalker_DFA_C::ExecuteUbergraph_Action_Mod_RiftWalker_DFA(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_RiftWalker_DFA.Action_Mod_RiftWalker_DFA_C.ExecuteUbergraph_Action_Mod_RiftWalker_DFA");

	UAction_Mod_RiftWalker_DFA_C_ExecuteUbergraph_Action_Mod_RiftWalker_DFA_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
