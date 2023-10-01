// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_CM_Ixora2_SRN_L01_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_CM_Ixora2_SRN_L01.Ability_CM_Ixora2_SRN_L01_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_CM_Ixora2_SRN_L01_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_CM_Ixora2_SRN_L01.Ability_CM_Ixora2_SRN_L01_C.OnActivated");

	UAbility_CM_Ixora2_SRN_L01_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_CM_Ixora2_SRN_L01.Ability_CM_Ixora2_SRN_L01_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_CM_Ixora2_SRN_L01_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_CM_Ixora2_SRN_L01.Ability_CM_Ixora2_SRN_L01_C.OnDeactivated");

	UAbility_CM_Ixora2_SRN_L01_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_CM_Ixora2_SRN_L01.Ability_CM_Ixora2_SRN_L01_C.OnCausedDeath
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_CM_Ixora2_SRN_L01_C::OnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_CM_Ixora2_SRN_L01.Ability_CM_Ixora2_SRN_L01_C.OnCausedDeath");

	UAbility_CM_Ixora2_SRN_L01_C_OnCausedDeath_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_CM_Ixora2_SRN_L01.Ability_CM_Ixora2_SRN_L01_C.ResetBuffOrb
// (BlueprintCallable, BlueprintEvent)

void UAbility_CM_Ixora2_SRN_L01_C::ResetBuffOrb()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_CM_Ixora2_SRN_L01.Ability_CM_Ixora2_SRN_L01_C.ResetBuffOrb");

	UAbility_CM_Ixora2_SRN_L01_C_ResetBuffOrb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_CM_Ixora2_SRN_L01.Ability_CM_Ixora2_SRN_L01_C.ExecuteUbergraph_Ability_CM_Ixora2_SRN_L01
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_CM_Ixora2_SRN_L01_C::ExecuteUbergraph_Ability_CM_Ixora2_SRN_L01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_CM_Ixora2_SRN_L01.Ability_CM_Ixora2_SRN_L01_C.ExecuteUbergraph_Ability_CM_Ixora2_SRN_L01");

	UAbility_CM_Ixora2_SRN_L01_C_ExecuteUbergraph_Ability_CM_Ixora2_SRN_L01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
