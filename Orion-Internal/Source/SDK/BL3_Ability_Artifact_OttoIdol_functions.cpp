// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Artifact_OttoIdol_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Artifact_OttoIdol.Ability_Artifact_OttoIdol_C.Ammo Return
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Artifact_OttoIdol_C::Ammo_Return(class AOakCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_OttoIdol.Ability_Artifact_OttoIdol_C.Ammo Return");

	UAbility_Artifact_OttoIdol_C_Ammo_Return_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_OttoIdol.Ability_Artifact_OttoIdol_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Artifact_OttoIdol_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_OttoIdol.Ability_Artifact_OttoIdol_C.OnActivated");

	UAbility_Artifact_OttoIdol_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_OttoIdol.Ability_Artifact_OttoIdol_C.KilledEnemy
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_Artifact_OttoIdol_C::KilledEnemy(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_OttoIdol.Ability_Artifact_OttoIdol_C.KilledEnemy");

	UAbility_Artifact_OttoIdol_C_KilledEnemy_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Artifact_OttoIdol.Ability_Artifact_OttoIdol_C.ExecuteUbergraph_Ability_Artifact_OttoIdol
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Artifact_OttoIdol_C::ExecuteUbergraph_Ability_Artifact_OttoIdol(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Artifact_OttoIdol.Ability_Artifact_OttoIdol_C.ExecuteUbergraph_Ability_Artifact_OttoIdol");

	UAbility_Artifact_OttoIdol_C_ExecuteUbergraph_Ability_Artifact_OttoIdol_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
