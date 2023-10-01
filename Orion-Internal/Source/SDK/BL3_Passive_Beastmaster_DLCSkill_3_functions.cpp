// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_DLCSkill_3_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_DLCSkill_3.Passive_Beastmaster_DLCSkill_2_C.DamageCalc
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_DLCSkill_2_C::DamageCalc(float* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_3.Passive_Beastmaster_DLCSkill_2_C.DamageCalc");

	UPassive_Beastmaster_DLCSkill_2_C_DamageCalc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Passive_Beastmaster_DLCSkill_3.Passive_Beastmaster_DLCSkill_2_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_Beastmaster_DLCSkill_2_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_3.Passive_Beastmaster_DLCSkill_2_C.OnActivated");

	UPassive_Beastmaster_DLCSkill_2_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_DLCSkill_3.Passive_Beastmaster_DLCSkill_2_C.DLCSkill2_TriggerSkill
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameResourcePoolReference ResourcePool                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UPassive_Beastmaster_DLCSkill_2_C::DLCSkill2_TriggerSkill(const struct FGameResourcePoolReference& ResourcePool)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_3.Passive_Beastmaster_DLCSkill_2_C.DLCSkill2_TriggerSkill");

	UPassive_Beastmaster_DLCSkill_2_C_DLCSkill2_TriggerSkill_Params params;
	params.ResourcePool = ResourcePool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_DLCSkill_3.Passive_Beastmaster_DLCSkill_2_C.OnPetSpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*           Pet                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_DLCSkill_2_C::OnPetSpawned(class AOakCharacter* Pet)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_3.Passive_Beastmaster_DLCSkill_2_C.OnPetSpawned");

	UPassive_Beastmaster_DLCSkill_2_C_OnPetSpawned_Params params;
	params.Pet = Pet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_DLCSkill_3.Passive_Beastmaster_DLCSkill_2_C.ExecuteUbergraph_Passive_Beastmaster_DLCSkill_3
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_DLCSkill_2_C::ExecuteUbergraph_Passive_Beastmaster_DLCSkill_3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_3.Passive_Beastmaster_DLCSkill_2_C.ExecuteUbergraph_Passive_Beastmaster_DLCSkill_3");

	UPassive_Beastmaster_DLCSkill_2_C_ExecuteUbergraph_Passive_Beastmaster_DLCSkill_3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
