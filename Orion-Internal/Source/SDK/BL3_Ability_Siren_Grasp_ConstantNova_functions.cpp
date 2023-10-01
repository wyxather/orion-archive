// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Siren_Grasp_ConstantNova_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Siren_Grasp_ConstantNova.Ability_Siren_Grasp_ConstantNova_C.AnointTriggerEffect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          TriggerEffect                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbility_Siren_Grasp_ConstantNova_C::AnointTriggerEffect(bool* TriggerEffect, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Siren_Grasp_ConstantNova.Ability_Siren_Grasp_ConstantNova_C.AnointTriggerEffect");

	UAbility_Siren_Grasp_ConstantNova_C_AnointTriggerEffect_Params params;
	params.TriggerEffect = TriggerEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Ability_Siren_Grasp_ConstantNova.Ability_Siren_Grasp_ConstantNova_C.TriggerNova
// (BlueprintCallable, BlueprintEvent)

void UAbility_Siren_Grasp_ConstantNova_C::TriggerNova()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Siren_Grasp_ConstantNova.Ability_Siren_Grasp_ConstantNova_C.TriggerNova");

	UAbility_Siren_Grasp_ConstantNova_C_TriggerNova_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Siren_Grasp_ConstantNova.Ability_Siren_Grasp_ConstantNova_C.AnointRemoveEffect
// (Public, BlueprintCallable, BlueprintEvent)

void UAbility_Siren_Grasp_ConstantNova_C::AnointRemoveEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Siren_Grasp_ConstantNova.Ability_Siren_Grasp_ConstantNova_C.AnointRemoveEffect");

	UAbility_Siren_Grasp_ConstantNova_C_AnointRemoveEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Siren_Grasp_ConstantNova.Ability_Siren_Grasp_ConstantNova_C.StartTriggeringNovas
// (BlueprintCallable, BlueprintEvent)

void UAbility_Siren_Grasp_ConstantNova_C::StartTriggeringNovas()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Siren_Grasp_ConstantNova.Ability_Siren_Grasp_ConstantNova_C.StartTriggeringNovas");

	UAbility_Siren_Grasp_ConstantNova_C_StartTriggeringNovas_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Siren_Grasp_ConstantNova.Ability_Siren_Grasp_ConstantNova_C.AnointGraspEnded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Killed                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Siren_Grasp_ConstantNova_C::AnointGraspEnded(bool* Killed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Siren_Grasp_ConstantNova.Ability_Siren_Grasp_ConstantNova_C.AnointGraspEnded");

	UAbility_Siren_Grasp_ConstantNova_C_AnointGraspEnded_Params params;
	params.Killed = Killed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Siren_Grasp_ConstantNova.Ability_Siren_Grasp_ConstantNova_C.ExecuteUbergraph_Ability_Siren_Grasp_ConstantNova
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Siren_Grasp_ConstantNova_C::ExecuteUbergraph_Ability_Siren_Grasp_ConstantNova(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Siren_Grasp_ConstantNova.Ability_Siren_Grasp_ConstantNova_C.ExecuteUbergraph_Ability_Siren_Grasp_ConstantNova");

	UAbility_Siren_Grasp_ConstantNova_C_ExecuteUbergraph_Ability_Siren_Grasp_ConstantNova_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
