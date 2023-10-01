// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Siren_Grasp_TerrorSkulls_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Siren_Grasp_TerrorSkulls.Ability_Siren_Grasp_TerrorSkulls_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Siren_Grasp_TerrorSkulls_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Siren_Grasp_TerrorSkulls.Ability_Siren_Grasp_TerrorSkulls_C.OnActivated");

	UAbility_Siren_Grasp_TerrorSkulls_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Siren_Grasp_TerrorSkulls.Ability_Siren_Grasp_TerrorSkulls_C.GraspedTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Enemy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EPhaseTranceElementalType      Element                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Siren_Grasp_TerrorSkulls_C::GraspedTarget(class AActor* Enemy, EPhaseTranceElementalType Element)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Siren_Grasp_TerrorSkulls.Ability_Siren_Grasp_TerrorSkulls_C.GraspedTarget");

	UAbility_Siren_Grasp_TerrorSkulls_C_GraspedTarget_Params params;
	params.Enemy = Enemy;
	params.Element = Element;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Siren_Grasp_TerrorSkulls.Ability_Siren_Grasp_TerrorSkulls_C.ExecuteUbergraph_Ability_Siren_Grasp_TerrorSkulls
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Siren_Grasp_TerrorSkulls_C::ExecuteUbergraph_Ability_Siren_Grasp_TerrorSkulls(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Siren_Grasp_TerrorSkulls.Ability_Siren_Grasp_TerrorSkulls_C.ExecuteUbergraph_Ability_Siren_Grasp_TerrorSkulls");

	UAbility_Siren_Grasp_TerrorSkulls_C_ExecuteUbergraph_Ability_Siren_Grasp_TerrorSkulls_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
