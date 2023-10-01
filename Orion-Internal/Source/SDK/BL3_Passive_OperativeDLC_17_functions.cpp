// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_OperativeDLC_17_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_OperativeDLC_17.Passive_OperativeDLC_16_C.GetManualHUDIconValues
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int                            outStackCount                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          outDuration                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          outTimeRemaining               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPassive_OperativeDLC_16_C::GetManualHUDIconValues(int* outStackCount, float* outDuration, float* outTimeRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_OperativeDLC_17.Passive_OperativeDLC_16_C.GetManualHUDIconValues");

	UPassive_OperativeDLC_16_C_GetManualHUDIconValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outStackCount != nullptr)
		*outStackCount = params.outStackCount;
	if (outDuration != nullptr)
		*outDuration = params.outDuration;
	if (outTimeRemaining != nullptr)
		*outTimeRemaining = params.outTimeRemaining;
}


// Function Passive_OperativeDLC_17.Passive_OperativeDLC_16_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_OperativeDLC_16_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_OperativeDLC_17.Passive_OperativeDLC_16_C.OnActivated");

	UPassive_OperativeDLC_16_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_OperativeDLC_17.Passive_OperativeDLC_16_C.DLCSkill16_OnCausedAnyDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UPassive_OperativeDLC_16_C::DLCSkill16_OnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_OperativeDLC_17.Passive_OperativeDLC_16_C.DLCSkill16_OnCausedAnyDamage");

	UPassive_OperativeDLC_16_C_DLCSkill16_OnCausedAnyDamage_Params params;
	params.DamageInstigator = DamageInstigator;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.DamageSource = DamageSource;
	params.DamagedActor = DamagedActor;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_OperativeDLC_17.Passive_OperativeDLC_16_C.SetDigicloneBinds
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_OperativeDLC_16_C::SetDigicloneBinds(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_OperativeDLC_17.Passive_OperativeDLC_16_C.SetDigicloneBinds");

	UPassive_OperativeDLC_16_C_SetDigicloneBinds_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_OperativeDLC_17.Passive_OperativeDLC_16_C.ExecuteUbergraph_Passive_OperativeDLC_17
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_OperativeDLC_16_C::ExecuteUbergraph_Passive_OperativeDLC_17(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_OperativeDLC_17.Passive_OperativeDLC_16_C.ExecuteUbergraph_Passive_OperativeDLC_17");

	UPassive_OperativeDLC_16_C_ExecuteUbergraph_Passive_OperativeDLC_17_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
