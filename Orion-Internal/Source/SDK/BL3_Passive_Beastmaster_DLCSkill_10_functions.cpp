// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_DLCSkill_10_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.GetManualHUDIconValues
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int                            outStackCount                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          outDuration                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          outTimeRemaining               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_DLCSkill_9_C::GetManualHUDIconValues(int* outStackCount, float* outDuration, float* outTimeRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.GetManualHUDIconValues");

	UPassive_Beastmaster_DLCSkill_9_C_GetManualHUDIconValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outStackCount != nullptr)
		*outStackCount = params.outStackCount;
	if (outDuration != nullptr)
		*outDuration = params.outDuration;
	if (outTimeRemaining != nullptr)
		*outTimeRemaining = params.outTimeRemaining;
}


// Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.SetupPetDamageEvent
// (BlueprintCallable, BlueprintEvent)

void UPassive_Beastmaster_DLCSkill_9_C::SetupPetDamageEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.SetupPetDamageEvent");

	UPassive_Beastmaster_DLCSkill_9_C_SetupPetDamageEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.RemovePetDamageEvent
// (BlueprintCallable, BlueprintEvent)

void UPassive_Beastmaster_DLCSkill_9_C::RemovePetDamageEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.RemovePetDamageEvent");

	UPassive_Beastmaster_DLCSkill_9_C_RemovePetDamageEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.DLCSkill9_OnBeastPetSpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*           Pet                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_DLCSkill_9_C::DLCSkill9_OnBeastPetSpawned(class AOakCharacter* Pet)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.DLCSkill9_OnBeastPetSpawned");

	UPassive_Beastmaster_DLCSkill_9_C_DLCSkill9_OnBeastPetSpawned_Params params;
	params.Pet = Pet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.DLCSkill9_OnBeastmasterPetReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*           Pet                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_DLCSkill_9_C::DLCSkill9_OnBeastmasterPetReleased(class AOakCharacter* Pet)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.DLCSkill9_OnBeastmasterPetReleased");

	UPassive_Beastmaster_DLCSkill_9_C_DLCSkill9_OnBeastmasterPetReleased_Params params;
	params.Pet = Pet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.DLCSkill9_Pet_OnCausedAnyDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UPassive_Beastmaster_DLCSkill_9_C::DLCSkill9_Pet_OnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.DLCSkill9_Pet_OnCausedAnyDamage");

	UPassive_Beastmaster_DLCSkill_9_C_DLCSkill9_Pet_OnCausedAnyDamage_Params params;
	params.DamageInstigator = DamageInstigator;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.DamageSource = DamageSource;
	params.DamagedActor = DamagedActor;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.DLCSkill9_Player_OnWeaponUsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_DLCSkill_9_C::DLCSkill9_Player_OnWeaponUsed(class AWeapon* EventWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.DLCSkill9_Player_OnWeaponUsed");

	UPassive_Beastmaster_DLCSkill_9_C_DLCSkill9_Player_OnWeaponUsed_Params params;
	params.EventWeapon = EventWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_Beastmaster_DLCSkill_9_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.OnActivated");

	UPassive_Beastmaster_DLCSkill_9_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.ExecuteUbergraph_Passive_Beastmaster_DLCSkill_10
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_DLCSkill_9_C::ExecuteUbergraph_Passive_Beastmaster_DLCSkill_10(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_10.Passive_Beastmaster_DLCSkill_9_C.ExecuteUbergraph_Passive_Beastmaster_DLCSkill_10");

	UPassive_Beastmaster_DLCSkill_9_C_ExecuteUbergraph_Passive_Beastmaster_DLCSkill_10_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
