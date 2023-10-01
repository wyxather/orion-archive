// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_AnointParent_Operative_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.AnointOperativeIsActionAbilityActive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  ActionSkill                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbility_AnointParent_Operative_C::AnointOperativeIsActionAbilityActive(class UClass* ActionSkill, bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.AnointOperativeIsActionAbilityActive");

	UAbility_AnointParent_Operative_C_AnointOperativeIsActionAbilityActive_Params params;
	params.ActionSkill = ActionSkill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.AnointOperativeActionSkillEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EOperativeGadgets> ActionSkill                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_AnointParent_Operative_C::AnointOperativeActionSkillEnd(TEnumAsByte<EOperativeGadgets> ActionSkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.AnointOperativeActionSkillEnd");

	UAbility_AnointParent_Operative_C_AnointOperativeActionSkillEnd_Params params;
	params.ActionSkill = ActionSkill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.AnointOperativeActionSkillStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EOperativeGadgets> ActionSkill                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_AnointParent_Operative_C::AnointOperativeActionSkillStart(TEnumAsByte<EOperativeGadgets> ActionSkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.AnointOperativeActionSkillStart");

	UAbility_AnointParent_Operative_C_AnointOperativeActionSkillStart_Params params;
	params.ActionSkill = ActionSkill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.AnointCloneSwappedPlaces
// (Public, BlueprintCallable, BlueprintEvent)

void UAbility_AnointParent_Operative_C::AnointCloneSwappedPlaces()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.AnointCloneSwappedPlaces");

	UAbility_AnointParent_Operative_C_AnointCloneSwappedPlaces_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.AnointCannonActivated
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbility_AnointParent_Operative_C::AnointCannonActivated(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.AnointCannonActivated");

	UAbility_AnointParent_Operative_C_AnointCannonActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.AnointSNTRYEnded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbility_AnointParent_Operative_C::AnointSNTRYEnded(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.AnointSNTRYEnded");

	UAbility_AnointParent_Operative_C_AnointSNTRYEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.AnointSNTRYStarted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbility_AnointParent_Operative_C::AnointSNTRYStarted(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.AnointSNTRYStarted");

	UAbility_AnointParent_Operative_C_AnointSNTRYStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.AnointCloneEnded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbility_AnointParent_Operative_C::AnointCloneEnded(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.AnointCloneEnded");

	UAbility_AnointParent_Operative_C_AnointCloneEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.AnointCloneStarted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbility_AnointParent_Operative_C::AnointCloneStarted(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.AnointCloneStarted");

	UAbility_AnointParent_Operative_C_AnointCloneStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.AnointBarrierEnded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbility_AnointParent_Operative_C::AnointBarrierEnded(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.AnointBarrierEnded");

	UAbility_AnointParent_Operative_C_AnointBarrierEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.AnointBarrierStart
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAbility_AnointParent_Operative_C::AnointBarrierStart(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.AnointBarrierStart");

	UAbility_AnointParent_Operative_C_AnointBarrierStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_AnointParent_Operative_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.OnActivated");

	UAbility_AnointParent_Operative_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.BindOperativeEvents
// (BlueprintCallable, BlueprintEvent)

void UAbility_AnointParent_Operative_C::BindOperativeEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.BindOperativeEvents");

	UAbility_AnointParent_Operative_C_BindOperativeEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.ExecuteUbergraph_Ability_AnointParent_Operative
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_AnointParent_Operative_C::ExecuteUbergraph_Ability_AnointParent_Operative(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_AnointParent_Operative.Ability_AnointParent_Operative_C.ExecuteUbergraph_Ability_AnointParent_Operative");

	UAbility_AnointParent_Operative_C_ExecuteUbergraph_Ability_AnointParent_Operative_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
