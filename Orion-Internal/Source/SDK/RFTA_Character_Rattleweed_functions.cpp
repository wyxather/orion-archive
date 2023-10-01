// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Rattleweed_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Character_Rattleweed.Character_Rattleweed_C.GetMinionOwner
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Owner                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Rattleweed_C::GetMinionOwner(class AActor** Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Rattleweed.Character_Rattleweed_C.GetMinionOwner");

	ACharacter_Rattleweed_C_GetMinionOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Owner != nullptr)
		*Owner = params.Owner;
}


// Function Character_Rattleweed.Character_Rattleweed_C.GetCauseDamageScalar
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scalar                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Rattleweed_C::GetCauseDamageScalar(float* Scalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Rattleweed.Character_Rattleweed_C.GetCauseDamageScalar");

	ACharacter_Rattleweed_C_GetCauseDamageScalar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scalar != nullptr)
		*Scalar = params.Scalar;
}


// Function Character_Rattleweed.Character_Rattleweed_C.MinionHasDamageTag
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ExtraDamage                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          DamageScalar                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Rattleweed_C::MinionHasDamageTag(bool* ExtraDamage, float* DamageScalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Rattleweed.Character_Rattleweed_C.MinionHasDamageTag");

	ACharacter_Rattleweed_C_MinionHasDamageTag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExtraDamage != nullptr)
		*ExtraDamage = params.ExtraDamage;
	if (DamageScalar != nullptr)
		*DamageScalar = params.DamageScalar;
}


// Function Character_Rattleweed.Character_Rattleweed_C.HasSoulEmberTrinket
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_Rattleweed_C::HasSoulEmberTrinket(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Rattleweed.Character_Rattleweed_C.HasSoulEmberTrinket");

	ACharacter_Rattleweed_C_HasSoulEmberTrinket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Character_Rattleweed.Character_Rattleweed_C.GetSpawnTime
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Rattleweed_C::GetSpawnTime(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Rattleweed.Character_Rattleweed_C.GetSpawnTime");

	ACharacter_Rattleweed_C_GetSpawnTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;
}


// Function Character_Rattleweed.Character_Rattleweed_C.IsValidMinion
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_Rattleweed_C::IsValidMinion(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Rattleweed.Character_Rattleweed_C.IsValidMinion");

	ACharacter_Rattleweed_C_IsValidMinion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Character_Rattleweed.Character_Rattleweed_C.GetPunisherDamageMod
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          PunisherMod                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Rattleweed_C::GetPunisherDamageMod(class AActor** Target, float* PunisherMod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Rattleweed.Character_Rattleweed_C.GetPunisherDamageMod");

	ACharacter_Rattleweed_C_GetPunisherDamageMod_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PunisherMod != nullptr)
		*PunisherMod = params.PunisherMod;
}


// Function Character_Rattleweed.Character_Rattleweed_C.ModifyDamage
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_Rattleweed_C::ModifyDamage(struct FDamageInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Rattleweed.Character_Rattleweed_C.ModifyDamage");

	ACharacter_Rattleweed_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;
}


// Function Character_Rattleweed.Character_Rattleweed_C.AddNearbyThreat
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ACharacter_Rattleweed_C::AddNearbyThreat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Rattleweed.Character_Rattleweed_C.AddNearbyThreat");

	ACharacter_Rattleweed_C_AddNearbyThreat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Rattleweed.Character_Rattleweed_C.InitializeNearbyThreat
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ACharacter_Rattleweed_C::InitializeNearbyThreat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Rattleweed.Character_Rattleweed_C.InitializeNearbyThreat");

	ACharacter_Rattleweed_C_InitializeNearbyThreat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Rattleweed.Character_Rattleweed_C.MC_BuildUp
// 00007FF6F8B35350
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ACharacter_Rattleweed_C::MC_BuildUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Rattleweed.Character_Rattleweed_C.MC_BuildUp");

	ACharacter_Rattleweed_C_MC_BuildUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Rattleweed.Character_Rattleweed_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ACharacter_Rattleweed_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Rattleweed.Character_Rattleweed_C.ReceiveBeginPlay");

	ACharacter_Rattleweed_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Rattleweed.Character_Rattleweed_C.OnTimer
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Rattleweed_C::OnTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Rattleweed.Character_Rattleweed_C.OnTimer");

	ACharacter_Rattleweed_C_OnTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Rattleweed.Character_Rattleweed_C.OnDead_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char*                 Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Cause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Rattleweed_C::OnDead_Event_1(unsigned char* Reason, class ACharacterGunfire** Character, class AActor** Cause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Rattleweed.Character_Rattleweed_C.OnDead_Event_1");

	ACharacter_Rattleweed_C_OnDead_Event_1_Params params;
	params.Reason = Reason;
	params.Character = Character;
	params.Cause = Cause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Rattleweed.Character_Rattleweed_C.OnComputeStats
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ACharacter_Rattleweed_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Rattleweed.Character_Rattleweed_C.OnComputeStats");

	ACharacter_Rattleweed_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Rattleweed.Character_Rattleweed_C.FinishSpawning
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Rattleweed_C::FinishSpawning()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Rattleweed.Character_Rattleweed_C.FinishSpawning");

	ACharacter_Rattleweed_C_FinishSpawning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Rattleweed.Character_Rattleweed_C.MultiDissolveEvent
// 00007FF6F8B35350
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ACharacter_Rattleweed_C::MultiDissolveEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Rattleweed.Character_Rattleweed_C.MultiDissolveEvent");

	ACharacter_Rattleweed_C_MultiDissolveEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Rattleweed.Character_Rattleweed_C.DestroyMinion
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ACharacter_Rattleweed_C::DestroyMinion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Rattleweed.Character_Rattleweed_C.DestroyMinion");

	ACharacter_Rattleweed_C_DestroyMinion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Rattleweed.Character_Rattleweed_C.OnOwnerComputeStats
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Rattleweed_C::OnOwnerComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Rattleweed.Character_Rattleweed_C.OnOwnerComputeStats");

	ACharacter_Rattleweed_C_OnOwnerComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Rattleweed.Character_Rattleweed_C.NotifyHitTarget
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void ACharacter_Rattleweed_C::NotifyHitTarget(struct FDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Rattleweed.Character_Rattleweed_C.NotifyHitTarget");

	ACharacter_Rattleweed_C_NotifyHitTarget_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Rattleweed.Character_Rattleweed_C.MC_Explosion
// 00007FF6F8B35350
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ACharacter_Rattleweed_C::MC_Explosion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Rattleweed.Character_Rattleweed_C.MC_Explosion");

	ACharacter_Rattleweed_C_MC_Explosion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Rattleweed.Character_Rattleweed_C.ExecuteUbergraph_Character_Rattleweed
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Rattleweed_C::ExecuteUbergraph_Character_Rattleweed(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Rattleweed.Character_Rattleweed_C.ExecuteUbergraph_Character_Rattleweed");

	ACharacter_Rattleweed_C_ExecuteUbergraph_Character_Rattleweed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
