// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_AmberManagement_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_AmberManagement.Ability_AmberManagement_C.OnCauseDeath_CE
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_AmberManagement_C::OnCauseDeath_CE(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AmberManagement.Ability_AmberManagement_C.OnCauseDeath_CE");

	UAbility_AmberManagement_C_OnCauseDeath_CE_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AmberManagement.Ability_AmberManagement_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_AmberManagement_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AmberManagement.Ability_AmberManagement_C.OnDeactivated");

	UAbility_AmberManagement_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AmberManagement.Ability_AmberManagement_C.OnUnregistered
// (Event, Protected, BlueprintEvent)

void UAbility_AmberManagement_C::OnUnregistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AmberManagement.Ability_AmberManagement_C.OnUnregistered");

	UAbility_AmberManagement_C_OnUnregistered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AmberManagement.Ability_AmberManagement_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_AmberManagement_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AmberManagement.Ability_AmberManagement_C.OnActivated");

	UAbility_AmberManagement_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AmberManagement.Ability_AmberManagement_C.ExecuteUbergraph_Ability_AmberManagement
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_AmberManagement_C::ExecuteUbergraph_Ability_AmberManagement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AmberManagement.Ability_AmberManagement_C.ExecuteUbergraph_Ability_AmberManagement");

	UAbility_AmberManagement_C_ExecuteUbergraph_Ability_AmberManagement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
