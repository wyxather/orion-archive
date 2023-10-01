// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Tentacle_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Character_Tentacle.Character_Tentacle_C.GetMinionOwner
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Owner                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Tentacle_C::GetMinionOwner(class AActor** Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Tentacle.Character_Tentacle_C.GetMinionOwner");

	ACharacter_Tentacle_C_GetMinionOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Owner != nullptr)
		*Owner = params.Owner;
}


// Function Character_Tentacle.Character_Tentacle_C.GetCauseDamageScalar
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scalar                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Tentacle_C::GetCauseDamageScalar(float* Scalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Tentacle.Character_Tentacle_C.GetCauseDamageScalar");

	ACharacter_Tentacle_C_GetCauseDamageScalar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scalar != nullptr)
		*Scalar = params.Scalar;
}


// Function Character_Tentacle.Character_Tentacle_C.MinionHasDamageTag
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ExtraDamage                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          DamageScalar                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Tentacle_C::MinionHasDamageTag(bool* ExtraDamage, float* DamageScalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Tentacle.Character_Tentacle_C.MinionHasDamageTag");

	ACharacter_Tentacle_C_MinionHasDamageTag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExtraDamage != nullptr)
		*ExtraDamage = params.ExtraDamage;
	if (DamageScalar != nullptr)
		*DamageScalar = params.DamageScalar;
}


// Function Character_Tentacle.Character_Tentacle_C.HasSoulEmberTrinket
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_Tentacle_C::HasSoulEmberTrinket(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Tentacle.Character_Tentacle_C.HasSoulEmberTrinket");

	ACharacter_Tentacle_C_HasSoulEmberTrinket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Character_Tentacle.Character_Tentacle_C.GetSpawnTime
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Tentacle_C::GetSpawnTime(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Tentacle.Character_Tentacle_C.GetSpawnTime");

	ACharacter_Tentacle_C_GetSpawnTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;
}


// Function Character_Tentacle.Character_Tentacle_C.IsValidMinion
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_Tentacle_C::IsValidMinion(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Tentacle.Character_Tentacle_C.IsValidMinion");

	ACharacter_Tentacle_C_IsValidMinion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Character_Tentacle.Character_Tentacle_C.GetShockDamageMod
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Mod                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Tentacle_C::GetShockDamageMod(float* Mod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Tentacle.Character_Tentacle_C.GetShockDamageMod");

	ACharacter_Tentacle_C_GetShockDamageMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mod != nullptr)
		*Mod = params.Mod;
}


// Function Character_Tentacle.Character_Tentacle_C.GetBrutalMarkDamageMod
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDamageInfo*            InputPin                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// float                          DamageMod                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Tentacle_C::GetBrutalMarkDamageMod(struct FDamageInfo* InputPin, float* DamageMod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Tentacle.Character_Tentacle_C.GetBrutalMarkDamageMod");

	ACharacter_Tentacle_C_GetBrutalMarkDamageMod_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageMod != nullptr)
		*DamageMod = params.DamageMod;
}


// Function Character_Tentacle.Character_Tentacle_C.GetArmorScalars
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// float                          MinionDamageScalar             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Tentacle_C::GetArmorScalars(struct FDamageInfo* DamageInfo, float* MinionDamageScalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Tentacle.Character_Tentacle_C.GetArmorScalars");

	ACharacter_Tentacle_C_GetArmorScalars_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinionDamageScalar != nullptr)
		*MinionDamageScalar = params.MinionDamageScalar;
}


// Function Character_Tentacle.Character_Tentacle_C.GetPunisherDamageMod
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          PunisherMod                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Tentacle_C::GetPunisherDamageMod(class AActor** Target, float* PunisherMod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Tentacle.Character_Tentacle_C.GetPunisherDamageMod");

	ACharacter_Tentacle_C_GetPunisherDamageMod_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PunisherMod != nullptr)
		*PunisherMod = params.PunisherMod;
}


// Function Character_Tentacle.Character_Tentacle_C.GetDevotion
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ACharacter_Tentacle_C::GetDevotion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Tentacle.Character_Tentacle_C.GetDevotion");

	ACharacter_Tentacle_C_GetDevotion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Character_Tentacle.Character_Tentacle_C.DoDevoted
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Heal                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         Devotion                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Tentacle_C::DoDevoted(float* Heal, float* Devotion)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Tentacle.Character_Tentacle_C.DoDevoted");

	ACharacter_Tentacle_C_DoDevoted_Params params;
	params.Heal = Heal;
	params.Devotion = Devotion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Tentacle.Character_Tentacle_C.GetCharactersForDevotion
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire**      Ref                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ACharacterGunfire*> Characters                     (Parm, OutParm, ZeroConstructor)

void ACharacter_Tentacle_C::GetCharactersForDevotion(class ACharacterGunfire** Ref, TArray<class ACharacterGunfire*>* Characters)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Tentacle.Character_Tentacle_C.GetCharactersForDevotion");

	ACharacter_Tentacle_C_GetCharactersForDevotion_Params params;
	params.Ref = Ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Characters != nullptr)
		*Characters = params.Characters;
}


// Function Character_Tentacle.Character_Tentacle_C.GetSiphonerTraitLifeStealMod
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ModDamage                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Tentacle_C::GetSiphonerTraitLifeStealMod(float* ModDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Tentacle.Character_Tentacle_C.GetSiphonerTraitLifeStealMod");

	ACharacter_Tentacle_C_GetSiphonerTraitLifeStealMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ModDamage != nullptr)
		*ModDamage = params.ModDamage;
}


