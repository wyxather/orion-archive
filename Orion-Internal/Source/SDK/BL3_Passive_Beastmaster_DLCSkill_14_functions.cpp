// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_DLCSkill_14_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_DLCSkill_14.Passive_Beastmaster_DLCSkill_13_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_Beastmaster_DLCSkill_13_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_14.Passive_Beastmaster_DLCSkill_13_C.OnActivated");

	UPassive_Beastmaster_DLCSkill_13_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_DLCSkill_14.Passive_Beastmaster_DLCSkill_13_C.SetPetCDM
// (BlueprintCallable, BlueprintEvent)

void UPassive_Beastmaster_DLCSkill_13_C::SetPetCDM()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_14.Passive_Beastmaster_DLCSkill_13_C.SetPetCDM");

	UPassive_Beastmaster_DLCSkill_13_C_SetPetCDM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_DLCSkill_14.Passive_Beastmaster_DLCSkill_13_C.RemovePetCDM
// (BlueprintCallable, BlueprintEvent)

void UPassive_Beastmaster_DLCSkill_13_C::RemovePetCDM()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_14.Passive_Beastmaster_DLCSkill_13_C.RemovePetCDM");

	UPassive_Beastmaster_DLCSkill_13_C_RemovePetCDM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_DLCSkill_14.Passive_Beastmaster_DLCSkill_13_C.Beastmaster_DLCSkill13_OnPetSpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*           Pet                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_DLCSkill_13_C::Beastmaster_DLCSkill13_OnPetSpawned(class AOakCharacter* Pet)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_14.Passive_Beastmaster_DLCSkill_13_C.Beastmaster_DLCSkill13_OnPetSpawned");

	UPassive_Beastmaster_DLCSkill_13_C_Beastmaster_DLCSkill13_OnPetSpawned_Params params;
	params.Pet = Pet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_DLCSkill_14.Passive_Beastmaster_DLCSkill_13_C.Beastmaster_DLCSkill13_OnPetReleased
// (BlueprintCallable, BlueprintEvent)

void UPassive_Beastmaster_DLCSkill_13_C::Beastmaster_DLCSkill13_OnPetReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_14.Passive_Beastmaster_DLCSkill_13_C.Beastmaster_DLCSkill13_OnPetReleased");

	UPassive_Beastmaster_DLCSkill_13_C_Beastmaster_DLCSkill13_OnPetReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_DLCSkill_14.Passive_Beastmaster_DLCSkill_13_C.ExecuteUbergraph_Passive_Beastmaster_DLCSkill_14
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_DLCSkill_13_C::ExecuteUbergraph_Passive_Beastmaster_DLCSkill_14(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_14.Passive_Beastmaster_DLCSkill_13_C.ExecuteUbergraph_Passive_Beastmaster_DLCSkill_14");

	UPassive_Beastmaster_DLCSkill_13_C_ExecuteUbergraph_Passive_Beastmaster_DLCSkill_14_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
