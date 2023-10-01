// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_ColdBore_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Operative_ColdBore.PassiveSkill_Operative_ColdBore_C.GetManualHUDIconValues
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int                            outStackCount                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          outDuration                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          outTimeRemaining               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Operative_ColdBore_C::GetManualHUDIconValues(int* outStackCount, float* outDuration, float* outTimeRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_ColdBore.PassiveSkill_Operative_ColdBore_C.GetManualHUDIconValues");

	UPassiveSkill_Operative_ColdBore_C_GetManualHUDIconValues_Params params;

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


// Function PassiveSkill_Operative_ColdBore.PassiveSkill_Operative_ColdBore_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Operative_ColdBore_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_ColdBore.PassiveSkill_Operative_ColdBore_C.OnActivated");

	UPassiveSkill_Operative_ColdBore_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_ColdBore.PassiveSkill_Operative_ColdBore_C.OnWeaponUsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Operative_ColdBore_C::OnWeaponUsed(class AWeapon* EventWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_ColdBore.PassiveSkill_Operative_ColdBore_C.OnWeaponUsed");

	UPassiveSkill_Operative_ColdBore_C_OnWeaponUsed_Params params;
	params.EventWeapon = EventWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_ColdBore.PassiveSkill_Operative_ColdBore_C.ColdBore_OnWeaponChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 NewWeapon                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AWeapon*                 LastWeapon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Operative_ColdBore_C::ColdBore_OnWeaponChanged(class AWeapon* NewWeapon, class AWeapon* LastWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_ColdBore.PassiveSkill_Operative_ColdBore_C.ColdBore_OnWeaponChanged");

	UPassiveSkill_Operative_ColdBore_C_ColdBore_OnWeaponChanged_Params params;
	params.NewWeapon = NewWeapon;
	params.LastWeapon = LastWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_ColdBore.PassiveSkill_Operative_ColdBore_C.ExecuteUbergraph_PassiveSkill_Operative_ColdBore
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Operative_ColdBore_C::ExecuteUbergraph_PassiveSkill_Operative_ColdBore(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_ColdBore.PassiveSkill_Operative_ColdBore_C.ExecuteUbergraph_PassiveSkill_Operative_ColdBore");

	UPassiveSkill_Operative_ColdBore_C_ExecuteUbergraph_PassiveSkill_Operative_ColdBore_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
