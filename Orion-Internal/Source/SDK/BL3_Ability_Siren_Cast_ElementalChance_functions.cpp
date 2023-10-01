// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Siren_Cast_ElementalChance_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Siren_Cast_ElementalChance.Ability_Siren_Cast_ElementalChance_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Siren_Cast_ElementalChance_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Siren_Cast_ElementalChance.Ability_Siren_Cast_ElementalChance_C.OnActivated");

	UAbility_Siren_Cast_ElementalChance_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Siren_Cast_ElementalChance.Ability_Siren_Cast_ElementalChance_C.CastUsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPhaseTranceAttackFamilyType   FamilyType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPhasetranceAttackAction> PhaseTranceAction              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Siren_Cast_ElementalChance_C::CastUsed(EPhaseTranceAttackFamilyType FamilyType, TEnumAsByte<EPhasetranceAttackAction> PhaseTranceAction, bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Siren_Cast_ElementalChance.Ability_Siren_Cast_ElementalChance_C.CastUsed");

	UAbility_Siren_Cast_ElementalChance_C_CastUsed_Params params;
	params.FamilyType = FamilyType;
	params.PhaseTranceAction = PhaseTranceAction;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Siren_Cast_ElementalChance.Ability_Siren_Cast_ElementalChance_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Siren_Cast_ElementalChance_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Siren_Cast_ElementalChance.Ability_Siren_Cast_ElementalChance_C.OnDeactivated");

	UAbility_Siren_Cast_ElementalChance_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Siren_Cast_ElementalChance.Ability_Siren_Cast_ElementalChance_C.ExecuteUbergraph_Ability_Siren_Cast_ElementalChance
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Siren_Cast_ElementalChance_C::ExecuteUbergraph_Ability_Siren_Cast_ElementalChance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Siren_Cast_ElementalChance.Ability_Siren_Cast_ElementalChance_C.ExecuteUbergraph_Ability_Siren_Cast_ElementalChance");

	UAbility_Siren_Cast_ElementalChance_C_ExecuteUbergraph_Ability_Siren_Cast_ElementalChance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
