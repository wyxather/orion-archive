// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_DuctTapeMod_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Operative_DuctTapeMod.PassiveSkill_Operative_DuctTapeMod_C.GbxAsyncRequest_Miss_042E1A72466C9AF0916A41817715A672
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UPassiveSkill_Operative_DuctTapeMod_C::GbxAsyncRequest_Miss_042E1A72466C9AF0916A41817715A672(const struct FHitResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_DuctTapeMod.PassiveSkill_Operative_DuctTapeMod_C.GbxAsyncRequest_Miss_042E1A72466C9AF0916A41817715A672");

	UPassiveSkill_Operative_DuctTapeMod_C_GbxAsyncRequest_Miss_042E1A72466C9AF0916A41817715A672_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_DuctTapeMod.PassiveSkill_Operative_DuctTapeMod_C.GbxAsyncRequest_Hit_042E1A72466C9AF0916A41817715A672
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UPassiveSkill_Operative_DuctTapeMod_C::GbxAsyncRequest_Hit_042E1A72466C9AF0916A41817715A672(const struct FHitResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_DuctTapeMod.PassiveSkill_Operative_DuctTapeMod_C.GbxAsyncRequest_Hit_042E1A72466C9AF0916A41817715A672");

	UPassiveSkill_Operative_DuctTapeMod_C_GbxAsyncRequest_Hit_042E1A72466C9AF0916A41817715A672_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_DuctTapeMod.PassiveSkill_Operative_DuctTapeMod_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Operative_DuctTapeMod_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_DuctTapeMod.PassiveSkill_Operative_DuctTapeMod_C.OnActivated");

	UPassiveSkill_Operative_DuctTapeMod_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_DuctTapeMod.PassiveSkill_Operative_DuctTapeMod_C.DuctTape_OnWeaponReloadEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCompleted                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Operative_DuctTapeMod_C::DuctTape_OnWeaponReloadEnded(class AWeapon* EventWeapon, bool bCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_DuctTapeMod.PassiveSkill_Operative_DuctTapeMod_C.DuctTape_OnWeaponReloadEnded");

	UPassiveSkill_Operative_DuctTapeMod_C_DuctTape_OnWeaponReloadEnded_Params params;
	params.EventWeapon = EventWeapon;
	params.bCompleted = bCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_DuctTapeMod.PassiveSkill_Operative_DuctTapeMod_C.DuctTape_OnWeaponUsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Operative_DuctTapeMod_C::DuctTape_OnWeaponUsed(class AWeapon* EventWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_DuctTapeMod.PassiveSkill_Operative_DuctTapeMod_C.DuctTape_OnWeaponUsed");

	UPassiveSkill_Operative_DuctTapeMod_C_DuctTape_OnWeaponUsed_Params params;
	params.EventWeapon = EventWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_DuctTapeMod.PassiveSkill_Operative_DuctTapeMod_C.ExecuteUbergraph_PassiveSkill_Operative_DuctTapeMod
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Operative_DuctTapeMod_C::ExecuteUbergraph_PassiveSkill_Operative_DuctTapeMod(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_DuctTapeMod.PassiveSkill_Operative_DuctTapeMod_C.ExecuteUbergraph_PassiveSkill_Operative_DuctTapeMod");

	UPassiveSkill_Operative_DuctTapeMod_C_ExecuteUbergraph_PassiveSkill_Operative_DuctTapeMod_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
