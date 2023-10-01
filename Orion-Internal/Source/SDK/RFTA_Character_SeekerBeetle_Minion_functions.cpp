// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_SeekerBeetle_Minion_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.GetMinionOwner
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Owner                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_SeekerBeetle_Minion_C::GetMinionOwner(class AActor** Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.GetMinionOwner");

	ACharacter_SeekerBeetle_Minion_C_GetMinionOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Owner != nullptr)
		*Owner = params.Owner;
}


// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.GetCauseDamageScalar
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scalar                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_SeekerBeetle_Minion_C::GetCauseDamageScalar(float* Scalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.GetCauseDamageScalar");

	ACharacter_SeekerBeetle_Minion_C_GetCauseDamageScalar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scalar != nullptr)
		*Scalar = params.Scalar;
}


// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.MinionHasDamageTag
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ExtraDamage                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          DamageScalar                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_SeekerBeetle_Minion_C::MinionHasDamageTag(bool* ExtraDamage, float* DamageScalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.MinionHasDamageTag");

	ACharacter_SeekerBeetle_Minion_C_MinionHasDamageTag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExtraDamage != nullptr)
		*ExtraDamage = params.ExtraDamage;
	if (DamageScalar != nullptr)
		*DamageScalar = params.DamageScalar;
}


// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.HasSoulEmberTrinket
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_SeekerBeetle_Minion_C::HasSoulEmberTrinket(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.HasSoulEmberTrinket");

	ACharacter_SeekerBeetle_Minion_C_HasSoulEmberTrinket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.GetSpawnTime
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_SeekerBeetle_Minion_C::GetSpawnTime(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.GetSpawnTime");

	ACharacter_SeekerBeetle_Minion_C_GetSpawnTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;
}


// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.IsValidMinion
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_SeekerBeetle_Minion_C::IsValidMinion(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.IsValidMinion");

	ACharacter_SeekerBeetle_Minion_C_IsValidMinion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.GetExplosionDamageMod
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Mod                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_SeekerBeetle_Minion_C::GetExplosionDamageMod(float* Mod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.GetExplosionDamageMod");

	ACharacter_SeekerBeetle_Minion_C_GetExplosionDamageMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mod != nullptr)
		*Mod = params.Mod;
}


// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.GetBrutalMarkDamageMod
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDamageInfo*            InputPin                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// float                          DamageMod                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_SeekerBeetle_Minion_C::GetBrutalMarkDamageMod(struct FDamageInfo* InputPin, float* DamageMod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.GetBrutalMarkDamageMod");

	ACharacter_SeekerBeetle_Minion_C_GetBrutalMarkDamageMod_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageMod != nullptr)
		*DamageMod = params.DamageMod;
}


// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.GetArmorScalars
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// float                          MinionDamageScalar             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_SeekerBeetle_Minion_C::GetArmorScalars(struct FDamageInfo* DamageInfo, float* MinionDamageScalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.GetArmorScalars");

	ACharacter_SeekerBeetle_Minion_C_GetArmorScalars_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinionDamageScalar != nullptr)
		*MinionDamageScalar = params.MinionDamageScalar;
}


// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.GetPunisherDamageMod
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          PunisherMod                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_SeekerBeetle_Minion_C::GetPunisherDamageMod(class AActor** Target, float* PunisherMod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.GetPunisherDamageMod");

	ACharacter_SeekerBeetle_Minion_C_GetPunisherDamageMod_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PunisherMod != nullptr)
		*PunisherMod = params.PunisherMod;
}


// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.ModifyDamage
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_SeekerBeetle_Minion_C::ModifyDamage(struct FDamageInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.ModifyDamage");

	ACharacter_SeekerBeetle_Minion_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;
}


// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.CheckSoulEmberTag
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DamageScalar                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_SeekerBeetle_Minion_C::CheckSoulEmberTag(float* DamageScalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.CheckSoulEmberTag");

	ACharacter_SeekerBeetle_Minion_C_CheckSoulEmberTag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageScalar != nullptr)
		*DamageScalar = params.DamageScalar;
}


// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.MC_BuildUp
// 00007FF6F8B35350
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ACharacter_SeekerBeetle_Minion_C::MC_BuildUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.MC_BuildUp");

	ACharacter_SeekerBeetle_Minion_C_MC_BuildUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ACharacter_SeekerBeetle_Minion_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.ReceiveBeginPlay");

	ACharacter_SeekerBeetle_Minion_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.OnPostComputeStats
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ACharacter_SeekerBeetle_Minion_C::OnPostComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.OnPostComputeStats");

	ACharacter_SeekerBeetle_Minion_C_OnPostComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.DestroyMinion
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ACharacter_SeekerBeetle_Minion_C::DestroyMinion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.DestroyMinion");

	ACharacter_SeekerBeetle_Minion_C_DestroyMinion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.OnOwnerComputeStats
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_SeekerBeetle_Minion_C::OnOwnerComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.OnOwnerComputeStats");

	ACharacter_SeekerBeetle_Minion_C_OnOwnerComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.SeekerBeetleStartGlow
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_SeekerBeetle_Minion_C::SeekerBeetleStartGlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.SeekerBeetleStartGlow");

	ACharacter_SeekerBeetle_Minion_C_SeekerBeetleStartGlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.DoExplosion
// 00007FF6F8B35350
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ShouldChain                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_SeekerBeetle_Minion_C::DoExplosion(bool* ShouldChain, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.DoExplosion");

	ACharacter_SeekerBeetle_Minion_C_DoExplosion_Params params;
	params.ShouldChain = ShouldChain;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.OnExit
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_SeekerBeetle_Minion_C::OnExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.OnExit");

	ACharacter_SeekerBeetle_Minion_C_OnExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.OnDead_Event_2
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char*                 Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Cause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_SeekerBeetle_Minion_C::OnDead_Event_2(unsigned char* Reason, class ACharacterGunfire** Character, class AActor** Cause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.OnDead_Event_2");

	ACharacter_SeekerBeetle_Minion_C_OnDead_Event_2_Params params;
	params.Reason = Reason;
	params.Character = Character;
	params.Cause = Cause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.SeekerBeetleStopGlow
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_SeekerBeetle_Minion_C::SeekerBeetleStopGlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.SeekerBeetleStopGlow");

	ACharacter_SeekerBeetle_Minion_C_SeekerBeetleStopGlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.MC_Explosion
// 00007FF6F8B35350
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ACharacter_SeekerBeetle_Minion_C::MC_Explosion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.MC_Explosion");

	ACharacter_SeekerBeetle_Minion_C_MC_Explosion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.NotifyHitTarget
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void ACharacter_SeekerBeetle_Minion_C::NotifyHitTarget(struct FDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.NotifyHitTarget");

	ACharacter_SeekerBeetle_Minion_C_NotifyHitTarget_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.ExecuteUbergraph_Character_SeekerBeetle_Minion
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_SeekerBeetle_Minion_C::ExecuteUbergraph_Character_SeekerBeetle_Minion(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_SeekerBeetle_Minion.Character_SeekerBeetle_Minion_C.ExecuteUbergraph_Character_SeekerBeetle_Minion");

	ACharacter_SeekerBeetle_Minion_C_ExecuteUbergraph_Character_SeekerBeetle_Minion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
