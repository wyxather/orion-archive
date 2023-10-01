// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_DLCSkill_13_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_DLCSkill_13.Passive_Beastmaster_DLCSkill_12_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_Beastmaster_DLCSkill_12_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_13.Passive_Beastmaster_DLCSkill_12_C.OnActivated");

	UPassive_Beastmaster_DLCSkill_12_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_DLCSkill_13.Passive_Beastmaster_DLCSkill_12_C.DLCSkill11_OnBeastmasterPetSpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*           Pet                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_DLCSkill_12_C::DLCSkill11_OnBeastmasterPetSpawned(class AOakCharacter* Pet)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_13.Passive_Beastmaster_DLCSkill_12_C.DLCSkill11_OnBeastmasterPetSpawned");

	UPassive_Beastmaster_DLCSkill_12_C_DLCSkill11_OnBeastmasterPetSpawned_Params params;
	params.Pet = Pet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_DLCSkill_13.Passive_Beastmaster_DLCSkill_12_C.DLCSkill11_OnBeastmasterPetReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*           Pet                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_DLCSkill_12_C::DLCSkill11_OnBeastmasterPetReleased(class AOakCharacter* Pet)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_13.Passive_Beastmaster_DLCSkill_12_C.DLCSkill11_OnBeastmasterPetReleased");

	UPassive_Beastmaster_DLCSkill_12_C_DLCSkill11_OnBeastmasterPetReleased_Params params;
	params.Pet = Pet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_DLCSkill_13.Passive_Beastmaster_DLCSkill_12_C.SetupPetEvents
// (BlueprintCallable, BlueprintEvent)

void UPassive_Beastmaster_DLCSkill_12_C::SetupPetEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_13.Passive_Beastmaster_DLCSkill_12_C.SetupPetEvents");

	UPassive_Beastmaster_DLCSkill_12_C_SetupPetEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_DLCSkill_13.Passive_Beastmaster_DLCSkill_12_C.CleanupPetEvents
// (BlueprintCallable, BlueprintEvent)

void UPassive_Beastmaster_DLCSkill_12_C::CleanupPetEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_13.Passive_Beastmaster_DLCSkill_12_C.CleanupPetEvents");

	UPassive_Beastmaster_DLCSkill_12_C_CleanupPetEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_DLCSkill_13.Passive_Beastmaster_DLCSkill_12_C.DLCSkill12_OnCausedAnyDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UPassive_Beastmaster_DLCSkill_12_C::DLCSkill12_OnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_13.Passive_Beastmaster_DLCSkill_12_C.DLCSkill12_OnCausedAnyDamage");

	UPassive_Beastmaster_DLCSkill_12_C_DLCSkill12_OnCausedAnyDamage_Params params;
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


// Function Passive_Beastmaster_DLCSkill_13.Passive_Beastmaster_DLCSkill_12_C.OpenGate
// (BlueprintCallable, BlueprintEvent)

void UPassive_Beastmaster_DLCSkill_12_C::OpenGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_13.Passive_Beastmaster_DLCSkill_12_C.OpenGate");

	UPassive_Beastmaster_DLCSkill_12_C_OpenGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_DLCSkill_13.Passive_Beastmaster_DLCSkill_12_C.ExecuteUbergraph_Passive_Beastmaster_DLCSkill_13
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_DLCSkill_12_C::ExecuteUbergraph_Passive_Beastmaster_DLCSkill_13(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_13.Passive_Beastmaster_DLCSkill_12_C.ExecuteUbergraph_Passive_Beastmaster_DLCSkill_13");

	UPassive_Beastmaster_DLCSkill_12_C_ExecuteUbergraph_Passive_Beastmaster_DLCSkill_13_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
