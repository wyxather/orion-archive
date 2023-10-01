// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_OperativeDLC_4_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_OperativeDLC_4.Passive_OperativeDLC_3_C.CalculateAbilityState
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EGbxAbilityState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGbxAbilityState UPassive_OperativeDLC_3_C::CalculateAbilityState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_OperativeDLC_4.Passive_OperativeDLC_3_C.CalculateAbilityState");

	UPassive_OperativeDLC_3_C_CalculateAbilityState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Passive_OperativeDLC_4.Passive_OperativeDLC_3_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_OperativeDLC_3_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_OperativeDLC_4.Passive_OperativeDLC_3_C.OnActivated");

	UPassive_OperativeDLC_3_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_OperativeDLC_4.Passive_OperativeDLC_3_C.DLCSkill3_OnActionSkillActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakActionAbility*       ActionAbility                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_OperativeDLC_3_C::DLCSkill3_OnActionSkillActivated(class UOakActionAbility* ActionAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_OperativeDLC_4.Passive_OperativeDLC_3_C.DLCSkill3_OnActionSkillActivated");

	UPassive_OperativeDLC_3_C_DLCSkill3_OnActionSkillActivated_Params params;
	params.ActionAbility = ActionAbility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_OperativeDLC_4.Passive_OperativeDLC_3_C.DLCSkill3_OnWeaponUsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_OperativeDLC_3_C::DLCSkill3_OnWeaponUsed(class AWeapon* EventWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_OperativeDLC_4.Passive_OperativeDLC_3_C.DLCSkill3_OnWeaponUsed");

	UPassive_OperativeDLC_3_C_DLCSkill3_OnWeaponUsed_Params params;
	params.EventWeapon = EventWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_OperativeDLC_4.Passive_OperativeDLC_3_C.DLCSkill3_UsedBarrier
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PickedUp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_OperativeDLC_3_C::DLCSkill3_UsedBarrier(bool PickedUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_OperativeDLC_4.Passive_OperativeDLC_3_C.DLCSkill3_UsedBarrier");

	UPassive_OperativeDLC_3_C_DLCSkill3_UsedBarrier_Params params;
	params.PickedUp = PickedUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_OperativeDLC_4.Passive_OperativeDLC_3_C.DLCSkill3_SwappedPlaces
// (BlueprintCallable, BlueprintEvent)

void UPassive_OperativeDLC_3_C::DLCSkill3_SwappedPlaces()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_OperativeDLC_4.Passive_OperativeDLC_3_C.DLCSkill3_SwappedPlaces");

	UPassive_OperativeDLC_3_C_DLCSkill3_SwappedPlaces_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_OperativeDLC_4.Passive_OperativeDLC_3_C.DLCSkill3_SEtDroneTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NewTarget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_OperativeDLC_3_C::DLCSkill3_SEtDroneTarget(class AActor* NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_OperativeDLC_4.Passive_OperativeDLC_3_C.DLCSkill3_SEtDroneTarget");

	UPassive_OperativeDLC_3_C_DLCSkill3_SEtDroneTarget_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_OperativeDLC_4.Passive_OperativeDLC_3_C.ExecuteUbergraph_Passive_OperativeDLC_4
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_OperativeDLC_3_C::ExecuteUbergraph_Passive_OperativeDLC_4(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_OperativeDLC_4.Passive_OperativeDLC_3_C.ExecuteUbergraph_Passive_OperativeDLC_4");

	UPassive_OperativeDLC_3_C_ExecuteUbergraph_Passive_OperativeDLC_4_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
