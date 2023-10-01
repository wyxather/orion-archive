// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Wasteland_VeryGoodBoy_Minion_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.GetMinionOwner
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Owner                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Wasteland_VeryGoodBoy_Minion_C::GetMinionOwner(class AActor** Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.GetMinionOwner");

	ACharacter_Wasteland_VeryGoodBoy_Minion_C_GetMinionOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Owner != nullptr)
		*Owner = params.Owner;
}


// Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.GetSpawnTime
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Wasteland_VeryGoodBoy_Minion_C::GetSpawnTime(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.GetSpawnTime");

	ACharacter_Wasteland_VeryGoodBoy_Minion_C_GetSpawnTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;
}


// Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.IsValidMinion
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_Wasteland_VeryGoodBoy_Minion_C::IsValidMinion(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.IsValidMinion");

	ACharacter_Wasteland_VeryGoodBoy_Minion_C_IsValidMinion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.HasSoulEmberTrinket
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_Wasteland_VeryGoodBoy_Minion_C::HasSoulEmberTrinket(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.HasSoulEmberTrinket");

	ACharacter_Wasteland_VeryGoodBoy_Minion_C_HasSoulEmberTrinket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.MinionHasDamageTag
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ExtraDamage                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          DamageScalar                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Wasteland_VeryGoodBoy_Minion_C::MinionHasDamageTag(bool* ExtraDamage, float* DamageScalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.MinionHasDamageTag");

	ACharacter_Wasteland_VeryGoodBoy_Minion_C_MinionHasDamageTag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExtraDamage != nullptr)
		*ExtraDamage = params.ExtraDamage;
	if (DamageScalar != nullptr)
		*DamageScalar = params.DamageScalar;
}


// Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.GetCauseDamageScalar
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scalar                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Wasteland_VeryGoodBoy_Minion_C::GetCauseDamageScalar(float* Scalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.GetCauseDamageScalar");

	ACharacter_Wasteland_VeryGoodBoy_Minion_C_GetCauseDamageScalar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scalar != nullptr)
		*Scalar = params.Scalar;
}


// Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.GetFriendsForBuff
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ACharacterGunfire*> Characters                     (Parm, OutParm, ZeroConstructor)

void ACharacter_Wasteland_VeryGoodBoy_Minion_C::GetFriendsForBuff(class AActor** InputPin, TArray<class ACharacterGunfire*>* Characters)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.GetFriendsForBuff");

	ACharacter_Wasteland_VeryGoodBoy_Minion_C_GetFriendsForBuff_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Characters != nullptr)
		*Characters = params.Characters;
}


// Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.GetBrutalMarkDamageMod
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDamageInfo*            InputPin                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// float                          DamageMod                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Wasteland_VeryGoodBoy_Minion_C::GetBrutalMarkDamageMod(struct FDamageInfo* InputPin, float* DamageMod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.GetBrutalMarkDamageMod");

	ACharacter_Wasteland_VeryGoodBoy_Minion_C_GetBrutalMarkDamageMod_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageMod != nullptr)
		*DamageMod = params.DamageMod;
}


// Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.GetArmorScalars
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// float                          MinionDamageScalar             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Wasteland_VeryGoodBoy_Minion_C::GetArmorScalars(struct FDamageInfo* DamageInfo, float* MinionDamageScalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.GetArmorScalars");

	ACharacter_Wasteland_VeryGoodBoy_Minion_C_GetArmorScalars_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinionDamageScalar != nullptr)
		*MinionDamageScalar = params.MinionDamageScalar;
}


// Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.GetPunisherDamageMod
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          PunisherMod                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Wasteland_VeryGoodBoy_Minion_C::GetPunisherDamageMod(class AActor** Target, float* PunisherMod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.GetPunisherDamageMod");

	ACharacter_Wasteland_VeryGoodBoy_Minion_C_GetPunisherDamageMod_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PunisherMod != nullptr)
		*PunisherMod = params.PunisherMod;
}


// Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.ModifyDamage
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacter_Wasteland_VeryGoodBoy_Minion_C::ModifyDamage(struct FDamageInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.ModifyDamage");

	ACharacter_Wasteland_VeryGoodBoy_Minion_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;
}


// Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.MC_BuildUp
// 00007FF6F8B35350
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ACharacter_Wasteland_VeryGoodBoy_Minion_C::MC_BuildUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.MC_BuildUp");

	ACharacter_Wasteland_VeryGoodBoy_Minion_C_MC_BuildUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.MC_Explosion
// 00007FF6F8B35350
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ACharacter_Wasteland_VeryGoodBoy_Minion_C::MC_Explosion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.MC_Explosion");

	ACharacter_Wasteland_VeryGoodBoy_Minion_C_MC_Explosion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ACharacter_Wasteland_VeryGoodBoy_Minion_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.ReceiveBeginPlay");

	ACharacter_Wasteland_VeryGoodBoy_Minion_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.OnOwnerComputeStats
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Wasteland_VeryGoodBoy_Minion_C::OnOwnerComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.OnOwnerComputeStats");

	ACharacter_Wasteland_VeryGoodBoy_Minion_C_OnOwnerComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.OnDead_Event_2
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char*                 Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Cause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Wasteland_VeryGoodBoy_Minion_C::OnDead_Event_2(unsigned char* Reason, class ACharacterGunfire** Character, class AActor** Cause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.OnDead_Event_2");

	ACharacter_Wasteland_VeryGoodBoy_Minion_C_OnDead_Event_2_Params params;
	params.Reason = Reason;
	params.Character = Character;
	params.Cause = Cause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.MulticastDissolveOut
// 00007FF6F8B35350
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ACharacter_Wasteland_VeryGoodBoy_Minion_C::MulticastDissolveOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.MulticastDissolveOut");

	ACharacter_Wasteland_VeryGoodBoy_Minion_C_MulticastDissolveOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.DestroyMinion
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ACharacter_Wasteland_VeryGoodBoy_Minion_C::DestroyMinion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.DestroyMinion");

	ACharacter_Wasteland_VeryGoodBoy_Minion_C_DestroyMinion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.OnPostComputeStats
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ACharacter_Wasteland_VeryGoodBoy_Minion_C::OnPostComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.OnPostComputeStats");

	ACharacter_Wasteland_VeryGoodBoy_Minion_C_OnPostComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.NotifyHitTarget
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void ACharacter_Wasteland_VeryGoodBoy_Minion_C::NotifyHitTarget(struct FDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.NotifyHitTarget");

	ACharacter_Wasteland_VeryGoodBoy_Minion_C_NotifyHitTarget_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.DissolveOut
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Wasteland_VeryGoodBoy_Minion_C::DissolveOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.DissolveOut");

	ACharacter_Wasteland_VeryGoodBoy_Minion_C_DissolveOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.GoodBoyBuff
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ACharacter_Wasteland_VeryGoodBoy_Minion_C::GoodBoyBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.GoodBoyBuff");

	ACharacter_Wasteland_VeryGoodBoy_Minion_C_GoodBoyBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.OnDead_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char*                 Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Cause                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Wasteland_VeryGoodBoy_Minion_C::OnDead_Event_1(unsigned char* Reason, class ACharacterGunfire** Character, class AActor** Cause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.OnDead_Event_1");

	ACharacter_Wasteland_VeryGoodBoy_Minion_C_OnDead_Event_1_Params params;
	params.Reason = Reason;
	params.Character = Character;
	params.Cause = Cause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.ExecuteUbergraph_Character_Wasteland_VeryGoodBoy_Minion
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Wasteland_VeryGoodBoy_Minion_C::ExecuteUbergraph_Character_Wasteland_VeryGoodBoy_Minion(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Wasteland_VeryGoodBoy_Minion.Character_Wasteland_VeryGoodBoy_Minion_C.ExecuteUbergraph_Character_Wasteland_VeryGoodBoy_Minion");

	ACharacter_Wasteland_VeryGoodBoy_Minion_C_ExecuteUbergraph_Character_Wasteland_VeryGoodBoy_Minion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
