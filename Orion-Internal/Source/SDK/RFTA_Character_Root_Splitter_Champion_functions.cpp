// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Root_Splitter_Champion_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.SplitAtThreshold
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ACharacter_Root_Splitter_Champion_C::SplitAtThreshold()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.SplitAtThreshold");

	ACharacter_Root_Splitter_Champion_C_SplitAtThreshold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.ShouldDoubleUp
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           MinSplitters                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         Chance                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_Root_Splitter_Champion_C::ShouldDoubleUp(int* MinSplitters, float* Chance, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.ShouldDoubleUp");

	ACharacter_Root_Splitter_Champion_C_ShouldDoubleUp_Params params;
	params.MinSplitters = MinSplitters;
	params.Chance = Chance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.SetNormalChampCooldown
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ACharacter_Root_Splitter_Champion_C::SetNormalChampCooldown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.SetNormalChampCooldown");

	ACharacter_Root_Splitter_Champion_C_SetNormalChampCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.SplitterCanAttack
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Monster_C**          Splitter                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStateMachineComponent*  StateMachine                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ACharacter_Root_Splitter_Champion_C::SplitterCanAttack(class ABP_Monster_C** Splitter, class UStateMachineComponent** StateMachine)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.SplitterCanAttack");

	ACharacter_Root_Splitter_Champion_C_SplitterCanAttack_Params params;
	params.Splitter = Splitter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StateMachine != nullptr)
		*StateMachine = params.StateMachine;

	return params.ReturnValue;
}


// Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.UpdateSplittersList
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ACharacter_Root_Splitter_Champion_C::UpdateSplittersList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.UpdateSplittersList");

	ACharacter_Root_Splitter_Champion_C_UpdateSplittersList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ACharacter_Root_Splitter_Champion_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.ReceiveBeginPlay");

	ACharacter_Root_Splitter_Champion_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.ReceiveTick
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Root_Splitter_Champion_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.ReceiveTick");

	ACharacter_Root_Splitter_Champion_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.DoChampSplit
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Root_Splitter_Champion_C::DoChampSplit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.DoChampSplit");

	ACharacter_Root_Splitter_Champion_C_DoChampSplit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.Mus_Earth_MiniBoss_Combat_Intro_SC
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Root_Splitter_Champion_C::Mus_Earth_MiniBoss_Combat_Intro_SC()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.Mus_Earth_MiniBoss_Combat_Intro_SC");

	ACharacter_Root_Splitter_Champion_C_Mus_Earth_MiniBoss_Combat_Intro_SC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.DoChampShockwave
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Root_Splitter_Champion_C::DoChampShockwave()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.DoChampShockwave");

	ACharacter_Root_Splitter_Champion_C_DoChampShockwave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.DoChampHeal
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Root_Splitter_Champion_C::DoChampHeal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.DoChampHeal");

	ACharacter_Root_Splitter_Champion_C_DoChampHeal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.DoChampAxeThrow
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Root_Splitter_Champion_C::DoChampAxeThrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.DoChampAxeThrow");

	ACharacter_Root_Splitter_Champion_C_DoChampAxeThrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.DoChampDash
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Root_Splitter_Champion_C::DoChampDash()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.DoChampDash");

	ACharacter_Root_Splitter_Champion_C_DoChampDash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.CombatEnter
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Root_Splitter_Champion_C::CombatEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.CombatEnter");

	ACharacter_Root_Splitter_Champion_C_CombatEnter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.DoChampHealPulse
// 00007FF6F8B35350
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ACharacter_Root_Splitter_Champion_C::DoChampHealPulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.DoChampHealPulse");

	ACharacter_Root_Splitter_Champion_C_DoChampHealPulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.Die
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Root_Splitter_Champion_C::Die()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.Die");

	ACharacter_Root_Splitter_Champion_C_Die_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.OnDead_Event_2
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char*                 Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Cause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Root_Splitter_Champion_C::OnDead_Event_2(unsigned char* Reason, class ACharacterGunfire** Character, class AActor** Cause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.OnDead_Event_2");

	ACharacter_Root_Splitter_Champion_C_OnDead_Event_2_Params params;
	params.Reason = Reason;
	params.Character = Character;
	params.Cause = Cause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.KillAllSplitterClones
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Root_Splitter_Champion_C::KillAllSplitterClones()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.KillAllSplitterClones");

	ACharacter_Root_Splitter_Champion_C_KillAllSplitterClones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.ExecuteUbergraph_Character_Root_Splitter_Champion
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Root_Splitter_Champion_C::ExecuteUbergraph_Character_Root_Splitter_Champion(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Splitter_Champion.Character_Root_Splitter_Champion_C.ExecuteUbergraph_Character_Root_Splitter_Champion");

	ACharacter_Root_Splitter_Champion_C_ExecuteUbergraph_Character_Root_Splitter_Champion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