// Function Character_Tentacle.Character_Tentacle_C.ModifyDamage
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_Tentacle_C::ModifyDamage(struct FDamageInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Tentacle.Character_Tentacle_C.ModifyDamage");

	ACharacter_Tentacle_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;
}


// Function Character_Tentacle.Character_Tentacle_C.GetHealthPerHitScalar
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Scalar                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Tentacle_C::GetHealthPerHitScalar(float* Scalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Tentacle.Character_Tentacle_C.GetHealthPerHitScalar");

	ACharacter_Tentacle_C_GetHealthPerHitScalar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scalar != nullptr)
		*Scalar = params.Scalar;
}


// Function Character_Tentacle.Character_Tentacle_C.HealOwner
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ACharacter_Tentacle_C::HealOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Tentacle.Character_Tentacle_C.HealOwner");

	ACharacter_Tentacle_C_HealOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Tentacle.Character_Tentacle_C.InitializeNearbyThreat
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ACharacter_Tentacle_C::InitializeNearbyThreat()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Tentacle.Character_Tentacle_C.InitializeNearbyThreat");

	ACharacter_Tentacle_C_InitializeNearbyThreat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Tentacle.Character_Tentacle_C.MC_BuildUp
// 00007FF6F8B35350
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ACharacter_Tentacle_C::MC_BuildUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Tentacle.Character_Tentacle_C.MC_BuildUp");

	ACharacter_Tentacle_C_MC_BuildUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Tentacle.Character_Tentacle_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ACharacter_Tentacle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Tentacle.Character_Tentacle_C.ReceiveBeginPlay");

	ACharacter_Tentacle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Tentacle.Character_Tentacle_C.OnDead_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char*                 Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Cause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Tentacle_C::OnDead_Event_1(unsigned char* Reason, class ACharacterGunfire** Character, class AActor** Cause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Tentacle.Character_Tentacle_C.OnDead_Event_1");

	ACharacter_Tentacle_C_OnDead_Event_1_Params params;
	params.Reason = Reason;
	params.Character = Character;
	params.Cause = Cause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Tentacle.Character_Tentacle_C.FinishSpawning
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Tentacle_C::FinishSpawning()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Tentacle.Character_Tentacle_C.FinishSpawning");

	ACharacter_Tentacle_C_FinishSpawning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Tentacle.Character_Tentacle_C.OnAlert
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Tentacle_C::OnAlert()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Tentacle.Character_Tentacle_C.OnAlert");

	ACharacter_Tentacle_C_OnAlert_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Tentacle.Character_Tentacle_C.CollisionOff
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Tentacle_C::CollisionOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Tentacle.Character_Tentacle_C.CollisionOff");

	ACharacter_Tentacle_C_CollisionOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Tentacle.Character_Tentacle_C.CollisionOn
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Tentacle_C::CollisionOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Tentacle.Character_Tentacle_C.CollisionOn");

	ACharacter_Tentacle_C_CollisionOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Tentacle.Character_Tentacle_C.OnLifetime Expired
// 00007FF6F8B35350
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ACharacter_Tentacle_C::OnLifetime_Expired()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Tentacle.Character_Tentacle_C.OnLifetime Expired");

	ACharacter_Tentacle_C_OnLifetime_Expired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Tentacle.Character_Tentacle_C.OnCharacterDied
// 00007FF6F8B35350
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ACharacter_Tentacle_C::OnCharacterDied()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Tentacle.Character_Tentacle_C.OnCharacterDied");

	ACharacter_Tentacle_C_OnCharacterDied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Tentacle.Character_Tentacle_C.OnPostComputeStats
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ACharacter_Tentacle_C::OnPostComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Tentacle.Character_Tentacle_C.OnPostComputeStats");

	ACharacter_Tentacle_C_OnPostComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Tentacle.Character_Tentacle_C.NotifyHitTarget
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void ACharacter_Tentacle_C::NotifyHitTarget(struct FDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Tentacle.Character_Tentacle_C.NotifyHitTarget");

	ACharacter_Tentacle_C_NotifyHitTarget_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Tentacle.Character_Tentacle_C.DestroyMinion
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ACharacter_Tentacle_C::DestroyMinion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Tentacle.Character_Tentacle_C.DestroyMinion");

	ACharacter_Tentacle_C_DestroyMinion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Tentacle.Character_Tentacle_C.OnOwnerComputeStats
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Tentacle_C::OnOwnerComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Tentacle.Character_Tentacle_C.OnOwnerComputeStats");

	ACharacter_Tentacle_C_OnOwnerComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Tentacle.Character_Tentacle_C.MC_Explosion
// 00007FF6F8B35350
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ACharacter_Tentacle_C::MC_Explosion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Tentacle.Character_Tentacle_C.MC_Explosion");

	ACharacter_Tentacle_C_MC_Explosion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Tentacle.Character_Tentacle_C.ExecuteUbergraph_Character_Tentacle
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Tentacle_C::ExecuteUbergraph_Character_Tentacle(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Tentacle.Character_Tentacle_C.ExecuteUbergraph_Character_Tentacle");

	ACharacter_Tentacle_C_ExecuteUbergraph_Character_Tentacle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
