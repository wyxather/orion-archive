// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_DLCSkill_12_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_DLCSkill_12.Passive_Beastmaster_DLCSkill_11_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_Beastmaster_DLCSkill_11_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_12.Passive_Beastmaster_DLCSkill_11_C.OnActivated");

	UPassive_Beastmaster_DLCSkill_11_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_DLCSkill_12.Passive_Beastmaster_DLCSkill_11_C.DLCSkill11_OnBeastmasterPetSpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*           Pet                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_DLCSkill_11_C::DLCSkill11_OnBeastmasterPetSpawned(class AOakCharacter* Pet)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_12.Passive_Beastmaster_DLCSkill_11_C.DLCSkill11_OnBeastmasterPetSpawned");

	UPassive_Beastmaster_DLCSkill_11_C_DLCSkill11_OnBeastmasterPetSpawned_Params params;
	params.Pet = Pet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_DLCSkill_12.Passive_Beastmaster_DLCSkill_11_C.DLCSkill11_OnBeastmasterPetReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*           Pet                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_DLCSkill_11_C::DLCSkill11_OnBeastmasterPetReleased(class AOakCharacter* Pet)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_12.Passive_Beastmaster_DLCSkill_11_C.DLCSkill11_OnBeastmasterPetReleased");

	UPassive_Beastmaster_DLCSkill_11_C_DLCSkill11_OnBeastmasterPetReleased_Params params;
	params.Pet = Pet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_DLCSkill_12.Passive_Beastmaster_DLCSkill_11_C.SetupPetEvents
// (BlueprintCallable, BlueprintEvent)

void UPassive_Beastmaster_DLCSkill_11_C::SetupPetEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_12.Passive_Beastmaster_DLCSkill_11_C.SetupPetEvents");

	UPassive_Beastmaster_DLCSkill_11_C_SetupPetEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_DLCSkill_12.Passive_Beastmaster_DLCSkill_11_C.CleanupPetEvents
// (BlueprintCallable, BlueprintEvent)

void UPassive_Beastmaster_DLCSkill_11_C::CleanupPetEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_12.Passive_Beastmaster_DLCSkill_11_C.CleanupPetEvents");

	UPassive_Beastmaster_DLCSkill_11_C_CleanupPetEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_DLCSkill_12.Passive_Beastmaster_DLCSkill_11_C.DLCSkill11_Pet_OnCausedDeath
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPassive_Beastmaster_DLCSkill_11_C::DLCSkill11_Pet_OnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_12.Passive_Beastmaster_DLCSkill_11_C.DLCSkill11_Pet_OnCausedDeath");

	UPassive_Beastmaster_DLCSkill_11_C_DLCSkill11_Pet_OnCausedDeath_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_DLCSkill_12.Passive_Beastmaster_DLCSkill_11_C.ExecuteUbergraph_Passive_Beastmaster_DLCSkill_12
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_DLCSkill_11_C::ExecuteUbergraph_Passive_Beastmaster_DLCSkill_12(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_12.Passive_Beastmaster_DLCSkill_11_C.ExecuteUbergraph_Passive_Beastmaster_DLCSkill_12");

	UPassive_Beastmaster_DLCSkill_11_C_ExecuteUbergraph_Passive_Beastmaster_DLCSkill_12_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
