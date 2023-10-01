// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_DLCSkill_16_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_DLCSkill_16.Passive_Beastmaster_DLCSkill_15_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_Beastmaster_DLCSkill_15_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_16.Passive_Beastmaster_DLCSkill_15_C.OnActivated");

	UPassive_Beastmaster_DLCSkill_15_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_DLCSkill_16.Passive_Beastmaster_DLCSkill_15_C.DLCSkill15_UsedAttackCommand
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EOakActionAbilityPetEvolutionType PetEvolution                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EOakActionAbilityPetType       PetType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_DLCSkill_15_C::DLCSkill15_UsedAttackCommand(EOakActionAbilityPetEvolutionType PetEvolution, EOakActionAbilityPetType PetType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_16.Passive_Beastmaster_DLCSkill_15_C.DLCSkill15_UsedAttackCommand");

	UPassive_Beastmaster_DLCSkill_15_C_DLCSkill15_UsedAttackCommand_Params params;
	params.PetEvolution = PetEvolution;
	params.PetType = PetType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Beastmaster_DLCSkill_16.Passive_Beastmaster_DLCSkill_15_C.ExecuteUbergraph_Passive_Beastmaster_DLCSkill_16
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Beastmaster_DLCSkill_15_C::ExecuteUbergraph_Passive_Beastmaster_DLCSkill_16(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Beastmaster_DLCSkill_16.Passive_Beastmaster_DLCSkill_15_C.ExecuteUbergraph_Passive_Beastmaster_DLCSkill_16");

	UPassive_Beastmaster_DLCSkill_15_C_ExecuteUbergraph_Passive_Beastmaster_DLCSkill_16_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
