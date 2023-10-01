// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Voice_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Voice.Ability_Voice_C.OnCausedDeath_CE
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_Voice_C::OnCausedDeath_CE(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Voice.Ability_Voice_C.OnCausedDeath_CE");

	UAbility_Voice_C_OnCausedDeath_CE_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Voice.Ability_Voice_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Voice_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Voice.Ability_Voice_C.OnActivated");

	UAbility_Voice_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Voice.Ability_Voice_C.ExecuteUbergraph_Ability_Voice
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Voice_C::ExecuteUbergraph_Ability_Voice(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Voice.Ability_Voice_C.ExecuteUbergraph_Ability_Voice");

	UAbility_Voice_C_ExecuteUbergraph_Ability_Voice_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
