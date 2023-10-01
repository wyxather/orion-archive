// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_RiftWalker_Clone_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.GetMinionOwner
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Owner                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_RiftWalker_Clone_Base_C::GetMinionOwner(class AActor** Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.GetMinionOwner");

	ACharacter_RiftWalker_Clone_Base_C_GetMinionOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Owner != nullptr)
		*Owner = params.Owner;
}


// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.GetCauseDamageScalar
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scalar                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_RiftWalker_Clone_Base_C::GetCauseDamageScalar(float* Scalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.GetCauseDamageScalar");

	ACharacter_RiftWalker_Clone_Base_C_GetCauseDamageScalar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scalar != nullptr)
		*Scalar = params.Scalar;
}


// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.MinionHasDamageTag
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ExtraDamage                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          DamageScalar                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_RiftWalker_Clone_Base_C::MinionHasDamageTag(bool* ExtraDamage, float* DamageScalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.MinionHasDamageTag");

	ACharacter_RiftWalker_Clone_Base_C_MinionHasDamageTag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExtraDamage != nullptr)
		*ExtraDamage = params.ExtraDamage;
	if (DamageScalar != nullptr)
		*DamageScalar = params.DamageScalar;
}


// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.HasSoulEmberTrinket
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_RiftWalker_Clone_Base_C::HasSoulEmberTrinket(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.HasSoulEmberTrinket");

	ACharacter_RiftWalker_Clone_Base_C_HasSoulEmberTrinket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.GetSpawnTime
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_RiftWalker_Clone_Base_C::GetSpawnTime(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.GetSpawnTime");

	ACharacter_RiftWalker_Clone_Base_C_GetSpawnTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;
}


// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.IsValidMinion
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_RiftWalker_Clone_Base_C::IsValidMinion(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.IsValidMinion");

	ACharacter_RiftWalker_Clone_Base_C_IsValidMinion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.GetExplosionDamageMod
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Mod                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_RiftWalker_Clone_Base_C::GetExplosionDamageMod(float* Mod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.GetExplosionDamageMod");

	ACharacter_RiftWalker_Clone_Base_C_GetExplosionDamageMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mod != nullptr)
		*Mod = params.Mod;
}


// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.GetBrutalMarkDamageMod
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// float                          DamageMod                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_RiftWalker_Clone_Base_C::GetBrutalMarkDamageMod(struct FDamageInfo* DamageInfo, float* DamageMod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.GetBrutalMarkDamageMod");

	ACharacter_RiftWalker_Clone_Base_C_GetBrutalMarkDamageMod_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageMod != nullptr)
		*DamageMod = params.DamageMod;
}


// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.GetArmorScalars
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDamageInfo*            DamInfo                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// float                          MinionDamageScalar             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_RiftWalker_Clone_Base_C::GetArmorScalars(struct FDamageInfo* DamInfo, float* MinionDamageScalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.GetArmorScalars");

	ACharacter_RiftWalker_Clone_Base_C_GetArmorScalars_Params params;
	params.DamInfo = DamInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinionDamageScalar != nullptr)
		*MinionDamageScalar = params.MinionDamageScalar;
}


// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.GetPunisherDamageMod
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          PunisherMod                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_RiftWalker_Clone_Base_C::GetPunisherDamageMod(class AActor** Target, float* PunisherMod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.GetPunisherDamageMod");

	ACharacter_RiftWalker_Clone_Base_C_GetPunisherDamageMod_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PunisherMod != nullptr)
		*PunisherMod = params.PunisherMod;
}


// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.StopPostProcess
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ACharacter_RiftWalker_Clone_Base_C::StopPostProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.StopPostProcess");

	ACharacter_RiftWalker_Clone_Base_C_StopPostProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.SpawnPostProcess
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ACharacter_RiftWalker_Clone_Base_C::SpawnPostProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.SpawnPostProcess");

	ACharacter_RiftWalker_Clone_Base_C_SpawnPostProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.ModifyDamage
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_RiftWalker_Clone_Base_C::ModifyDamage(struct FDamageInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.ModifyDamage");

	ACharacter_RiftWalker_Clone_Base_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;
}


// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.CheckSoulEmberTag
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DamageScalar                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_RiftWalker_Clone_Base_C::CheckSoulEmberTag(float* DamageScalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.CheckSoulEmberTag");

	ACharacter_RiftWalker_Clone_Base_C_CheckSoulEmberTag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageScalar != nullptr)
		*DamageScalar = params.DamageScalar;
}


// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.AddNearbyThreat
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ACharacter_RiftWalker_Clone_Base_C::AddNearbyThreat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.AddNearbyThreat");

	ACharacter_RiftWalker_Clone_Base_C_AddNearbyThreat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.InitializeNearbyThreat
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ACharacter_RiftWalker_Clone_Base_C::InitializeNearbyThreat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.InitializeNearbyThreat");

	ACharacter_RiftWalker_Clone_Base_C_InitializeNearbyThreat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.UserConstructionScript
// 00007FF6F8B35350
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACharacter_RiftWalker_Clone_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.UserConstructionScript");

	ACharacter_RiftWalker_Clone_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.FinishSpawning
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_RiftWalker_Clone_Base_C::FinishSpawning()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.FinishSpawning");

	ACharacter_RiftWalker_Clone_Base_C_FinishSpawning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.MultiDissolveEvent
// 00007FF6F8B35350
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ACharacter_RiftWalker_Clone_Base_C::MultiDissolveEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.MultiDissolveEvent");

	ACharacter_RiftWalker_Clone_Base_C_MultiDissolveEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.OnTimer
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_RiftWalker_Clone_Base_C::OnTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.OnTimer");

	ACharacter_RiftWalker_Clone_Base_C_OnTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.DestroyMinion
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ACharacter_RiftWalker_Clone_Base_C::DestroyMinion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.DestroyMinion");

	ACharacter_RiftWalker_Clone_Base_C_DestroyMinion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.OnOwnerComputeStats
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_RiftWalker_Clone_Base_C::OnOwnerComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.OnOwnerComputeStats");

	ACharacter_RiftWalker_Clone_Base_C_OnOwnerComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.OnPostComputeStats
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ACharacter_RiftWalker_Clone_Base_C::OnPostComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.OnPostComputeStats");

	ACharacter_RiftWalker_Clone_Base_C_OnPostComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.OnAOE
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_RiftWalker_Clone_Base_C::OnAOE()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.OnAOE");

	ACharacter_RiftWalker_Clone_Base_C_OnAOE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.OnSetState
// 00007FF6F8B35350
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ACharacter_RiftWalker_Clone_Base_C::OnSetState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.OnSetState");

	ACharacter_RiftWalker_Clone_Base_C_OnSetState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.MC_Explosion
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_RiftWalker_Clone_Base_C::MC_Explosion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.MC_Explosion");

	ACharacter_RiftWalker_Clone_Base_C_MC_Explosion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.CustomEvent_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char*                 Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Cause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_RiftWalker_Clone_Base_C::CustomEvent_1(unsigned char* Reason, class ACharacterGunfire** Character, class AActor** Cause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.CustomEvent_1");

	ACharacter_RiftWalker_Clone_Base_C_CustomEvent_1_Params params;
	params.Reason = Reason;
	params.Character = Character;
	params.Cause = Cause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.NotifyHitTarget
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void ACharacter_RiftWalker_Clone_Base_C::NotifyHitTarget(struct FDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.NotifyHitTarget");

	ACharacter_RiftWalker_Clone_Base_C_NotifyHitTarget_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.ReceiveEndPlay
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_RiftWalker_Clone_Base_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.ReceiveEndPlay");

	ACharacter_RiftWalker_Clone_Base_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ACharacter_RiftWalker_Clone_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.ReceiveBeginPlay");

	ACharacter_RiftWalker_Clone_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.ExecuteUbergraph_Character_RiftWalker_Clone_Base
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_RiftWalker_Clone_Base_C::ExecuteUbergraph_Character_RiftWalker_Clone_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_RiftWalker_Clone_Base.Character_RiftWalker_Clone_Base_C.ExecuteUbergraph_Character_RiftWalker_Clone_Base");

	ACharacter_RiftWalker_Clone_Base_C_ExecuteUbergraph_Character_RiftWalker_Clone_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
