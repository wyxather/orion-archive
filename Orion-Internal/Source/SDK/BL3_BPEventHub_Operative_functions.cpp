// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPEventHub_Operative_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPEventHub_Operative.BPEventHub_Operative_C.SkillEvent_OperativeSetDroneManualTarget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NewTarget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPEventHub_Operative_C::SkillEvent_OperativeSetDroneManualTarget__DelegateSignature(class AActor* NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Operative.BPEventHub_Operative_C.SkillEvent_OperativeSetDroneManualTarget__DelegateSignature");

	UBPEventHub_Operative_C_SkillEvent_OperativeSetDroneManualTarget__DelegateSignature_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Operative.BPEventHub_Operative_C.SkillEvent_OperativeUsedBarrier__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PickedUp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPEventHub_Operative_C::SkillEvent_OperativeUsedBarrier__DelegateSignature(bool PickedUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Operative.BPEventHub_Operative_C.SkillEvent_OperativeUsedBarrier__DelegateSignature");

	UBPEventHub_Operative_C_SkillEvent_OperativeUsedBarrier__DelegateSignature_Params params;
	params.PickedUp = PickedUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Operative.BPEventHub_Operative_C.SkillEvent_OperativeSwappedPlaces__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPEventHub_Operative_C::SkillEvent_OperativeSwappedPlaces__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Operative.BPEventHub_Operative_C.SkillEvent_OperativeSwappedPlaces__DelegateSignature");

	UBPEventHub_Operative_C_SkillEvent_OperativeSwappedPlaces__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Operative.BPEventHub_Operative_C.SkillEvent_OperativeActionSkillEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EOperativeGadgets> ActionSkill                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPEventHub_Operative_C::SkillEvent_OperativeActionSkillEnded__DelegateSignature(TEnumAsByte<EOperativeGadgets> ActionSkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Operative.BPEventHub_Operative_C.SkillEvent_OperativeActionSkillEnded__DelegateSignature");

	UBPEventHub_Operative_C_SkillEvent_OperativeActionSkillEnded__DelegateSignature_Params params;
	params.ActionSkill = ActionSkill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Operative.BPEventHub_Operative_C.SkillEvent_OperativeGadgetModActivated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EOperativeGadgetAugments> ActionSkillMod                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPEventHub_Operative_C::SkillEvent_OperativeGadgetModActivated__DelegateSignature(TEnumAsByte<EOperativeGadgetAugments> ActionSkillMod)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Operative.BPEventHub_Operative_C.SkillEvent_OperativeGadgetModActivated__DelegateSignature");

	UBPEventHub_Operative_C_SkillEvent_OperativeGadgetModActivated__DelegateSignature_Params params;
	params.ActionSkillMod = ActionSkillMod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Operative.BPEventHub_Operative_C.SkillEvent_OperativeActionSkillActivated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EOperativeGadgets> ActionSkill                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPEventHub_Operative_C::SkillEvent_OperativeActionSkillActivated__DelegateSignature(TEnumAsByte<EOperativeGadgets> ActionSkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Operative.BPEventHub_Operative_C.SkillEvent_OperativeActionSkillActivated__DelegateSignature");

	UBPEventHub_Operative_C_SkillEvent_OperativeActionSkillActivated__DelegateSignature_Params params;
	params.ActionSkill = ActionSkill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Operative.BPEventHub_Operative_C.OnSeeingRedActivated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPEventHub_Operative_C::OnSeeingRedActivated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Operative.BPEventHub_Operative_C.OnSeeingRedActivated__DelegateSignature");

	UBPEventHub_Operative_C_OnSeeingRedActivated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
