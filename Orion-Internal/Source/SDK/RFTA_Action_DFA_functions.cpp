// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_DFA_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_DFA.Action_DFA_C.Spawn
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_DFA_C::Spawn(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DFA.Action_DFA_C.Spawn");

	UAction_DFA_C_Spawn_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_DFA.Action_DFA_C.GetRandomLocation
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_DFA_C::GetRandomLocation(struct FVector* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DFA.Action_DFA_C.GetRandomLocation");

	UAction_DFA_C_GetRandomLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Action_DFA.Action_DFA_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_DFA_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DFA.Action_DFA_C.OnActionStart");

	UAction_DFA_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_DFA.Action_DFA_C.SpawnInstanceRandom
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UAction_DFA_C::SpawnInstanceRandom()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DFA.Action_DFA_C.SpawnInstanceRandom");

	UAction_DFA_C_SpawnInstanceRandom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_DFA.Action_DFA_C.SpawnInstanceTarget
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UAction_DFA_C::SpawnInstanceTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DFA.Action_DFA_C.SpawnInstanceTarget");

	UAction_DFA_C_SpawnInstanceTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_DFA.Action_DFA_C.OnActionStop
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_DFA_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DFA.Action_DFA_C.OnActionStop");

	UAction_DFA_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_DFA.Action_DFA_C.OnDead_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char*                 Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Cause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_DFA_C::OnDead_Event_1(unsigned char* Reason, class ACharacterGunfire** Character, class AActor** Cause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DFA.Action_DFA_C.OnDead_Event_1");

	UAction_DFA_C_OnDead_Event_1_Params params;
	params.Reason = Reason;
	params.Character = Character;
	params.Cause = Cause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_DFA.Action_DFA_C.OnTakeDamage
// 00007FF6F8B35350
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UAction_DFA_C::OnTakeDamage(struct FDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DFA.Action_DFA_C.OnTakeDamage");

	UAction_DFA_C_OnTakeDamage_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_DFA.Action_DFA_C.ExecuteUbergraph_Action_DFA
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_DFA_C::ExecuteUbergraph_Action_DFA(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DFA.Action_DFA_C.ExecuteUbergraph_Action_DFA");

	UAction_DFA_C_ExecuteUbergraph_Action_DFA_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
