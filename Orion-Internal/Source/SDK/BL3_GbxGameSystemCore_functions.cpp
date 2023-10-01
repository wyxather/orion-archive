// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxGameSystemCore_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GbxGameSystemCore.GbxAnimTable.Autofill
// (Native, Protected)

void UGbxAnimTable::Autofill()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAnimTable.Autofill");

	UGbxAnimTable_Autofill_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxAction.OnServerEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState             ActionEndState                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UGbxAction::OnServerEnd(EGbxActionEndState ActionEndState, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction.OnServerEnd");

	UGbxAction_OnServerEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxAction.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UGbxAction::OnServerBegin(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction.OnServerBegin");

	UGbxAction_OnServerBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxAction.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState             ActionEndState                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UGbxAction::OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction.OnEnd");

	UGbxAction_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxAction.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UGbxAction::OnBegin(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction.OnBegin");

	UGbxAction_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxAction.K2_GetVectorRegisterValue
// (Final, Native, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   InName                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutVector                      (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxAction::K2_GetVectorRegisterValue(const struct FName& InName, struct FVector* OutVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction.K2_GetVectorRegisterValue");

	UGbxAction_K2_GetVectorRegisterValue_Params params;
	params.InName = InName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVector != nullptr)
		*OutVector = params.OutVector;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxAction.K2_GetTimeRemaining
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGbxAction::K2_GetTimeRemaining()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction.K2_GetTimeRemaining");

	UGbxAction_K2_GetTimeRemaining_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxAction.K2_GetObjectRegisterValue
// (Final, Native, Private, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   InName                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 OutObject                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxAction::K2_GetObjectRegisterValue(const struct FName& InName, class UObject** OutObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction.K2_GetObjectRegisterValue");

	UGbxAction_K2_GetObjectRegisterValue_Params params;
	params.InName = InName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutObject != nullptr)
		*OutObject = params.OutObject;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxAction.K2_GetNameRegisterValue
// (Final, Native, Private, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   InName                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   OutName                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxAction::K2_GetNameRegisterValue(const struct FName& InName, struct FName* OutName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction.K2_GetNameRegisterValue");

	UGbxAction_K2_GetNameRegisterValue_Params params;
	params.InName = InName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutName != nullptr)
		*OutName = params.OutName;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxAction.K2_GetMaxCurrentTime
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGbxAction::K2_GetMaxCurrentTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction.K2_GetMaxCurrentTime");

	UGbxAction_K2_GetMaxCurrentTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxAction.K2_GetIntRegisterValue
// (Final, Native, Private, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   InName                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            OutInt                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxAction::K2_GetIntRegisterValue(const struct FName& InName, int* OutInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction.K2_GetIntRegisterValue");

	UGbxAction_K2_GetIntRegisterValue_Params params;
	params.InName = InName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutInt != nullptr)
		*OutInt = params.OutInt;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxAction.K2_GetFloatRegisterValue
// (Final, Native, Private, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   InName                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutFloat                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxAction::K2_GetFloatRegisterValue(const struct FName& InName, float* OutFloat)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction.K2_GetFloatRegisterValue");

	UGbxAction_K2_GetFloatRegisterValue_Params params;
	params.InName = InName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutFloat != nullptr)
		*OutFloat = params.OutFloat;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxAction.K2_GetCurrentTime
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGbxAction::K2_GetCurrentTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction.K2_GetCurrentTime");

	UGbxAction_K2_GetCurrentTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxAction.K2_GetCurrentNormalizedTime
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGbxAction::K2_GetCurrentNormalizedTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction.K2_GetCurrentNormalizedTime");

	UGbxAction_K2_GetCurrentNormalizedTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxAction.K2_GetActor
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UGbxAction::K2_GetActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction.K2_GetActor");

	UGbxAction_K2_GetActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxAction_SimpleAnim.OnAnimEnd
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UGbxAction_SimpleAnim::OnAnimEnd(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction_SimpleAnim.OnAnimEnd");

	UGbxAction_SimpleAnim_OnAnimEnd_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxAction_SimpleAnim.K2_SetTickAndRefreshBones
// (Final, Native, Private, BlueprintCallable, Const)
// Parameters:
// bool                           bLockResource                  (Parm, ZeroConstructor, IsPlainOldData)

void UGbxAction_SimpleAnim::K2_SetTickAndRefreshBones(bool bLockResource)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction_SimpleAnim.K2_SetTickAndRefreshBones");

	UGbxAction_SimpleAnim_K2_SetTickAndRefreshBones_Params params;
	params.bLockResource = bLockResource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxAction_SimpleAnim.K2_SetPhysNoneWithRootMotion
// (Final, Native, Private, BlueprintCallable, Const)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UGbxAction_SimpleAnim::K2_SetPhysNoneWithRootMotion(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction_SimpleAnim.K2_SetPhysNoneWithRootMotion");

	UGbxAction_SimpleAnim_K2_SetPhysNoneWithRootMotion_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxAction_SimpleAnim.K2_SetMovement
// (Final, Native, Private, BlueprintCallable, Const)
// Parameters:
// bool                           bDisable                       (Parm, ZeroConstructor, IsPlainOldData)

void UGbxAction_SimpleAnim::K2_SetMovement(bool bDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction_SimpleAnim.K2_SetMovement");

	UGbxAction_SimpleAnim_K2_SetMovement_Params params;
	params.bDisable = bDisable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxAction_SimpleAnim.K2_SetLook
// (Final, Native, Private, BlueprintCallable, Const)
// Parameters:
// bool                           bDisable                       (Parm, ZeroConstructor, IsPlainOldData)

void UGbxAction_SimpleAnim::K2_SetLook(bool bDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction_SimpleAnim.K2_SetLook");

	UGbxAction_SimpleAnim_K2_SetLook_Params params;
	params.bDisable = bDisable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxAction_SimpleAnim.K2_SetHitReactions
// (Final, Native, Private, BlueprintCallable, Const)
// Parameters:
// bool                           bDisable                       (Parm, ZeroConstructor, IsPlainOldData)

void UGbxAction_SimpleAnim::K2_SetHitReactions(bool bDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction_SimpleAnim.K2_SetHitReactions");

	UGbxAction_SimpleAnim_K2_SetHitReactions_Params params;
	params.bDisable = bDisable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxAction_SimpleAnim.K2_SetHeadLookLocked
// (Final, Native, Private, BlueprintCallable, Const)
// Parameters:
// bool                           bLock                          (Parm, ZeroConstructor, IsPlainOldData)

void UGbxAction_SimpleAnim::K2_SetHeadLookLocked(bool bLock)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction_SimpleAnim.K2_SetHeadLookLocked");

	UGbxAction_SimpleAnim_K2_SetHeadLookLocked_Params params;
	params.bLock = bLock;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxAction_SimpleAnim.K2_SetHeadLook
// (Final, Native, Private, BlueprintCallable, Const)
// Parameters:
// bool                           bDisable                       (Parm, ZeroConstructor, IsPlainOldData)

void UGbxAction_SimpleAnim::K2_SetHeadLook(bool bDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction_SimpleAnim.K2_SetHeadLook");

	UGbxAction_SimpleAnim_K2_SetHeadLook_Params params;
	params.bDisable = bDisable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxAction_SimpleAnim.K2_SetCollision
// (Final, Native, Private, BlueprintCallable, Const)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UGbxAction_SimpleAnim::K2_SetCollision(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction_SimpleAnim.K2_SetCollision");

	UGbxAction_SimpleAnim_K2_SetCollision_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxAction_SimpleAnim.K2_SetAvoidance
// (Final, Native, Private, BlueprintCallable, Const)
// Parameters:
// bool                           bDisable                       (Parm, ZeroConstructor, IsPlainOldData)

void UGbxAction_SimpleAnim::K2_SetAvoidance(bool bDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction_SimpleAnim.K2_SetAvoidance");

	UGbxAction_SimpleAnim_K2_SetAvoidance_Params params;
	params.bDisable = bDisable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxAction_SimpleAnim.K2_SetAIThinking
// (Final, Native, Private, BlueprintCallable, Const)
// Parameters:
// bool                           bDisable                       (Parm, ZeroConstructor, IsPlainOldData)

void UGbxAction_SimpleAnim::K2_SetAIThinking(bool bDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction_SimpleAnim.K2_SetAIThinking");

	UGbxAction_SimpleAnim_K2_SetAIThinking_Params params;
	params.bDisable = bDisable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxAction_SimpleAnim.K2_SetAimRotation
// (Final, Native, Private, BlueprintCallable, Const)
// Parameters:
// bool                           bDisable                       (Parm, ZeroConstructor, IsPlainOldData)

void UGbxAction_SimpleAnim::K2_SetAimRotation(bool bDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction_SimpleAnim.K2_SetAimRotation");

	UGbxAction_SimpleAnim_K2_SetAimRotation_Params params;
	params.bDisable = bDisable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.PreviewComponent.OnBlueprintCompiled
// (Final, Native, Protected)
// Parameters:
// class UBlueprint*              BP                             (Parm, ZeroConstructor, IsPlainOldData)

void UPreviewComponent::OnBlueprintCompiled(class UBlueprint* BP)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.PreviewComponent.OnBlueprintCompiled");

	UPreviewComponent_OnBlueprintCompiled_Params params;
	params.BP = BP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxAction_Anim.K2_SetMantlingBlocked
// (Final, Native, Private, BlueprintCallable, Const)
// Parameters:
// bool                           bBlocked                       (Parm, ZeroConstructor, IsPlainOldData)

void UGbxAction_Anim::K2_SetMantlingBlocked(bool bBlocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction_Anim.K2_SetMantlingBlocked");

	UGbxAction_Anim_K2_SetMantlingBlocked_Params params;
	params.bBlocked = bBlocked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxAction_Anim.K2_SetGodMode
// (Final, Native, Private, BlueprintCallable, Const)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UGbxAction_Anim::K2_SetGodMode(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction_Anim.K2_SetGodMode");

	UGbxAction_Anim_K2_SetGodMode_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxAction_Anim.K2_SetFootIK
// (Final, Native, Private, BlueprintCallable, Const)
// Parameters:
// bool                           bDisable                       (Parm, ZeroConstructor, IsPlainOldData)

void UGbxAction_Anim::K2_SetFootIK(bool bDisable)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction_Anim.K2_SetFootIK");

	UGbxAction_Anim_K2_SetFootIK_Params params;
	params.bDisable = bDisable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxAction_Anim.K2_SetDemigodMode
// (Final, Native, Private, BlueprintCallable, Const)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UGbxAction_Anim::K2_SetDemigodMode(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction_Anim.K2_SetDemigodMode");

	UGbxAction_Anim_K2_SetDemigodMode_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxAction_Anim.K2_SetCrouchBlocked
// (Final, Native, Private, BlueprintCallable, Const)
// Parameters:
// bool                           bBlocked                       (Parm, ZeroConstructor, IsPlainOldData)

void UGbxAction_Anim::K2_SetCrouchBlocked(bool bBlocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction_Anim.K2_SetCrouchBlocked");

	UGbxAction_Anim_K2_SetCrouchBlocked_Params params;
	params.bBlocked = bBlocked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxAction_Anim.K2_Resume
// (Final, Native, Private, BlueprintCallable, Const)

void UGbxAction_Anim::K2_Resume()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction_Anim.K2_Resume");

	UGbxAction_Anim_K2_Resume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxAction_Anim.K2_RepProceedToNextSection
// (Final, Native, Private, BlueprintCallable, Const)

void UGbxAction_Anim::K2_RepProceedToNextSection()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction_Anim.K2_RepProceedToNextSection");

	UGbxAction_Anim_K2_RepProceedToNextSection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxAction_Anim.K2_RepJumpToNextSection
// (Final, Native, Private, BlueprintCallable, Const)

void UGbxAction_Anim::K2_RepJumpToNextSection()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction_Anim.K2_RepJumpToNextSection");

	UGbxAction_Anim_K2_RepJumpToNextSection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxAction_Anim.K2_ProceedToNextSection
// (Final, Native, Private, BlueprintCallable, Const)

void UGbxAction_Anim::K2_ProceedToNextSection()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction_Anim.K2_ProceedToNextSection");

	UGbxAction_Anim_K2_ProceedToNextSection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxAction_Anim.K2_Pause
// (Final, Native, Private, BlueprintCallable, Const)

void UGbxAction_Anim::K2_Pause()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction_Anim.K2_Pause");

	UGbxAction_Anim_K2_Pause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxAction_Anim.K2_JumpToNextSection
// (Final, Native, Private, BlueprintCallable, Const)

void UGbxAction_Anim::K2_JumpToNextSection()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction_Anim.K2_JumpToNextSection");

	UGbxAction_Anim_K2_JumpToNextSection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.TeamComponent.SetTeamToDefault
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void UTeamComponent::SetTeamToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TeamComponent.SetTeamToDefault");

	UTeamComponent_SetTeamToDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.TeamComponent.SetTeamCollision
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bOn                            (Parm, ZeroConstructor, IsPlainOldData)

void UTeamComponent::SetTeamCollision(bool bOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TeamComponent.SetTeamCollision");

	UTeamComponent_SetTeamCollision_Params params;
	params.bOn = bOn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.TeamComponent.SetTeam
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UTeam*                   NewTeam                        (Parm, ZeroConstructor, IsPlainOldData)

void UTeamComponent::SetTeam(class UTeam* NewTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TeamComponent.SetTeam");

	UTeamComponent_SetTeam_Params params;
	params.NewTeam = NewTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.TeamComponent.SetSourceTeamComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTeamComponent*          NewSourceTeamComponent         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTeamComponent::SetSourceTeamComponent(class UTeamComponent* NewSourceTeamComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TeamComponent.SetSourceTeamComponent");

	UTeamComponent_SetSourceTeamComponent_Params params;
	params.NewSourceTeamComponent = NewSourceTeamComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.TeamComponent.SetCollidesWithTeam
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bCollidesWithTeam              (Parm, ZeroConstructor, IsPlainOldData)

void UTeamComponent::SetCollidesWithTeam(bool bCollidesWithTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TeamComponent.SetCollidesWithTeam");

	UTeamComponent_SetCollidesWithTeam_Params params;
	params.bCollidesWithTeam = bCollidesWithTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.TeamComponent.OnRep_Team
// (Final, Native, Private)
// Parameters:
// class UTeam*                   OldTeam                        (Parm, ZeroConstructor, IsPlainOldData)

void UTeamComponent::OnRep_Team(class UTeam* OldTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TeamComponent.OnRep_Team");

	UTeamComponent_OnRep_Team_Params params;
	params.OldTeam = OldTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.TeamComponent.OnRep_bIgnoreCollisionWithTeam
// (Final, Native, Private)

void UTeamComponent::OnRep_bIgnoreCollisionWithTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TeamComponent.OnRep_bIgnoreCollisionWithTeam");

	UTeamComponent_OnRep_bIgnoreCollisionWithTeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.TeamComponent.IsNeutral
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTeamComponent::IsNeutral(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TeamComponent.IsNeutral");

	UTeamComponent_IsNeutral_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.TeamComponent.IsHostile
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTeamComponent::IsHostile(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TeamComponent.IsHostile");

	UTeamComponent_IsHostile_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.TeamComponent.IsFriendly
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTeamComponent::IsFriendly(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TeamComponent.IsFriendly");

	UTeamComponent_IsFriendly_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.TeamComponent.InitializeTeam
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UTeam*                   NewTeam                        (Parm, ZeroConstructor, IsPlainOldData)

void UTeamComponent::InitializeTeam(class UTeam* NewTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TeamComponent.InitializeTeam");

	UTeamComponent_InitializeTeam_Params params;
	params.NewTeam = NewTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.TeamComponent.GetTeamCollisionChannel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ETeamCollisionChannel          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ETeamCollisionChannel UTeamComponent::GetTeamCollisionChannel()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TeamComponent.GetTeamCollisionChannel");

	UTeamComponent_GetTeamCollisionChannel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.TeamComponent.GetTeamAttitudeTowardsTeam
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTeam*                   OtherTeam                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETeamAttitude>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ETeamAttitude> UTeamComponent::GetTeamAttitudeTowardsTeam(class UTeam* OtherTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TeamComponent.GetTeamAttitudeTowardsTeam");

	UTeamComponent_GetTeamAttitudeTowardsTeam_Params params;
	params.OtherTeam = OtherTeam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.TeamComponent.GetTeamAttitudeTowardsActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETeamAttitude>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ETeamAttitude> UTeamComponent::GetTeamAttitudeTowardsActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TeamComponent.GetTeamAttitudeTowardsActor");

	UTeamComponent_GetTeamAttitudeTowardsActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacter.SetTeam
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UTeam*                   Team                           (Parm, ZeroConstructor, IsPlainOldData)

void AGbxCharacter::SetTeam(class UTeam* Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacter.SetTeam");

	AGbxCharacter_SetTeam_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCharacter.SetPlayerMaster
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AGbxCharacter*           NewPlayerMaster                (Parm, ZeroConstructor, IsPlainOldData)

void AGbxCharacter::SetPlayerMaster(class AGbxCharacter* NewPlayerMaster)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacter.SetPlayerMaster");

	AGbxCharacter_SetPlayerMaster_Params params;
	params.NewPlayerMaster = NewPlayerMaster;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCharacter.SetCharacterUIName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGbxUIName*              NewCharacterUIName             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AGbxCharacter::SetCharacterUIName(class UGbxUIName* NewCharacterUIName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacter.SetCharacterUIName");

	AGbxCharacter_SetCharacterUIName_Params params;
	params.NewCharacterUIName = NewCharacterUIName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCharacter.SetCharacterNameFromString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  NewCharacterName               (Parm, ZeroConstructor)

void AGbxCharacter::SetCharacterNameFromString(const class FString& NewCharacterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacter.SetCharacterNameFromString");

	AGbxCharacter_SetCharacterNameFromString_Params params;
	params.NewCharacterName = NewCharacterName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCharacter.SetCharacterName
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   NewCharacterName               (ConstParm, Parm, OutParm, ReferenceParm)

void AGbxCharacter::SetCharacterName(const struct FText& NewCharacterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacter.SetCharacterName");

	AGbxCharacter_SetCharacterName_Params params;
	params.NewCharacterName = NewCharacterName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCharacter.RotateCharacterTo
// (Final, BlueprintAuthorityOnly, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                TargetRotation                 (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEasingFunc>       Easing                         (Parm, ZeroConstructor, IsPlainOldData)

void AGbxCharacter::RotateCharacterTo(const struct FRotator& TargetRotation, float Duration, TEnumAsByte<EEasingFunc> Easing)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacter.RotateCharacterTo");

	AGbxCharacter_RotateCharacterTo_Params params;
	params.TargetRotation = TargetRotation;
	params.Duration = Duration;
	params.Easing = Easing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCharacter.ReceiveOwnerPlayerControllerChanged
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class AGbxPlayerController*    NewPlayerControllerOwner       (Parm, ZeroConstructor, IsPlainOldData)

void AGbxCharacter::ReceiveOwnerPlayerControllerChanged(class AGbxPlayerController* NewPlayerControllerOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacter.ReceiveOwnerPlayerControllerChanged");

	AGbxCharacter_ReceiveOwnerPlayerControllerChanged_Params params;
	params.NewPlayerControllerOwner = NewPlayerControllerOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCharacter.OnRep_ReplicatedPawnAttachState
// (Final, Native, Protected)

void AGbxCharacter::OnRep_ReplicatedPawnAttachState()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacter.OnRep_ReplicatedPawnAttachState");

	AGbxCharacter_OnRep_ReplicatedPawnAttachState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCharacter.OnLandingDataTriggered
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FLandingInfo            LandingInfo                    (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void AGbxCharacter::OnLandingDataTriggered(const struct FLandingInfo& LandingInfo, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacter.OnLandingDataTriggered");

	AGbxCharacter_OnLandingDataTriggered_Params params;
	params.LandingInfo = LandingInfo;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCharacter.NetMulticast_TriggerHitReactionSound
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// class UCharacterSoundTag*      Tag                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AGbxCharacter::NetMulticast_TriggerHitReactionSound(class UCharacterSoundTag* Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacter.NetMulticast_TriggerHitReactionSound");

	AGbxCharacter_NetMulticast_TriggerHitReactionSound_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCharacter.NetMulticast_PlayLanded
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// float                          ImpactSpeed                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLandFromJump                  (Parm, ZeroConstructor, IsPlainOldData)
// class ULandingData*            LandingDataOverride            (Parm, ZeroConstructor, IsPlainOldData)

void AGbxCharacter::NetMulticast_PlayLanded(const struct FHitResult& Hit, float ImpactSpeed, bool bLandFromJump, class ULandingData* LandingDataOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacter.NetMulticast_PlayLanded");

	AGbxCharacter_NetMulticast_PlayLanded_Params params;
	params.Hit = Hit;
	params.ImpactSpeed = ImpactSpeed;
	params.bLandFromJump = bLandFromJump;
	params.LandingDataOverride = LandingDataOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCharacter.NetMulticast_PlayJumped
// (Net, Native, Event, NetMulticast, Public)

void AGbxCharacter::NetMulticast_PlayJumped()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacter.NetMulticast_PlayJumped");

	AGbxCharacter_NetMulticast_PlayJumped_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCharacter.IsZoomed
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGbxCharacter::IsZoomed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacter.IsZoomed");

	AGbxCharacter_IsZoomed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacter.GetTeamComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTeamComponent*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UTeamComponent* AGbxCharacter::GetTeamComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacter.GetTeamComponent");

	AGbxCharacter_GetTeamComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacter.GetTeam
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTeam*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTeam* AGbxCharacter::GetTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacter.GetTeam");

	AGbxCharacter_GetTeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacter.GetTargetingComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTargetingComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UTargetingComponent* AGbxCharacter::GetTargetingComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacter.GetTargetingComponent");

	AGbxCharacter_GetTargetingComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacter.GetTargetableComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTargetableComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UTargetableComponent* AGbxCharacter::GetTargetableComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacter.GetTargetableComponent");

	AGbxCharacter_GetTargetableComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacter.GetPerceptionComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGbxPerceptionComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UGbxPerceptionComponent* AGbxCharacter::GetPerceptionComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacter.GetPerceptionComponent");

	AGbxCharacter_GetPerceptionComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacter.GetPawnAttachStatus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EPawnAttachStatus              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EPawnAttachStatus AGbxCharacter::GetPawnAttachStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacter.GetPawnAttachStatus");

	AGbxCharacter_GetPawnAttachStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacter.GetPawnAttachComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPawnAttachSlotComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPawnAttachSlotComponent* AGbxCharacter::GetPawnAttachComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacter.GetPawnAttachComponent");

	AGbxCharacter_GetPawnAttachComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacter.GetPawnAttachActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* AGbxCharacter::GetPawnAttachActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacter.GetPawnAttachActor");

	AGbxCharacter_GetPawnAttachActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacter.GetLookAtLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          OutWeight                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector AGbxCharacter::GetLookAtLocation(float* OutWeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacter.GetLookAtLocation");

	AGbxCharacter_GetLookAtLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutWeight != nullptr)
		*OutWeight = params.OutWeight;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacter.GetLookAt
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 HeadLocation                   (Parm, OutParm, IsPlainOldData)
// struct FVector                 EyeLocation                    (Parm, OutParm, IsPlainOldData)
// float                          HeadWeight                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGbxCharacter::GetLookAt(struct FVector* HeadLocation, struct FVector* EyeLocation, float* HeadWeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacter.GetLookAt");

	AGbxCharacter_GetLookAt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HeadLocation != nullptr)
		*HeadLocation = params.HeadLocation;
	if (EyeLocation != nullptr)
		*EyeLocation = params.EyeLocation;
	if (HeadWeight != nullptr)
		*HeadWeight = params.HeadWeight;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacter.GetFirstPersonMesh
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USkeletalMeshComponent* AGbxCharacter::GetFirstPersonMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacter.GetFirstPersonMesh");

	AGbxCharacter_GetFirstPersonMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacter.GetFirstPersonComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFirstPersonComponent*   ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UFirstPersonComponent* AGbxCharacter::GetFirstPersonComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacter.GetFirstPersonComponent");

	AGbxCharacter_GetFirstPersonComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacter.GetBlackboardComponent
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UBlackboardComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UBlackboardComponent* AGbxCharacter::GetBlackboardComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacter.GetBlackboardComponent");

	AGbxCharacter_GetBlackboardComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacter.GetBlackboardAsset
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UBlackboardData*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBlackboardData* AGbxCharacter::GetBlackboardAsset()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacter.GetBlackboardAsset");

	AGbxCharacter_GetBlackboardAsset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacter.GetAvailableSocketNames
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// TArray<struct FName>           Array                          (Parm, OutParm, ZeroConstructor)

void AGbxCharacter::GetAvailableSocketNames(TArray<struct FName>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacter.GetAvailableSocketNames");

	AGbxCharacter_GetAvailableSocketNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function GbxGameSystemCore.GbxCharacter.GetAimVectorStartLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector AGbxCharacter::GetAimVectorStartLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacter.GetAimVectorStartLocation");

	AGbxCharacter_GetAimVectorStartLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacter.GetAimOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator AGbxCharacter::GetAimOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacter.GetAimOffset");

	AGbxCharacter_GetAimOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacter.FindFirstPersonComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFirstPersonComponent*   ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UFirstPersonComponent* AGbxCharacter::FindFirstPersonComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacter.FindFirstPersonComponent");

	AGbxCharacter_FindFirstPersonComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacter.DetachCharacter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EDetachmentRule                LocationRule                   (Parm, ZeroConstructor, IsPlainOldData)

void AGbxCharacter::DetachCharacter(EDetachmentRule LocationRule)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacter.DetachCharacter");

	AGbxCharacter_DetachCharacter_Params params;
	params.LocationRule = LocationRule;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCharacter.ClientRotateCharacterTo
// (Final, Net, NetReliable, Native, Event, Private, HasDefaults, NetClient)
// Parameters:
// struct FRotator                TargetRotation                 (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEasingFunc>       Easing                         (Parm, ZeroConstructor, IsPlainOldData)

void AGbxCharacter::ClientRotateCharacterTo(const struct FRotator& TargetRotation, float Duration, TEnumAsByte<EEasingFunc> Easing)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacter.ClientRotateCharacterTo");

	AGbxCharacter_ClientRotateCharacterTo_Params params;
	params.TargetRotation = TargetRotation;
	params.Duration = Duration;
	params.Easing = Easing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCharacter.CauseEveryoneToForgetMe
// (Final, Native, Public, BlueprintCallable)

void AGbxCharacter::CauseEveryoneToForgetMe()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacter.CauseEveryoneToForgetMe");

	AGbxCharacter_CauseEveryoneToForgetMe_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCharacter.AttachCharacterToComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*         Parent                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   SocketName                     (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule                LocationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule                RotationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule                ScaleRule                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWeldSimulatedBodies           (Parm, ZeroConstructor, IsPlainOldData)

void AGbxCharacter::AttachCharacterToComponent(class USceneComponent* Parent, const struct FName& SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacter.AttachCharacterToComponent");

	AGbxCharacter_AttachCharacterToComponent_Params params;
	params.Parent = Parent;
	params.SocketName = SocketName;
	params.LocationRule = LocationRule;
	params.RotationRule = RotationRule;
	params.ScaleRule = ScaleRule;
	params.bWeldSimulatedBodies = bWeldSimulatedBodies;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCharacter.AttachCharacterToActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  ParentActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SocketName                     (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule                LocationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule                RotationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule                ScaleRule                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWeldSimulatedBodies           (Parm, ZeroConstructor, IsPlainOldData)

void AGbxCharacter::AttachCharacterToActor(class AActor* ParentActor, const struct FName& SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacter.AttachCharacterToActor");

	AGbxCharacter_AttachCharacterToActor_Params params;
	params.ParentActor = ParentActor;
	params.SocketName = SocketName;
	params.LocationRule = LocationRule;
	params.RotationRule = RotationRule;
	params.ScaleRule = ScaleRule;
	params.bWeldSimulatedBodies = bWeldSimulatedBodies;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.BalanceStateComponent.SetGameStage
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            NewGameStage                   (Parm, ZeroConstructor, IsPlainOldData)

void UBalanceStateComponent::SetGameStage(int NewGameStage)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.BalanceStateComponent.SetGameStage");

	UBalanceStateComponent_SetGameStage_Params params;
	params.NewGameStage = NewGameStage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.BalanceStateComponent.SetExperienceLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NewExperienceLevel             (Parm, ZeroConstructor, IsPlainOldData)

void UBalanceStateComponent::SetExperienceLevel(int NewExperienceLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.BalanceStateComponent.SetExperienceLevel");

	UBalanceStateComponent_SetExperienceLevel_Params params;
	params.NewExperienceLevel = NewExperienceLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.BalanceStateComponent.OnRep_ExperienceLevel
// (Final, Native, Protected)
// Parameters:
// int                            OldExperienceLevel             (Parm, ZeroConstructor, IsPlainOldData)

void UBalanceStateComponent::OnRep_ExperienceLevel(int OldExperienceLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.BalanceStateComponent.OnRep_ExperienceLevel");

	UBalanceStateComponent_OnRep_ExperienceLevel_Params params;
	params.OldExperienceLevel = OldExperienceLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.BalanceStateComponent.OnInheritedBalanceSourceLevelChanged
// (Native, Protected)
// Parameters:
// class UBalanceStateComponent*  InheritedBalanceStateSource    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OldExperienceLevel             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewExperienceLevel             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBalanceStateComponent::OnInheritedBalanceSourceLevelChanged(class UBalanceStateComponent* InheritedBalanceStateSource, int OldExperienceLevel, int NewExperienceLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.BalanceStateComponent.OnInheritedBalanceSourceLevelChanged");

	UBalanceStateComponent_OnInheritedBalanceSourceLevelChanged_Params params;
	params.InheritedBalanceStateSource = InheritedBalanceStateSource;
	params.OldExperienceLevel = OldExperienceLevel;
	params.NewExperienceLevel = NewExperienceLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.BalanceStateComponent.GetGameStage
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBalanceStateComponent::GetGameStage()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.BalanceStateComponent.GetGameStage");

	UBalanceStateComponent_GetGameStage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.BalanceStateComponent.GetExperienceLevel
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBalanceStateComponent::GetExperienceLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.BalanceStateComponent.GetExperienceLevel");

	UBalanceStateComponent_GetExperienceLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.BalanceStateComponent.GetBalanceTableRow
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDataTableRowHandle     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDataTableRowHandle UBalanceStateComponent::GetBalanceTableRow()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.BalanceStateComponent.GetBalanceTableRow");

	UBalanceStateComponent_GetBalanceTableRow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxChildActorComponent.SpawnChildActor
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void UGbxChildActorComponent::SpawnChildActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxChildActorComponent.SpawnChildActor");

	UGbxChildActorComponent_SpawnChildActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxChildActorComponent.DespawnChildActor
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void UGbxChildActorComponent::DespawnChildActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxChildActorComponent.DespawnChildActor");

	UGbxChildActorComponent_DespawnChildActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxAnimInstance.GetAnimTableSequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGbxAnimTable*           AnimTable                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequence*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimSequence* UGbxAnimInstance::GetAnimTableSequence(class UGbxAnimTable* AnimTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAnimInstance.GetAnimTableSequence");

	UGbxAnimInstance_GetAnimTableSequence_Params params;
	params.AnimTable = AnimTable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxAnimInstance.CanUseAnimTable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGbxAnimTable*           AnimTable                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxAnimInstance::CanUseAnimTable(class UGbxAnimTable* AnimTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAnimInstance.CanUseAnimTable");

	UGbxAnimInstance_CanUseAnimTable_Params params;
	params.AnimTable = AnimTable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCustomizationData.RemoveCustomizationFromActor
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxCustomizationData::RemoveCustomizationFromActor(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCustomizationData.RemoveCustomizationFromActor");

	UGbxCustomizationData_RemoveCustomizationFromActor_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCustomizationData.OnCustomizationAssetLoaded
// (Final, Native, Private)

void UGbxCustomizationData::OnCustomizationAssetLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCustomizationData.OnCustomizationAssetLoaded");

	UGbxCustomizationData_OnCustomizationAssetLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCustomizationData.K2_PlayAction
// (Final, Native, Private, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FActionState_Base       ActionData                     (ConstParm, Parm, OutParm, ReferenceParm)
// class UGbxAction*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGbxAction* UGbxCustomizationData::K2_PlayAction(class AActor* TargetActor, const struct FActionState_Base& ActionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCustomizationData.K2_PlayAction");

	UGbxCustomizationData_K2_PlayAction_Params params;
	params.TargetActor = TargetActor;
	params.ActionData = ActionData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCustomizationData.IsLoading
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxCustomizationData::IsLoading()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCustomizationData.IsLoading");

	UGbxCustomizationData_IsLoading_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCustomizationData.IsLoaded
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            OptionalCustomizationId        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxCustomizationData::IsLoaded(int OptionalCustomizationId)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCustomizationData.IsLoaded");

	UGbxCustomizationData_IsLoaded_Params params;
	params.OptionalCustomizationId = OptionalCustomizationId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCustomizationData.AsyncLoadCustomizationAssets
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         LoadedDelegate                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UGbxCustomizationData::AsyncLoadCustomizationAssets(const struct FScriptDelegate& LoadedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCustomizationData.AsyncLoadCustomizationAssets");

	UGbxCustomizationData_AsyncLoadCustomizationAssets_Params params;
	params.LoadedDelegate = LoadedDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCustomizationData.ApplyCustomizationToActor
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            OptionalCustomizationId        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxCustomizationData::ApplyCustomizationToActor(class AActor* TargetActor, int OptionalCustomizationId)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCustomizationData.ApplyCustomizationToActor");

	UGbxCustomizationData_ApplyCustomizationToActor_Params params;
	params.TargetActor = TargetActor;
	params.OptionalCustomizationId = OptionalCustomizationId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.AttributeValueResolver.SetValueForAttribute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UGbxAttributeData*       Attribute                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAttributeValueResolver::SetValueForAttribute(class UGbxAttributeData* Attribute, class UObject* Context, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.AttributeValueResolver.SetValueForAttribute");

	UAttributeValueResolver_SetValueForAttribute_Params params;
	params.Attribute = Attribute;
	params.Context = Context;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.AttributeValueResolver.GetValueForAttribute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UGbxAttributeData*       Attribute                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAttributeValueResolver::GetValueForAttribute(class UGbxAttributeData* Attribute, class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.AttributeValueResolver.GetValueForAttribute");

	UAttributeValueResolver_GetValueForAttribute_Params params;
	params.Attribute = Attribute;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxAreaComponent.AreaTest
// (Native, Public)

void UGbxAreaComponent::AreaTest()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAreaComponent.AreaTest");

	UGbxAreaComponent_AreaTest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.EffectCollectionData.StaticGetWwiseEvent
// (Final, Native, Static, Public, BlueprintCallable, Const)
// Parameters:
// class UClass*                  Collection                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// class UWwiseEvent*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWwiseEvent* UEffectCollectionData::STATIC_StaticGetWwiseEvent(class UClass* Collection, class UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.EffectCollectionData.StaticGetWwiseEvent");

	UEffectCollectionData_StaticGetWwiseEvent_Params params;
	params.Collection = Collection;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.EffectCollectionData.StaticGetParticleEffectAndWwiseEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// class UClass*                  Collection                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         ParticleEffect                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UWwiseEvent*             WwiseEvent                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UEffectCollectionData::STATIC_StaticGetParticleEffectAndWwiseEvent(class UClass* Collection, class UObject* ContextObject, class UParticleSystem** ParticleEffect, class UWwiseEvent** WwiseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.EffectCollectionData.StaticGetParticleEffectAndWwiseEvent");

	UEffectCollectionData_StaticGetParticleEffectAndWwiseEvent_Params params;
	params.Collection = Collection;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ParticleEffect != nullptr)
		*ParticleEffect = params.ParticleEffect;
	if (WwiseEvent != nullptr)
		*WwiseEvent = params.WwiseEvent;
}


// Function GbxGameSystemCore.EffectCollectionData.StaticGetParticleEffect
// (Final, Native, Static, Public, BlueprintCallable, Const)
// Parameters:
// class UClass*                  Collection                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UParticleSystem* UEffectCollectionData::STATIC_StaticGetParticleEffect(class UClass* Collection, class UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.EffectCollectionData.StaticGetParticleEffect");

	UEffectCollectionData_StaticGetParticleEffect_Params params;
	params.Collection = Collection;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.EffectCollectionData.GetWwiseEvent
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// class UWwiseEvent*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWwiseEvent* UEffectCollectionData::GetWwiseEvent(class UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.EffectCollectionData.GetWwiseEvent");

	UEffectCollectionData_GetWwiseEvent_Params params;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.EffectCollectionData.GetParticleEffectAndWwiseEvent
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         ParticleEffect                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UWwiseEvent*             WwiseEvent                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UEffectCollectionData::GetParticleEffectAndWwiseEvent(class UObject* ContextObject, class UParticleSystem** ParticleEffect, class UWwiseEvent** WwiseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.EffectCollectionData.GetParticleEffectAndWwiseEvent");

	UEffectCollectionData_GetParticleEffectAndWwiseEvent_Params params;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ParticleEffect != nullptr)
		*ParticleEffect = params.ParticleEffect;
	if (WwiseEvent != nullptr)
		*WwiseEvent = params.WwiseEvent;
}


// Function GbxGameSystemCore.EffectCollectionData.GetParticleEffect
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UObject*                 ContextObject                  (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UParticleSystem* UEffectCollectionData::GetParticleEffect(class UObject* ContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.EffectCollectionData.GetParticleEffect");

	UEffectCollectionData_GetParticleEffect_Params params;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.UsableComponent.SetUsableLocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bLocked                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UUsableComponent::SetUsableLocked(bool bLocked, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.UsableComponent.SetUsableLocked");

	UUsableComponent_SetUsableLocked_Params params;
	params.bLocked = bLocked;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.UsableComponent.SetInteractionHeader
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   NewHeaderName                  (ConstParm, Parm, OutParm, ReferenceParm)

void UUsableComponent::SetInteractionHeader(const struct FText& NewHeaderName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.UsableComponent.SetInteractionHeader");

	UUsableComponent_SetInteractionHeader_Params params;
	params.NewHeaderName = NewHeaderName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.UsableComponent.ResetUseCount
// (Final, Native, Public, BlueprintCallable)

void UUsableComponent::ResetUseCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.UsableComponent.ResetUseCount");

	UUsableComponent_ResetUseCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.UsableComponent.K2_GetOptionalErrorText
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUsableComponent::K2_GetOptionalErrorText()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.UsableComponent.K2_GetOptionalErrorText");

	UUsableComponent_K2_GetOptionalErrorText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.UsableComponent.K2_CanBeUsed
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// struct FUsabilityQuery         Query                          (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUsableComponent::K2_CanBeUsed(const struct FUsabilityQuery& Query)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.UsableComponent.K2_CanBeUsed");

	UUsableComponent_K2_CanBeUsed_Params params;
	params.Query = Query;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.UsableComponent.GetValidPrimitiveComponentNames
// (Final, Native, Private, HasOutParms, Const)
// Parameters:
// TArray<struct FName>           ComponentNames                 (Parm, OutParm, ZeroConstructor)

void UUsableComponent::GetValidPrimitiveComponentNames(TArray<struct FName>* ComponentNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.UsableComponent.GetValidPrimitiveComponentNames");

	UUsableComponent_GetValidPrimitiveComponentNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ComponentNames != nullptr)
		*ComponentNames = params.ComponentNames;
}


// Function GbxGameSystemCore.UsableComponent.GetInteractionHeader
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FText UUsableComponent::GetInteractionHeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.UsableComponent.GetInteractionHeader");

	UUsableComponent_GetInteractionHeader_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxGameState.SpawnEmitterAtLocationMulticastImpl
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults, BlueprintCallable, Const)
// Parameters:
// class UParticleSystem*         EmitterTemplate                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, IsPlainOldData)
// struct FVector                 Scale                          (Parm, IsPlainOldData)
// bool                           bAutoDestroy                   (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ParameterEvaluationContext     (Parm, ZeroConstructor, IsPlainOldData)

void AGbxGameState::SpawnEmitterAtLocationMulticastImpl(class UParticleSystem* EmitterTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool bAutoDestroy, class UObject* ParameterEvaluationContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameState.SpawnEmitterAtLocationMulticastImpl");

	AGbxGameState_SpawnEmitterAtLocationMulticastImpl_Params params;
	params.EmitterTemplate = EmitterTemplate;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Scale = Scale;
	params.bAutoDestroy = bAutoDestroy;
	params.ParameterEvaluationContext = ParameterEvaluationContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameState.SpawnEmitterAtLocationMulticast
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         EmitterTemplate                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, IsPlainOldData)
// struct FVector                 Scale                          (Parm, IsPlainOldData)
// bool                           bAutoDestroy                   (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ParameterEvaluationContext     (Parm, ZeroConstructor, IsPlainOldData)

void AGbxGameState::STATIC_SpawnEmitterAtLocationMulticast(class UObject* WorldContextObject, class UParticleSystem* EmitterTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool bAutoDestroy, class UObject* ParameterEvaluationContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameState.SpawnEmitterAtLocationMulticast");

	AGbxGameState_SpawnEmitterAtLocationMulticast_Params params;
	params.WorldContextObject = WorldContextObject;
	params.EmitterTemplate = EmitterTemplate;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Scale = Scale;
	params.bAutoDestroy = bAutoDestroy;
	params.ParameterEvaluationContext = ParameterEvaluationContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameState.SpawnEmitterAtComponentSocketMulticast
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         EmitterTemplate                (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   Socket                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoDestroy                   (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ParameterEvaluationContext     (Parm, ZeroConstructor, IsPlainOldData)

void AGbxGameState::STATIC_SpawnEmitterAtComponentSocketMulticast(class UObject* WorldContextObject, class UParticleSystem* EmitterTemplate, class USceneComponent* Component, const struct FName& Socket, bool bAutoDestroy, class UObject* ParameterEvaluationContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameState.SpawnEmitterAtComponentSocketMulticast");

	AGbxGameState_SpawnEmitterAtComponentSocketMulticast_Params params;
	params.WorldContextObject = WorldContextObject;
	params.EmitterTemplate = EmitterTemplate;
	params.Component = Component;
	params.Socket = Socket;
	params.bAutoDestroy = bAutoDestroy;
	params.ParameterEvaluationContext = ParameterEvaluationContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameState.SpawnEmitterAtActorSocketMulticast
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         EmitterTemplate                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Socket                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoDestroy                   (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ParameterEvaluationContext     (Parm, ZeroConstructor, IsPlainOldData)

void AGbxGameState::STATIC_SpawnEmitterAtActorSocketMulticast(class UObject* WorldContextObject, class UParticleSystem* EmitterTemplate, class AActor* Actor, const struct FName& Socket, bool bAutoDestroy, class UObject* ParameterEvaluationContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameState.SpawnEmitterAtActorSocketMulticast");

	AGbxGameState_SpawnEmitterAtActorSocketMulticast_Params params;
	params.WorldContextObject = WorldContextObject;
	params.EmitterTemplate = EmitterTemplate;
	params.Actor = Actor;
	params.Socket = Socket;
	params.bAutoDestroy = bAutoDestroy;
	params.ParameterEvaluationContext = ParameterEvaluationContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameState.PlayImpactMulticast
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// class UImpactData*             ImpactData                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ImpactInstigator               (Parm, ZeroConstructor, IsPlainOldData)
// struct FReplicatedImpactHitResult HitResult                      (ConstParm, Parm, ReferenceParm)
// struct FImpactResponseParams   ResponseParams                 (ConstParm, Parm, ReferenceParm)

void AGbxGameState::PlayImpactMulticast(class UImpactData* ImpactData, class AActor* ImpactInstigator, const struct FReplicatedImpactHitResult& HitResult, const struct FImpactResponseParams& ResponseParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameState.PlayImpactMulticast");

	AGbxGameState_PlayImpactMulticast_Params params;
	params.ImpactData = ImpactData;
	params.ImpactInstigator = ImpactInstigator;
	params.HitResult = HitResult;
	params.ResponseParams = ResponseParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameState.PlayHitRegionImpactMulticast
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// class UHitRegionData*          HitRegion                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ImpactInstigator               (Parm, ZeroConstructor, IsPlainOldData)
// struct FReplicatedImpactHitResult HitResult                      (ConstParm, Parm, ReferenceParm)

void AGbxGameState::PlayHitRegionImpactMulticast(class UHitRegionData* HitRegion, class AActor* ImpactInstigator, const struct FReplicatedImpactHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameState.PlayHitRegionImpactMulticast");

	AGbxGameState_PlayHitRegionImpactMulticast_Params params;
	params.HitRegion = HitRegion;
	params.ImpactInstigator = ImpactInstigator;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameState.OnRep_StatsManager
// (Native, Public)

void AGbxGameState::OnRep_StatsManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameState.OnRep_StatsManager");

	AGbxGameState_OnRep_StatsManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameState.OnRep_HostPlayerState
// (Native, Public)

void AGbxGameState::OnRep_HostPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameState.OnRep_HostPlayerState");

	AGbxGameState_OnRep_HostPlayerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameState.OnRep_GameInstanceTime
// (Final, Native, Private)

void AGbxGameState::OnRep_GameInstanceTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameState.OnRep_GameInstanceTime");

	AGbxGameState_OnRep_GameInstanceTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameState.OnRep_GameInstanceId
// (Final, Native, Private)

void AGbxGameState::OnRep_GameInstanceId()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameState.OnRep_GameInstanceId");

	AGbxGameState_OnRep_GameInstanceId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameState.OnRep_bPlayersOnly
// (Final, Native, Private)

void AGbxGameState::OnRep_bPlayersOnly()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameState.OnRep_bPlayersOnly");

	AGbxGameState_OnRep_bPlayersOnly_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCharacterAnimInstance.SetDesiredFacialEmoteWeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Weight                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UGbxCharacterAnimInstance::SetDesiredFacialEmoteWeight(float Weight, float BlendTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterAnimInstance.SetDesiredFacialEmoteWeight");

	UGbxCharacterAnimInstance_SetDesiredFacialEmoteWeight_Params params;
	params.Weight = Weight;
	params.BlendTime = BlendTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCharacterAnimInstance.OnStanceChanged
// (Event, Public, BlueprintEvent)

void UGbxCharacterAnimInstance::OnStanceChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterAnimInstance.OnStanceChanged");

	UGbxCharacterAnimInstance_OnStanceChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.DamageData.OnKilledEnemy
// (Event, Protected, HasOutParms, BlueprintEvent, Const)
// Parameters:
// class AActor*                  DamageInstigator               (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageTarget                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageDataEventDetails Details                        (ConstParm, Parm, OutParm, ReferenceParm)

void UDamageData::OnKilledEnemy(class AActor* DamageInstigator, class AActor* DamageCauser, class AActor* DamageTarget, const struct FDamageDataEventDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageData.OnKilledEnemy");

	UDamageData_OnKilledEnemy_Params params;
	params.DamageInstigator = DamageInstigator;
	params.DamageCauser = DamageCauser;
	params.DamageTarget = DamageTarget;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.DamageData.OnHitFriendly
// (Event, Protected, HasOutParms, BlueprintEvent, Const)
// Parameters:
// class AActor*                  DamageInstigator               (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageTarget                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageDataEventDetails Details                        (ConstParm, Parm, OutParm, ReferenceParm)

void UDamageData::OnHitFriendly(class AActor* DamageInstigator, class AActor* DamageCauser, class AActor* DamageTarget, const struct FDamageDataEventDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageData.OnHitFriendly");

	UDamageData_OnHitFriendly_Params params;
	params.DamageInstigator = DamageInstigator;
	params.DamageCauser = DamageCauser;
	params.DamageTarget = DamageTarget;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.DamageData.OnHitEnemy
// (Event, Protected, HasOutParms, BlueprintEvent, Const)
// Parameters:
// class AActor*                  DamageInstigator               (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageTarget                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageDataEventDetails Details                        (ConstParm, Parm, OutParm, ReferenceParm)

void UDamageData::OnHitEnemy(class AActor* DamageInstigator, class AActor* DamageCauser, class AActor* DamageTarget, const struct FDamageDataEventDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageData.OnHitEnemy");

	UDamageData_OnHitEnemy_Params params;
	params.DamageInstigator = DamageInstigator;
	params.DamageCauser = DamageCauser;
	params.DamageTarget = DamageTarget;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.DamageData.OnHitAnyAttitude
// (Event, Protected, HasOutParms, BlueprintEvent, Const)
// Parameters:
// class AActor*                  DamageInstigator               (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageTarget                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageDataEventDetails Details                        (ConstParm, Parm, OutParm, ReferenceParm)

void UDamageData::OnHitAnyAttitude(class AActor* DamageInstigator, class AActor* DamageCauser, class AActor* DamageTarget, const struct FDamageDataEventDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageData.OnHitAnyAttitude");

	UDamageData_OnHitAnyAttitude_Params params;
	params.DamageInstigator = DamageInstigator;
	params.DamageCauser = DamageCauser;
	params.DamageTarget = DamageTarget;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ProjectileHomingComponent.ToggleHoming
// (Final, Native, Public, BlueprintCallable)

void UProjectileHomingComponent::ToggleHoming()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ProjectileHomingComponent.ToggleHoming");

	UProjectileHomingComponent_ToggleHoming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ProjectileHomingComponent.SetHomeIn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UProjectileHomingComponent::SetHomeIn(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ProjectileHomingComponent.SetHomeIn");

	UProjectileHomingComponent_SetHomeIn_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ProjectileHomingComponent.SetAssociatedProjectileMovement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UProjectileMovementComponent* ProjectileMovementComponent    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UProjectileHomingComponent::SetAssociatedProjectileMovement(class UProjectileMovementComponent* ProjectileMovementComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ProjectileHomingComponent.SetAssociatedProjectileMovement");

	UProjectileHomingComponent_SetAssociatedProjectileMovement_Params params;
	params.ProjectileMovementComponent = ProjectileMovementComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ProjectileHomingComponent.GetHomingLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UProjectileHomingComponent::GetHomingLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ProjectileHomingComponent.GetHomingLocation");

	UProjectileHomingComponent_GetHomingLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.AttributeContextResolver.GetContextForAttribute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UGbxAttributeData*       Attribute                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ContextSource                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UObject*>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UObject*> UAttributeContextResolver::GetContextForAttribute(class UGbxAttributeData* Attribute, class UObject* ContextSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.AttributeContextResolver.GetContextForAttribute");

	UAttributeContextResolver_GetContextForAttribute_Params params;
	params.Attribute = Attribute;
	params.ContextSource = ContextSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.SpawnPatternData.CalculateSpawnPoint
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSpawnPatternInputs     Inputs                         (Parm)
// struct FSpawnPatternResult     Result                         (Parm, OutParm)

void USpawnPatternData::CalculateSpawnPoint(const struct FSpawnPatternInputs& Inputs, struct FSpawnPatternResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.SpawnPatternData.CalculateSpawnPoint");

	USpawnPatternData_CalculateSpawnPoint_Params params;
	params.Inputs = Inputs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function GbxGameSystemCore.UIStatData.K2_ShouldDisplayStat
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUIStatData::K2_ShouldDisplayStat(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.UIStatData.K2_ShouldDisplayStat");

	UUIStatData_K2_ShouldDisplayStat_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.UIStatData.K2_GetValueText
// (Native, Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FUIStatCollector        Collector                      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUIStatData::K2_GetValueText(class UObject* Context, const struct FUIStatCollector& Collector)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.UIStatData.K2_GetValueText");

	UUIStatData_K2_GetValueText_Params params;
	params.Context = Context;
	params.Collector = Collector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.UIStatData.K2_GetComparisonValue
// (Native, Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FUIStatCollector        Collector                      (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUIStatData::K2_GetComparisonValue(class UObject* Context, const struct FUIStatCollector& Collector)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.UIStatData.K2_GetComparisonValue");

	UUIStatData_K2_GetComparisonValue_Params params;
	params.Context = Context;
	params.Collector = Collector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.UIStatData.EnumerateSectionNames
// (Final, Native, Private, HasOutParms, Const)
// Parameters:
// TArray<struct FName>           OutSectionNameList             (Parm, OutParm, ZeroConstructor)

void UUIStatData::EnumerateSectionNames(TArray<struct FName>* OutSectionNameList)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.UIStatData.EnumerateSectionNames");

	UUIStatData_EnumerateSectionNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSectionNameList != nullptr)
		*OutSectionNameList = params.OutSectionNameList;
}


// Function GbxGameSystemCore.UIStatData.ComputeAttributeModification
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGbxAttributeData*       Attribute                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bScale                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FUIStatCollector        Collector                      (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUIStatData::ComputeAttributeModification(class UGbxAttributeData* Attribute, bool bScale, const struct FUIStatCollector& Collector)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.UIStatData.ComputeAttributeModification");

	UUIStatData_ComputeAttributeModification_Params params;
	params.Attribute = Attribute;
	params.bScale = bScale;
	params.Collector = Collector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxAction_CoordinatedEffect.SetConstantMaterialVectorParamValue
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   ParamName                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UGbxAction_CoordinatedEffect::SetConstantMaterialVectorParamValue(const struct FName& ParamName, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction_CoordinatedEffect.SetConstantMaterialVectorParamValue");

	UGbxAction_CoordinatedEffect_SetConstantMaterialVectorParamValue_Params params;
	params.ParamName = ParamName;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxAction_Loop.OnStop
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UGbxAction_Loop::OnStop(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction_Loop.OnStop");

	UGbxAction_Loop_OnStop_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxAction_Loop.OnLoop
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UGbxAction_Loop::OnLoop(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction_Loop.OnLoop");

	UGbxAction_Loop_OnLoop_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxAction_Loop.K2_StopLooping
// (Final, Native, Private, BlueprintCallable, Const)

void UGbxAction_Loop::K2_StopLooping()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction_Loop.K2_StopLooping");

	UGbxAction_Loop_K2_StopLooping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxAction_PhysicalAnim.K2_GetDynamicBodyState
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          AngularThreshold               (Parm, ZeroConstructor, IsPlainOldData)
// EGbxPhysicalActionDynamicBodyState ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGbxPhysicalActionDynamicBodyState UGbxAction_PhysicalAnim::K2_GetDynamicBodyState(float AngularThreshold)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction_PhysicalAnim.K2_GetDynamicBodyState");

	UGbxAction_PhysicalAnim_K2_GetDynamicBodyState_Params params;
	params.AngularThreshold = AngularThreshold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxAction_PhysicalAnim.K2_FixupDynamicToKinematicIssues
// (Final, Native, Private, BlueprintCallable, Const)
// Parameters:
// float                          AngularThreshold               (Parm, ZeroConstructor, IsPlainOldData)

void UGbxAction_PhysicalAnim::K2_FixupDynamicToKinematicIssues(float AngularThreshold)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction_PhysicalAnim.K2_FixupDynamicToKinematicIssues");

	UGbxAction_PhysicalAnim_K2_FixupDynamicToKinematicIssues_Params params;
	params.AngularThreshold = AngularThreshold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxPlayerController.SetTeam
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UTeam*                   Team                           (Parm, ZeroConstructor, IsPlainOldData)

void AGbxPlayerController::SetTeam(class UTeam* Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxPlayerController.SetTeam");

	AGbxPlayerController_SetTeam_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxPlayerController.ServerRequestPawnSlotDetach
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class APawn*                   Occupant                       (Parm, ZeroConstructor, IsPlainOldData)

void AGbxPlayerController::ServerRequestPawnSlotDetach(class APawn* Occupant)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxPlayerController.ServerRequestPawnSlotDetach");

	AGbxPlayerController_ServerRequestPawnSlotDetach_Params params;
	params.Occupant = Occupant;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxPlayerController.ServerCanSplitscreenJoin
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// int                            ControllerId                   (Parm, ZeroConstructor, IsPlainOldData)

void AGbxPlayerController::ServerCanSplitscreenJoin(int ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxPlayerController.ServerCanSplitscreenJoin");

	AGbxPlayerController_ServerCanSplitscreenJoin_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxPlayerController.PushCinematicMode
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UCinematicModeData*      InCinematicMode                (Parm, ZeroConstructor, IsPlainOldData)

void AGbxPlayerController::PushCinematicMode(class UCinematicModeData* InCinematicMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxPlayerController.PushCinematicMode");

	AGbxPlayerController_PushCinematicMode_Params params;
	params.InCinematicMode = InCinematicMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxPlayerController.PopCinematicMode
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UCinematicModeData*      InCinematicMode                (Parm, ZeroConstructor, IsPlainOldData)

void AGbxPlayerController::PopCinematicMode(class UCinematicModeData* InCinematicMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxPlayerController.PopCinematicMode");

	AGbxPlayerController_PopCinematicMode_Params params;
	params.InCinematicMode = InCinematicMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxPlayerController.OnRep_PrimaryCharacter
// (Final, Native, Protected)

void AGbxPlayerController::OnRep_PrimaryCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxPlayerController.OnRep_PrimaryCharacter");

	AGbxPlayerController_OnRep_PrimaryCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxPlayerController.OnRep_CinematicMode
// (Final, Native, Protected)

void AGbxPlayerController::OnRep_CinematicMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxPlayerController.OnRep_CinematicMode");

	AGbxPlayerController_OnRep_CinematicMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction GbxGameSystemCore.GbxPlayerController.OnPrimaryCharacterChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class AGbxCharacter*           NewCharacter                   (Parm, ZeroConstructor, IsPlainOldData)

void AGbxPlayerController::OnPrimaryCharacterChanged__DelegateSignature(class AGbxCharacter* NewCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GbxGameSystemCore.GbxPlayerController.OnPrimaryCharacterChanged__DelegateSignature");

	AGbxPlayerController_OnPrimaryCharacterChanged__DelegateSignature_Params params;
	params.NewCharacter = NewCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction GbxGameSystemCore.GbxPlayerController.OnPausedChangedDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                           bPaused                        (Parm, ZeroConstructor, IsPlainOldData)

void AGbxPlayerController::OnPausedChangedDelegate__DelegateSignature(bool bPaused)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GbxGameSystemCore.GbxPlayerController.OnPausedChangedDelegate__DelegateSignature");

	AGbxPlayerController_OnPausedChangedDelegate__DelegateSignature_Params params;
	params.bPaused = bPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxPlayerController.IsUsingGamepad
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGbxPlayerController::IsUsingGamepad()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxPlayerController.IsUsingGamepad");

	AGbxPlayerController_IsUsingGamepad_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxPlayerController.GetTeamComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTeamComponent*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UTeamComponent* AGbxPlayerController::GetTeamComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxPlayerController.GetTeamComponent");

	AGbxPlayerController_GetTeamComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxPlayerController.GetTeam
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTeam*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTeam* AGbxPlayerController::GetTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxPlayerController.GetTeam");

	AGbxPlayerController_GetTeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxPlayerController.GetTargetingComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTargetingComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UTargetingComponent* AGbxPlayerController::GetTargetingComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxPlayerController.GetTargetingComponent");

	AGbxPlayerController_GetTargetingComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxPlayerController.GetTargetableComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTargetableComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UTargetableComponent* AGbxPlayerController::GetTargetableComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxPlayerController.GetTargetableComponent");

	AGbxPlayerController_GetTargetableComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxPlayerController.GetPrimaryCharacter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AGbxCharacter*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AGbxCharacter* AGbxPlayerController::GetPrimaryCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxPlayerController.GetPrimaryCharacter");

	AGbxPlayerController_GetPrimaryCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxPlayerController.GetPlayerViewportSize
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            SizeX                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            SizeY                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGbxPlayerController::GetPlayerViewportSize(int* SizeX, int* SizeY)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxPlayerController.GetPlayerViewportSize");

	AGbxPlayerController_GetPlayerViewportSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SizeX != nullptr)
		*SizeX = params.SizeX;
	if (SizeY != nullptr)
		*SizeY = params.SizeY;
}


// Function GbxGameSystemCore.GbxPlayerController.GetPlayerViewportOffset
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            OffsetX                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            OffsetY                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGbxPlayerController::GetPlayerViewportOffset(int* OffsetX, int* OffsetY)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxPlayerController.GetPlayerViewportOffset");

	AGbxPlayerController_GetPlayerViewportOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OffsetX != nullptr)
		*OffsetX = params.OffsetX;
	if (OffsetY != nullptr)
		*OffsetY = params.OffsetY;
}


// Function GbxGameSystemCore.GbxPlayerController.GetPlayerProfile
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGbxProfile*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGbxProfile* AGbxPlayerController::GetPlayerProfile()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxPlayerController.GetPlayerProfile");

	AGbxPlayerController_GetPlayerProfile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxPlayerController.GetGbxPerceptionComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGbxPerceptionComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UGbxPerceptionComponent* AGbxPlayerController::GetGbxPerceptionComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxPlayerController.GetGbxPerceptionComponent");

	AGbxPlayerController_GetGbxPerceptionComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxPlayerController.DeprojectViewportPositionToWorld
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ViewportX                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ViewportY                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WorldLocation                  (Parm, OutParm, IsPlainOldData)
// struct FVector                 WorldDirection                 (Parm, OutParm, IsPlainOldData)
// bool                           bUseForegroundProjection       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGbxPlayerController::DeprojectViewportPositionToWorld(float ViewportX, float ViewportY, bool bUseForegroundProjection, struct FVector* WorldLocation, struct FVector* WorldDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxPlayerController.DeprojectViewportPositionToWorld");

	AGbxPlayerController_DeprojectViewportPositionToWorld_Params params;
	params.ViewportX = ViewportX;
	params.ViewportY = ViewportY;
	params.bUseForegroundProjection = bUseForegroundProjection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldLocation != nullptr)
		*WorldLocation = params.WorldLocation;
	if (WorldDirection != nullptr)
		*WorldDirection = params.WorldDirection;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxPlayerController.DebugCategory
// (Final, Exec, Native, Public)
// Parameters:
// struct FName                   CategoryName                   (Parm, ZeroConstructor, IsPlainOldData)

void AGbxPlayerController::DebugCategory(const struct FName& CategoryName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxPlayerController.DebugCategory");

	AGbxPlayerController_DebugCategory_Params params;
	params.CategoryName = CategoryName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxPlayerController.ClientStopFeedback
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class UFeedbackData*           Data                           (Parm, ZeroConstructor, IsPlainOldData)

void AGbxPlayerController::ClientStopFeedback(class UFeedbackData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxPlayerController.ClientStopFeedback");

	AGbxPlayerController_ClientStopFeedback_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxPlayerController.ClientPlayWwiseEvent
// (Net, Native, Event, Public, NetClient)
// Parameters:
// class UWwiseEvent*             Event                          (Parm, ZeroConstructor, IsPlainOldData)

void AGbxPlayerController::ClientPlayWwiseEvent(class UWwiseEvent* Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxPlayerController.ClientPlayWwiseEvent");

	AGbxPlayerController_ClientPlayWwiseEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxPlayerController.ClientPlayFeedback
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class UFeedbackData*           Data                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLoop                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 SourceContext                  (Parm, ZeroConstructor, IsPlainOldData)

void AGbxPlayerController::ClientPlayFeedback(class UFeedbackData* Data, float Scale, bool bLoop, class UObject* SourceContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxPlayerController.ClientPlayFeedback");

	AGbxPlayerController_ClientPlayFeedback_Params params;
	params.Data = Data;
	params.Scale = Scale;
	params.bLoop = bLoop;
	params.SourceContext = SourceContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxPlayerController.ClientPerformFeedbackAtLocation
// (Net, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// class UFeedbackData*           FeedbackData                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SourceLocation                 (Parm, IsPlainOldData)
// bool                           bLoop                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 SourceContext                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FRangedDistanceOverrides RangedOverrides                (Parm)

void AGbxPlayerController::ClientPerformFeedbackAtLocation(class UFeedbackData* FeedbackData, const struct FVector& SourceLocation, bool bLoop, class UObject* SourceContext, const struct FRangedDistanceOverrides& RangedOverrides)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxPlayerController.ClientPerformFeedbackAtLocation");

	AGbxPlayerController_ClientPerformFeedbackAtLocation_Params params;
	params.FeedbackData = FeedbackData;
	params.SourceLocation = SourceLocation;
	params.bLoop = bLoop;
	params.SourceContext = SourceContext;
	params.RangedOverrides = RangedOverrides;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxPlayerController.ClientPerformFeedback
// (Net, Native, Event, Public, NetClient)
// Parameters:
// class UFeedbackData*           FeedbackData                   (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 SourceContext                  (Parm, ZeroConstructor, IsPlainOldData)

void AGbxPlayerController::ClientPerformFeedback(class UFeedbackData* FeedbackData, class UObject* SourceContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxPlayerController.ClientPerformFeedback");

	AGbxPlayerController_ClientPerformFeedback_Params params;
	params.FeedbackData = FeedbackData;
	params.SourceContext = SourceContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxPlayerController.ClientNotifyActivateCheckpoint
// (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)

void AGbxPlayerController::ClientNotifyActivateCheckpoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxPlayerController.ClientNotifyActivateCheckpoint");

	AGbxPlayerController_ClientNotifyActivateCheckpoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxPlayerController.ClientCanSplitscreenJoin
// (Net, NetReliable, Native, Event, Public, NetClient, NetValidate)
// Parameters:
// int                            ControllerId                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCanJoin                       (Parm, ZeroConstructor, IsPlainOldData)

void AGbxPlayerController::ClientCanSplitscreenJoin(int ControllerId, bool bCanJoin)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxPlayerController.ClientCanSplitscreenJoin");

	AGbxPlayerController_ClientCanSplitscreenJoin_Params params;
	params.ControllerId = ControllerId;
	params.bCanJoin = bCanJoin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxPlayerController.ClientApplyDamageDataPresentation
// (Net, Native, Event, Public, NetClient)
// Parameters:
// class UDamageData*             DamageData                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FPlayerDamageDataPresentation PlayerPresentation             (ConstParm, Parm, ReferenceParm)

void AGbxPlayerController::ClientApplyDamageDataPresentation(class UDamageData* DamageData, const struct FPlayerDamageDataPresentation& PlayerPresentation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxPlayerController.ClientApplyDamageDataPresentation");

	AGbxPlayerController_ClientApplyDamageDataPresentation_Params params;
	params.DamageData = DamageData;
	params.PlayerPresentation = PlayerPresentation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxPlayerController.Client_StopGbxFeedback
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class UGbxFeedbackData*        Data                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 SourceContext                  (Parm, ZeroConstructor, IsPlainOldData)

void AGbxPlayerController::Client_StopGbxFeedback(class UGbxFeedbackData* Data, class UObject* SourceContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxPlayerController.Client_StopGbxFeedback");

	AGbxPlayerController_Client_StopGbxFeedback_Params params;
	params.Data = Data;
	params.SourceContext = SourceContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxPlayerController.Client_PlayGbxFeedback
// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// class UGbxFeedbackData*        Data                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIs3D                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLoop                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 SourceContext                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SourceLocation                 (Parm, IsPlainOldData)
// float                          EffectFalloffMinDistance       (Parm, ZeroConstructor, IsPlainOldData)
// float                          EffectFalloffMaxDistance       (Parm, ZeroConstructor, IsPlainOldData)

void AGbxPlayerController::Client_PlayGbxFeedback(class UGbxFeedbackData* Data, bool bIs3D, bool bLoop, float Scale, class UObject* SourceContext, const struct FVector& SourceLocation, float EffectFalloffMinDistance, float EffectFalloffMaxDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxPlayerController.Client_PlayGbxFeedback");

	AGbxPlayerController_Client_PlayGbxFeedback_Params params;
	params.Data = Data;
	params.bIs3D = bIs3D;
	params.bLoop = bLoop;
	params.Scale = Scale;
	params.SourceContext = SourceContext;
	params.SourceLocation = SourceLocation;
	params.EffectFalloffMinDistance = EffectFalloffMinDistance;
	params.EffectFalloffMaxDistance = EffectFalloffMaxDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxPlayerController.ClearCinematicMode
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void AGbxPlayerController::ClearCinematicMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxPlayerController.ClearCinematicMode");

	AGbxPlayerController_ClearCinematicMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxPlayerController.ClearAndSetCinematicMode
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UCinematicModeData*      InCinematicMode                (Parm, ZeroConstructor, IsPlainOldData)

void AGbxPlayerController::ClearAndSetCinematicMode(class UCinematicModeData* InCinematicMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxPlayerController.ClearAndSetCinematicMode");

	AGbxPlayerController_ClearAndSetCinematicMode_Params params;
	params.InCinematicMode = InCinematicMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.Challenge.TestForCompleted
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AGbxPlayerController*    PlayerToTest                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 OtherObject                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class FString>          EnumTag                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UChallenge::TestForCompleted(class AGbxPlayerController* PlayerToTest, class UObject* OtherObject, TArray<class FString> EnumTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.Challenge.TestForCompleted");

	UChallenge_TestForCompleted_Params params;
	params.PlayerToTest = PlayerToTest;
	params.OtherObject = OtherObject;
	params.EnumTag = EnumTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.Challenge.SetChallengeProgress
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// int                            NewProgress                    (Parm, ZeroConstructor, IsPlainOldData)

void UChallenge::SetChallengeProgress(int NewProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.Challenge.SetChallengeProgress");

	UChallenge_SetChallengeProgress_Params params;
	params.NewProgress = NewProgress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.Challenge.PlayerExitChallengeArea
// (Event, Public, BlueprintEvent)
// Parameters:
// class UChallengeLevelActorComponent* LevelActorComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UChallenge::PlayerExitChallengeArea(class UChallengeLevelActorComponent* LevelActorComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.Challenge.PlayerExitChallengeArea");

	UChallenge_PlayerExitChallengeArea_Params params;
	params.LevelActorComponent = LevelActorComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.Challenge.PlayerEnterChallengeArea
// (Event, Public, BlueprintEvent)
// Parameters:
// class UChallengeLevelActorComponent* LevelActorComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UChallenge::PlayerEnterChallengeArea(class UChallengeLevelActorComponent* LevelActorComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.Challenge.PlayerEnterChallengeArea");

	UChallenge_PlayerEnterChallengeArea_Params params;
	params.LevelActorComponent = LevelActorComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.Challenge.OnLevelActorRegistered
// (Event, Public, BlueprintEvent)
// Parameters:
// class UChallengeLevelActorComponent* RegisteredLevelActor           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UChallenge::OnLevelActorRegistered(class UChallengeLevelActorComponent* RegisteredLevelActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.Challenge.OnLevelActorRegistered");

	UChallenge_OnLevelActorRegistered_Params params;
	params.RegisteredLevelActor = RegisteredLevelActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.Challenge.OnInitChallengeInstance
// (Event, Public, BlueprintEvent)
// Parameters:
// class UChallengesComponent*    OwningChallenges               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AGbxCharacter*           AssociatedCharacter            (Parm, ZeroConstructor, IsPlainOldData)

void UChallenge::OnInitChallengeInstance(class UChallengesComponent* OwningChallenges, class AGbxCharacter* AssociatedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.Challenge.OnInitChallengeInstance");

	UChallenge_OnInitChallengeInstance_Params params;
	params.OwningChallenges = OwningChallenges;
	params.AssociatedCharacter = AssociatedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.Challenge.OnChallengeActivated
// (Event, Public, BlueprintEvent)

void UChallenge::OnChallengeActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.Challenge.OnChallengeActivated");

	UChallenge_OnChallengeActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.Challenge.IsChallengeComplete
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UChallenge::IsChallengeComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.Challenge.IsChallengeComplete");

	UChallenge_IsChallengeComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.Challenge.IsChallengeActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UChallenge::IsChallengeActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.Challenge.IsChallengeActive");

	UChallenge_IsChallengeActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.Challenge.IncrementChallengeProgressByValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UChallenge::IncrementChallengeProgressByValue(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.Challenge.IncrementChallengeProgressByValue");

	UChallenge_IncrementChallengeProgressByValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.Challenge.IncrementChallengeProgress
// (Final, Native, Public, BlueprintCallable, Const)

void UChallenge::IncrementChallengeProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.Challenge.IncrementChallengeProgress");

	UChallenge_IncrementChallengeProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.Challenge.GetLevelActorComponents
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UChallengeLevelActorComponent*> LevelActorList                 (Parm, OutParm, ZeroConstructor)

void UChallenge::GetLevelActorComponents(TArray<class UChallengeLevelActorComponent*>* LevelActorList)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.Challenge.GetLevelActorComponents");

	UChallenge_GetLevelActorComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LevelActorList != nullptr)
		*LevelActorList = params.LevelActorList;
}


// Function GbxGameSystemCore.Challenge.GetChallengeProgressGoalValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UChallenge::GetChallengeProgressGoalValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.Challenge.GetChallengeProgressGoalValue");

	UChallenge_GetChallengeProgressGoalValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.Challenge.GetChallengeProgress
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UChallenge::GetChallengeProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.Challenge.GetChallengeProgress");

	UChallenge_GetChallengeProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.Challenge.GetChallengeCompleteInfo
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            NumCompleted                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            NumChallenges                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UChallenge::GetChallengeCompleteInfo(int* NumCompleted, int* NumChallenges)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.Challenge.GetChallengeCompleteInfo");

	UChallenge_GetChallengeCompleteInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumCompleted != nullptr)
		*NumCompleted = params.NumCompleted;
	if (NumChallenges != nullptr)
		*NumChallenges = params.NumChallenges;
}


// Function GbxGameSystemCore.Challenge.CompletedConditional
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UChallenge::CompletedConditional()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.Challenge.CompletedConditional");

	UChallenge_CompletedConditional_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.Challenge.CompletedChallenge
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGbxPlayerController*    CompletedPlayer                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge::CompletedChallenge(class AGbxPlayerController* CompletedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.Challenge.CompletedChallenge");

	UChallenge_CompletedChallenge_Params params;
	params.CompletedPlayer = CompletedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.Challenge.CompleteChallenge
// (Native, Public, BlueprintCallable, Const)

void UChallenge::CompleteChallenge()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.Challenge.CompleteChallenge");

	UChallenge_CompleteChallenge_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.Challenge.ActivateChallenge
// (Final, Native, Public, BlueprintCallable)

void UChallenge::ActivateChallenge()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.Challenge.ActivateChallenge");

	UChallenge_ActivateChallenge_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ChallengeManager.OnStatIncrement
// (Final, Native, Public)
// Parameters:
// class AActor*                  StatContext                    (Parm, ZeroConstructor, IsPlainOldData)
// class UGameStatData*           StatId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)

void AChallengeManager::OnStatIncrement(class AActor* StatContext, class UGameStatData* StatId, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ChallengeManager.OnStatIncrement");

	AChallengeManager_OnStatIncrement_Params params;
	params.StatContext = StatContext;
	params.StatId = StatId;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ChallengesComponent.UnregisterInActivePlayerChallenges
// (Final, Native, Public, BlueprintCallable)

void UChallengesComponent::UnregisterInActivePlayerChallenges()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ChallengesComponent.UnregisterInActivePlayerChallenges");

	UChallengesComponent_UnregisterInActivePlayerChallenges_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ChallengesComponent.SetChallengeProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ChalClass                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            NewProgress                    (Parm, ZeroConstructor, IsPlainOldData)

void UChallengesComponent::SetChallengeProgress(class UClass* ChalClass, int NewProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ChallengesComponent.SetChallengeProgress");

	UChallengesComponent_SetChallengeProgress_Params params;
	params.ChalClass = ChalClass;
	params.NewProgress = NewProgress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ChallengesComponent.SetChallengeActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ChalClass                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInIsActive                    (Parm, ZeroConstructor, IsPlainOldData)

void UChallengesComponent::SetChallengeActive(class UClass* ChalClass, bool bInIsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ChallengesComponent.SetChallengeActive");

	UChallengesComponent_SetChallengeActive_Params params;
	params.ChalClass = ChalClass;
	params.bInIsActive = bInIsActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ChallengesComponent.IsChallengeComplete
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ChalClass                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UChallengesComponent::IsChallengeComplete(class UClass* ChalClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ChallengesComponent.IsChallengeComplete");

	UChallengesComponent_IsChallengeComplete_Params params;
	params.ChalClass = ChalClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.ChallengesComponent.IsChallengeActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ChalClass                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UChallengesComponent::IsChallengeActive(class UClass* ChalClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ChallengesComponent.IsChallengeActive");

	UChallengesComponent_IsChallengeActive_Params params;
	params.ChalClass = ChalClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.ChallengesComponent.IncrementChallengeProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ChalClass                      (Parm, ZeroConstructor, IsPlainOldData)

void UChallengesComponent::IncrementChallengeProgress(class UClass* ChalClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ChallengesComponent.IncrementChallengeProgress");

	UChallengesComponent_IncrementChallengeProgress_Params params;
	params.ChalClass = ChalClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ChallengesComponent.GetMaxChallengeTiers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ChalClass                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UChallengesComponent::GetMaxChallengeTiers(class UClass* ChalClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ChallengesComponent.GetMaxChallengeTiers");

	UChallengesComponent_GetMaxChallengeTiers_Params params;
	params.ChalClass = ChalClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.ChallengesComponent.GetLocalChallenges
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FChallengeInstanceData> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FChallengeInstanceData> UChallengesComponent::GetLocalChallenges()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ChallengesComponent.GetLocalChallenges");

	UChallengesComponent_GetLocalChallenges_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.ChallengesComponent.GetCompletedChallengeTiers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ChalClass                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UChallengesComponent::GetCompletedChallengeTiers(class UClass* ChalClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ChallengesComponent.GetCompletedChallengeTiers");

	UChallengesComponent_GetCompletedChallengeTiers_Params params;
	params.ChalClass = ChalClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.ChallengesComponent.GetChallengeStatValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ChalClass                      (Parm, ZeroConstructor, IsPlainOldData)
// class UGameStatData*           StatId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UChallengesComponent::GetChallengeStatValue(class UClass* ChalClass, class UGameStatData* StatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ChallengesComponent.GetChallengeStatValue");

	UChallengesComponent_GetChallengeStatValue_Params params;
	params.ChalClass = ChalClass;
	params.StatId = StatId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.ChallengesComponent.GetChallengeStatGoalValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ChalClass                      (Parm, ZeroConstructor, IsPlainOldData)
// class UGameStatData*           StatId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UChallengesComponent::GetChallengeStatGoalValue(class UClass* ChalClass, class UGameStatData* StatId)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ChallengesComponent.GetChallengeStatGoalValue");

	UChallengesComponent_GetChallengeStatGoalValue_Params params;
	params.ChalClass = ChalClass;
	params.StatId = StatId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.ChallengesComponent.GetChallengeProgressGoalValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ChalClass                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UChallengesComponent::GetChallengeProgressGoalValue(class UClass* ChalClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ChallengesComponent.GetChallengeProgressGoalValue");

	UChallengesComponent_GetChallengeProgressGoalValue_Params params;
	params.ChalClass = ChalClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.ChallengesComponent.GetChallengeProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ChalClass                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UChallengesComponent::GetChallengeProgress(class UClass* ChalClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ChallengesComponent.GetChallengeProgress");

	UChallengesComponent_GetChallengeProgress_Params params;
	params.ChalClass = ChalClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.ChallengesComponent.GetChallengeCompleteInfoForLevels
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FName>           LevelsForChallenges            (Parm, ZeroConstructor)
// class UChallengeCategoryData*  Category                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumCompleted                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            NumActive                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bIgnoreHidden                  (Parm, ZeroConstructor, IsPlainOldData)

void UChallengesComponent::GetChallengeCompleteInfoForLevels(TArray<struct FName> LevelsForChallenges, class UChallengeCategoryData* Category, bool bIgnoreHidden, int* NumCompleted, int* NumActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ChallengesComponent.GetChallengeCompleteInfoForLevels");

	UChallengesComponent_GetChallengeCompleteInfoForLevels_Params params;
	params.LevelsForChallenges = LevelsForChallenges;
	params.Category = Category;
	params.bIgnoreHidden = bIgnoreHidden;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumCompleted != nullptr)
		*NumCompleted = params.NumCompleted;
	if (NumActive != nullptr)
		*NumActive = params.NumActive;
}


// Function GbxGameSystemCore.ChallengesComponent.GetChallengeCompleteInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  ChalClass                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumCompleted                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            NumChallenges                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UChallengesComponent::GetChallengeCompleteInfo(class UClass* ChalClass, int* NumCompleted, int* NumChallenges)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ChallengesComponent.GetChallengeCompleteInfo");

	UChallengesComponent_GetChallengeCompleteInfo_Params params;
	params.ChalClass = ChalClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumCompleted != nullptr)
		*NumCompleted = params.NumCompleted;
	if (NumChallenges != nullptr)
		*NumChallenges = params.NumChallenges;
}


// Function GbxGameSystemCore.ChallengesComponent.CompleteChallengeIfConditionsMet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ChalClass                      (Parm, ZeroConstructor, IsPlainOldData)

void UChallengesComponent::CompleteChallengeIfConditionsMet(class UClass* ChalClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ChallengesComponent.CompleteChallengeIfConditionsMet");

	UChallengesComponent_CompleteChallengeIfConditionsMet_Params params;
	params.ChalClass = ChalClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ChallengesComponent.CompleteChallenge
// (Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ChalClass                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceActive                   (Parm, ZeroConstructor, IsPlainOldData)

void UChallengesComponent::CompleteChallenge(class UClass* ChalClass, bool bForceActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ChallengesComponent.CompleteChallenge");

	UChallengesComponent_CompleteChallenge_Params params;
	params.ChalClass = ChalClass;
	params.bForceActive = bForceActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ChallengesComponent.ClientChallengeUpdateProgress
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class UClass*                  ChalClass                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            NewProgress                    (Parm, ZeroConstructor, IsPlainOldData)

void UChallengesComponent::ClientChallengeUpdateProgress(class UClass* ChalClass, int NewProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ChallengesComponent.ClientChallengeUpdateProgress");

	UChallengesComponent_ClientChallengeUpdateProgress_Params params;
	params.ChalClass = ChalClass;
	params.NewProgress = NewProgress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ChallengesComponent.ClientChallengeCompleted
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class UClass*                  ChalClass                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumTiersComplete               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceActive                   (Parm, ZeroConstructor, IsPlainOldData)

void UChallengesComponent::ClientChallengeCompleted(class UClass* ChalClass, int NumTiersComplete, bool bForceActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ChallengesComponent.ClientChallengeCompleted");

	UChallengesComponent_ClientChallengeCompleted_Params params;
	params.ChalClass = ChalClass;
	params.NumTiersComplete = NumTiersComplete;
	params.bForceActive = bForceActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ChallengesComponent.ClientActivateChallenge
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// class UClass*                  ChalClass                      (Parm, ZeroConstructor, IsPlainOldData)

void UChallengesComponent::ClientActivateChallenge(class UClass* ChalClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ChallengesComponent.ClientActivateChallenge");

	UChallengesComponent_ClientActivateChallenge_Params params;
	params.ChalClass = ChalClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ChallengesComponent.AreGlobalChallengesRegistered
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UChallengesComponent::AreGlobalChallengesRegistered()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ChallengesComponent.AreGlobalChallengesRegistered");

	UChallengesComponent_AreGlobalChallengesRegistered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.ChallengesComponent.ActivateChallenge
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ChalClass                      (Parm, ZeroConstructor, IsPlainOldData)

void UChallengesComponent::ActivateChallenge(class UClass* ChalClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ChallengesComponent.ActivateChallenge");

	UChallengesComponent_ActivateChallenge_Params params;
	params.ChalClass = ChalClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.StopRotateTo
// (Final, Native, Public, BlueprintCallable)

void UGbxCharacterMovementComponent::StopRotateTo()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.StopRotateTo");

	UGbxCharacterMovementComponent_StopRotateTo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.StopMoveTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReplicateStop                 (Parm, ZeroConstructor, IsPlainOldData)

void UGbxCharacterMovementComponent::StopMoveTo(bool bForce, bool bReplicateStop)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.StopMoveTo");

	UGbxCharacterMovementComponent_StopMoveTo_Params params;
	params.bForce = bForce;
	params.bReplicateStop = bReplicateStop;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.StopControlledMove
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ControlledMove                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bZeroVelocity                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInterrupted                   (Parm, ZeroConstructor, IsPlainOldData)

void UGbxCharacterMovementComponent::StopControlledMove(class UClass* ControlledMove, bool bZeroVelocity, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.StopControlledMove");

	UGbxCharacterMovementComponent_StopControlledMove_Params params;
	params.ControlledMove = ControlledMove;
	params.bZeroVelocity = bZeroVelocity;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.StartRotateTo
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FCharacterRotateToCommand RotateToCommand                (ConstParm, Parm, OutParm, ReferenceParm)

void UGbxCharacterMovementComponent::StartRotateTo(const struct FCharacterRotateToCommand& RotateToCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.StartRotateTo");

	UGbxCharacterMovementComponent_StartRotateTo_Params params;
	params.RotateToCommand = RotateToCommand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.StartMoveTo
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FCharacterMoveToCommand MoveToCommand                  (ConstParm, Parm, OutParm, ReferenceParm)

void UGbxCharacterMovementComponent::StartMoveTo(const struct FCharacterMoveToCommand& MoveToCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.StartMoveTo");

	UGbxCharacterMovementComponent_StartMoveTo_Params params;
	params.MoveToCommand = MoveToCommand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.StartControlledMove
// (Final, BlueprintAuthorityOnly, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UClass*                  ControlledMove                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          SpeedOverride                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          DurationOverride               (Parm, ZeroConstructor, IsPlainOldData)
// float                          LaunchAngleOverride            (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetLocation                 (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxCharacterMovementComponent::StartControlledMove(class UClass* ControlledMove, class AActor* Instigator, float SpeedOverride, float DurationOverride, float LaunchAngleOverride, class AActor* TargetActor, const struct FVector& TargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.StartControlledMove");

	UGbxCharacterMovementComponent_StartControlledMove_Params params;
	params.ControlledMove = ControlledMove;
	params.Instigator = Instigator;
	params.SpeedOverride = SpeedOverride;
	params.DurationOverride = DurationOverride;
	params.LaunchAngleOverride = LaunchAngleOverride;
	params.TargetActor = TargetActor;
	params.TargetLocation = TargetLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.SetPendingRawInputVector
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 NewInputVector                 (Parm, IsPlainOldData)

void UGbxCharacterMovementComponent::SetPendingRawInputVector(const struct FVector& NewInputVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.SetPendingRawInputVector");

	UGbxCharacterMovementComponent_SetPendingRawInputVector_Params params;
	params.NewInputVector = NewInputVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.SetNoneWithRootMotionMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bAnimationWalking              (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UGbxCharacterMovementComponent::SetNoneWithRootMotionMode(bool bAnimationWalking, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.SetNoneWithRootMotionMode");

	UGbxCharacterMovementComponent_SetNoneWithRootMotionMode_Params params;
	params.bAnimationWalking = bAnimationWalking;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.SetFacingTarget
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FFacingInfo             FacingTarget                   (ConstParm, Parm, OutParm, ReferenceParm)
// EFacingChannel                 Channel                        (Parm, ZeroConstructor, IsPlainOldData)

void UGbxCharacterMovementComponent::SetFacingTarget(const struct FFacingInfo& FacingTarget, EFacingChannel Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.SetFacingTarget");

	UGbxCharacterMovementComponent_SetFacingTarget_Params params;
	params.FacingTarget = FacingTarget;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.SetAnimationBasedTurning
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UGbxCharacterMovementComponent::SetAnimationBasedTurning(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.SetAnimationBasedTurning");

	UGbxCharacterMovementComponent_SetAnimationBasedTurning_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.ServerStopMoveTo
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)

void UGbxCharacterMovementComponent::ServerStopMoveTo()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.ServerStopMoveTo");

	UGbxCharacterMovementComponent_ServerStopMoveTo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.ServerStartMoveTo
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// struct FCharacterMoveToCommand MoveToCommand                  (ConstParm, Parm, ReferenceParm)

void UGbxCharacterMovementComponent::ServerStartMoveTo(const struct FCharacterMoveToCommand& MoveToCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.ServerStartMoveTo");

	UGbxCharacterMovementComponent_ServerStartMoveTo_Params params;
	params.MoveToCommand = MoveToCommand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.ServerAttemptMantle
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FMantleAttemptInfo      ClientData                     (ConstParm, Parm, ReferenceParm)
// float                          Timestamp                      (Parm, ZeroConstructor, IsPlainOldData)

void UGbxCharacterMovementComponent::ServerAttemptMantle(const struct FMantleAttemptInfo& ClientData, float Timestamp)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.ServerAttemptMantle");

	UGbxCharacterMovementComponent_ServerAttemptMantle_Params params;
	params.ClientData = ClientData;
	params.Timestamp = Timestamp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.OnStanceChanged
// (Native, Public)
// Parameters:
// struct FStanceChangedEventArgs Args                           (Parm, IsPlainOldData)

void UGbxCharacterMovementComponent::OnStanceChanged(const struct FStanceChangedEventArgs& Args)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.OnStanceChanged");

	UGbxCharacterMovementComponent_OnStanceChanged_Params params;
	params.Args = Args;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.OnRep_ControlledMove
// (Final, Native, Protected)

void UGbxCharacterMovementComponent::OnRep_ControlledMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.OnRep_ControlledMove");

	UGbxCharacterMovementComponent_OnRep_ControlledMove_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.OnNotifyTurnExit
// (Final, Native, Public, BlueprintCallable)

void UGbxCharacterMovementComponent::OnNotifyTurnExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.OnNotifyTurnExit");

	UGbxCharacterMovementComponent_OnNotifyTurnExit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.OnNotifyTurnEnter
// (Final, Native, Public, BlueprintCallable)

void UGbxCharacterMovementComponent::OnNotifyTurnEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.OnNotifyTurnEnter");

	UGbxCharacterMovementComponent_OnNotifyTurnEnter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.OnCapsuleEndOverlap
// (Native, Public)
// Parameters:
// class UPrimitiveComponent*     OverlappedComp                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void UGbxCharacterMovementComponent::OnCapsuleEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.OnCapsuleEndOverlap");

	UGbxCharacterMovementComponent_OnCapsuleEndOverlap_Params params;
	params.OverlappedComp = OverlappedComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.OnCapsuleBeginOverlap
// (Native, Public, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComp                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UGbxCharacterMovementComponent::OnCapsuleBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.OnCapsuleBeginOverlap");

	UGbxCharacterMovementComponent_OnCapsuleBeginOverlap_Params params;
	params.OverlappedComp = OverlappedComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.MakeFacingInfoRotation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                Rotation                       (Parm, IsPlainOldData)
// struct FFacingInfo             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FFacingInfo UGbxCharacterMovementComponent::STATIC_MakeFacingInfoRotation(const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.MakeFacingInfoRotation");

	UGbxCharacterMovementComponent_MakeFacingInfoRotation_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.MakeFacingInfoNone
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFacingInfo             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FFacingInfo UGbxCharacterMovementComponent::STATIC_MakeFacingInfoNone()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.MakeFacingInfoNone");

	UGbxCharacterMovementComponent_MakeFacingInfoNone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.MakeFacingInfoLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FFacingInfo             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FFacingInfo UGbxCharacterMovementComponent::STATIC_MakeFacingInfoLocation(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.MakeFacingInfoLocation");

	UGbxCharacterMovementComponent_MakeFacingInfoLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.MakeFacingInfoDirection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Direction                      (Parm, IsPlainOldData)
// struct FFacingInfo             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FFacingInfo UGbxCharacterMovementComponent::STATIC_MakeFacingInfoDirection(const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.MakeFacingInfoDirection");

	UGbxCharacterMovementComponent_MakeFacingInfoDirection_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.MakeFacingInfoComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USceneComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FFacingInfo             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FFacingInfo UGbxCharacterMovementComponent::STATIC_MakeFacingInfoComponent(class USceneComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.MakeFacingInfoComponent");

	UGbxCharacterMovementComponent_MakeFacingInfoComponent_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.MakeFacingInfoActorEyes
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FFacingInfo             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FFacingInfo UGbxCharacterMovementComponent::STATIC_MakeFacingInfoActorEyes(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.MakeFacingInfoActorEyes");

	UGbxCharacterMovementComponent_MakeFacingInfoActorEyes_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.MakeFacingInfoActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FFacingInfo             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FFacingInfo UGbxCharacterMovementComponent::STATIC_MakeFacingInfoActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.MakeFacingInfoActor");

	UGbxCharacterMovementComponent_MakeFacingInfoActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.LeaveNoneWithRootMotionMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bApplyDefault                  (Parm, ZeroConstructor, IsPlainOldData)

void UGbxCharacterMovementComponent::LeaveNoneWithRootMotionMode(bool bApplyDefault)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.LeaveNoneWithRootMotionMode");

	UGbxCharacterMovementComponent_LeaveNoneWithRootMotionMode_Params params;
	params.bApplyDefault = bApplyDefault;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.IsPerformingSpecificControlledMove
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ControlledMove                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxCharacterMovementComponent::IsPerformingSpecificControlledMove(class UClass* ControlledMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.IsPerformingSpecificControlledMove");

	UGbxCharacterMovementComponent_IsPerformingSpecificControlledMove_Params params;
	params.ControlledMove = ControlledMove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.IsPerformingControlledMove
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxCharacterMovementComponent::IsPerformingControlledMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.IsPerformingControlledMove");

	UGbxCharacterMovementComponent_IsPerformingControlledMove_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.IsMovingOnLadder
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxCharacterMovementComponent::IsMovingOnLadder()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.IsMovingOnLadder");

	UGbxCharacterMovementComponent_IsMovingOnLadder_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.IsMantlingAllowed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxCharacterMovementComponent::IsMantlingAllowed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.IsMantlingAllowed");

	UGbxCharacterMovementComponent_IsMantlingAllowed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.IsMantling
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxCharacterMovementComponent::IsMantling()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.IsMantling");

	UGbxCharacterMovementComponent_IsMantling_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.IsInNoneWithRootMotionMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxCharacterMovementComponent::IsInNoneWithRootMotionMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.IsInNoneWithRootMotionMode");

	UGbxCharacterMovementComponent_IsInNoneWithRootMotionMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.IsHandIkEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxCharacterMovementComponent::IsHandIkEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.IsHandIkEnabled");

	UGbxCharacterMovementComponent_IsHandIkEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.IsFootIkTracingEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxCharacterMovementComponent::IsFootIkTracingEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.IsFootIkTracingEnabled");

	UGbxCharacterMovementComponent_IsFootIkTracingEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.IsFootIkEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxCharacterMovementComponent::IsFootIkEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.IsFootIkEnabled");

	UGbxCharacterMovementComponent_IsFootIkEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.IsFacingTargetBP
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ThresholdDegrees               (Parm, ZeroConstructor, IsPlainOldData)
// EFacingChannel                 Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxCharacterMovementComponent::IsFacingTargetBP(float ThresholdDegrees, EFacingChannel Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.IsFacingTargetBP");

	UGbxCharacterMovementComponent_IsFacingTargetBP_Params params;
	params.ThresholdDegrees = ThresholdDegrees;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.GetMaxAllowedAimOffset
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGbxCharacterMovementComponent::GetMaxAllowedAimOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.GetMaxAllowedAimOffset");

	UGbxCharacterMovementComponent_GetMaxAllowedAimOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.GetMantleData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMantleData*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMantleData* UGbxCharacterMovementComponent::GetMantleData()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.GetMantleData");

	UGbxCharacterMovementComponent_GetMantleData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.GetDesiredFacingRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EFacingChannel                 Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UGbxCharacterMovementComponent::GetDesiredFacingRotation(EFacingChannel Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.GetDesiredFacingRotation");

	UGbxCharacterMovementComponent_GetDesiredFacingRotation_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.GetDesiredFacingLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EFacingChannel                 Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UGbxCharacterMovementComponent::GetDesiredFacingLocation(EFacingChannel Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.GetDesiredFacingLocation");

	UGbxCharacterMovementComponent_GetDesiredFacingLocation_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.GetCurrentFacingRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EFacingChannel                 Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UGbxCharacterMovementComponent::GetCurrentFacingRotation(EFacingChannel Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.GetCurrentFacingRotation");

	UGbxCharacterMovementComponent_GetCurrentFacingRotation_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.GetCurrentFacingOrigin
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EFacingChannel                 Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UGbxCharacterMovementComponent::GetCurrentFacingOrigin(EFacingChannel Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.GetCurrentFacingOrigin");

	UGbxCharacterMovementComponent_GetCurrentFacingOrigin_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.GetCurrentFacingLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EFacingChannel                 Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UGbxCharacterMovementComponent::GetCurrentFacingLocation(EFacingChannel Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.GetCurrentFacingLocation");

	UGbxCharacterMovementComponent_GetCurrentFacingLocation_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.GbxSetAnimInstanceClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkelMeshComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UClass*                  NewClass                       (Parm, ZeroConstructor, IsPlainOldData)

void UGbxCharacterMovementComponent::GbxSetAnimInstanceClass(class USkeletalMeshComponent* SkelMeshComponent, class UClass* NewClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.GbxSetAnimInstanceClass");

	UGbxCharacterMovementComponent_GbxSetAnimInstanceClass_Params params;
	params.SkelMeshComponent = SkelMeshComponent;
	params.NewClass = NewClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction GbxGameSystemCore.GbxCharacterMovementComponent.GbxCharacterMovementEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UGbxCharacterMovementComponent::GbxCharacterMovementEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GbxGameSystemCore.GbxCharacterMovementComponent.GbxCharacterMovementEvent__DelegateSignature");

	UGbxCharacterMovementComponent_GbxCharacterMovementEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.ControlledServerMoveOld
// (Final, Net, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// float                          OldTimeStamp                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantize10   OldAccel                       (Parm)
// unsigned char                  OldMoveFlags                   (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       CMDir                          (Parm, ZeroConstructor, IsPlainOldData)

void UGbxCharacterMovementComponent::ControlledServerMoveOld(float OldTimeStamp, const struct FVector_NetQuantize10& OldAccel, unsigned char OldMoveFlags, uint32_t CMDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.ControlledServerMoveOld");

	UGbxCharacterMovementComponent_ControlledServerMoveOld_Params params;
	params.OldTimeStamp = OldTimeStamp;
	params.OldAccel = OldAccel;
	params.OldMoveFlags = OldMoveFlags;
	params.CMDir = CMDir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.ControlledServerMoveDual
// (Final, Net, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// float                          TimeStamp0                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantize10   InAccel0                       (Parm)
// unsigned char                  PendingFlags                   (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       View0                          (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       CMDir0                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Timestamp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantize10   InAccel                        (Parm)
// struct FVector_NetQuantize100  ClientLoc                      (Parm)
// unsigned char                  NewFlags                       (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ClientRoll                     (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       View                           (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     ClientMovementBase             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   ClientBaseBoneName             (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ClientMovementMode             (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       CMDir                          (Parm, ZeroConstructor, IsPlainOldData)
// uint16_t                       ClientBodyYaw                  (Parm, ZeroConstructor, IsPlainOldData)

void UGbxCharacterMovementComponent::ControlledServerMoveDual(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, unsigned char PendingFlags, uint32_t View0, uint32_t CMDir0, float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char ClientMovementMode, uint32_t CMDir, uint16_t ClientBodyYaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.ControlledServerMoveDual");

	UGbxCharacterMovementComponent_ControlledServerMoveDual_Params params;
	params.TimeStamp0 = TimeStamp0;
	params.InAccel0 = InAccel0;
	params.PendingFlags = PendingFlags;
	params.View0 = View0;
	params.CMDir0 = CMDir0;
	params.Timestamp = Timestamp;
	params.InAccel = InAccel;
	params.ClientLoc = ClientLoc;
	params.NewFlags = NewFlags;
	params.ClientRoll = ClientRoll;
	params.View = View;
	params.ClientMovementBase = ClientMovementBase;
	params.ClientBaseBoneName = ClientBaseBoneName;
	params.ClientMovementMode = ClientMovementMode;
	params.CMDir = CMDir;
	params.ClientBodyYaw = ClientBodyYaw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.ControlledServerMove
// (Final, Net, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// float                          Timestamp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantize10   InAccel                        (Parm)
// struct FVector_NetQuantize100  ClientLoc                      (Parm)
// unsigned char                  CompressedMoveFlags            (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ClientRoll                     (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       View                           (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     ClientMovementBase             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   ClientBaseBoneName             (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ClientMovementMode             (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       CMDir                          (Parm, ZeroConstructor, IsPlainOldData)
// uint16_t                       ClientBodyYaw                  (Parm, ZeroConstructor, IsPlainOldData)

void UGbxCharacterMovementComponent::ControlledServerMove(float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char CompressedMoveFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char ClientMovementMode, uint32_t CMDir, uint16_t ClientBodyYaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.ControlledServerMove");

	UGbxCharacterMovementComponent_ControlledServerMove_Params params;
	params.Timestamp = Timestamp;
	params.InAccel = InAccel;
	params.ClientLoc = ClientLoc;
	params.CompressedMoveFlags = CompressedMoveFlags;
	params.ClientRoll = ClientRoll;
	params.View = View;
	params.ClientMovementBase = ClientMovementBase;
	params.ClientBaseBoneName = ClientBaseBoneName;
	params.ClientMovementMode = ClientMovementMode;
	params.CMDir = CMDir;
	params.ClientBodyYaw = ClientBodyYaw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.ClientAdjustControlledMovePosition
// (Final, Net, Native, Event, Private, HasDefaults, NetClient)
// Parameters:
// float                          Timestamp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FControlledMoveNetCorrection ServerCMData                   (Parm)
// struct FVector                 NewLoc                         (Parm, IsPlainOldData)
// struct FVector                 NewVel                         (Parm, IsPlainOldData)
// class UPrimitiveComponent*     NewBase                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   NewBaseBoneName                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHasBase                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBaseRelativePosition          (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  ServerMovementMode             (Parm, ZeroConstructor, IsPlainOldData)

void UGbxCharacterMovementComponent::ClientAdjustControlledMovePosition(float Timestamp, const struct FControlledMoveNetCorrection& ServerCMData, const struct FVector& NewLoc, const struct FVector& NewVel, class UPrimitiveComponent* NewBase, const struct FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.ClientAdjustControlledMovePosition");

	UGbxCharacterMovementComponent_ClientAdjustControlledMovePosition_Params params;
	params.Timestamp = Timestamp;
	params.ServerCMData = ServerCMData;
	params.NewLoc = NewLoc;
	params.NewVel = NewVel;
	params.NewBase = NewBase;
	params.NewBaseBoneName = NewBaseBoneName;
	params.bHasBase = bHasBase;
	params.bBaseRelativePosition = bBaseRelativePosition;
	params.ServerMovementMode = ServerMovementMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.CanStartPassiveMantle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxCharacterMovementComponent::CanStartPassiveMantle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.CanStartPassiveMantle");

	UGbxCharacterMovementComponent_CanStartPassiveMantle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCharacterMovementComponent.CanStartMantle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxCharacterMovementComponent::CanStartMantle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCharacterMovementComponent.CanStartMantle");

	UGbxCharacterMovementComponent_CanStartMantle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCheatManager.TestGameStage
// (Exec, Native, Public)
// Parameters:
// int                            GameStageOverride              (Parm, ZeroConstructor, IsPlainOldData)

void UGbxCheatManager::TestGameStage(int GameStageOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCheatManager.TestGameStage");

	UGbxCheatManager_TestGameStage_Params params;
	params.GameStageOverride = GameStageOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCheatManager.StartPlayerInit
// (Final, Exec, Native, Public)

void UGbxCheatManager::StartPlayerInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCheatManager.StartPlayerInit");

	UGbxCheatManager_StartPlayerInit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCheatManager.ShowProjectileImpacts
// (Final, Exec, Native, Public)
// Parameters:
// float                          Size                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          LifeTime                       (Parm, ZeroConstructor, IsPlainOldData)

void UGbxCheatManager::ShowProjectileImpacts(float Size, float LifeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCheatManager.ShowProjectileImpacts");

	UGbxCheatManager_ShowProjectileImpacts_Params params;
	params.Size = Size;
	params.LifeTime = LifeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCheatManager.SetDebugActorByName
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  ActorName                      (Parm, ZeroConstructor)

void UGbxCheatManager::SetDebugActorByName(const class FString& ActorName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCheatManager.SetDebugActorByName");

	UGbxCheatManager_SetDebugActorByName_Params params;
	params.ActorName = ActorName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCheatManager.SetDebugActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ControllerIndex                (Parm, ZeroConstructor, IsPlainOldData)

void UGbxCheatManager::STATIC_SetDebugActor(class AActor* Actor, int ControllerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCheatManager.SetDebugActor");

	UGbxCheatManager_SetDebugActor_Params params;
	params.Actor = Actor;
	params.ControllerIndex = ControllerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCheatManager.Server_TogglePlayersOnly
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)

void UGbxCheatManager::Server_TogglePlayersOnly()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCheatManager.Server_TogglePlayersOnly");

	UGbxCheatManager_Server_TogglePlayersOnly_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCheatManager.Server_DamageTarget
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// float                          DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)

void UGbxCheatManager::Server_DamageTarget(float DamageAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCheatManager.Server_DamageTarget");

	UGbxCheatManager_Server_DamageTarget_Params params;
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCheatManager.PlayFeedbackRangedFromThere
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  FeedbackData                   (Parm, ZeroConstructor)

void UGbxCheatManager::PlayFeedbackRangedFromThere(const class FString& FeedbackData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCheatManager.PlayFeedbackRangedFromThere");

	UGbxCheatManager_PlayFeedbackRangedFromThere_Params params;
	params.FeedbackData = FeedbackData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCheatManager.PlayFeedbackDirectional
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  FeedbackData                   (Parm, ZeroConstructor)
// float                          DirectionAngle                 (Parm, ZeroConstructor, IsPlainOldData)

void UGbxCheatManager::PlayFeedbackDirectional(const class FString& FeedbackData, float DirectionAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCheatManager.PlayFeedbackDirectional");

	UGbxCheatManager_PlayFeedbackDirectional_Params params;
	params.FeedbackData = FeedbackData;
	params.DirectionAngle = DirectionAngle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCheatManager.PlayFeedback
// (Final, Exec, Native, Public)
// Parameters:
// class FString                  FeedbackData                   (Parm, ZeroConstructor)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void UGbxCheatManager::PlayFeedback(const class FString& FeedbackData, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCheatManager.PlayFeedback");

	UGbxCheatManager_PlayFeedback_Params params;
	params.FeedbackData = FeedbackData;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCheatManager.LogQatalystInfo
// (Final, Exec, Native, Public, Const)

void UGbxCheatManager::LogQatalystInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCheatManager.LogQatalystInfo");

	UGbxCheatManager_LogQatalystInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCheatManager.DebugNextAI
// (Final, Exec, Native, Public)

void UGbxCheatManager::DebugNextAI()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCheatManager.DebugNextAI");

	UGbxCheatManager_DebugNextAI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCheatManager.DamageAreaDebug
// (Final, Exec, Native, Public, Const)

void UGbxCheatManager::DamageAreaDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCheatManager.DamageAreaDebug");

	UGbxCheatManager_DamageAreaDebug_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCheatManager.ClearPlayerInit
// (Final, Exec, Native, Public)

void UGbxCheatManager::ClearPlayerInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCheatManager.ClearPlayerInit");

	UGbxCheatManager_ClearPlayerInit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ControlledMove.OnTeleported
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// float                          MoveDuration                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 PreTeleportLocation            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UControlledMove::OnTeleported(float MoveDuration, const struct FVector& PreTeleportLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ControlledMove.OnTeleported");

	UControlledMove_OnTeleported_Params params;
	params.MoveDuration = MoveDuration;
	params.PreTeleportLocation = PreTeleportLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ControlledMove.OnTargetLocationChanged
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                 NewTargetLocation              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UControlledMove::OnTargetLocationChanged(const struct FVector& NewTargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ControlledMove.OnTargetLocationChanged");

	UControlledMove_OnTargetLocationChanged_Params params;
	params.NewTargetLocation = NewTargetLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ControlledMove.OnStop
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           bInterrupted                   (Parm, ZeroConstructor, IsPlainOldData)

void UControlledMove::OnStop(bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ControlledMove.OnStop");

	UControlledMove_OnStop_Params params;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ControlledMove.OnStart
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float                          MoveDuration                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)

void UControlledMove::OnStart(float MoveDuration, class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ControlledMove.OnStart");

	UControlledMove_OnStart_Params params;
	params.MoveDuration = MoveDuration;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ControlledMove.OnServerStop
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           bInterrupted                   (Parm, ZeroConstructor, IsPlainOldData)

void UControlledMove::OnServerStop(bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ControlledMove.OnServerStop");

	UControlledMove_OnServerStop_Params params;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ControlledMove.OnServerStart
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float                          MoveDuration                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Instigator                     (Parm, ZeroConstructor, IsPlainOldData)

void UControlledMove::OnServerStart(float MoveDuration, class AActor* TargetActor, class AActor* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ControlledMove.OnServerStart");

	UControlledMove_OnServerStart_Params params;
	params.MoveDuration = MoveDuration;
	params.TargetActor = TargetActor;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ControlledMove.OnHitWorld
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// class AActor*                  HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UControlledMove::OnHitWorld(class AActor* HitActor, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ControlledMove.OnHitWorld");

	UControlledMove_OnHitWorld_Params params;
	params.HitActor = HitActor;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ControlledMove.OnHitTargetable
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintEvent)
// Parameters:
// class AActor*                  HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UControlledMove::OnHitTargetable(class AActor* HitActor, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ControlledMove.OnHitTargetable");

	UControlledMove_OnHitTargetable_Params params;
	params.HitActor = HitActor;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCustomizationComponent.ServerApplyCustomizationData
// (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
// Parameters:
// class UGbxCustomizationData*   CustomizationToApply           (Parm, ZeroConstructor, IsPlainOldData)
// int                            OptionalCustomizationId        (Parm, ZeroConstructor, IsPlainOldData)

void UGbxCustomizationComponent::ServerApplyCustomizationData(class UGbxCustomizationData* CustomizationToApply, int OptionalCustomizationId)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCustomizationComponent.ServerApplyCustomizationData");

	UGbxCustomizationComponent_ServerApplyCustomizationData_Params params;
	params.CustomizationToApply = CustomizationToApply;
	params.OptionalCustomizationId = OptionalCustomizationId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCustomizationComponent.ServerApplyCustomColor
// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, BlueprintCallable, NetValidate)
// Parameters:
// int                            CustomColorIndex               (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InAppliedColor                 (Parm, IsPlainOldData)
// struct FVector                 InSplitColor                   (Parm, IsPlainOldData)
// bool                           InUseDefaultColor              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InUseDefaultSplitColor         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxCustomizationComponent::ServerApplyCustomColor(int CustomColorIndex, const struct FVector& InAppliedColor, const struct FVector& InSplitColor, bool InUseDefaultColor, bool InUseDefaultSplitColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCustomizationComponent.ServerApplyCustomColor");

	UGbxCustomizationComponent_ServerApplyCustomColor_Params params;
	params.CustomColorIndex = CustomColorIndex;
	params.InAppliedColor = InAppliedColor;
	params.InSplitColor = InSplitColor;
	params.InUseDefaultColor = InUseDefaultColor;
	params.InUseDefaultSplitColor = InUseDefaultSplitColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCustomizationComponent.RemoveCustomization
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGbxCustomizationData*   Customization                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxCustomizationComponent::RemoveCustomization(class UGbxCustomizationData* Customization)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCustomizationComponent.RemoveCustomization");

	UGbxCustomizationComponent_RemoveCustomization_Params params;
	params.Customization = Customization;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCustomizationComponent.OnRep_CustomColorSelections
// (Final, Native, Public)

void UGbxCustomizationComponent::OnRep_CustomColorSelections()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCustomizationComponent.OnRep_CustomColorSelections");

	UGbxCustomizationComponent_OnRep_CustomColorSelections_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCustomizationComponent.LinkToCustomization
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGbxCustomizationComponent* SourceComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGbxCustomizationComponent::LinkToCustomization(class UGbxCustomizationComponent* SourceComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCustomizationComponent.LinkToCustomization");

	UGbxCustomizationComponent_LinkToCustomization_Params params;
	params.SourceComponent = SourceComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCustomizationComponent.LinkedCustomizationRemoved
// (Final, Native, Public)
// Parameters:
// class UGbxCustomizationData*   Customization                  (Parm, ZeroConstructor, IsPlainOldData)

void UGbxCustomizationComponent::LinkedCustomizationRemoved(class UGbxCustomizationData* Customization)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCustomizationComponent.LinkedCustomizationRemoved");

	UGbxCustomizationComponent_LinkedCustomizationRemoved_Params params;
	params.Customization = Customization;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCustomizationComponent.LinkedCustomizationApplied
// (Final, Native, Public)
// Parameters:
// class UGbxCustomizationData*   Customization                  (Parm, ZeroConstructor, IsPlainOldData)

void UGbxCustomizationComponent::LinkedCustomizationApplied(class UGbxCustomizationData* Customization)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCustomizationComponent.LinkedCustomizationApplied");

	UGbxCustomizationComponent_LinkedCustomizationApplied_Params params;
	params.Customization = Customization;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCustomizationComponent.GetDefaultCustomSplitColor
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            SelectionIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            DefaultSplitColor              (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxCustomizationComponent::GetDefaultCustomSplitColor(int SelectionIndex, struct FLinearColor* DefaultSplitColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCustomizationComponent.GetDefaultCustomSplitColor");

	UGbxCustomizationComponent_GetDefaultCustomSplitColor_Params params;
	params.SelectionIndex = SelectionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DefaultSplitColor != nullptr)
		*DefaultSplitColor = params.DefaultSplitColor;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCustomizationComponent.GetDefaultCustomColor
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// int                            SelectionIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            DefaultColor                   (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxCustomizationComponent::GetDefaultCustomColor(int SelectionIndex, struct FLinearColor* DefaultColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCustomizationComponent.GetDefaultCustomColor");

	UGbxCustomizationComponent_GetDefaultCustomColor_Params params;
	params.SelectionIndex = SelectionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DefaultColor != nullptr)
		*DefaultColor = params.DefaultColor;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCustomizationComponent.CopyFromCustomization
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGbxCustomizationComponent* SourceComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGbxCustomizationComponent::CopyFromCustomization(class UGbxCustomizationComponent* SourceComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCustomizationComponent.CopyFromCustomization");

	UGbxCustomizationComponent_CopyFromCustomization_Params params;
	params.SourceComponent = SourceComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCustomizationManager.OnCustomizationAssetLoaded
// (Final, Native, Public)

void AGbxCustomizationManager::OnCustomizationAssetLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCustomizationManager.OnCustomizationAssetLoaded");

	AGbxCustomizationManager_OnCustomizationAssetLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.DamageCauserComponent.UnregisterConditionalDamageModifier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UConditionalDamageModifier* Modifier                       (Parm, ZeroConstructor, IsPlainOldData)

void UDamageCauserComponent::UnregisterConditionalDamageModifier(class UConditionalDamageModifier* Modifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageCauserComponent.UnregisterConditionalDamageModifier");

	UDamageCauserComponent_UnregisterConditionalDamageModifier_Params params;
	params.Modifier = Modifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.DamageCauserComponent.RegisterConditionalDamageModifier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UConditionalDamageModifier* Modifier                       (Parm, ZeroConstructor, IsPlainOldData)

void UDamageCauserComponent::RegisterConditionalDamageModifier(class UConditionalDamageModifier* Modifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageCauserComponent.RegisterConditionalDamageModifier");

	UDamageCauserComponent_RegisterConditionalDamageModifier_Params params;
	params.Modifier = Modifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.DamageComponent.UnregisterConditionalDamageModifier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UConditionalDamageModifier* Modifier                       (Parm, ZeroConstructor, IsPlainOldData)

void UDamageComponent::UnregisterConditionalDamageModifier(class UConditionalDamageModifier* Modifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageComponent.UnregisterConditionalDamageModifier");

	UDamageComponent_UnregisterConditionalDamageModifier_Params params;
	params.Modifier = Modifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.DamageComponent.SetSelfReflectedDamageType
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UClass*                  DamageType                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UDamageComponent::SetSelfReflectedDamageType(class UClass* DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageComponent.SetSelfReflectedDamageType");

	UDamageComponent_SetSelfReflectedDamageType_Params params;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.DamageComponent.SetGodMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInGodMode                     (Parm, ZeroConstructor, IsPlainOldData)

void UDamageComponent::SetGodMode(bool bInGodMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageComponent.SetGodMode");

	UDamageComponent_SetGodMode_Params params;
	params.bInGodMode = bInGodMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.DamageComponent.SetDemiGodMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInDemiGodMode                 (Parm, ZeroConstructor, IsPlainOldData)

void UDamageComponent::SetDemiGodMode(bool bInDemiGodMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageComponent.SetDemiGodMode");

	UDamageComponent_SetDemiGodMode_Params params;
	params.bInDemiGodMode = bInDemiGodMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.DamageComponent.SetCurrentShield
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewCurrentShield               (Parm, ZeroConstructor, IsPlainOldData)

void UDamageComponent::SetCurrentShield(float NewCurrentShield)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageComponent.SetCurrentShield");

	UDamageComponent_SetCurrentShield_Params params;
	params.NewCurrentShield = NewCurrentShield;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.DamageComponent.SetCurrentHealth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewCurrentHealth               (Parm, ZeroConstructor, IsPlainOldData)

void UDamageComponent::SetCurrentHealth(float NewCurrentHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageComponent.SetCurrentHealth");

	UDamageComponent_SetCurrentHealth_Params params;
	params.NewCurrentHealth = NewCurrentHealth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.DamageComponent.RegisterConditionalDamageModifier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UConditionalDamageModifier* Modifier                       (Parm, ZeroConstructor, IsPlainOldData)

void UDamageComponent::RegisterConditionalDamageModifier(class UConditionalDamageModifier* Modifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageComponent.RegisterConditionalDamageModifier");

	UDamageComponent_RegisterConditionalDamageModifier_Params params;
	params.Modifier = Modifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.DamageComponent.ReceiveHealthDepleted
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class UDamageCauserComponent*  DamageCauser                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDamageComponent::ReceiveHealthDepleted(class UDamageCauserComponent* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageComponent.ReceiveHealthDepleted");

	UDamageComponent_ReceiveHealthDepleted_Params params;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.DamageComponent.ReceiveAnyHealing
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                          Healing                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  HealInstigator                 (Parm, ZeroConstructor, IsPlainOldData)

void UDamageComponent::ReceiveAnyHealing(float Healing, class AActor* HealInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageComponent.ReceiveAnyHealing");

	UDamageComponent_ReceiveAnyHealing_Params params;
	params.Healing = Healing;
	params.HealInstigator = HealInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.DamageComponent.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageCauserComponent*  DamageCauser                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FReceivedDamageDetails  Details                        (ConstParm, Parm, OutParm, ReferenceParm)

void UDamageComponent::ReceiveAnyDamage(float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageComponent.ReceiveAnyDamage");

	UDamageComponent_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.DamageSource = DamageSource;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.DamageComponent.OnRep_HealthInformation
// (Native, Protected)

void UDamageComponent::OnRep_HealthInformation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageComponent.OnRep_HealthInformation");

	UDamageComponent_OnRep_HealthInformation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.DamageComponent.OnRep_DeathHitReaction
// (Native, Protected)

void UDamageComponent::OnRep_DeathHitReaction()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageComponent.OnRep_DeathHitReaction");

	UDamageComponent_OnRep_DeathHitReaction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.DamageComponent.OnRep_bCurrentlyDead
// (Final, Native, Private)

void UDamageComponent::OnRep_bCurrentlyDead()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageComponent.OnRep_bCurrentlyDead");

	UDamageComponent_OnRep_bCurrentlyDead_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.DamageComponent.OnOwnerExperienceLevelChanged
// (Final, Native, Private)
// Parameters:
// int                            OldExperienceLevel             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewExperienceLevel             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDamageComponent::OnOwnerExperienceLevelChanged(int OldExperienceLevel, int NewExperienceLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageComponent.OnOwnerExperienceLevelChanged");

	UDamageComponent_OnOwnerExperienceLevelChanged_Params params;
	params.OldExperienceLevel = OldExperienceLevel;
	params.NewExperienceLevel = NewExperienceLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.DamageComponent.OnHealthResourceNowNotDepleted
// (Final, Native, Private)
// Parameters:
// struct FGameResourcePoolReference ResourcePool                   (Parm)

void UDamageComponent::OnHealthResourceNowNotDepleted(const struct FGameResourcePoolReference& ResourcePool)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageComponent.OnHealthResourceNowNotDepleted");

	UDamageComponent_OnHealthResourceNowNotDepleted_Params params;
	params.ResourcePool = ResourcePool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.DamageComponent.OnHealthResourceNowDepleted
// (Final, Native, Private)
// Parameters:
// struct FGameResourcePoolReference ResourcePool                   (Parm)

void UDamageComponent::OnHealthResourceNowDepleted(const struct FGameResourcePoolReference& ResourcePool)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageComponent.OnHealthResourceNowDepleted");

	UDamageComponent_OnHealthResourceNowDepleted_Params params;
	params.ResourcePool = ResourcePool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.DamageComponent.IsInGodMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDamageComponent::IsInGodMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageComponent.IsInGodMode");

	UDamageComponent_IsInGodMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.DamageComponent.IsInDemiGodMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDamageComponent::IsInDemiGodMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageComponent.IsInDemiGodMode");

	UDamageComponent_IsInDemiGodMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.DamageComponent.IsDamageOverkill
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          OverkillThreshold              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDamageComponent::IsDamageOverkill(float DamageAmount, float OverkillThreshold)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageComponent.IsDamageOverkill");

	UDamageComponent_IsDamageOverkill_Params params;
	params.DamageAmount = DamageAmount;
	params.OverkillThreshold = OverkillThreshold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.DamageComponent.GetValidDamageEventFunctionNames
// (Final, Native, Private, HasOutParms, Const)
// Parameters:
// TArray<struct FName>           Names                          (Parm, OutParm, ZeroConstructor)

void UDamageComponent::GetValidDamageEventFunctionNames(TArray<struct FName>* Names)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageComponent.GetValidDamageEventFunctionNames");

	UDamageComponent_GetValidDamageEventFunctionNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Names != nullptr)
		*Names = params.Names;
}


// Function GbxGameSystemCore.DamageComponent.GetTotalMaxHealth
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDamageComponent::GetTotalMaxHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageComponent.GetTotalMaxHealth");

	UDamageComponent_GetTotalMaxHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.DamageComponent.GetMaxShield
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDamageComponent::GetMaxShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageComponent.GetMaxShield");

	UDamageComponent_GetMaxShield_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.DamageComponent.GetMaxHealth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDamageComponent::GetMaxHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageComponent.GetMaxHealth");

	UDamageComponent_GetMaxHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.DamageComponent.GetCurrentShield
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDamageComponent::GetCurrentShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageComponent.GetCurrentShield");

	UDamageComponent_GetCurrentShield_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.DamageComponent.GetCurrentHealthPercent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDamageComponent::GetCurrentHealthPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageComponent.GetCurrentHealthPercent");

	UDamageComponent_GetCurrentHealthPercent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.DamageComponent.GetCurrentHealth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDamageComponent::GetCurrentHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageComponent.GetCurrentHealth");

	UDamageComponent_GetCurrentHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.DamageComponent.BroadcastPlayImpactSplatterEffect
// (Net, Native, Event, NetMulticast, Protected)
// Parameters:
// class UImpactData*             ImpactData                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantize100  HitLocation                    (Parm)
// struct FVector_NetQuantizeNormal HitDirection                   (Parm)
// float                          DamageSeverity                 (Parm, ZeroConstructor, IsPlainOldData)

void UDamageComponent::BroadcastPlayImpactSplatterEffect(class UImpactData* ImpactData, const struct FVector_NetQuantize100& HitLocation, const struct FVector_NetQuantizeNormal& HitDirection, float DamageSeverity)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageComponent.BroadcastPlayImpactSplatterEffect");

	UDamageComponent_BroadcastPlayImpactSplatterEffect_Params params;
	params.ImpactData = ImpactData;
	params.HitLocation = HitLocation;
	params.HitDirection = HitDirection;
	params.DamageSeverity = DamageSeverity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.DamageModifierComponent.UnregisterConditionalDamageModifier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UConditionalDamageModifier* Modifier                       (Parm, ZeroConstructor, IsPlainOldData)

void UDamageModifierComponent::UnregisterConditionalDamageModifier(class UConditionalDamageModifier* Modifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageModifierComponent.UnregisterConditionalDamageModifier");

	UDamageModifierComponent_UnregisterConditionalDamageModifier_Params params;
	params.Modifier = Modifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.DamageModifierComponent.RegisterConditionalDamageModifier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UConditionalDamageModifier* Modifier                       (Parm, ZeroConstructor, IsPlainOldData)

void UDamageModifierComponent::RegisterConditionalDamageModifier(class UConditionalDamageModifier* Modifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageModifierComponent.RegisterConditionalDamageModifier");

	UDamageModifierComponent_RegisterConditionalDamageModifier_Params params;
	params.Modifier = Modifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.DamageOverTimeManager.OnParticleSystemStopped
// (Final, Native, Public)
// Parameters:
// class UParticleSystemComponent* ParticleSystem                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDamageOverTimeManager::OnParticleSystemStopped(class UParticleSystemComponent* ParticleSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageOverTimeManager.OnParticleSystemStopped");

	UDamageOverTimeManager_OnParticleSystemStopped_Params params;
	params.ParticleSystem = ParticleSystem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxDamageType.IsElementalType
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxDamageType::IsElementalType()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxDamageType.IsElementalType");

	UGbxDamageType_IsElementalType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.FirstPersonComponent.SetBaseEyeToWeaponTransform
// (Final, Native, Private, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              NewWeaponTransform             (Parm, IsPlainOldData)

void UFirstPersonComponent::SetBaseEyeToWeaponTransform(const struct FTransform& NewWeaponTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.FirstPersonComponent.SetBaseEyeToWeaponTransform");

	UFirstPersonComponent_SetBaseEyeToWeaponTransform_Params params;
	params.NewWeaponTransform = NewWeaponTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.FirstPersonComponent.GetFirstPersonComponentByName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USceneComponent* UFirstPersonComponent::GetFirstPersonComponentByName(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.FirstPersonComponent.GetFirstPersonComponentByName");

	UFirstPersonComponent_GetFirstPersonComponentByName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxGameInstance.DebugLoadStartupAssets
// (Final, Exec, Native, Public)

void UGbxGameInstance::DebugLoadStartupAssets()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameInstance.DebugLoadStartupAssets");

	UGbxGameInstance_DebugLoadStartupAssets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.HitRegionComponent.TriggerClientEvent
// (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
// struct FDamageReactionEventSummary EventSummary                   (ConstParm, Parm, ReferenceParm)

void UHitRegionComponent::TriggerClientEvent(const struct FDamageReactionEventSummary& EventSummary)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.HitRegionComponent.TriggerClientEvent");

	UHitRegionComponent_TriggerClientEvent_Params params;
	params.EventSummary = EventSummary;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.HitRegionComponent.GetValidDamageEventFunctionNames
// (Final, Native, Protected, HasOutParms, Const)
// Parameters:
// TArray<struct FName>           Array                          (Parm, OutParm, ZeroConstructor)

void UHitRegionComponent::GetValidDamageEventFunctionNames(TArray<struct FName>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.HitRegionComponent.GetValidDamageEventFunctionNames");

	UHitRegionComponent_GetValidDamageEventFunctionNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function GbxGameSystemCore.HitRegionComponent.GetValidAssociatedComponentNames
// (Final, Native, Protected, HasOutParms, Const)
// Parameters:
// TArray<struct FName>           Array                          (Parm, OutParm, ZeroConstructor)

void UHitRegionComponent::GetValidAssociatedComponentNames(TArray<struct FName>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.HitRegionComponent.GetValidAssociatedComponentNames");

	UHitRegionComponent_GetValidAssociatedComponentNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function GbxGameSystemCore.HitRegionComponent.GetHitRegionPercentHealth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UHitRegionData*          HitRegion                      (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     AssociatedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UHitRegionComponent::GetHitRegionPercentHealth(class UHitRegionData* HitRegion, class UPrimitiveComponent* AssociatedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.HitRegionComponent.GetHitRegionPercentHealth");

	UHitRegionComponent_GetHitRegionPercentHealth_Params params;
	params.HitRegion = HitRegion;
	params.AssociatedComponent = AssociatedComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.HitRegionComponent.GetHitRegionMaxHealth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UHitRegionData*          HitRegion                      (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     AssociatedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UHitRegionComponent::GetHitRegionMaxHealth(class UHitRegionData* HitRegion, class UPrimitiveComponent* AssociatedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.HitRegionComponent.GetHitRegionMaxHealth");

	UHitRegionComponent_GetHitRegionMaxHealth_Params params;
	params.HitRegion = HitRegion;
	params.AssociatedComponent = AssociatedComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.HitRegionComponent.GetHitRegionCurrentHealth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UHitRegionData*          HitRegion                      (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     AssociatedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UHitRegionComponent::GetHitRegionCurrentHealth(class UHitRegionData* HitRegion, class UPrimitiveComponent* AssociatedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.HitRegionComponent.GetHitRegionCurrentHealth");

	UHitRegionComponent_GetHitRegionCurrentHealth_Params params;
	params.HitRegion = HitRegion;
	params.AssociatedComponent = AssociatedComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.ActorPartData.EnumeratePossibleExcluders
// (Final, Native, Private, HasOutParms, Const)
// Parameters:
// TArray<class UActorPartData*>  OutPartList                    (Parm, OutParm, ZeroConstructor)

void UActorPartData::EnumeratePossibleExcluders(TArray<class UActorPartData*>* OutPartList)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ActorPartData.EnumeratePossibleExcluders");

	UActorPartData_EnumeratePossibleExcluders_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPartList != nullptr)
		*OutPartList = params.OutPartList;
}


// Function GbxGameSystemCore.ActorPartData.EnumeratePossibleDependencies
// (Final, Native, Private, HasOutParms, Const)
// Parameters:
// TArray<class UActorPartData*>  OutPartList                    (Parm, OutParm, ZeroConstructor)

void UActorPartData::EnumeratePossibleDependencies(TArray<class UActorPartData*>* OutPartList)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ActorPartData.EnumeratePossibleDependencies");

	UActorPartData_EnumeratePossibleDependencies_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPartList != nullptr)
		*OutPartList = params.OutPartList;
}


// Function GbxGameSystemCore.ActorPartData.EnumerateOtherParts
// (Final, Native, Private, HasOutParms, Const)
// Parameters:
// TArray<class UActorPartData*>  OutPartList                    (Parm, OutParm, ZeroConstructor)

void UActorPartData::EnumerateOtherParts(TArray<class UActorPartData*>* OutPartList)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ActorPartData.EnumerateOtherParts");

	UActorPartData_EnumerateOtherParts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPartList != nullptr)
		*OutPartList = params.OutPartList;
}


// Function GbxGameSystemCore.ActorPartData.EnumerateGestaltMeshPartNames
// (Final, Native, Private, HasOutParms, Const)
// Parameters:
// TArray<struct FName>           OutPartNameList                (Parm, OutParm, ZeroConstructor)

void UActorPartData::EnumerateGestaltMeshPartNames(TArray<struct FName>* OutPartNameList)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ActorPartData.EnumerateGestaltMeshPartNames");

	UActorPartData_EnumerateGestaltMeshPartNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPartNameList != nullptr)
		*OutPartNameList = params.OutPartNameList;
}


// Function GbxGameSystemCore.DataTableAttributeValueResolver.GetDataTableColumnNames
// (Final, Native, Protected, HasOutParms, Const)
// Parameters:
// TArray<class FString>          ValueNames                     (Parm, OutParm, ZeroConstructor)

void UDataTableAttributeValueResolver::GetDataTableColumnNames(TArray<class FString>* ValueNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DataTableAttributeValueResolver.GetDataTableColumnNames");

	UDataTableAttributeValueResolver_GetDataTableColumnNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ValueNames != nullptr)
		*ValueNames = params.ValueNames;
}


// Function GbxGameSystemCore.DataTableFunctionAttributeValueResolver.GetDataTableRow
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FDataTableRowHandle     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDataTableRowHandle UDataTableFunctionAttributeValueResolver::GetDataTableRow(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DataTableFunctionAttributeValueResolver.GetDataTableRow");

	UDataTableFunctionAttributeValueResolver_GetDataTableRow_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxSkeletalMeshComponent.ShowGestaltMeshParts
// (Final, Native, Private, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UGestaltPartData_Mesh*> Parts                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bLocalOnly                     (Parm, ZeroConstructor, IsPlainOldData)

void UGbxSkeletalMeshComponent::ShowGestaltMeshParts(TArray<class UGestaltPartData_Mesh*> Parts, bool bLocalOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxSkeletalMeshComponent.ShowGestaltMeshParts");

	UGbxSkeletalMeshComponent_ShowGestaltMeshParts_Params params;
	params.Parts = Parts;
	params.bLocalOnly = bLocalOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxSkeletalMeshComponent.ShowGestaltMeshPart
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UGestaltPartData_Mesh*   GestaltMeshPart                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLocalOnly                     (Parm, ZeroConstructor, IsPlainOldData)

void UGbxSkeletalMeshComponent::ShowGestaltMeshPart(class UGestaltPartData_Mesh* GestaltMeshPart, bool bLocalOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxSkeletalMeshComponent.ShowGestaltMeshPart");

	UGbxSkeletalMeshComponent_ShowGestaltMeshPart_Params params;
	params.GestaltMeshPart = GestaltMeshPart;
	params.bLocalOnly = bLocalOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxSkeletalMeshComponent.SetUpdateOverrideValues
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<float>                  UpdateRateOverrides            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bEnableOverrideProperties      (Parm, ZeroConstructor, IsPlainOldData)

void UGbxSkeletalMeshComponent::SetUpdateOverrideValues(TArray<float> UpdateRateOverrides, bool bEnableOverrideProperties)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxSkeletalMeshComponent.SetUpdateOverrideValues");

	UGbxSkeletalMeshComponent_SetUpdateOverrideValues_Params params;
	params.UpdateRateOverrides = UpdateRateOverrides;
	params.bEnableOverrideProperties = bEnableOverrideProperties;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxSkeletalMeshComponent.SetParentAnimationComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  ParentComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGbxSkeletalMeshComponent::SetParentAnimationComponent(class USkeletalMeshComponent* ParentComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxSkeletalMeshComponent.SetParentAnimationComponent");

	UGbxSkeletalMeshComponent_SetParentAnimationComponent_Params params;
	params.ParentComponent = ParentComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxSkeletalMeshComponent.SetGestaltPartList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGestaltPartListData*    NewGestaltPartList             (Parm, ZeroConstructor, IsPlainOldData)

void UGbxSkeletalMeshComponent::SetGestaltPartList(class UGestaltPartListData* NewGestaltPartList)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxSkeletalMeshComponent.SetGestaltPartList");

	UGbxSkeletalMeshComponent_SetGestaltPartList_Params params;
	params.NewGestaltPartList = NewGestaltPartList;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxSkeletalMeshComponent.RunPoseTest
// (Final, Native, Private)

void UGbxSkeletalMeshComponent::RunPoseTest()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxSkeletalMeshComponent.RunPoseTest");

	UGbxSkeletalMeshComponent_RunPoseTest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxSkeletalMeshComponent.OnRep_GlobalBoneMod
// (Final, Native, Public)

void UGbxSkeletalMeshComponent::OnRep_GlobalBoneMod()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxSkeletalMeshComponent.OnRep_GlobalBoneMod");

	UGbxSkeletalMeshComponent_OnRep_GlobalBoneMod_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxSkeletalMeshComponent.OnRep_GestaltMeshParts
// (Final, Native, Private)

void UGbxSkeletalMeshComponent::OnRep_GestaltMeshParts()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxSkeletalMeshComponent.OnRep_GestaltMeshParts");

	UGbxSkeletalMeshComponent_OnRep_GestaltMeshParts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxSkeletalMeshComponent.LinkSkelMeshAnimInstances
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class USkeletalMeshComponent*> InLinkedSkelMeshComponents     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UGbxSkeletalMeshComponent::LinkSkelMeshAnimInstances(TArray<class USkeletalMeshComponent*> InLinkedSkelMeshComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxSkeletalMeshComponent.LinkSkelMeshAnimInstances");

	UGbxSkeletalMeshComponent_LinkSkelMeshAnimInstances_Params params;
	params.InLinkedSkelMeshComponents = InLinkedSkelMeshComponents;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxSkeletalMeshComponent.LinkSkelMeshAnimInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  InLinkedSkelMeshComponent      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGbxSkeletalMeshComponent::LinkSkelMeshAnimInstance(class USkeletalMeshComponent* InLinkedSkelMeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxSkeletalMeshComponent.LinkSkelMeshAnimInstance");

	UGbxSkeletalMeshComponent_LinkSkelMeshAnimInstance_Params params;
	params.InLinkedSkelMeshComponent = InLinkedSkelMeshComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxSkeletalMeshComponent.IsGestaltMeshPartVisible
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGestaltPartData_Mesh*   GestaltMeshPart                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxSkeletalMeshComponent::IsGestaltMeshPartVisible(class UGestaltPartData_Mesh* GestaltMeshPart)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxSkeletalMeshComponent.IsGestaltMeshPartVisible");

	UGbxSkeletalMeshComponent_IsGestaltMeshPartVisible_Params params;
	params.GestaltMeshPart = GestaltMeshPart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxSkeletalMeshComponent.IsCustomizationTargetFor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGbxCustomizationTargetData* TargetToTest                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxSkeletalMeshComponent::IsCustomizationTargetFor(class UGbxCustomizationTargetData* TargetToTest)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxSkeletalMeshComponent.IsCustomizationTargetFor");

	UGbxSkeletalMeshComponent_IsCustomizationTargetFor_Params params;
	params.TargetToTest = TargetToTest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxSkeletalMeshComponent.HideGestaltMeshParts
// (Final, Native, Private, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UGestaltPartData_Mesh*> Parts                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bLocalOnly                     (Parm, ZeroConstructor, IsPlainOldData)

void UGbxSkeletalMeshComponent::HideGestaltMeshParts(TArray<class UGestaltPartData_Mesh*> Parts, bool bLocalOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxSkeletalMeshComponent.HideGestaltMeshParts");

	UGbxSkeletalMeshComponent_HideGestaltMeshParts_Params params;
	params.Parts = Parts;
	params.bLocalOnly = bLocalOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxSkeletalMeshComponent.HideGestaltMeshPart
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UGestaltPartData_Mesh*   GestaltMeshPart                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLocalOnly                     (Parm, ZeroConstructor, IsPlainOldData)

void UGbxSkeletalMeshComponent::HideGestaltMeshPart(class UGestaltPartData_Mesh* GestaltMeshPart, bool bLocalOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxSkeletalMeshComponent.HideGestaltMeshPart");

	UGbxSkeletalMeshComponent_HideGestaltMeshPart_Params params;
	params.GestaltMeshPart = GestaltMeshPart;
	params.bLocalOnly = bLocalOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxSkeletalMeshComponent.GetUpdateOverrideValues
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<float>                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<float> UGbxSkeletalMeshComponent::GetUpdateOverrideValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxSkeletalMeshComponent.GetUpdateOverrideValues");

	UGbxSkeletalMeshComponent_GetUpdateOverrideValues_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxSkeletalMeshComponent.GetAvailableBoneNames
// (Final, Native, Private, HasOutParms, Const)
// Parameters:
// TArray<struct FName>           Array                          (Parm, OutParm, ZeroConstructor)

void UGbxSkeletalMeshComponent::GetAvailableBoneNames(TArray<struct FName>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxSkeletalMeshComponent.GetAvailableBoneNames");

	UGbxSkeletalMeshComponent_GetAvailableBoneNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function GbxGameSystemCore.GbxSkeletalMeshComponent.CopyGestaltPartList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  GestaltPartListSource          (Parm, ZeroConstructor, IsPlainOldData)

void UGbxSkeletalMeshComponent::CopyGestaltPartList(class AActor* GestaltPartListSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxSkeletalMeshComponent.CopyGestaltPartList");

	UGbxSkeletalMeshComponent_CopyGestaltPartList_Params params;
	params.GestaltPartListSource = GestaltPartListSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.PawnAttachSlotComponent.SetPersistentAttachSocketName
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   SocketName                     (Parm, ZeroConstructor, IsPlainOldData)

void UPawnAttachSlotComponent::SetPersistentAttachSocketName(const struct FName& SocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.PawnAttachSlotComponent.SetPersistentAttachSocketName");

	UPawnAttachSlotComponent_SetPersistentAttachSocketName_Params params;
	params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.PawnAttachSlotComponent.SetDetachabilityLocked
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bLock                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UPawnAttachSlotComponent::SetDetachabilityLocked(bool bLock, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.PawnAttachSlotComponent.SetDetachabilityLocked");

	UPawnAttachSlotComponent_SetDetachabilityLocked_Params params;
	params.bLock = bLock;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.PawnAttachSlotComponent.RequestDetachPawn
// (Final, Native, Public, BlueprintCallable)

void UPawnAttachSlotComponent::RequestDetachPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.PawnAttachSlotComponent.RequestDetachPawn");

	UPawnAttachSlotComponent_RequestDetachPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.PawnAttachSlotComponent.OnRep_AttachState
// (Final, Native, Private)

void UPawnAttachSlotComponent::OnRep_AttachState()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.PawnAttachSlotComponent.OnRep_AttachState");

	UPawnAttachSlotComponent_OnRep_AttachState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.PawnAttachSlotComponent.ManuallyFinishAttach
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void UPawnAttachSlotComponent::ManuallyFinishAttach()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.PawnAttachSlotComponent.ManuallyFinishAttach");

	UPawnAttachSlotComponent_ManuallyFinishAttach_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.PawnAttachSlotComponent.IsOccupied
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bIncludeDetaching              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPawnAttachSlotComponent::IsOccupied(bool bIncludeDetaching)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.PawnAttachSlotComponent.IsOccupied");

	UPawnAttachSlotComponent_IsOccupied_Params params;
	params.bIncludeDetaching = bIncludeDetaching;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.PawnAttachSlotComponent.HandleActorDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UPawnAttachSlotComponent::HandleActorDestroyed(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.PawnAttachSlotComponent.HandleActorDestroyed");

	UPawnAttachSlotComponent_HandleActorDestroyed_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.PawnAttachSlotComponent.GetPersistentAttachSocketTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UPawnAttachSlotComponent::GetPersistentAttachSocketTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.PawnAttachSlotComponent.GetPersistentAttachSocketTransform");

	UPawnAttachSlotComponent_GetPersistentAttachSocketTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.PawnAttachSlotComponent.GetOccupant
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bIncludeDetaching              (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APawn* UPawnAttachSlotComponent::GetOccupant(bool bIncludeDetaching)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.PawnAttachSlotComponent.GetOccupant");

	UPawnAttachSlotComponent_GetOccupant_Params params;
	params.bIncludeDetaching = bIncludeDetaching;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.PawnAttachSlotComponent.GetAttachStatus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EPawnAttachStatus              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EPawnAttachStatus UPawnAttachSlotComponent::GetAttachStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.PawnAttachSlotComponent.GetAttachStatus");

	UPawnAttachSlotComponent_GetAttachStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.PawnAttachSlotComponent.DetachPawn
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInstant                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSkipPlacement                 (Parm, ZeroConstructor, IsPlainOldData)

void UPawnAttachSlotComponent::DetachPawn(bool bInstant, bool bSkipPlacement)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.PawnAttachSlotComponent.DetachPawn");

	UPawnAttachSlotComponent_DetachPawn_Params params;
	params.bInstant = bInstant;
	params.bSkipPlacement = bSkipPlacement;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.PawnAttachSlotComponent.AttachPawn
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class APawn*                   AttachingPawn                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInstant                       (Parm, ZeroConstructor, IsPlainOldData)

void UPawnAttachSlotComponent::AttachPawn(class APawn* AttachingPawn, bool bInstant)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.PawnAttachSlotComponent.AttachPawn");

	UPawnAttachSlotComponent_AttachPawn_Params params;
	params.AttachingPawn = AttachingPawn;
	params.bInstant = bInstant;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.RadiusDamageReplicationManager.Multicast_StopRadiusEffect
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// class AActor*                  ContextActor                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageData                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bStopAllForContext             (Parm, ZeroConstructor, IsPlainOldData)

void ARadiusDamageReplicationManager::Multicast_StopRadiusEffect(class AActor* ContextActor, class UClass* DamageData, bool bStopAllForContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.RadiusDamageReplicationManager.Multicast_StopRadiusEffect");

	ARadiusDamageReplicationManager_Multicast_StopRadiusEffect_Params params;
	params.ContextActor = ContextActor;
	params.DamageData = DamageData;
	params.bStopAllForContext = bStopAllForContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.RadiusDamageReplicationManager.Multicast_ProcessRadiusRequest
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// class AActor*                  ContextActor                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageData                     (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantize     Location                       (Parm)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UExplosionData*          ExplosionData                  (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         DefaultParticles               (Parm, ZeroConstructor, IsPlainOldData)
// class UWwiseEvent*             DefaultAudioEvent              (Parm, ZeroConstructor, IsPlainOldData)
// class UImpactData*             DefaultImpactData              (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxSignificanceEvent   SignificanceEvent              (Parm)
// float                          Force                          (Parm, ZeroConstructor, IsPlainOldData)

void ARadiusDamageReplicationManager::Multicast_ProcessRadiusRequest(class AActor* ContextActor, class UClass* DamageData, class UClass* DamageType, float Radius, const struct FVector_NetQuantize& Location, float Damage, class UExplosionData* ExplosionData, class UParticleSystem* DefaultParticles, class UWwiseEvent* DefaultAudioEvent, class UImpactData* DefaultImpactData, const struct FGbxSignificanceEvent& SignificanceEvent, float Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.RadiusDamageReplicationManager.Multicast_ProcessRadiusRequest");

	ARadiusDamageReplicationManager_Multicast_ProcessRadiusRequest_Params params;
	params.ContextActor = ContextActor;
	params.DamageData = DamageData;
	params.DamageType = DamageType;
	params.Radius = Radius;
	params.Location = Location;
	params.Damage = Damage;
	params.ExplosionData = ExplosionData;
	params.DefaultParticles = DefaultParticles;
	params.DefaultAudioEvent = DefaultAudioEvent;
	params.DefaultImpactData = DefaultImpactData;
	params.SignificanceEvent = SignificanceEvent;
	params.Force = Force;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.StatusEffectManagerComponent.RemoveStatusEffectInstance
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FStatusEffectInstanceReference Reference                      (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStatusEffectManagerComponent::RemoveStatusEffectInstance(struct FStatusEffectInstanceReference* Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.StatusEffectManagerComponent.RemoveStatusEffectInstance");

	UStatusEffectManagerComponent_RemoveStatusEffectInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Reference != nullptr)
		*Reference = params.Reference;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.StatusEffectManagerComponent.RemoveStatusEffect
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FStatusEffectRemoveSpec Spec                           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStatusEffectManagerComponent::RemoveStatusEffect(const struct FStatusEffectRemoveSpec& Spec)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.StatusEffectManagerComponent.RemoveStatusEffect");

	UStatusEffectManagerComponent_RemoveStatusEffect_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.StatusEffectManagerComponent.QueryStatusEffect
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FStatusEffectQuery      Query                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FStatusEffectQueryResult ReturnValue                    (Parm, OutParm, ReturnParm)

struct FStatusEffectQueryResult UStatusEffectManagerComponent::QueryStatusEffect(const struct FStatusEffectQuery& Query)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.StatusEffectManagerComponent.QueryStatusEffect");

	UStatusEffectManagerComponent_QueryStatusEffect_Params params;
	params.Query = Query;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.StatusEffectManagerComponent.AddStatusEffect
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FStatusEffectSpec       Spec                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FStatusEffectInstanceReference ReturnValue                    (Parm, OutParm, ReturnParm)

struct FStatusEffectInstanceReference UStatusEffectManagerComponent::AddStatusEffect(const struct FStatusEffectSpec& Spec)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.StatusEffectManagerComponent.AddStatusEffect");

	UStatusEffectManagerComponent_AddStatusEffect_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.StatusEffectsStatics.RemoveStatusEffectInstance
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FStatusEffectInstanceReference Reference                      (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStatusEffectsStatics::STATIC_RemoveStatusEffectInstance(class AActor* Target, struct FStatusEffectInstanceReference* Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.StatusEffectsStatics.RemoveStatusEffectInstance");

	UStatusEffectsStatics_RemoveStatusEffectInstance_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Reference != nullptr)
		*Reference = params.Reference;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.StatusEffectsStatics.RemoveStatusEffect
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FStatusEffectRemoveSpec RemoveSpec                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStatusEffectsStatics::STATIC_RemoveStatusEffect(class AActor* Target, const struct FStatusEffectRemoveSpec& RemoveSpec)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.StatusEffectsStatics.RemoveStatusEffect");

	UStatusEffectsStatics_RemoveStatusEffect_Params params;
	params.Target = Target;
	params.RemoveSpec = RemoveSpec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.StatusEffectsStatics.QueryStatusEffect
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FStatusEffectQuery      Query                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FStatusEffectQueryResult ReturnValue                    (Parm, OutParm, ReturnParm)

struct FStatusEffectQueryResult UStatusEffectsStatics::STATIC_QueryStatusEffect(class AActor* Target, const struct FStatusEffectQuery& Query)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.StatusEffectsStatics.QueryStatusEffect");

	UStatusEffectsStatics_QueryStatusEffect_Params params;
	params.Target = Target;
	params.Query = Query;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.StatusEffectsStatics.AddStatusEffect
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FStatusEffectSpec       Spec                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FStatusEffectInstanceReference ReturnValue                    (Parm, OutParm, ReturnParm)

struct FStatusEffectInstanceReference UStatusEffectsStatics::STATIC_AddStatusEffect(class AActor* Target, const struct FStatusEffectSpec& Spec)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.StatusEffectsStatics.AddStatusEffect");

	UStatusEffectsStatics_AddStatusEffect_Params params;
	params.Target = Target;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.UseComponent.StopUsingCurrentObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EUsabilityType                 UseType                        (Parm, ZeroConstructor, IsPlainOldData)

void UUseComponent::StopUsingCurrentObject(EUsabilityType UseType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.UseComponent.StopUsingCurrentObject");

	UUseComponent_StopUsingCurrentObject_Params params;
	params.UseType = UseType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.UseComponent.StartUsingCurrentObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EUsabilityType                 UseType                        (Parm, ZeroConstructor, IsPlainOldData)

void UUseComponent::StartUsingCurrentObject(EUsabilityType UseType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.UseComponent.StartUsingCurrentObject");

	UUseComponent_StartUsingCurrentObject_Params params;
	params.UseType = UseType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.UseComponent.ServerUseObject
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// class UUsableComponent*        UsableObject                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EUsabilityType                 UseType                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHeld                          (Parm, ZeroConstructor, IsPlainOldData)

void UUseComponent::ServerUseObject(class UUsableComponent* UsableObject, EUsabilityType UseType, bool bHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.UseComponent.ServerUseObject");

	UUseComponent_ServerUseObject_Params params;
	params.UsableObject = UsableObject;
	params.UseType = UseType;
	params.bHeld = bHeld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.UseComponent.ServerStopUsingObject
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// class UUsableComponent*        UsableObject                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EUsabilityType                 UseType                        (Parm, ZeroConstructor, IsPlainOldData)

void UUseComponent::ServerStopUsingObject(class UUsableComponent* UsableObject, EUsabilityType UseType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.UseComponent.ServerStopUsingObject");

	UUseComponent_ServerStopUsingObject_Params params;
	params.UsableObject = UsableObject;
	params.UseType = UseType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.UseComponent.ServerStartUsingObject
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// class UUsableComponent*        UsableObject                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EUsabilityType                 UseType                        (Parm, ZeroConstructor, IsPlainOldData)

void UUseComponent::ServerStartUsingObject(class UUsableComponent* UsableObject, EUsabilityType UseType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.UseComponent.ServerStartUsingObject");

	UUseComponent_ServerStartUsingObject_Params params;
	params.UsableObject = UsableObject;
	params.UseType = UseType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction GbxGameSystemCore.UseComponent.OnUsableChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms, HasDefaults)
// Parameters:
// class UUsableComponent*        NewUsableComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FUsabilityInfo          InUsabilityInfo                (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 NewUsableComponentImpactPoint  (Parm, IsPlainOldData)
// float                          NewUsableComponentDistanceAway (Parm, ZeroConstructor, IsPlainOldData)

void UUseComponent::OnUsableChanged__DelegateSignature(class UUsableComponent* NewUsableComponent, const struct FUsabilityInfo& InUsabilityInfo, const struct FVector& NewUsableComponentImpactPoint, float NewUsableComponentDistanceAway)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GbxGameSystemCore.UseComponent.OnUsableChanged__DelegateSignature");

	UUseComponent_OnUsableChanged__DelegateSignature_Params params;
	params.NewUsableComponent = NewUsableComponent;
	params.InUsabilityInfo = InUsabilityInfo;
	params.NewUsableComponentImpactPoint = NewUsableComponentImpactPoint;
	params.NewUsableComponentDistanceAway = NewUsableComponentDistanceAway;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction GbxGameSystemCore.UseComponent.OnUsabilityChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// class UUsableComponent*        NewUsableComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FUsabilityInfo          InUsabilityInfo                (ConstParm, Parm, OutParm, ReferenceParm)

void UUseComponent::OnUsabilityChanged__DelegateSignature(class UUsableComponent* NewUsableComponent, const struct FUsabilityInfo& InUsabilityInfo)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GbxGameSystemCore.UseComponent.OnUsabilityChanged__DelegateSignature");

	UUseComponent_OnUsabilityChanged__DelegateSignature_Params params;
	params.NewUsableComponent = NewUsableComponent;
	params.InUsabilityInfo = InUsabilityInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction GbxGameSystemCore.UseComponent.OnUnableToAffordUsableObject__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UUsableComponent*        Usable                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EUsabilityType                 UseType                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseHeld                       (Parm, ZeroConstructor, IsPlainOldData)

void UUseComponent::OnUnableToAffordUsableObject__DelegateSignature(class UUsableComponent* Usable, EUsabilityType UseType, bool bUseHeld)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GbxGameSystemCore.UseComponent.OnUnableToAffordUsableObject__DelegateSignature");

	UUseComponent_OnUnableToAffordUsableObject__DelegateSignature_Params params;
	params.Usable = Usable;
	params.UseType = UseType;
	params.bUseHeld = bUseHeld;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction GbxGameSystemCore.UseComponent.OnImpactDataChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasDefaults)
// Parameters:
// class UUsableComponent*        NewUsableComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NewUsableComponentImpactPoint  (Parm, IsPlainOldData)
// float                          NewUsableComponentDistanceAway (Parm, ZeroConstructor, IsPlainOldData)

void UUseComponent::OnImpactDataChanged__DelegateSignature(class UUsableComponent* NewUsableComponent, const struct FVector& NewUsableComponentImpactPoint, float NewUsableComponentDistanceAway)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GbxGameSystemCore.UseComponent.OnImpactDataChanged__DelegateSignature");

	UUseComponent_OnImpactDataChanged__DelegateSignature_Params params;
	params.NewUsableComponent = NewUsableComponent;
	params.NewUsableComponentImpactPoint = NewUsableComponentImpactPoint;
	params.NewUsableComponentDistanceAway = NewUsableComponentDistanceAway;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction GbxGameSystemCore.UseComponent.OnHoldUseStopped__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UUseComponent::OnHoldUseStopped__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GbxGameSystemCore.UseComponent.OnHoldUseStopped__DelegateSignature");

	UUseComponent_OnHoldUseStopped__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.UseComponent.GetCurrentUsable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUsableComponent*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUsableComponent* UUseComponent::GetCurrentUsable()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.UseComponent.GetCurrentUsable");

	UUseComponent_GetCurrentUsable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.UseComponent.ForceUsingObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUsableComponent*        UsableObject                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUseComponent::ForceUsingObject(class UUsableComponent* UsableObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.UseComponent.ForceUsingObject");

	UUseComponent_ForceUsingObject_Params params;
	params.UsableObject = UsableObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.UseComponent.ClientNotifyAttemptedUseCouldNotAfford
// (Final, Net, Native, Event, Private, NetClient)
// Parameters:
// class UUsableComponent*        Usable                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EUsabilityType                 UseType                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseHeld                       (Parm, ZeroConstructor, IsPlainOldData)

void UUseComponent::ClientNotifyAttemptedUseCouldNotAfford(class UUsableComponent* Usable, EUsabilityType UseType, bool bUseHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.UseComponent.ClientNotifyAttemptedUseCouldNotAfford");

	UUseComponent_ClientNotifyAttemptedUseCouldNotAfford_Params params;
	params.Usable = Usable;
	params.UseType = UseType;
	params.bUseHeld = bUseHeld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.UseComponent.CanUseCurrentUsable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EUsabilityType                 Type                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUseComponent::CanUseCurrentUsable(EUsabilityType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.UseComponent.CanUseCurrentUsable");

	UUseComponent_CanUseCurrentUsable_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.UseComponent.CanInteractWithCurrentUsable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EUsabilityType                 Type                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUseComponent::CanInteractWithCurrentUsable(EUsabilityType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.UseComponent.CanInteractWithCurrentUsable");

	UUseComponent_CanInteractWithCurrentUsable_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.ActorPartSetData.EnumeratePartListForPartType
// (Native, Protected, HasOutParms, Const)
// Parameters:
// unsigned char                  PartType                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UActorPartData*>  OutPartList                    (Parm, OutParm, ZeroConstructor)

void UActorPartSetData::EnumeratePartListForPartType(unsigned char PartType, TArray<class UActorPartData*>* OutPartList)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ActorPartSetData.EnumeratePartListForPartType");

	UActorPartSetData_EnumeratePartListForPartType_Params params;
	params.PartType = PartType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPartList != nullptr)
		*OutPartList = params.OutPartList;
}


// Function GbxGameSystemCore.AIDodgeComponent.TriggerZoneDodge
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ZoneLoc                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ZoneVel                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AActor*                  ActorRef                       (Parm, ZeroConstructor, IsPlainOldData)

void UAIDodgeComponent::STATIC_TriggerZoneDodge(class UObject* WorldContextObject, class AActor* TargetActor, const struct FVector& ZoneLoc, const struct FVector& ZoneVel, class AActor* ActorRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.AIDodgeComponent.TriggerZoneDodge");

	UAIDodgeComponent_TriggerZoneDodge_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TargetActor = TargetActor;
	params.ZoneLoc = ZoneLoc;
	params.ZoneVel = ZoneVel;
	params.ActorRef = ActorRef;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.AIDodgeComponent.TriggerGrenadeDodge
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 GrenadeLoc                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AActor*                  Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ExtraDelay                     (Parm, ZeroConstructor, IsPlainOldData)

void UAIDodgeComponent::STATIC_TriggerGrenadeDodge(class UObject* WorldContextObject, const struct FVector& GrenadeLoc, class AActor* Instigator, float ExtraDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.AIDodgeComponent.TriggerGrenadeDodge");

	UAIDodgeComponent_TriggerGrenadeDodge_Params params;
	params.WorldContextObject = WorldContextObject;
	params.GrenadeLoc = GrenadeLoc;
	params.Instigator = Instigator;
	params.ExtraDelay = ExtraDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.AIDodgeComponent.TriggerDodge
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// EAIDodgeType                   Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SourceLoc                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AActor*                  SourceActor                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ExtraDelay                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForced                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIDodgeComponent::TriggerDodge(EAIDodgeType Type, const struct FVector& SourceLoc, class AActor* SourceActor, float ExtraDelay, bool bForced)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.AIDodgeComponent.TriggerDodge");

	UAIDodgeComponent_TriggerDodge_Params params;
	params.Type = Type;
	params.SourceLoc = SourceLoc;
	params.SourceActor = SourceActor;
	params.ExtraDelay = ExtraDelay;
	params.bForced = bForced;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.AIDodgeComponent.TriggerBulletDodge
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 MuzzleLoc                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 BulletVel                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AActor*                  Instigator                     (Parm, ZeroConstructor, IsPlainOldData)

void UAIDodgeComponent::STATIC_TriggerBulletDodge(class UObject* WorldContextObject, const struct FVector& MuzzleLoc, const struct FVector& BulletVel, class AActor* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.AIDodgeComponent.TriggerBulletDodge");

	UAIDodgeComponent_TriggerBulletDodge_Params params;
	params.WorldContextObject = WorldContextObject;
	params.MuzzleLoc = MuzzleLoc;
	params.BulletVel = BulletVel;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.AISense_Bullet.ReportBulletEvent
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 StartLoc                       (Parm, IsPlainOldData)
// struct FVector                 EndLoc                         (Parm, IsPlainOldData)
// bool                           bFirstEvent                    (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          Strength                       (Parm, ZeroConstructor, IsPlainOldData)

void UAISense_Bullet::STATIC_ReportBulletEvent(class UObject* WorldContext, const struct FVector& StartLoc, const struct FVector& EndLoc, bool bFirstEvent, class AActor* Instigator, float Strength)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.AISense_Bullet.ReportBulletEvent");

	UAISense_Bullet_ReportBulletEvent_Params params;
	params.WorldContext = WorldContext;
	params.StartLoc = StartLoc;
	params.EndLoc = EndLoc;
	params.bFirstEvent = bFirstEvent;
	params.Instigator = Instigator;
	params.Strength = Strength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.AISense_GbxSight.ForceSightEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContext                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  SeenActor                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  LookingActor                   (Parm, ZeroConstructor, IsPlainOldData)

void UAISense_GbxSight::STATIC_ForceSightEvent(class UObject* WorldContext, class AActor* SeenActor, class AActor* LookingActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.AISense_GbxSight.ForceSightEvent");

	UAISense_GbxSight_ForceSightEvent_Params params;
	params.WorldContext = WorldContext;
	params.SeenActor = SeenActor;
	params.LookingActor = LookingActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.AttributeInitializer.EvaluateBalanceFormula
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          Multiplier                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          Level                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Power                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Offset                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAttributeInitializer::STATIC_EvaluateBalanceFormula(float Multiplier, float Level, float Power, float Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.AttributeInitializer.EvaluateBalanceFormula");

	UAttributeInitializer_EvaluateBalanceFormula_Params params;
	params.Multiplier = Multiplier;
	params.Level = Level;
	params.Power = Power;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.AttributeInitializer.CalculateAttributeInitialValue
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class UObject*                 Context                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAttributeInitializer::CalculateAttributeInitialValue(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.AttributeInitializer.CalculateAttributeInitialValue");

	UAttributeInitializer_CalculateAttributeInitialValue_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneTranslation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   BoneName                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Translation                    (ConstParm, Parm, IsPlainOldData)
// class UObject*                 Target                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          InBlendTime                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EAlphaBlendOption              InBlendOption                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCurveFloat*             InCustomBlendCurve             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBoneModBlueprintLibrary::STATIC_SetBoneTranslation(const struct FName& BoneName, const struct FVector& Translation, class UObject* Target, float InBlendTime, EAlphaBlendOption InBlendOption, class UCurveFloat* InCustomBlendCurve)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneTranslation");

	UBoneModBlueprintLibrary_SetBoneTranslation_Params params;
	params.BoneName = BoneName;
	params.Translation = Translation;
	params.Target = Target;
	params.InBlendTime = InBlendTime;
	params.InBlendOption = InBlendOption;
	params.InCustomBlendCurve = InCustomBlendCurve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneScale3D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   BoneName                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Scale3D                        (ConstParm, Parm, IsPlainOldData)
// class UObject*                 Target                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          InBlendTime                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EAlphaBlendOption              InBlendOption                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCurveFloat*             InCustomBlendCurve             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBoneModBlueprintLibrary::STATIC_SetBoneScale3D(const struct FName& BoneName, const struct FVector& Scale3D, class UObject* Target, float InBlendTime, EAlphaBlendOption InBlendOption, class UCurveFloat* InCustomBlendCurve)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneScale3D");

	UBoneModBlueprintLibrary_SetBoneScale3D_Params params;
	params.BoneName = BoneName;
	params.Scale3D = Scale3D;
	params.Target = Target;
	params.InBlendTime = InBlendTime;
	params.InBlendOption = InBlendOption;
	params.InCustomBlendCurve = InCustomBlendCurve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneScale
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   BoneName                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Target                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          InBlendTime                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EAlphaBlendOption              InBlendOption                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCurveFloat*             InCustomBlendCurve             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBoneModBlueprintLibrary::STATIC_SetBoneScale(const struct FName& BoneName, float Scale, class UObject* Target, float InBlendTime, EAlphaBlendOption InBlendOption, class UCurveFloat* InCustomBlendCurve)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneScale");

	UBoneModBlueprintLibrary_SetBoneScale_Params params;
	params.BoneName = BoneName;
	params.Scale = Scale;
	params.Target = Target;
	params.InBlendTime = InBlendTime;
	params.InBlendOption = InBlendOption;
	params.InCustomBlendCurve = InCustomBlendCurve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneRotation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   BoneName                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (ConstParm, Parm, IsPlainOldData)
// class UObject*                 Target                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          InBlendTime                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EAlphaBlendOption              InBlendOption                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCurveFloat*             InCustomBlendCurve             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBoneModBlueprintLibrary::STATIC_SetBoneRotation(const struct FName& BoneName, const struct FRotator& Rotation, class UObject* Target, float InBlendTime, EAlphaBlendOption InBlendOption, class UCurveFloat* InCustomBlendCurve)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneRotation");

	UBoneModBlueprintLibrary_SetBoneRotation_Params params;
	params.BoneName = BoneName;
	params.Rotation = Rotation;
	params.Target = Target;
	params.InBlendTime = InBlendTime;
	params.InBlendOption = InBlendOption;
	params.InCustomBlendCurve = InCustomBlendCurve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModUseTranslation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   BoneModName                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseTranslation                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Target                         (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModBlueprintLibrary::STATIC_SetBoneModUseTranslation(const struct FName& BoneModName, bool bUseTranslation, class UObject* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModUseTranslation");

	UBoneModBlueprintLibrary_SetBoneModUseTranslation_Params params;
	params.BoneModName = BoneModName;
	params.bUseTranslation = bUseTranslation;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModUseScale
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   BoneModName                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseScale                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Target                         (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModBlueprintLibrary::STATIC_SetBoneModUseScale(const struct FName& BoneModName, bool bUseScale, class UObject* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModUseScale");

	UBoneModBlueprintLibrary_SetBoneModUseScale_Params params;
	params.BoneModName = BoneModName;
	params.bUseScale = bUseScale;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModUseRotation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   BoneModName                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseRotation                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Target                         (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModBlueprintLibrary::STATIC_SetBoneModUseRotation(const struct FName& BoneModName, bool bUseRotation, class UObject* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModUseRotation");

	UBoneModBlueprintLibrary_SetBoneModUseRotation_Params params;
	params.BoneModName = BoneModName;
	params.bUseRotation = bUseRotation;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModTranslationSpace
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   BoneModName                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBoneControlSpace> TranslationSpace               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Target                         (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModBlueprintLibrary::STATIC_SetBoneModTranslationSpace(const struct FName& BoneModName, TEnumAsByte<EBoneControlSpace> TranslationSpace, class UObject* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModTranslationSpace");

	UBoneModBlueprintLibrary_SetBoneModTranslationSpace_Params params;
	params.BoneModName = BoneModName;
	params.TranslationSpace = TranslationSpace;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModTranslation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   BoneModName                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Translation                    (ConstParm, Parm, IsPlainOldData)
// class UObject*                 Target                         (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModBlueprintLibrary::STATIC_SetBoneModTranslation(const struct FName& BoneModName, const struct FVector& Translation, class UObject* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModTranslation");

	UBoneModBlueprintLibrary_SetBoneModTranslation_Params params;
	params.BoneModName = BoneModName;
	params.Translation = Translation;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   BoneModName                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Transform                      (ConstParm, Parm, IsPlainOldData)
// class UObject*                 Target                         (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModBlueprintLibrary::STATIC_SetBoneModTransform(const struct FName& BoneModName, const struct FTransform& Transform, class UObject* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModTransform");

	UBoneModBlueprintLibrary_SetBoneModTransform_Params params;
	params.BoneModName = BoneModName;
	params.Transform = Transform;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModScale3D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   BoneModName                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Scale                          (ConstParm, Parm, IsPlainOldData)
// class UObject*                 Target                         (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModBlueprintLibrary::STATIC_SetBoneModScale3D(const struct FName& BoneModName, const struct FVector& Scale, class UObject* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModScale3D");

	UBoneModBlueprintLibrary_SetBoneModScale3D_Params params;
	params.BoneModName = BoneModName;
	params.Scale = Scale;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModScale
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   BoneModName                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Target                         (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModBlueprintLibrary::STATIC_SetBoneModScale(const struct FName& BoneModName, float Scale, class UObject* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModScale");

	UBoneModBlueprintLibrary_SetBoneModScale_Params params;
	params.BoneModName = BoneModName;
	params.Scale = Scale;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModRotationSpace
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   BoneModName                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBoneControlSpace> RotationSpace                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Target                         (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModBlueprintLibrary::STATIC_SetBoneModRotationSpace(const struct FName& BoneModName, TEnumAsByte<EBoneControlSpace> RotationSpace, class UObject* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModRotationSpace");

	UBoneModBlueprintLibrary_SetBoneModRotationSpace_Params params;
	params.BoneModName = BoneModName;
	params.RotationSpace = RotationSpace;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModRotation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   BoneModName                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (ConstParm, Parm, IsPlainOldData)
// class UObject*                 Target                         (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModBlueprintLibrary::STATIC_SetBoneModRotation(const struct FName& BoneModName, const struct FRotator& Rotation, class UObject* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModRotation");

	UBoneModBlueprintLibrary_SetBoneModRotation_Params params;
	params.BoneModName = BoneModName;
	params.Rotation = Rotation;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModReplaceTranslation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   BoneModName                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReplaceTranslation            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Target                         (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModBlueprintLibrary::STATIC_SetBoneModReplaceTranslation(const struct FName& BoneModName, bool bReplaceTranslation, class UObject* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModReplaceTranslation");

	UBoneModBlueprintLibrary_SetBoneModReplaceTranslation_Params params;
	params.BoneModName = BoneModName;
	params.bReplaceTranslation = bReplaceTranslation;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModReplaceScale
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   BoneModName                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReplaceScale                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Target                         (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModBlueprintLibrary::STATIC_SetBoneModReplaceScale(const struct FName& BoneModName, bool bReplaceScale, class UObject* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModReplaceScale");

	UBoneModBlueprintLibrary_SetBoneModReplaceScale_Params params;
	params.BoneModName = BoneModName;
	params.bReplaceScale = bReplaceScale;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModReplaceRotation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   BoneModName                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReplaceRotation               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Target                         (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModBlueprintLibrary::STATIC_SetBoneModReplaceRotation(const struct FName& BoneModName, bool bReplaceRotation, class UObject* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModReplaceRotation");

	UBoneModBlueprintLibrary_SetBoneModReplaceRotation_Params params;
	params.BoneModName = BoneModName;
	params.bReplaceRotation = bReplaceRotation;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   BoneModName                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewBoneModName                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Target                         (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModBlueprintLibrary::STATIC_SetBoneModName(const struct FName& BoneModName, const struct FName& NewBoneModName, class UObject* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModName");

	UBoneModBlueprintLibrary_SetBoneModName_Params params;
	params.BoneModName = BoneModName;
	params.NewBoneModName = NewBoneModName;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModifyProfileState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   StateName                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Target                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModBlueprintLibrary::STATIC_SetBoneModifyProfileState(const struct FName& StateName, bool bActive, class UObject* Target, float BlendTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModifyProfileState");

	UBoneModBlueprintLibrary_SetBoneModifyProfileState_Params params;
	params.StateName = StateName;
	params.bActive = bActive;
	params.Target = Target;
	params.BlendTime = BlendTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModifyProfile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGbxBoneModifyProfile*   BoneModifyProfile              (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Target                         (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModBlueprintLibrary::STATIC_SetBoneModifyProfile(class UGbxBoneModifyProfile* BoneModifyProfile, class UObject* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModifyProfile");

	UBoneModBlueprintLibrary_SetBoneModifyProfile_Params params;
	params.BoneModifyProfile = BoneModifyProfile;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModBoneName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   BoneModName                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneModBoneName                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Target                         (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModBlueprintLibrary::STATIC_SetBoneModBoneName(const struct FName& BoneModName, const struct FName& BoneModBoneName, class UObject* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModBoneName");

	UBoneModBlueprintLibrary_SetBoneModBoneName_Params params;
	params.BoneModName = BoneModName;
	params.BoneModBoneName = BoneModBoneName;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModBlendTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   BoneModName                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendTime                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Target                         (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModBlueprintLibrary::STATIC_SetBoneModBlendTime(const struct FName& BoneModName, float BlendTime, class UObject* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModBlendTime");

	UBoneModBlueprintLibrary_SetBoneModBlendTime_Params params;
	params.BoneModName = BoneModName;
	params.BlendTime = BlendTime;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModAlphaBlend
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   BoneModName                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FAlphaBlend             Blend                          (ConstParm, Parm)
// class UObject*                 Target                         (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModBlueprintLibrary::STATIC_SetBoneModAlphaBlend(const struct FName& BoneModName, const struct FAlphaBlend& Blend, class UObject* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModAlphaBlend");

	UBoneModBlueprintLibrary_SetBoneModAlphaBlend_Params params;
	params.BoneModName = BoneModName;
	params.Blend = Blend;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModActive
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   BoneModName                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bActive                        (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Target                         (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModBlueprintLibrary::STATIC_SetBoneModActive(const struct FName& BoneModName, bool bActive, class UObject* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModActive");

	UBoneModBlueprintLibrary_SetBoneModActive_Params params;
	params.BoneModName = BoneModName;
	params.bActive = bActive;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneMod
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FBoneModInstance        InBoneMod                      (Parm, OutParm, ReferenceParm)
// struct FName                   BoneModToSet                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBlendIn                       (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModBlueprintLibrary::STATIC_SetBoneMod(const struct FName& BoneModToSet, class UObject* Target, bool bBlendIn, struct FBoneModInstance* InBoneMod)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneMod");

	UBoneModBlueprintLibrary_SetBoneMod_Params params;
	params.BoneModToSet = BoneModToSet;
	params.Target = Target;
	params.bBlendIn = bBlendIn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InBoneMod != nullptr)
		*InBoneMod = params.InBoneMod;
}


// Function GbxGameSystemCore.BoneModBlueprintLibrary.RemoveBoneMod
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   BoneModToRemove                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBlendOut                      (Parm, ZeroConstructor, IsPlainOldData)

void UBoneModBlueprintLibrary::STATIC_RemoveBoneMod(const struct FName& BoneModToRemove, class UObject* Target, bool bBlendOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.BoneModBlueprintLibrary.RemoveBoneMod");

	UBoneModBlueprintLibrary_RemoveBoneMod_Params params;
	params.BoneModToRemove = BoneModToRemove;
	params.Target = Target;
	params.bBlendOut = bBlendOut;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.BoneModBlueprintLibrary.GetBoneMod
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   BoneModName                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FBoneModInstance        BoneMod                        (Parm, OutParm)
// class UObject*                 Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBoneModBlueprintLibrary::STATIC_GetBoneMod(const struct FName& BoneModName, class UObject* Target, struct FBoneModInstance* BoneMod)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.BoneModBlueprintLibrary.GetBoneMod");

	UBoneModBlueprintLibrary_GetBoneMod_Params params;
	params.BoneModName = BoneModName;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BoneMod != nullptr)
		*BoneMod = params.BoneMod;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.BoneModBlueprintLibrary.CreateBoneMod
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   InBoneModName                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InBoneName                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InTranslation                  (ConstParm, Parm, IsPlainOldData)
// struct FRotator                InRotation                     (ConstParm, Parm, IsPlainOldData)
// struct FVector                 InScale                        (ConstParm, Parm, IsPlainOldData)
// float                          InBlendTime                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Target                         (Parm, ZeroConstructor, IsPlainOldData)
// EAlphaBlendOption              InBlendOption                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UCurveFloat*             InCustomBlendCurve             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInUseTranslation              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInUseRotation                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInUseScale                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInReplaceTranslation          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInReplaceRotation             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInReplaceScale                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBoneControlSpace> InTranslationSpace             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBoneControlSpace> InRotationSpace                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBlendIn                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UBoneModBlueprintLibrary::STATIC_CreateBoneMod(const struct FName& InBoneModName, const struct FName& InBoneName, const struct FVector& InTranslation, const struct FRotator& InRotation, const struct FVector& InScale, float InBlendTime, class UObject* Target, EAlphaBlendOption InBlendOption, class UCurveFloat* InCustomBlendCurve, bool bInUseTranslation, bool bInUseRotation, bool bInUseScale, bool bInReplaceTranslation, bool bInReplaceRotation, bool bInReplaceScale, TEnumAsByte<EBoneControlSpace> InTranslationSpace, TEnumAsByte<EBoneControlSpace> InRotationSpace, bool bBlendIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.BoneModBlueprintLibrary.CreateBoneMod");

	UBoneModBlueprintLibrary_CreateBoneMod_Params params;
	params.InBoneModName = InBoneModName;
	params.InBoneName = InBoneName;
	params.InTranslation = InTranslation;
	params.InRotation = InRotation;
	params.InScale = InScale;
	params.InBlendTime = InBlendTime;
	params.Target = Target;
	params.InBlendOption = InBlendOption;
	params.InCustomBlendCurve = InCustomBlendCurve;
	params.bInUseTranslation = bInUseTranslation;
	params.bInUseRotation = bInUseRotation;
	params.bInUseScale = bInUseScale;
	params.bInReplaceTranslation = bInReplaceTranslation;
	params.bInReplaceRotation = bInReplaceRotation;
	params.bInReplaceScale = bInReplaceScale;
	params.InTranslationSpace = InTranslationSpace;
	params.InRotationSpace = InRotationSpace;
	params.bBlendIn = bBlendIn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ChallengeLevelActorComponent.SetIsStationary
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInIsStationary                (Parm, ZeroConstructor, IsPlainOldData)

void UChallengeLevelActorComponent::SetIsStationary(bool bInIsStationary)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ChallengeLevelActorComponent.SetIsStationary");

	UChallengeLevelActorComponent_SetIsStationary_Params params;
	params.bInIsStationary = bInIsStationary;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ChallengeLevelActorComponent.SetInWorldIconEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UChallengeLevelActorComponent::SetInWorldIconEnabled(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ChallengeLevelActorComponent.SetInWorldIconEnabled");

	UChallengeLevelActorComponent_SetInWorldIconEnabled_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ChallengeLevelActorComponent.OnRep_IsStationary
// (Final, Native, Private)
// Parameters:
// bool                           bOldIsStationary               (Parm, ZeroConstructor, IsPlainOldData)

void UChallengeLevelActorComponent::OnRep_IsStationary(bool bOldIsStationary)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ChallengeLevelActorComponent.OnRep_IsStationary");

	UChallengeLevelActorComponent_OnRep_IsStationary_Params params;
	params.bOldIsStationary = bOldIsStationary;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ChallengeLevelActorComponent.OnRep_InWorldIconEnabled
// (Final, Native, Private)
// Parameters:
// bool                           bOldEnabled                    (Parm, ZeroConstructor, IsPlainOldData)

void UChallengeLevelActorComponent::OnRep_InWorldIconEnabled(bool bOldEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ChallengeLevelActorComponent.OnRep_InWorldIconEnabled");

	UChallengeLevelActorComponent_OnRep_InWorldIconEnabled_Params params;
	params.bOldEnabled = bOldEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ChallengeLevelActorComponent.OnRep_ChallengeReference
// (Final, Native, Private)

void UChallengeLevelActorComponent::OnRep_ChallengeReference()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ChallengeLevelActorComponent.OnRep_ChallengeReference");

	UChallengeLevelActorComponent_OnRep_ChallengeReference_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ChallengeLevelActorComponent.HandleAttachmentChanged
// (Final, Native, Private)

void UChallengeLevelActorComponent::HandleAttachmentChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ChallengeLevelActorComponent.HandleAttachmentChanged");

	UChallengeLevelActorComponent_HandleAttachmentChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ChallengeLevelActorComponent.GetAssociatedActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UChallengeLevelActorComponent::GetAssociatedActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ChallengeLevelActorComponent.GetAssociatedActor");

	UChallengeLevelActorComponent_GetAssociatedActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.ChallengeLevelParentComponent.RemoveAssociatedActorComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UChallengeLevelActorComponent* AssociatedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UChallengeLevelParentComponent::RemoveAssociatedActorComponent(class UChallengeLevelActorComponent* AssociatedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ChallengeLevelParentComponent.RemoveAssociatedActorComponent");

	UChallengeLevelParentComponent_RemoveAssociatedActorComponent_Params params;
	params.AssociatedComponent = AssociatedComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ChallengeLevelParentComponent.RemoveAssociatedActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  AssociatedActor                (Parm, ZeroConstructor, IsPlainOldData)

void UChallengeLevelParentComponent::RemoveAssociatedActor(class AActor* AssociatedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ChallengeLevelParentComponent.RemoveAssociatedActor");

	UChallengeLevelParentComponent_RemoveAssociatedActor_Params params;
	params.AssociatedActor = AssociatedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ChallengeLevelParentComponent.ClearAssociatedActors
// (Final, Native, Public, BlueprintCallable)

void UChallengeLevelParentComponent::ClearAssociatedActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ChallengeLevelParentComponent.ClearAssociatedActors");

	UChallengeLevelParentComponent_ClearAssociatedActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ChallengeLevelParentComponent.AddAssociatedActor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  AssociatedActor                (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ComponentClass                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 RelativeOffset                 (Parm, IsPlainOldData)

void UChallengeLevelParentComponent::AddAssociatedActor(class AActor* AssociatedActor, class UClass* ComponentClass, const struct FVector& RelativeOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ChallengeLevelParentComponent.AddAssociatedActor");

	UChallengeLevelParentComponent_AddAssociatedActor_Params params;
	params.AssociatedActor = AssociatedActor;
	params.ComponentClass = ComponentClass;
	params.RelativeOffset = RelativeOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.CinematicModeBlueprintLibrary.PushCinematicMode
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UCinematicModeData*      InCinematicMode                (Parm, ZeroConstructor, IsPlainOldData)

void UCinematicModeBlueprintLibrary::STATIC_PushCinematicMode(class UObject* WorldContextObject, class UCinematicModeData* InCinematicMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.CinematicModeBlueprintLibrary.PushCinematicMode");

	UCinematicModeBlueprintLibrary_PushCinematicMode_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InCinematicMode = InCinematicMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.CinematicModeBlueprintLibrary.PopCinematicMode
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UCinematicModeData*      InCinematicMode                (Parm, ZeroConstructor, IsPlainOldData)

void UCinematicModeBlueprintLibrary::STATIC_PopCinematicMode(class UObject* WorldContextObject, class UCinematicModeData* InCinematicMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.CinematicModeBlueprintLibrary.PopCinematicMode");

	UCinematicModeBlueprintLibrary_PopCinematicMode_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InCinematicMode = InCinematicMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.CinematicModeBlueprintLibrary.ClearCinematicMode
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UCinematicModeBlueprintLibrary::STATIC_ClearCinematicMode(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.CinematicModeBlueprintLibrary.ClearCinematicMode");

	UCinematicModeBlueprintLibrary_ClearCinematicMode_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.CinematicModeBlueprintLibrary.ClearAndSetCinematicMode
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UCinematicModeData*      InCinematicMode                (Parm, ZeroConstructor, IsPlainOldData)

void UCinematicModeBlueprintLibrary::STATIC_ClearAndSetCinematicMode(class UObject* WorldContextObject, class UCinematicModeData* InCinematicMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.CinematicModeBlueprintLibrary.ClearAndSetCinematicMode");

	UCinematicModeBlueprintLibrary_ClearAndSetCinematicMode_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InCinematicMode = InCinematicMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.Beacon.OnBeaconSourceEndPlay
// (Final, Native, Public)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABeacon::OnBeaconSourceEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.Beacon.OnBeaconSourceEndPlay");

	ABeacon_OnBeaconSourceEndPlay_Params params;
	params.Actor = Actor;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ControlledMoveFunctionLibrary.StopControlledMove
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ControlledMove                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bZeroVelocity                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInterrupted                   (Parm, ZeroConstructor, IsPlainOldData)

void UControlledMoveFunctionLibrary::STATIC_StopControlledMove(class AActor* Actor, class UClass* ControlledMove, bool bZeroVelocity, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ControlledMoveFunctionLibrary.StopControlledMove");

	UControlledMoveFunctionLibrary_StopControlledMove_Params params;
	params.Actor = Actor;
	params.ControlledMove = ControlledMove;
	params.bZeroVelocity = bZeroVelocity;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ControlledMoveFunctionLibrary.StartControlledMove
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ControlledMove                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          SpeedOverride                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          DurationOverride               (Parm, ZeroConstructor, IsPlainOldData)
// float                          LaunchAngleOverride            (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetLocation                 (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UControlledMoveFunctionLibrary::STATIC_StartControlledMove(class AActor* Actor, class UClass* ControlledMove, class AActor* Instigator, float SpeedOverride, float DurationOverride, float LaunchAngleOverride, class AActor* TargetActor, const struct FVector& TargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ControlledMoveFunctionLibrary.StartControlledMove");

	UControlledMoveFunctionLibrary_StartControlledMove_Params params;
	params.Actor = Actor;
	params.ControlledMove = ControlledMove;
	params.Instigator = Instigator;
	params.SpeedOverride = SpeedOverride;
	params.DurationOverride = DurationOverride;
	params.LaunchAngleOverride = LaunchAngleOverride;
	params.TargetActor = TargetActor;
	params.TargetLocation = TargetLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.ControlledMoveFunctionLibrary.IsPerformingSpecificControlledMove
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ControlledMove                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UControlledMoveFunctionLibrary::STATIC_IsPerformingSpecificControlledMove(class AActor* Actor, class UClass* ControlledMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ControlledMoveFunctionLibrary.IsPerformingSpecificControlledMove");

	UControlledMoveFunctionLibrary_IsPerformingSpecificControlledMove_Params params;
	params.Actor = Actor;
	params.ControlledMove = ControlledMove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.ControlledMoveFunctionLibrary.IsPerformingControlledMove
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UControlledMoveFunctionLibrary::STATIC_IsPerformingControlledMove(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ControlledMoveFunctionLibrary.IsPerformingControlledMove");

	UControlledMoveFunctionLibrary_IsPerformingControlledMove_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.CoordinatedEffectBlueprintLibrary.GetOriginalOverrideMaterialAtIndex
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMeshComponent*          MeshComponent                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            OutActualIndex                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInterface* UCoordinatedEffectBlueprintLibrary::STATIC_GetOriginalOverrideMaterialAtIndex(class UMeshComponent* MeshComponent, int Index, int* OutActualIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.CoordinatedEffectBlueprintLibrary.GetOriginalOverrideMaterialAtIndex");

	UCoordinatedEffectBlueprintLibrary_GetOriginalOverrideMaterialAtIndex_Params params;
	params.MeshComponent = MeshComponent;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutActualIndex != nullptr)
		*OutActualIndex = params.OutActualIndex;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.DamageStatics.StopCausingDamageToTarget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageTarget                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageData                     (Parm, ZeroConstructor, IsPlainOldData)

void UDamageStatics::STATIC_StopCausingDamageToTarget(class AActor* DamageCauser, class AActor* DamageTarget, class UClass* DamageData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageStatics.StopCausingDamageToTarget");

	UDamageStatics_StopCausingDamageToTarget_Params params;
	params.DamageCauser = DamageCauser;
	params.DamageTarget = DamageTarget;
	params.DamageData = DamageData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.DamageStatics.StopCausingDamage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageData                     (Parm, ZeroConstructor, IsPlainOldData)

void UDamageStatics::STATIC_StopCausingDamage(class AActor* DamageCauser, class UClass* DamageData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageStatics.StopCausingDamage");

	UDamageStatics_StopCausingDamage_Params params;
	params.DamageCauser = DamageCauser;
	params.DamageData = DamageData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.DamageStatics.StopCausingAllDamage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void UDamageStatics::STATIC_StopCausingAllDamage(class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageStatics.StopCausingAllDamage");

	UDamageStatics_StopCausingAllDamage_Params params;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.DamageStatics.MakePipelineDamageInput
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageReceiver                 (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageSource                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, IsPlainOldData)
// struct FVector                 HitDirection                   (Parm, IsPlainOldData)
// struct FVector                 HitForceDirection              (Parm, IsPlainOldData)
// struct FForceSelection         HitForceMagnitude              (Parm)
// struct FPipelineDamageInput    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPipelineDamageInput UDamageStatics::STATIC_MakePipelineDamageInput(class AActor* DamageCauser, class AActor* DamageReceiver, class UClass* DamageType, class UClass* DamageSource, const struct FHitResult& HitInfo, const struct FVector& HitLocation, const struct FVector& HitDirection, const struct FVector& HitForceDirection, const struct FForceSelection& HitForceMagnitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageStatics.MakePipelineDamageInput");

	UDamageStatics_MakePipelineDamageInput_Params params;
	params.DamageCauser = DamageCauser;
	params.DamageReceiver = DamageReceiver;
	params.DamageType = DamageType;
	params.DamageSource = DamageSource;
	params.HitInfo = HitInfo;
	params.HitLocation = HitLocation;
	params.HitDirection = HitDirection;
	params.HitForceDirection = HitForceDirection;
	params.HitForceMagnitude = HitForceMagnitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.DamageStatics.GetSummary_ForceSelection
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FForceSelection         ForceSelection                 (ConstParm, Parm, OutParm, ReferenceParm)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UDamageStatics::STATIC_GetSummary_ForceSelection(const struct FForceSelection& ForceSelection)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageStatics.GetSummary_ForceSelection");

	UDamageStatics_GetSummary_ForceSelection_Params params;
	params.ForceSelection = ForceSelection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.DamageStatics.GetDamageTypeFromClass
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  DamageTypeClass                (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGbxDamageType* UDamageStatics::STATIC_GetDamageTypeFromClass(class UClass* DamageTypeClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageStatics.GetDamageTypeFromClass");

	UDamageStatics_GetDamageTypeFromClass_Params params;
	params.DamageTypeClass = DamageTypeClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.DamageStatics.GetDamageSourceFromClass
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  DamageSourceClass              (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UDamageSource* UDamageStatics::STATIC_GetDamageSourceFromClass(class UClass* DamageSourceClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageStatics.GetDamageSourceFromClass");

	UDamageStatics_GetDamageSourceFromClass_Params params;
	params.DamageSourceClass = DamageSourceClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.DamageStatics.Conv_ForceSelectionToFloat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FForceSelection         ForceSelection                 (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDamageStatics::STATIC_Conv_ForceSelectionToFloat(const struct FForceSelection& ForceSelection)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageStatics.Conv_ForceSelectionToFloat");

	UDamageStatics_Conv_ForceSelectionToFloat_Params params;
	params.ForceSelection = ForceSelection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.DamageStatics.Conv_FloatToForceSelection
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ForceSelection                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FForceSelection         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FForceSelection UDamageStatics::STATIC_Conv_FloatToForceSelection(float ForceSelection)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageStatics.Conv_FloatToForceSelection");

	UDamageStatics_Conv_FloatToForceSelection_Params params;
	params.ForceSelection = ForceSelection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.DamageStatics.ApplyDamageInRadius
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// float                          BaseDamage                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Origin                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageSource                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          IgnoreActors                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// struct FForceSelection         BaseImpactForce                (Parm)
// TEnumAsByte<ECollisionChannel> DamagePreventionChannel        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDamageFalloff                 (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageModifierComponent* DamageModifierComponent        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UFeedbackData*           InstigatorFeedback             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseInstigatorRadiusDamageScale (Parm, ZeroConstructor, IsPlainOldData)

void UDamageStatics::STATIC_ApplyDamageInRadius(class UObject* WorldContextObject, float BaseDamage, const struct FVector& Origin, float Radius, class UClass* DamageType, class UClass* DamageSource, TArray<class AActor*> IgnoreActors, class AActor* DamageCauser, class AController* EventInstigator, const struct FForceSelection& BaseImpactForce, TEnumAsByte<ECollisionChannel> DamagePreventionChannel, bool bDamageFalloff, class UDamageModifierComponent* DamageModifierComponent, class UFeedbackData* InstigatorFeedback, bool bUseInstigatorRadiusDamageScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageStatics.ApplyDamageInRadius");

	UDamageStatics_ApplyDamageInRadius_Params params;
	params.WorldContextObject = WorldContextObject;
	params.BaseDamage = BaseDamage;
	params.Origin = Origin;
	params.Radius = Radius;
	params.DamageType = DamageType;
	params.DamageSource = DamageSource;
	params.IgnoreActors = IgnoreActors;
	params.DamageCauser = DamageCauser;
	params.EventInstigator = EventInstigator;
	params.BaseImpactForce = BaseImpactForce;
	params.DamagePreventionChannel = DamagePreventionChannel;
	params.bDamageFalloff = bDamageFalloff;
	params.DamageModifierComponent = DamageModifierComponent;
	params.InstigatorFeedback = InstigatorFeedback;
	params.bUseInstigatorRadiusDamageScale = bUseInstigatorRadiusDamageScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.DamageStatics.ApplyDamageEx
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FPipelineDamageInput    PipelineInput                  (Parm)
// float                          BaseDamage                     (Parm, ZeroConstructor, IsPlainOldData)

void UDamageStatics::STATIC_ApplyDamageEx(const struct FPipelineDamageInput& PipelineInput, float BaseDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageStatics.ApplyDamageEx");

	UDamageStatics_ApplyDamageEx_Params params;
	params.PipelineInput = PipelineInput;
	params.BaseDamage = BaseDamage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.DamageStatics.ApplyDamage
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  DamageReceiver                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          BaseDamage                     (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageSource                   (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void UDamageStatics::STATIC_ApplyDamage(class AActor* DamageReceiver, float BaseDamage, class UClass* DamageType, class UClass* DamageSource, class AController* EventInstigator, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageStatics.ApplyDamage");

	UDamageStatics_ApplyDamage_Params params;
	params.DamageReceiver = DamageReceiver;
	params.BaseDamage = BaseDamage;
	params.DamageType = DamageType;
	params.DamageSource = DamageSource;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.SetStrengthMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UDynamicPhysicalAnimationComponent::SetStrengthMultiplier(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.SetStrengthMultiplier");

	UDynamicPhysicalAnimationComponent_SetStrengthMultiplier_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.SetSkeletalMeshComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  NewSkeletalMeshComponent       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDynamicPhysicalAnimationComponent::SetSkeletalMeshComponent(class USkeletalMeshComponent* NewSkeletalMeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.SetSkeletalMeshComponent");

	UDynamicPhysicalAnimationComponent_SetSkeletalMeshComponent_Params params;
	params.NewSkeletalMeshComponent = NewSkeletalMeshComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.SetRootMotionControl
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EPhysicalAnimationRootMotionControl MotionControl                  (Parm, ZeroConstructor, IsPlainOldData)

void UDynamicPhysicalAnimationComponent::SetRootMotionControl(EPhysicalAnimationRootMotionControl MotionControl)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.SetRootMotionControl");

	UDynamicPhysicalAnimationComponent_SetRootMotionControl_Params params;
	params.MotionControl = MotionControl;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.SetHasAnimationPlaying
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bPlaying                       (Parm, ZeroConstructor, IsPlainOldData)

void UDynamicPhysicalAnimationComponent::SetHasAnimationPlaying(bool bPlaying)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.SetHasAnimationPlaying");

	UDynamicPhysicalAnimationComponent_SetHasAnimationPlaying_Params params;
	params.bPlaying = bPlaying;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.SetEnableRagdoll
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UDynamicPhysicalAnimationComponent::SetEnableRagdoll(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.SetEnableRagdoll");

	UDynamicPhysicalAnimationComponent_SetEnableRagdoll_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.SetEnablePhysicalAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BodyName                       (Parm, ZeroConstructor, IsPlainOldData)

void UDynamicPhysicalAnimationComponent::SetEnablePhysicalAnimation(bool bEnable, const struct FName& BodyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.SetEnablePhysicalAnimation");

	UDynamicPhysicalAnimationComponent_SetEnablePhysicalAnimation_Params params;
	params.bEnable = bEnable;
	params.BodyName = BodyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.SetActiveProfile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPhysicalAnimationProfileAsset* Profile                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDynamicPhysicalAnimationComponent::SetActiveProfile(class UPhysicalAnimationProfileAsset* Profile)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.SetActiveProfile");

	UDynamicPhysicalAnimationComponent_SetActiveProfile_Params params;
	params.Profile = Profile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.OnRigidBodyOverlap
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UDynamicPhysicalAnimationComponent::OnRigidBodyOverlap(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.OnRigidBodyOverlap");

	UDynamicPhysicalAnimationComponent_OnRigidBodyOverlap_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.GetStrengthMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDynamicPhysicalAnimationComponent::GetStrengthMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.GetStrengthMultiplier");

	UDynamicPhysicalAnimationComponent_GetStrengthMultiplier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.GetRootMotionControl
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EPhysicalAnimationRootMotionControl ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EPhysicalAnimationRootMotionControl UDynamicPhysicalAnimationComponent::GetRootMotionControl()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.GetRootMotionControl");

	UDynamicPhysicalAnimationComponent_GetRootMotionControl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.DetachBodyFromAllExternalRigidBodies
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   BodyName                       (Parm, ZeroConstructor, IsPlainOldData)

void UDynamicPhysicalAnimationComponent::DetachBodyFromAllExternalRigidBodies(const struct FName& BodyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.DetachBodyFromAllExternalRigidBodies");

	UDynamicPhysicalAnimationComponent_DetachBodyFromAllExternalRigidBodies_Params params;
	params.BodyName = BodyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.AttachBodyTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   BodyName                       (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     AttachToComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   AttachToBodyName               (Parm, ZeroConstructor, IsPlainOldData)
// float                          VelocitySpaceBlend             (Parm, ZeroConstructor, IsPlainOldData)
// float                          BreakForce                     (Parm, ZeroConstructor, IsPlainOldData)

void UDynamicPhysicalAnimationComponent::AttachBodyTo(const struct FName& BodyName, class UPrimitiveComponent* AttachToComponent, const struct FName& AttachToBodyName, float VelocitySpaceBlend, float BreakForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.AttachBodyTo");

	UDynamicPhysicalAnimationComponent_AttachBodyTo_Params params;
	params.BodyName = BodyName;
	params.AttachToComponent = AttachToComponent;
	params.AttachToBodyName = AttachToBodyName;
	params.VelocitySpaceBlend = VelocitySpaceBlend;
	params.BreakForce = BreakForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.EnvQueryParamsExt.RunEnvQueryForBestLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 QueryOwner                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FEnvQueryParams         QueryParams                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 ResultLocation                 (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEnvQueryParamsExt::STATIC_RunEnvQueryForBestLocation(class UObject* QueryOwner, const struct FEnvQueryParams& QueryParams, struct FVector* ResultLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.EnvQueryParamsExt.RunEnvQueryForBestLocation");

	UEnvQueryParamsExt_RunEnvQueryForBestLocation_Params params;
	params.QueryOwner = QueryOwner;
	params.QueryParams = QueryParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultLocation != nullptr)
		*ResultLocation = params.ResultLocation;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.EnvQueryParamsExt.RunEnvQueryForBestActor
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 QueryOwner                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FEnvQueryParams         QueryParams                    (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  ResultActor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEnvQueryParamsExt::STATIC_RunEnvQueryForBestActor(class UObject* QueryOwner, const struct FEnvQueryParams& QueryParams, class AActor** ResultActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.EnvQueryParamsExt.RunEnvQueryForBestActor");

	UEnvQueryParamsExt_RunEnvQueryForBestActor_Params params;
	params.QueryOwner = QueryOwner;
	params.QueryParams = QueryParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultActor != nullptr)
		*ResultActor = params.ResultActor;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.EnvQueryParamsExt.RunEnvQueryForAllLocations
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 QueryOwner                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FEnvQueryParams         QueryParams                    (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FVector>         ResultLocations                (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEnvQueryParamsExt::STATIC_RunEnvQueryForAllLocations(class UObject* QueryOwner, const struct FEnvQueryParams& QueryParams, TArray<struct FVector>* ResultLocations)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.EnvQueryParamsExt.RunEnvQueryForAllLocations");

	UEnvQueryParamsExt_RunEnvQueryForAllLocations_Params params;
	params.QueryOwner = QueryOwner;
	params.QueryParams = QueryParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultLocations != nullptr)
		*ResultLocations = params.ResultLocations;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.EnvQueryParamsExt.RunEnvQueryForAllActors
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 QueryOwner                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FEnvQueryParams         QueryParams                    (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<class AActor*>          ResultActors                   (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEnvQueryParamsExt::STATIC_RunEnvQueryForAllActors(class UObject* QueryOwner, const struct FEnvQueryParams& QueryParams, TArray<class AActor*>* ResultActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.EnvQueryParamsExt.RunEnvQueryForAllActors");

	UEnvQueryParamsExt_RunEnvQueryForAllActors_Params params;
	params.QueryOwner = QueryOwner;
	params.QueryParams = QueryParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultActors != nullptr)
		*ResultActors = params.ResultActors;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.EnvQueryParamsExt.HasQuery
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEnvQueryParams         QueryParams                    (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UEnvQueryParamsExt::STATIC_HasQuery(const struct FEnvQueryParams& QueryParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.EnvQueryParamsExt.HasQuery");

	UEnvQueryParamsExt_HasQuery_Params params;
	params.QueryParams = QueryParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.EnvQueryParamsExt.GetDescription
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEnvQueryParams         QueryParams                    (ConstParm, Parm, OutParm, ReferenceParm)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UEnvQueryParamsExt::STATIC_GetDescription(const struct FEnvQueryParams& QueryParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.EnvQueryParamsExt.GetDescription");

	UEnvQueryParamsExt_GetDescription_Params params;
	params.QueryParams = QueryParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.ExplosionBlueprintLibrary.PlayExplosion
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UExplosionData*          ExplosionData                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Size                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ExplosionLocation              (Parm, IsPlainOldData)
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystemComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UParticleSystemComponent* UExplosionBlueprintLibrary::STATIC_PlayExplosion(class UExplosionData* ExplosionData, float Size, const struct FVector& ExplosionLocation, class UObject* Context, class UClass* DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ExplosionBlueprintLibrary.PlayExplosion");

	UExplosionBlueprintLibrary_PlayExplosion_Params params;
	params.ExplosionData = ExplosionData;
	params.Size = Size;
	params.ExplosionLocation = ExplosionLocation;
	params.Context = Context;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.DamageInfoFunctionLibrary.SetImpactForce
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDamageInfo             DamageInfo                     (Parm, OutParm, ReferenceParm)
// float                          InImpactForce                  (Parm, ZeroConstructor, IsPlainOldData)

void UDamageInfoFunctionLibrary::STATIC_SetImpactForce(float InImpactForce, struct FDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageInfoFunctionLibrary.SetImpactForce");

	UDamageInfoFunctionLibrary_SetImpactForce_Params params;
	params.InImpactForce = InImpactForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageInfo != nullptr)
		*DamageInfo = params.DamageInfo;
}


// Function GbxGameSystemCore.DamageInfoFunctionLibrary.SetDamageType
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDamageInfo             DamageInfo                     (Parm, OutParm, ReferenceParm)
// class UClass*                  InDamageType                   (Parm, ZeroConstructor, IsPlainOldData)

void UDamageInfoFunctionLibrary::STATIC_SetDamageType(class UClass* InDamageType, struct FDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageInfoFunctionLibrary.SetDamageType");

	UDamageInfoFunctionLibrary_SetDamageType_Params params;
	params.InDamageType = InDamageType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageInfo != nullptr)
		*DamageInfo = params.DamageInfo;
}


// Function GbxGameSystemCore.DamageInfoFunctionLibrary.SetDamageSource
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDamageInfo             DamageInfo                     (Parm, OutParm, ReferenceParm)
// class UClass*                  InDamageSource                 (Parm, ZeroConstructor, IsPlainOldData)

void UDamageInfoFunctionLibrary::STATIC_SetDamageSource(class UClass* InDamageSource, struct FDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageInfoFunctionLibrary.SetDamageSource");

	UDamageInfoFunctionLibrary_SetDamageSource_Params params;
	params.InDamageSource = InDamageSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageInfo != nullptr)
		*DamageInfo = params.DamageInfo;
}


// Function GbxGameSystemCore.DamageInfoFunctionLibrary.SetDamageRadius
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDamageInfo             DamageInfo                     (Parm, OutParm, ReferenceParm)
// float                          InDamageRadius                 (Parm, ZeroConstructor, IsPlainOldData)

void UDamageInfoFunctionLibrary::STATIC_SetDamageRadius(float InDamageRadius, struct FDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageInfoFunctionLibrary.SetDamageRadius");

	UDamageInfoFunctionLibrary_SetDamageRadius_Params params;
	params.InDamageRadius = InDamageRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageInfo != nullptr)
		*DamageInfo = params.DamageInfo;
}


// Function GbxGameSystemCore.DamageInfoFunctionLibrary.SetDamageModifierComponent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDamageInfo             DamageInfo                     (Parm, OutParm, ReferenceParm)
// class UDamageModifierComponent* InModifierComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDamageInfoFunctionLibrary::STATIC_SetDamageModifierComponent(class UDamageModifierComponent* InModifierComponent, struct FDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageInfoFunctionLibrary.SetDamageModifierComponent");

	UDamageInfoFunctionLibrary_SetDamageModifierComponent_Params params;
	params.InModifierComponent = InModifierComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageInfo != nullptr)
		*DamageInfo = params.DamageInfo;
}


// Function GbxGameSystemCore.DamageInfoFunctionLibrary.SetDamageCauser
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDamageInfo             DamageInfo                     (Parm, OutParm, ReferenceParm)
// class AActor*                  InDamageCauser                 (Parm, ZeroConstructor, IsPlainOldData)

void UDamageInfoFunctionLibrary::STATIC_SetDamageCauser(class AActor* InDamageCauser, struct FDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageInfoFunctionLibrary.SetDamageCauser");

	UDamageInfoFunctionLibrary_SetDamageCauser_Params params;
	params.InDamageCauser = InDamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageInfo != nullptr)
		*DamageInfo = params.DamageInfo;
}


// Function GbxGameSystemCore.DamageInfoFunctionLibrary.SetDamage
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDamageInfo             DamageInfo                     (Parm, OutParm, ReferenceParm)
// float                          InDamage                       (Parm, ZeroConstructor, IsPlainOldData)

void UDamageInfoFunctionLibrary::STATIC_SetDamage(float InDamage, struct FDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageInfoFunctionLibrary.SetDamage");

	UDamageInfoFunctionLibrary_SetDamage_Params params;
	params.InDamage = InDamage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageInfo != nullptr)
		*DamageInfo = params.DamageInfo;
}


// Function GbxGameSystemCore.DamageInfoFunctionLibrary.SetCriticalHitDamageOverrides
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDamageInfo             DamageInfo                     (Parm, OutParm, ReferenceParm)
// struct FCriticalHitDamageOverrides Overrides                      (ConstParm, Parm, OutParm, ReferenceParm)

void UDamageInfoFunctionLibrary::STATIC_SetCriticalHitDamageOverrides(const struct FCriticalHitDamageOverrides& Overrides, struct FDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageInfoFunctionLibrary.SetCriticalHitDamageOverrides");

	UDamageInfoFunctionLibrary_SetCriticalHitDamageOverrides_Params params;
	params.Overrides = Overrides;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageInfo != nullptr)
		*DamageInfo = params.DamageInfo;
}


// Function GbxGameSystemCore.DamageInfoFunctionLibrary.SetApplyCriticalHitModsToAoEDamage
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDamageInfo             DamageInfo                     (Parm, OutParm, ReferenceParm)
// bool                           bApplyCriticalHitModsToAoEDamage (Parm, ZeroConstructor, IsPlainOldData)

void UDamageInfoFunctionLibrary::STATIC_SetApplyCriticalHitModsToAoEDamage(bool bApplyCriticalHitModsToAoEDamage, struct FDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageInfoFunctionLibrary.SetApplyCriticalHitModsToAoEDamage");

	UDamageInfoFunctionLibrary_SetApplyCriticalHitModsToAoEDamage_Params params;
	params.bApplyCriticalHitModsToAoEDamage = bApplyCriticalHitModsToAoEDamage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageInfo != nullptr)
		*DamageInfo = params.DamageInfo;
}


// Function GbxGameSystemCore.DamageInfoFunctionLibrary.GetImpactForce
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDamageInfo             DamageInfo                     (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDamageInfoFunctionLibrary::STATIC_GetImpactForce(const struct FDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageInfoFunctionLibrary.GetImpactForce");

	UDamageInfoFunctionLibrary_GetImpactForce_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.DamageInfoFunctionLibrary.GetDamageType
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDamageInfo             DamageInfo                     (ConstParm, Parm, OutParm, ReferenceParm)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UDamageInfoFunctionLibrary::STATIC_GetDamageType(const struct FDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageInfoFunctionLibrary.GetDamageType");

	UDamageInfoFunctionLibrary_GetDamageType_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.DamageInfoFunctionLibrary.GetDamageSource
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDamageInfo             DamageInfo                     (ConstParm, Parm, OutParm, ReferenceParm)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UDamageInfoFunctionLibrary::STATIC_GetDamageSource(const struct FDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageInfoFunctionLibrary.GetDamageSource");

	UDamageInfoFunctionLibrary_GetDamageSource_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.DamageInfoFunctionLibrary.GetDamageRadius
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDamageInfo             DamageInfo                     (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDamageInfoFunctionLibrary::STATIC_GetDamageRadius(const struct FDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageInfoFunctionLibrary.GetDamageRadius");

	UDamageInfoFunctionLibrary_GetDamageRadius_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.DamageInfoFunctionLibrary.GetDamageModifierComponent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDamageInfo             DamageInfo                     (ConstParm, Parm, OutParm, ReferenceParm)
// class UDamageModifierComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDamageModifierComponent* UDamageInfoFunctionLibrary::STATIC_GetDamageModifierComponent(const struct FDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageInfoFunctionLibrary.GetDamageModifierComponent");

	UDamageInfoFunctionLibrary_GetDamageModifierComponent_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.DamageInfoFunctionLibrary.GetDamageCauser
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDamageInfo             DamageInfo                     (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UDamageInfoFunctionLibrary::STATIC_GetDamageCauser(const struct FDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageInfoFunctionLibrary.GetDamageCauser");

	UDamageInfoFunctionLibrary_GetDamageCauser_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.DamageInfoFunctionLibrary.GetDamage
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDamageInfo             DamageInfo                     (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDamageInfoFunctionLibrary::STATIC_GetDamage(const struct FDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageInfoFunctionLibrary.GetDamage");

	UDamageInfoFunctionLibrary_GetDamage_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.DamageInfoFunctionLibrary.GetCriticalHitDamageOverrides
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDamageInfo             DamageInfo                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FCriticalHitDamageOverrides ReturnValue                    (Parm, OutParm, ReturnParm)

struct FCriticalHitDamageOverrides UDamageInfoFunctionLibrary::STATIC_GetCriticalHitDamageOverrides(const struct FDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageInfoFunctionLibrary.GetCriticalHitDamageOverrides");

	UDamageInfoFunctionLibrary_GetCriticalHitDamageOverrides_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.DamageInfoFunctionLibrary.GetApplyCriticalHitModsToAoEDamage
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDamageInfo             DamageInfo                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDamageInfoFunctionLibrary::STATIC_GetApplyCriticalHitModsToAoEDamage(const struct FDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.DamageInfoFunctionLibrary.GetApplyCriticalHitModsToAoEDamage");

	UDamageInfoFunctionLibrary_GetApplyCriticalHitModsToAoEDamage_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.ExplosionComponent.SetExplosionLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 NewLocation                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UExplosionComponent::SetExplosionLocation(const struct FVector& NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ExplosionComponent.SetExplosionLocation");

	UExplosionComponent_SetExplosionLocation_Params params;
	params.NewLocation = NewLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ExplosionComponent.Explode
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             DamageInfo                     (ConstParm, Parm, OutParm, ReferenceParm)

void UExplosionComponent::Explode(const struct FDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ExplosionComponent.Explode");

	UExplosionComponent_Explode_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ExplosionData.SelectExplosion
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Size                           (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FExplosionSizeProperties ReturnValue                    (Parm, OutParm, ReturnParm)

struct FExplosionSizeProperties UExplosionData::SelectExplosion(float Size, class UClass* DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ExplosionData.SelectExplosion");

	UExplosionData_SelectExplosion_Params params;
	params.Size = Size;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.ExplosionSizeSelectionData.GetExplosionPropertiesBySize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Size                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FExplosionSizeProperties ReturnValue                    (Parm, OutParm, ReturnParm)

struct FExplosionSizeProperties UExplosionSizeSelectionData::GetExplosionPropertiesBySize(float Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ExplosionSizeSelectionData.GetExplosionPropertiesBySize");

	UExplosionSizeSelectionData_GetExplosionPropertiesBySize_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.FeedbackData.StopFeedbackForAll
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFeedbackData*           FeedbackData                   (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UFeedbackData::STATIC_StopFeedbackForAll(class UFeedbackData* FeedbackData, class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.FeedbackData.StopFeedbackForAll");

	UFeedbackData_StopFeedbackForAll_Params params;
	params.FeedbackData = FeedbackData;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.FeedbackData.StopFeedback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFeedbackData*           FeedbackData                   (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void UFeedbackData::STATIC_StopFeedback(class UFeedbackData* FeedbackData, class APlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.FeedbackData.StopFeedback");

	UFeedbackData_StopFeedback_Params params;
	params.FeedbackData = FeedbackData;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.FeedbackData.StopDefaultFeedbackForAll
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFeedbackTableRowHandle Feedback                       (Parm)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)

void UFeedbackData::STATIC_StopDefaultFeedbackForAll(const struct FFeedbackTableRowHandle& Feedback, class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.FeedbackData.StopDefaultFeedbackForAll");

	UFeedbackData_StopDefaultFeedbackForAll_Params params;
	params.Feedback = Feedback;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.FeedbackData.StopDefaultFeedback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFeedbackTableRowHandle Feedback                       (Parm)
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void UFeedbackData::STATIC_StopDefaultFeedback(const struct FFeedbackTableRowHandle& Feedback, class APlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.FeedbackData.StopDefaultFeedback");

	UFeedbackData_StopDefaultFeedback_Params params;
	params.Feedback = Feedback;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.FeedbackData.PerformFeedbackForAllAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UFeedbackData*           FeedbackData                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SourceLocation                 (Parm, IsPlainOldData)
// struct FRangedDistanceOverrides RangedDistanceOverrides        (ConstParm, Parm)
// bool                           bLoop                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 SourceContext                  (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       ControllerToIgnore             (Parm, ZeroConstructor, IsPlainOldData)
// class UFeedbackData*           OverrideControllerFeedback     (Parm, ZeroConstructor, IsPlainOldData)

void UFeedbackData::STATIC_PerformFeedbackForAllAtLocation(class UFeedbackData* FeedbackData, const struct FVector& SourceLocation, const struct FRangedDistanceOverrides& RangedDistanceOverrides, bool bLoop, class UObject* WorldContextObject, class UObject* SourceContext, class APlayerController* ControllerToIgnore, class UFeedbackData* OverrideControllerFeedback)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.FeedbackData.PerformFeedbackForAllAtLocation");

	UFeedbackData_PerformFeedbackForAllAtLocation_Params params;
	params.FeedbackData = FeedbackData;
	params.SourceLocation = SourceLocation;
	params.RangedDistanceOverrides = RangedDistanceOverrides;
	params.bLoop = bLoop;
	params.WorldContextObject = WorldContextObject;
	params.SourceContext = SourceContext;
	params.ControllerToIgnore = ControllerToIgnore;
	params.OverrideControllerFeedback = OverrideControllerFeedback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.FeedbackData.PerformFeedbackForAll
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFeedbackData*           FeedbackData                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLoop                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 SourceContext                  (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       ControllerToIgnore             (Parm, ZeroConstructor, IsPlainOldData)
// class UFeedbackData*           OverrideControllerFeedback     (Parm, ZeroConstructor, IsPlainOldData)

void UFeedbackData::STATIC_PerformFeedbackForAll(class UFeedbackData* FeedbackData, float Scale, bool bLoop, class UObject* WorldContextObject, class UObject* SourceContext, class APlayerController* ControllerToIgnore, class UFeedbackData* OverrideControllerFeedback)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.FeedbackData.PerformFeedbackForAll");

	UFeedbackData_PerformFeedbackForAll_Params params;
	params.FeedbackData = FeedbackData;
	params.Scale = Scale;
	params.bLoop = bLoop;
	params.WorldContextObject = WorldContextObject;
	params.SourceContext = SourceContext;
	params.ControllerToIgnore = ControllerToIgnore;
	params.OverrideControllerFeedback = OverrideControllerFeedback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.FeedbackData.PerformFeedbackAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UFeedbackData*           FeedbackData                   (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SourceLocation                 (Parm, IsPlainOldData)
// struct FRangedDistanceOverrides RangedDistanceOverrides        (ConstParm, Parm)
// bool                           bLoop                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 SourceContext                  (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       ControllerToIgnore             (Parm, ZeroConstructor, IsPlainOldData)
// class UFeedbackData*           OverrideControllerFeedback     (Parm, ZeroConstructor, IsPlainOldData)

void UFeedbackData::STATIC_PerformFeedbackAtLocation(class UFeedbackData* FeedbackData, class APlayerController* Controller, const struct FVector& SourceLocation, const struct FRangedDistanceOverrides& RangedDistanceOverrides, bool bLoop, class UObject* SourceContext, class APlayerController* ControllerToIgnore, class UFeedbackData* OverrideControllerFeedback)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.FeedbackData.PerformFeedbackAtLocation");

	UFeedbackData_PerformFeedbackAtLocation_Params params;
	params.FeedbackData = FeedbackData;
	params.Controller = Controller;
	params.SourceLocation = SourceLocation;
	params.RangedDistanceOverrides = RangedDistanceOverrides;
	params.bLoop = bLoop;
	params.SourceContext = SourceContext;
	params.ControllerToIgnore = ControllerToIgnore;
	params.OverrideControllerFeedback = OverrideControllerFeedback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.FeedbackData.PerformFeedback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFeedbackData*           FeedbackData                   (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLoop                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 SourceContext                  (Parm, ZeroConstructor, IsPlainOldData)

void UFeedbackData::STATIC_PerformFeedback(class UFeedbackData* FeedbackData, class APlayerController* Controller, float Scale, bool bLoop, class UObject* SourceContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.FeedbackData.PerformFeedback");

	UFeedbackData_PerformFeedback_Params params;
	params.FeedbackData = FeedbackData;
	params.Controller = Controller;
	params.Scale = Scale;
	params.bLoop = bLoop;
	params.SourceContext = SourceContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.FeedbackData.PerformDefaultFeedbackForAllAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFeedbackTableRowHandle Feedback                       (Parm)
// struct FVector                 SourceLocation                 (Parm, IsPlainOldData)
// struct FRangedDistanceOverrides RangedDistanceOverrides        (ConstParm, Parm)
// bool                           bLoop                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 SourceContext                  (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       ControllerToIgnore             (Parm, ZeroConstructor, IsPlainOldData)
// class UFeedbackData*           OverrideControllerFeedback     (Parm, ZeroConstructor, IsPlainOldData)

void UFeedbackData::STATIC_PerformDefaultFeedbackForAllAtLocation(const struct FFeedbackTableRowHandle& Feedback, const struct FVector& SourceLocation, const struct FRangedDistanceOverrides& RangedDistanceOverrides, bool bLoop, class UObject* WorldContextObject, class UObject* SourceContext, class APlayerController* ControllerToIgnore, class UFeedbackData* OverrideControllerFeedback)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.FeedbackData.PerformDefaultFeedbackForAllAtLocation");

	UFeedbackData_PerformDefaultFeedbackForAllAtLocation_Params params;
	params.Feedback = Feedback;
	params.SourceLocation = SourceLocation;
	params.RangedDistanceOverrides = RangedDistanceOverrides;
	params.bLoop = bLoop;
	params.WorldContextObject = WorldContextObject;
	params.SourceContext = SourceContext;
	params.ControllerToIgnore = ControllerToIgnore;
	params.OverrideControllerFeedback = OverrideControllerFeedback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.FeedbackData.PerformDefaultFeedbackForAll
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFeedbackTableRowHandle Feedback                       (Parm)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLoop                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 SourceContext                  (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       ControllerToIgnore             (Parm, ZeroConstructor, IsPlainOldData)
// class UFeedbackData*           OverrideControllerFeedback     (Parm, ZeroConstructor, IsPlainOldData)

void UFeedbackData::STATIC_PerformDefaultFeedbackForAll(const struct FFeedbackTableRowHandle& Feedback, float Scale, bool bLoop, class UObject* WorldContextObject, class UObject* SourceContext, class APlayerController* ControllerToIgnore, class UFeedbackData* OverrideControllerFeedback)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.FeedbackData.PerformDefaultFeedbackForAll");

	UFeedbackData_PerformDefaultFeedbackForAll_Params params;
	params.Feedback = Feedback;
	params.Scale = Scale;
	params.bLoop = bLoop;
	params.WorldContextObject = WorldContextObject;
	params.SourceContext = SourceContext;
	params.ControllerToIgnore = ControllerToIgnore;
	params.OverrideControllerFeedback = OverrideControllerFeedback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.FeedbackData.PerformDefaultFeedbackAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFeedbackTableRowHandle Feedback                       (Parm)
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SourceLocation                 (Parm, IsPlainOldData)
// struct FRangedDistanceOverrides RangedDistanceOverrides        (ConstParm, Parm)
// bool                           bLoop                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 SourceContext                  (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       ControllerToIgnore             (Parm, ZeroConstructor, IsPlainOldData)
// class UFeedbackData*           OverrideControllerFeedback     (Parm, ZeroConstructor, IsPlainOldData)

void UFeedbackData::STATIC_PerformDefaultFeedbackAtLocation(const struct FFeedbackTableRowHandle& Feedback, class APlayerController* Controller, const struct FVector& SourceLocation, const struct FRangedDistanceOverrides& RangedDistanceOverrides, bool bLoop, class UObject* SourceContext, class APlayerController* ControllerToIgnore, class UFeedbackData* OverrideControllerFeedback)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.FeedbackData.PerformDefaultFeedbackAtLocation");

	UFeedbackData_PerformDefaultFeedbackAtLocation_Params params;
	params.Feedback = Feedback;
	params.Controller = Controller;
	params.SourceLocation = SourceLocation;
	params.RangedDistanceOverrides = RangedDistanceOverrides;
	params.bLoop = bLoop;
	params.SourceContext = SourceContext;
	params.ControllerToIgnore = ControllerToIgnore;
	params.OverrideControllerFeedback = OverrideControllerFeedback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.FeedbackData.PerformDefaultFeedback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FFeedbackTableRowHandle Feedback                       (Parm)
// class APlayerController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLoop                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 SourceContext                  (Parm, ZeroConstructor, IsPlainOldData)

void UFeedbackData::STATIC_PerformDefaultFeedback(const struct FFeedbackTableRowHandle& Feedback, class APlayerController* Controller, float Scale, bool bLoop, class UObject* SourceContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.FeedbackData.PerformDefaultFeedback");

	UFeedbackData_PerformDefaultFeedback_Params params;
	params.Feedback = Feedback;
	params.Controller = Controller;
	params.Scale = Scale;
	params.bLoop = bLoop;
	params.SourceContext = SourceContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.FeedbackData.GetFeedbackDuration
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFeedbackData*           FeedbackData                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UFeedbackData::STATIC_GetFeedbackDuration(class UFeedbackData* FeedbackData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.FeedbackData.GetFeedbackDuration");

	UFeedbackData_GetFeedbackDuration_Params params;
	params.FeedbackData = FeedbackData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.FeedbackData.GetFeedbackDataRange
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UFeedbackData*           FeedbackData                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          MinRange                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          MaxRange                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFeedbackData::STATIC_GetFeedbackDataRange(class UFeedbackData* FeedbackData, float* MinRange, float* MaxRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.FeedbackData.GetFeedbackDataRange");

	UFeedbackData_GetFeedbackDataRange_Params params;
	params.FeedbackData = FeedbackData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinRange != nullptr)
		*MinRange = params.MinRange;
	if (MaxRange != nullptr)
		*MaxRange = params.MaxRange;
}


// Function GbxGameSystemCore.FXVolumeManager.OnVolumeDestroyed
// (Final, Native, Public)
// Parameters:
// class AActor*                  DestroyedActor                 (Parm, ZeroConstructor, IsPlainOldData)

void UFXVolumeManager::OnVolumeDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.FXVolumeManager.OnVolumeDestroyed");

	UFXVolumeManager_OnVolumeDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.FXVolumeManager.OnPlayerDestroyed
// (Final, Native, Public)
// Parameters:
// class AActor*                  DestroyedActor                 (Parm, ZeroConstructor, IsPlainOldData)

void UFXVolumeManager::OnPlayerDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.FXVolumeManager.OnPlayerDestroyed");

	UFXVolumeManager_OnPlayerDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.FXVolume.OnActorLeftVolume
// (Final, Native, Public)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Other                          (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void AFXVolume::OnActorLeftVolume(class UPrimitiveComponent* OverlappedComponent, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.FXVolume.OnActorLeftVolume");

	AFXVolume_OnActorLeftVolume_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.FXVolume.OnActorEnteredVolume
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     OverlappedComp                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Other                          (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OverlapInfo                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AFXVolume::OnActorEnteredVolume(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.FXVolume.OnActorEnteredVolume");

	AFXVolume_OnActorEnteredVolume_Params params;
	params.OverlappedComp = OverlappedComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.OverlapInfo = OverlapInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GameplayTagContainerComponent.GetGameplayTagContainerFromActor
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// EContainsTagComponent          Branches                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UGameplayTagContainerComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UGameplayTagContainerComponent* UGameplayTagContainerComponent::STATIC_GetGameplayTagContainerFromActor(class AActor* Actor, EContainsTagComponent* Branches)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GameplayTagContainerComponent.GetGameplayTagContainerFromActor");

	UGameplayTagContainerComponent_GetGameplayTagContainerFromActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Branches != nullptr)
		*Branches = params.Branches;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GameplayTask_RunEnvQuery.RunEnvQueryOnLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  QueryOwner                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FEnvQueryParams         QueryParams                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// class UGameplayTask_RunEnvQuery* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameplayTask_RunEnvQuery* UGameplayTask_RunEnvQuery::STATIC_RunEnvQueryOnLocation(class AActor* QueryOwner, const struct FEnvQueryParams& QueryParams, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GameplayTask_RunEnvQuery.RunEnvQueryOnLocation");

	UGameplayTask_RunEnvQuery_RunEnvQueryOnLocation_Params params;
	params.QueryOwner = QueryOwner;
	params.QueryParams = QueryParams;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GameplayTask_RunEnvQuery.RunEnvQueryOnActor
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  QueryOwner                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FEnvQueryParams         QueryParams                    (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UGameplayTask_RunEnvQuery* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameplayTask_RunEnvQuery* UGameplayTask_RunEnvQuery::STATIC_RunEnvQueryOnActor(class AActor* QueryOwner, const struct FEnvQueryParams& QueryParams, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GameplayTask_RunEnvQuery.RunEnvQueryOnActor");

	UGameplayTask_RunEnvQuery_RunEnvQueryOnActor_Params params;
	params.QueryOwner = QueryOwner;
	params.QueryParams = QueryParams;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GameplayTask_RunEnvQuery.RunEnvQuery
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  QueryOwner                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FEnvQueryParams         QueryParams                    (ConstParm, Parm, OutParm, ReferenceParm)
// class UGameplayTask_RunEnvQuery* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameplayTask_RunEnvQuery* UGameplayTask_RunEnvQuery::STATIC_RunEnvQuery(class AActor* QueryOwner, const struct FEnvQueryParams& QueryParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GameplayTask_RunEnvQuery.RunEnvQuery");

	UGameplayTask_RunEnvQuery_RunEnvQuery_Params params;
	params.QueryOwner = QueryOwner;
	params.QueryParams = QueryParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GameplayTask_RunEnvQuery.GetResultLocations
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FEnvQueryResult         QueryResult                    (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FVector>         ResultLocations                (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTask_RunEnvQuery::STATIC_GetResultLocations(const struct FEnvQueryResult& QueryResult, TArray<struct FVector>* ResultLocations)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GameplayTask_RunEnvQuery.GetResultLocations");

	UGameplayTask_RunEnvQuery_GetResultLocations_Params params;
	params.QueryResult = QueryResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultLocations != nullptr)
		*ResultLocations = params.ResultLocations;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GameplayTask_RunEnvQuery.GetResultLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FEnvQueryResult         QueryResult                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 ResultLocation                 (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTask_RunEnvQuery::STATIC_GetResultLocation(const struct FEnvQueryResult& QueryResult, struct FVector* ResultLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GameplayTask_RunEnvQuery.GetResultLocation");

	UGameplayTask_RunEnvQuery_GetResultLocation_Params params;
	params.QueryResult = QueryResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultLocation != nullptr)
		*ResultLocation = params.ResultLocation;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GameplayTask_RunEnvQuery.GetResultActors
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FEnvQueryResult         QueryResult                    (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<class AActor*>          ResultActors                   (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTask_RunEnvQuery::STATIC_GetResultActors(const struct FEnvQueryResult& QueryResult, TArray<class AActor*>* ResultActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GameplayTask_RunEnvQuery.GetResultActors");

	UGameplayTask_RunEnvQuery_GetResultActors_Params params;
	params.QueryResult = QueryResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultActors != nullptr)
		*ResultActors = params.ResultActors;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GameplayTask_RunEnvQuery.GetResultActor
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FEnvQueryResult         QueryResult                    (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  ResultActor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayTask_RunEnvQuery::STATIC_GetResultActor(const struct FEnvQueryResult& QueryResult, class AActor** ResultActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GameplayTask_RunEnvQuery.GetResultActor");

	UGameplayTask_RunEnvQuery_GetResultActor_Params params;
	params.QueryResult = QueryResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultActor != nullptr)
		*ResultActor = params.ResultActor;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GameResourcePoolManagerComponent.RemoveResourcePoolDelegate
// (Final, Native, Public)
// Parameters:
// class UGameResourceData*       InResourceData                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   DelegatePropertyName           (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         ScriptDelegate                 (Parm, ZeroConstructor)

void UGameResourcePoolManagerComponent::RemoveResourcePoolDelegate(class UGameResourceData* InResourceData, const struct FName& DelegatePropertyName, const struct FScriptDelegate& ScriptDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GameResourcePoolManagerComponent.RemoveResourcePoolDelegate");

	UGameResourcePoolManagerComponent_RemoveResourcePoolDelegate_Params params;
	params.InResourceData = InResourceData;
	params.DelegatePropertyName = DelegatePropertyName;
	params.ScriptDelegate = ScriptDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GameResourcePoolManagerComponent.RecalculateAttributeInitializedPoolProperties
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void UGameResourcePoolManagerComponent::RecalculateAttributeInitializedPoolProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GameResourcePoolManagerComponent.RecalculateAttributeInitializedPoolProperties");

	UGameResourcePoolManagerComponent_RecalculateAttributeInitializedPoolProperties_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GameResourcePoolManagerComponent.OnOwnerExperienceLevelChanged
// (Final, Native, Private)
// Parameters:
// int                            OldExperienceLevel             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UGameResourcePoolManagerComponent::OnOwnerExperienceLevelChanged(int OldExperienceLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GameResourcePoolManagerComponent.OnOwnerExperienceLevelChanged");

	UGameResourcePoolManagerComponent_OnOwnerExperienceLevelChanged_Params params;
	params.OldExperienceLevel = OldExperienceLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GameResourcePoolManagerComponent.GetResourcePoolByResource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGameResourceData*       Resource                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameResourcePoolReference ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameResourcePoolReference UGameResourcePoolManagerComponent::GetResourcePoolByResource(class UGameResourceData* Resource)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GameResourcePoolManagerComponent.GetResourcePoolByResource");

	UGameResourcePoolManagerComponent_GetResourcePoolByResource_Params params;
	params.Resource = Resource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GameResourcePoolManagerComponent.CreatePool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGameResourcePoolData*   PoolData                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReinitializeExistingPool      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameResourcePoolReference ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameResourcePoolReference UGameResourcePoolManagerComponent::CreatePool(class UGameResourcePoolData* PoolData, bool bReinitializeExistingPool)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GameResourcePoolManagerComponent.CreatePool");

	UGameResourcePoolManagerComponent_CreatePool_Params params;
	params.PoolData = PoolData;
	params.bReinitializeExistingPool = bReinitializeExistingPool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GameResourcePoolManagerComponent.ClearResourcePoolDelegate
// (Final, Native, Public)
// Parameters:
// class UGameResourceData*       InResourceData                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   DelegatePropertyName           (Parm, ZeroConstructor, IsPlainOldData)

void UGameResourcePoolManagerComponent::ClearResourcePoolDelegate(class UGameResourceData* InResourceData, const struct FName& DelegatePropertyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GameResourcePoolManagerComponent.ClearResourcePoolDelegate");

	UGameResourcePoolManagerComponent_ClearResourcePoolDelegate_Params params;
	params.InResourceData = InResourceData;
	params.DelegatePropertyName = DelegatePropertyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GameResourcePoolManagerComponent.AddResourcePoolDelegate
// (Final, Native, Public)
// Parameters:
// class UGameResourceData*       InResourceData                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   DelegatePropertyName           (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         ScriptDelegate                 (Parm, ZeroConstructor)

void UGameResourcePoolManagerComponent::AddResourcePoolDelegate(class UGameResourceData* InResourceData, const struct FName& DelegatePropertyName, const struct FScriptDelegate& ScriptDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GameResourcePoolManagerComponent.AddResourcePoolDelegate");

	UGameResourcePoolManagerComponent_AddResourcePoolDelegate_Params params;
	params.InResourceData = InResourceData;
	params.DelegatePropertyName = DelegatePropertyName;
	params.ScriptDelegate = ScriptDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.SetResourcePoolValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameResourcePoolReference InPool                         (Parm)
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UGameResourcePoolFunctionLibrary::STATIC_SetResourcePoolValue(const struct FGameResourcePoolReference& InPool, float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.SetResourcePoolValue");

	UGameResourcePoolFunctionLibrary_SetResourcePoolValue_Params params;
	params.InPool = InPool;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.ResetResourcePoolRegenDelayByGameResourceData
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UGameResourceData*       Resource                       (Parm, ZeroConstructor, IsPlainOldData)

void UGameResourcePoolFunctionLibrary::STATIC_ResetResourcePoolRegenDelayByGameResourceData(class AActor* Actor, class UGameResourceData* Resource)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.ResetResourcePoolRegenDelayByGameResourceData");

	UGameResourcePoolFunctionLibrary_ResetResourcePoolRegenDelayByGameResourceData_Params params;
	params.Actor = Actor;
	params.Resource = Resource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.ResetResourcePoolRegenDelay
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameResourcePoolReference InPool                         (Parm)

void UGameResourcePoolFunctionLibrary::STATIC_ResetResourcePoolRegenDelay(const struct FGameResourcePoolReference& InPool)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.ResetResourcePoolRegenDelay");

	UGameResourcePoolFunctionLibrary_ResetResourcePoolRegenDelay_Params params;
	params.InPool = InPool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.RefillResourcePoolByPercentage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameResourcePoolReference InPool                         (Parm)
// float                          Percentage                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxPercentage                  (Parm, ZeroConstructor, IsPlainOldData)

void UGameResourcePoolFunctionLibrary::STATIC_RefillResourcePoolByPercentage(const struct FGameResourcePoolReference& InPool, float Percentage, float MaxPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.RefillResourcePoolByPercentage");

	UGameResourcePoolFunctionLibrary_RefillResourcePoolByPercentage_Params params;
	params.InPool = InPool;
	params.Percentage = Percentage;
	params.MaxPercentage = MaxPercentage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.IsResourcePoolInState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameResourcePoolReference InPool                         (Parm)
// EGameResourcePoolState         InState                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameResourcePoolFunctionLibrary::STATIC_IsResourcePoolInState(const struct FGameResourcePoolReference& InPool, EGameResourcePoolState InState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.IsResourcePoolInState");

	UGameResourcePoolFunctionLibrary_IsResourcePoolInState_Params params;
	params.InPool = InPool;
	params.InState = InState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.GetDelegatePrefixForResourceEvent
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGameResourceUserEvent  InResourceUserEvent            (Parm, OutParm)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UGameResourcePoolFunctionLibrary::STATIC_GetDelegatePrefixForResourceEvent(struct FGameResourceUserEvent* InResourceUserEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.GetDelegatePrefixForResourceEvent");

	UGameResourcePoolFunctionLibrary_GetDelegatePrefixForResourceEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InResourceUserEvent != nullptr)
		*InResourceUserEvent = params.InResourceUserEvent;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.EqualEqual_ResourcePoolReference
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameResourcePoolReference A                              (Parm)
// struct FGameResourcePoolReference B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameResourcePoolFunctionLibrary::STATIC_EqualEqual_ResourcePoolReference(const struct FGameResourcePoolReference& A, const struct FGameResourcePoolReference& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.EqualEqual_ResourcePoolReference");

	UGameResourcePoolFunctionLibrary_EqualEqual_ResourcePoolReference_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.EqualEqual_ResourcePoolData
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameResourcePoolReference ResourcePoolReference          (Parm)
// class UGameResourcePoolData*   ResourcePoolData               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameResourcePoolFunctionLibrary::STATIC_EqualEqual_ResourcePoolData(const struct FGameResourcePoolReference& ResourcePoolReference, class UGameResourcePoolData* ResourcePoolData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.EqualEqual_ResourcePoolData");

	UGameResourcePoolFunctionLibrary_EqualEqual_ResourcePoolData_Params params;
	params.ResourcePoolReference = ResourcePoolReference;
	params.ResourcePoolData = ResourcePoolData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.EqualEqual_ResourceData
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameResourcePoolReference ResourcePoolReference          (Parm)
// class UGameResourceData*       ResourceData                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameResourcePoolFunctionLibrary::STATIC_EqualEqual_ResourceData(const struct FGameResourcePoolReference& ResourcePoolReference, class UGameResourceData* ResourceData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.EqualEqual_ResourceData");

	UGameResourcePoolFunctionLibrary_EqualEqual_ResourceData_Params params;
	params.ResourcePoolReference = ResourcePoolReference;
	params.ResourceData = ResourceData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.DrainResourcePoolByPercentage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameResourcePoolReference InPool                         (Parm)
// float                          Percentage                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          MinPercentage                  (Parm, ZeroConstructor, IsPlainOldData)

void UGameResourcePoolFunctionLibrary::STATIC_DrainResourcePoolByPercentage(const struct FGameResourcePoolReference& InPool, float Percentage, float MinPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.DrainResourcePoolByPercentage");

	UGameResourcePoolFunctionLibrary_DrainResourcePoolByPercentage_Params params;
	params.InPool = InPool;
	params.Percentage = Percentage;
	params.MinPercentage = MinPercentage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.DeleteResourcePool
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameResourcePoolReference InPool                         (Parm, OutParm, ReferenceParm)

void UGameResourcePoolFunctionLibrary::STATIC_DeleteResourcePool(struct FGameResourcePoolReference* InPool)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.DeleteResourcePool");

	UGameResourcePoolFunctionLibrary_DeleteResourcePool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InPool != nullptr)
		*InPool = params.InPool;
}


// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.ClearResourcePoolRegenDelayByGameResourceData
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UGameResourceData*       Resource                       (Parm, ZeroConstructor, IsPlainOldData)

void UGameResourcePoolFunctionLibrary::STATIC_ClearResourcePoolRegenDelayByGameResourceData(class AActor* Actor, class UGameResourceData* Resource)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.ClearResourcePoolRegenDelayByGameResourceData");

	UGameResourcePoolFunctionLibrary_ClearResourcePoolRegenDelayByGameResourceData_Params params;
	params.Actor = Actor;
	params.Resource = Resource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.ClearResourcePoolRegenDelay
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameResourcePoolReference InPool                         (Parm)

void UGameResourcePoolFunctionLibrary::STATIC_ClearResourcePoolRegenDelay(const struct FGameResourcePoolReference& InPool)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.ClearResourcePoolRegenDelay");

	UGameResourcePoolFunctionLibrary_ClearResourcePoolRegenDelay_Params params;
	params.InPool = InPool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.BreakResourcePoolReference
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameResourcePoolReference InPool                         (Parm)
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          CurrentValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          MinValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          MaxValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGameResourcePoolFunctionLibrary::STATIC_BreakResourcePoolReference(const struct FGameResourcePoolReference& InPool, bool* bValid, float* CurrentValue, float* MinValue, float* MaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.BreakResourcePoolReference");

	UGameResourcePoolFunctionLibrary_BreakResourcePoolReference_Params params;
	params.InPool = InPool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
	if (CurrentValue != nullptr)
		*CurrentValue = params.CurrentValue;
	if (MinValue != nullptr)
		*MinValue = params.MinValue;
	if (MaxValue != nullptr)
		*MaxValue = params.MaxValue;
}


// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.AdjustResourcePoolValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameResourcePoolReference InPool                         (Parm)
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UGameResourcePoolFunctionLibrary::STATIC_AdjustResourcePoolValue(const struct FGameResourcePoolReference& InPool, float InValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.AdjustResourcePoolValue");

	UGameResourcePoolFunctionLibrary_AdjustResourcePoolValue_Params params;
	params.InPool = InPool;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GameStatsComponent.UpdateStat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGameStatData*           GameStat                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UGameStatsComponent::UpdateStat(class UGameStatData* GameStat, int NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GameStatsComponent.UpdateStat");

	UGameStatsComponent_UpdateStat_Params params;
	params.GameStat = GameStat;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GameStatsComponent.IncrementStat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGameStatData*           GameStat                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)

void UGameStatsComponent::IncrementStat(class UGameStatData* GameStat, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GameStatsComponent.IncrementStat");

	UGameStatsComponent_IncrementStat_Params params;
	params.GameStat = GameStat;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GameStatsComponent.GetStatValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGameStatData*           GameStat                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameStatsComponent::GetStatValue(class UGameStatData* GameStat)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GameStatsComponent.GetStatValue");

	UGameStatsComponent_GetStatValue_Params params;
	params.GameStat = GameStat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GameStatsComponent.GetGameStats
// (Final, Native, Public, Const)
// Parameters:
// TArray<struct FGameStat>       ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FGameStat> UGameStatsComponent::GetGameStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GameStatsComponent.GetGameStats");

	UGameStatsComponent_GetGameStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GameStatsManager.UpdateStat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  StatContext                    (Parm, ZeroConstructor, IsPlainOldData)
// class UGameStatData*           GameStat                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatsManager::UpdateStat(class AActor* StatContext, class UGameStatData* GameStat, int NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GameStatsManager.UpdateStat");

	AGameStatsManager_UpdateStat_Params params;
	params.StatContext = StatContext;
	params.GameStat = GameStat;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GameStatsManager.IncrementStat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  StatContext                    (Parm, ZeroConstructor, IsPlainOldData)
// class UGameStatData*           GameStat                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            IncrementAmount                (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatsManager::IncrementStat(class AActor* StatContext, class UGameStatData* GameStat, int IncrementAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GameStatsManager.IncrementStat");

	AGameStatsManager_IncrementStat_Params params;
	params.StatContext = StatContext;
	params.GameStat = GameStat;
	params.IncrementAmount = IncrementAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GameStatsManager.GetStatValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  StatContext                    (Parm, ZeroConstructor, IsPlainOldData)
// class UGameStatData*           GameStat                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AGameStatsManager::GetStatValue(class AActor* StatContext, class UGameStatData* GameStat)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GameStatsManager.GetStatValue");

	AGameStatsManager_GetStatValue_Params params;
	params.StatContext = StatContext;
	params.GameStat = GameStat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxAction_AICharge.OnStrike
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UGbxAction_AICharge::OnStrike(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction_AICharge.OnStrike");

	UGbxAction_AICharge_OnStrike_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxAction_AICharge.OnStopForFriendly
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UGbxAction_AICharge::OnStopForFriendly(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction_AICharge.OnStopForFriendly");

	UGbxAction_AICharge_OnStopForFriendly_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxAction_AICharge.OnReachCliff
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UGbxAction_AICharge::OnReachCliff(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction_AICharge.OnReachCliff");

	UGbxAction_AICharge_OnReachCliff_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxAction_AICharge.OnMiss
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UGbxAction_AICharge::OnMiss(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction_AICharge.OnMiss");

	UGbxAction_AICharge_OnMiss_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxAction_AICharge.OnLoop
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UGbxAction_AICharge::OnLoop(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction_AICharge.OnLoop");

	UGbxAction_AICharge_OnLoop_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxAction_AICharge.OnHitWall
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UGbxAction_AICharge::OnHitWall(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAction_AICharge.OnHitWall");

	UGbxAction_AICharge_OnHitWall_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.StretchBonesBlueprintLibrary.SetStretchBonesTarget
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<struct FGbxActionRegister> GbxActionRegisters             (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetPosition                 (Parm, IsPlainOldData)
// TArray<struct FGbxActionRegister> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FGbxActionRegister> UStretchBonesBlueprintLibrary::STATIC_SetStretchBonesTarget(class AActor* TargetActor, const struct FVector& TargetPosition, TArray<struct FGbxActionRegister>* GbxActionRegisters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.StretchBonesBlueprintLibrary.SetStretchBonesTarget");

	UStretchBonesBlueprintLibrary_SetStretchBonesTarget_Params params;
	params.TargetActor = TargetActor;
	params.TargetPosition = TargetPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GbxActionRegisters != nullptr)
		*GbxActionRegisters = params.GbxActionRegisters;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.StretchBonesBlueprintLibrary.SetStretchBonesDistance
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FGbxActionRegister> GbxActionRegisters             (Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGbxActionRegister> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FGbxActionRegister> UStretchBonesBlueprintLibrary::STATIC_SetStretchBonesDistance(float Distance, TArray<struct FGbxActionRegister>* GbxActionRegisters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.StretchBonesBlueprintLibrary.SetStretchBonesDistance");

	UStretchBonesBlueprintLibrary_SetStretchBonesDistance_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GbxActionRegisters != nullptr)
		*GbxActionRegisters = params.GbxActionRegisters;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxActionBlueprintLibrary.StopLoopingActionClass
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ActionClass                    (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxActionBlueprintLibrary::STATIC_StopLoopingActionClass(class UClass* ActionClass, class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxActionBlueprintLibrary.StopLoopingActionClass");

	UGbxActionBlueprintLibrary_StopLoopingActionClass_Params params;
	params.ActionClass = ActionClass;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxActionBlueprintLibrary.StopActionSlot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   ActionSlotName                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxActionBlueprintLibrary::STATIC_StopActionSlot(const struct FName& ActionSlotName, class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxActionBlueprintLibrary.StopActionSlot");

	UGbxActionBlueprintLibrary_StopActionSlot_Params params;
	params.ActionSlotName = ActionSlotName;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxActionBlueprintLibrary.StopActions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxActionBlueprintLibrary::STATIC_StopActions(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxActionBlueprintLibrary.StopActions");

	UGbxActionBlueprintLibrary_StopActions_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxActionBlueprintLibrary.StopActionClass
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ActionClass                    (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxActionBlueprintLibrary::STATIC_StopActionClass(class UClass* ActionClass, class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxActionBlueprintLibrary.StopActionClass");

	UGbxActionBlueprintLibrary_StopActionClass_Params params;
	params.ActionClass = ActionClass;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxActionBlueprintLibrary.SetObjectGbxActionRegister
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FGbxActionRegister> GbxActionRegisters             (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName                   RegisterKey                    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReplicates                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGbxActionRegister> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FGbxActionRegister> UGbxActionBlueprintLibrary::STATIC_SetObjectGbxActionRegister(const struct FName& RegisterKey, class UObject* Value, bool bReplicates, TArray<struct FGbxActionRegister>* GbxActionRegisters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxActionBlueprintLibrary.SetObjectGbxActionRegister");

	UGbxActionBlueprintLibrary_SetObjectGbxActionRegister_Params params;
	params.RegisterKey = RegisterKey;
	params.Value = Value;
	params.bReplicates = bReplicates;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GbxActionRegisters != nullptr)
		*GbxActionRegisters = params.GbxActionRegisters;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxActionBlueprintLibrary.SetNameGbxActionRegister
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FGbxActionRegister> GbxActionRegisters             (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName                   RegisterKey                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReplicates                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGbxActionRegister> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FGbxActionRegister> UGbxActionBlueprintLibrary::STATIC_SetNameGbxActionRegister(const struct FName& RegisterKey, const struct FName& Value, bool bReplicates, TArray<struct FGbxActionRegister>* GbxActionRegisters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxActionBlueprintLibrary.SetNameGbxActionRegister");

	UGbxActionBlueprintLibrary_SetNameGbxActionRegister_Params params;
	params.RegisterKey = RegisterKey;
	params.Value = Value;
	params.bReplicates = bReplicates;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GbxActionRegisters != nullptr)
		*GbxActionRegisters = params.GbxActionRegisters;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxActionBlueprintLibrary.SetIntGbxActionRegister
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FGbxActionRegister> GbxActionRegisters             (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName                   RegisterKey                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReplicates                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGbxActionRegister> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FGbxActionRegister> UGbxActionBlueprintLibrary::STATIC_SetIntGbxActionRegister(const struct FName& RegisterKey, int Value, bool bReplicates, TArray<struct FGbxActionRegister>* GbxActionRegisters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxActionBlueprintLibrary.SetIntGbxActionRegister");

	UGbxActionBlueprintLibrary_SetIntGbxActionRegister_Params params;
	params.RegisterKey = RegisterKey;
	params.Value = Value;
	params.bReplicates = bReplicates;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GbxActionRegisters != nullptr)
		*GbxActionRegisters = params.GbxActionRegisters;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxActionBlueprintLibrary.SetFloatGbxActionRegister
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FGbxActionRegister> GbxActionRegisters             (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName                   RegisterKey                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReplicates                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGbxActionRegister> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FGbxActionRegister> UGbxActionBlueprintLibrary::STATIC_SetFloatGbxActionRegister(const struct FName& RegisterKey, float Value, bool bReplicates, TArray<struct FGbxActionRegister>* GbxActionRegisters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxActionBlueprintLibrary.SetFloatGbxActionRegister");

	UGbxActionBlueprintLibrary_SetFloatGbxActionRegister_Params params;
	params.RegisterKey = RegisterKey;
	params.Value = Value;
	params.bReplicates = bReplicates;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GbxActionRegisters != nullptr)
		*GbxActionRegisters = params.GbxActionRegisters;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_UpdateActionPlayRate
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UGbxAction*              Action                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          PlayRate                       (Parm, ZeroConstructor, IsPlainOldData)

void UGbxActionBlueprintLibrary::STATIC_K2_UpdateActionPlayRate(class UGbxAction* Action, float PlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_UpdateActionPlayRate");

	UGbxActionBlueprintLibrary_K2_UpdateActionPlayRate_Params params;
	params.Action = Action;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_UpdateActionDirection
// (Final, Native, Static, Private, HasDefaults, BlueprintCallable)
// Parameters:
// class UGbxAction*              Action                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (Parm, IsPlainOldData)

void UGbxActionBlueprintLibrary::STATIC_K2_UpdateActionDirection(class UGbxAction* Action, const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_UpdateActionDirection");

	UGbxActionBlueprintLibrary_K2_UpdateActionDirection_Params params;
	params.Action = Action;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_StopActionObj
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UGbxAction*              Action                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxActionBlueprintLibrary::STATIC_K2_StopActionObj(class UGbxAction* Action, class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_StopActionObj");

	UGbxActionBlueprintLibrary_K2_StopActionObj_Params params;
	params.Action = Action;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_ShowGbxActionScreenLogs
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bShowLogsOnScreen              (Parm, ZeroConstructor, IsPlainOldData)

void UGbxActionBlueprintLibrary::STATIC_K2_ShowGbxActionScreenLogs(bool bShowLogsOnScreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_ShowGbxActionScreenLogs");

	UGbxActionBlueprintLibrary_K2_ShowGbxActionScreenLogs_Params params;
	params.bShowLogsOnScreen = bShowLogsOnScreen;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_Resume
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UGbxAction*              Action                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxActionBlueprintLibrary::STATIC_K2_Resume(class UGbxAction* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_Resume");

	UGbxActionBlueprintLibrary_K2_Resume_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_ReplicatedProceedToNextSection
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UGbxAction*              Action                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxActionBlueprintLibrary::STATIC_K2_ReplicatedProceedToNextSection(class UGbxAction* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_ReplicatedProceedToNextSection");

	UGbxActionBlueprintLibrary_K2_ReplicatedProceedToNextSection_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_ReplicatedJumpToNextSection
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UGbxAction*              Action                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxActionBlueprintLibrary::STATIC_K2_ReplicatedJumpToNextSection(class UGbxAction* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_ReplicatedJumpToNextSection");

	UGbxActionBlueprintLibrary_K2_ReplicatedJumpToNextSection_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_ProceedToNextSection
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UGbxAction*              Action                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxActionBlueprintLibrary::STATIC_K2_ProceedToNextSection(class UGbxAction* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_ProceedToNextSection");

	UGbxActionBlueprintLibrary_K2_ProceedToNextSection_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_Pause
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UGbxAction*              Action                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxActionBlueprintLibrary::STATIC_K2_Pause(class UGbxAction* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_Pause");

	UGbxActionBlueprintLibrary_K2_Pause_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_JumpToNextSection
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UGbxAction*              Action                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxActionBlueprintLibrary::STATIC_K2_JumpToNextSection(class UGbxAction* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_JumpToNextSection");

	UGbxActionBlueprintLibrary_K2_JumpToNextSection_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_GetTimeRemaining
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UGbxAction*              Target                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGbxActionBlueprintLibrary::STATIC_K2_GetTimeRemaining(class UGbxAction* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_GetTimeRemaining");

	UGbxActionBlueprintLibrary_K2_GetTimeRemaining_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_GetMaxCurrentTime
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UGbxAction*              Action                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGbxActionBlueprintLibrary::STATIC_K2_GetMaxCurrentTime(class UGbxAction* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_GetMaxCurrentTime");

	UGbxActionBlueprintLibrary_K2_GetMaxCurrentTime_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_GetActionByClass
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ActionClass                    (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxAction*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGbxAction* UGbxActionBlueprintLibrary::STATIC_K2_GetActionByClass(class UClass* ActionClass, class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_GetActionByClass");

	UGbxActionBlueprintLibrary_K2_GetActionByClass_Params params;
	params.ActionClass = ActionClass;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxActionBlueprintLibrary.GetSummary_AnimActionDef
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimActionDef          AnimActionDef                  (ConstParm, Parm, OutParm, ReferenceParm)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UGbxActionBlueprintLibrary::STATIC_GetSummary_AnimActionDef(const struct FAnimActionDef& AnimActionDef)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxActionBlueprintLibrary.GetSummary_AnimActionDef");

	UGbxActionBlueprintLibrary_GetSummary_AnimActionDef_Params params;
	params.AnimActionDef = AnimActionDef;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxActionBlueprintLibrary.GetKeyedActionClass
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag            ActionKey                      (Parm)
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UGbxActionBlueprintLibrary::STATIC_GetKeyedActionClass(const struct FGameplayTag& ActionKey, class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxActionBlueprintLibrary.GetKeyedActionClass");

	UGbxActionBlueprintLibrary_GetKeyedActionClass_Params params;
	params.ActionKey = ActionKey;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxActionComponent.UpdateActionRemoteServer
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// struct FActionState_Base       ActionData                     (Parm)

void UGbxActionComponent::UpdateActionRemoteServer(const struct FActionState_Base& ActionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxActionComponent.UpdateActionRemoteServer");

	UGbxActionComponent_UpdateActionRemoteServer_Params params;
	params.ActionData = ActionData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxActionComponent.StopOnRemoteServer
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// int                            ManagerRepId                   (Parm, ZeroConstructor, IsPlainOldData)
// EGbxActionEndState             EndState                       (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UGbxActionComponent::StopOnRemoteServer(int ManagerRepId, EGbxActionEndState EndState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxActionComponent.StopOnRemoteServer");

	UGbxActionComponent_StopOnRemoteServer_Params params;
	params.ManagerRepId = ManagerRepId;
	params.EndState = EndState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxActionComponent.StopLoopingActionClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ActionClass                    (Parm, ZeroConstructor, IsPlainOldData)

void UGbxActionComponent::StopLoopingActionClass(class UClass* ActionClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxActionComponent.StopLoopingActionClass");

	UGbxActionComponent_StopLoopingActionClass_Params params;
	params.ActionClass = ActionClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxActionComponent.StopActionSlot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   ActionSlotName                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UGbxActionComponent::StopActionSlot(const struct FName& ActionSlotName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxActionComponent.StopActionSlot");

	UGbxActionComponent_StopActionSlot_Params params;
	params.ActionSlotName = ActionSlotName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxActionComponent.StopActions
// (Final, Native, Public, BlueprintCallable)

void UGbxActionComponent::StopActions()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxActionComponent.StopActions");

	UGbxActionComponent_StopActions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxActionComponent.StopActionClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ActionClass                    (Parm, ZeroConstructor, IsPlainOldData)

void UGbxActionComponent::StopActionClass(class UClass* ActionClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxActionComponent.StopActionClass");

	UGbxActionComponent_StopActionClass_Params params;
	params.ActionClass = ActionClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxActionComponent.PlayOnRemoteServer
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// class UClass*                  ActionClass                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FActionState_Base       ActionData                     (Parm)

void UGbxActionComponent::PlayOnRemoteServer(class UClass* ActionClass, const struct FActionState_Base& ActionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxActionComponent.PlayOnRemoteServer");

	UGbxActionComponent_PlayOnRemoteServer_Params params;
	params.ActionClass = ActionClass;
	params.ActionData = ActionData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxActionComponent.OnComponentUnregistered
// (Final, Native, Private)
// Parameters:
// class UActorComponent*         ActorComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGbxActionComponent::OnComponentUnregistered(class UActorComponent* ActorComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxActionComponent.OnComponentUnregistered");

	UGbxActionComponent_OnComponentUnregistered_Params params;
	params.ActorComponent = ActorComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxActionComponent.OnComponentDetached
// (Final, Native, Private)
// Parameters:
// class USceneComponent*         SceneComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGbxActionComponent::OnComponentDetached(class USceneComponent* SceneComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxActionComponent.OnComponentDetached");

	UGbxActionComponent_OnComponentDetached_Params params;
	params.SceneComponent = SceneComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxActionComponent.OnComponentAttached
// (Final, Native, Private)
// Parameters:
// class USceneComponent*         SceneComponent                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGbxActionComponent::OnComponentAttached(class USceneComponent* SceneComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxActionComponent.OnComponentAttached");

	UGbxActionComponent_OnComponentAttached_Params params;
	params.SceneComponent = SceneComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxActionComponent.NotifyInterruptRequest
// (Final, Native, Public)

void UGbxActionComponent::NotifyInterruptRequest()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxActionComponent.NotifyInterruptRequest");

	UGbxActionComponent_NotifyInterruptRequest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxActionComponent.K2_Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  ActionClass                    (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxAction*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGbxAction* UGbxActionComponent::K2_Play(class UClass* ActionClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxActionComponent.K2_Play");

	UGbxActionComponent_K2_Play_Params params;
	params.ActionClass = ActionClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxActionComponent.K2_IsPlayingObj
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGbxAction*              Action                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxActionComponent::K2_IsPlayingObj(class UGbxAction* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxActionComponent.K2_IsPlayingObj");

	UGbxActionComponent_K2_IsPlayingObj_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxActionComponent.K2_GetActionBySlot
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ActionSlotName                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxAction*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGbxAction* UGbxActionComponent::K2_GetActionBySlot(const struct FName& ActionSlotName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxActionComponent.K2_GetActionBySlot");

	UGbxActionComponent_K2_GetActionBySlot_Params params;
	params.ActionSlotName = ActionSlotName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxActionComponent.K2_GetActionByClass
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ActionClass                    (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxAction*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGbxAction* UGbxActionComponent::K2_GetActionByClass(class UClass* ActionClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxActionComponent.K2_GetActionByClass");

	UGbxActionComponent_K2_GetActionByClass_Params params;
	params.ActionClass = ActionClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxActionComponent.IsPlayingSlot
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ActionSlotName                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxActionComponent::IsPlayingSlot(const struct FName& ActionSlotName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxActionComponent.IsPlayingSlot");

	UGbxActionComponent_IsPlayingSlot_Params params;
	params.ActionSlotName = ActionSlotName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxActionComponent.IsPlayingClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ActionClass                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxActionComponent::IsPlayingClass(class UClass* ActionClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxActionComponent.IsPlayingClass");

	UGbxActionComponent_IsPlayingClass_Params params;
	params.ActionClass = ActionClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxAnimBlueprintProfile.RebuildBoneLists
// (Final, Native, Private)

void UGbxAnimBlueprintProfile::RebuildBoneLists()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAnimBlueprintProfile.RebuildBoneLists");

	UGbxAnimBlueprintProfile_RebuildBoneLists_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxAnimBlueprintProfile.AnimBlueprintImportFunction
// (Final, Native, Private)
// Parameters:
// EAnimBPProfileImport           ImportType                     (Parm, ZeroConstructor, IsPlainOldData)

void UGbxAnimBlueprintProfile::AnimBlueprintImportFunction(EAnimBPProfileImport ImportType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAnimBlueprintProfile.AnimBlueprintImportFunction");

	UGbxAnimBlueprintProfile_AnimBlueprintImportFunction_Params params;
	params.ImportType = ImportType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxAttributeData.CanSetBaseValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxAttributeData::CanSetBaseValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAttributeData.CanSetBaseValue");

	UGbxAttributeData_CanSetBaseValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxAttributeData.CanBindToOnChangedEvent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxAttributeData::CanBindToOnChangedEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAttributeData.CanBindToOnChangedEvent");

	UGbxAttributeData_CanBindToOnChangedEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxAttributeData.CanAddModifiers
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxAttributeData::CanAddModifiers()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAttributeData.CanAddModifiers");

	UGbxAttributeData_CanAddModifiers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxAttributeData.CanAddAndRemoveModifiers
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxAttributeData::CanAddAndRemoveModifiers()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAttributeData.CanAddAndRemoveModifiers");

	UGbxAttributeData_CanAddAndRemoveModifiers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.UnbindFromOnAttributeChanged
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGbxAttributeDelegateBindingHandle BindingHandle                  (ConstParm, Parm, OutParm, ReferenceParm)

void UGbxAttributeFunctionLibrary::STATIC_UnbindFromOnAttributeChanged(const struct FGbxAttributeDelegateBindingHandle& BindingHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAttributeFunctionLibrary.UnbindFromOnAttributeChanged");

	UGbxAttributeFunctionLibrary_UnbindFromOnAttributeChanged_Params params;
	params.BindingHandle = BindingHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.UnbindEventFromOnIntegerAttributeChanged
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGbxAttributeInteger    Attribute                      (Parm, OutParm, ReferenceParm)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UGbxAttributeFunctionLibrary::STATIC_UnbindEventFromOnIntegerAttributeChanged(const struct FScriptDelegate& Delegate, struct FGbxAttributeInteger* Attribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAttributeFunctionLibrary.UnbindEventFromOnIntegerAttributeChanged");

	UGbxAttributeFunctionLibrary_UnbindEventFromOnIntegerAttributeChanged_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Attribute != nullptr)
		*Attribute = params.Attribute;
}


// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.UnbindEventFromOnFloatAttributeChanged
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGbxAttributeFloat      Attribute                      (Parm, OutParm, ReferenceParm)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UGbxAttributeFunctionLibrary::STATIC_UnbindEventFromOnFloatAttributeChanged(const struct FScriptDelegate& Delegate, struct FGbxAttributeFloat* Attribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAttributeFunctionLibrary.UnbindEventFromOnFloatAttributeChanged");

	UGbxAttributeFunctionLibrary_UnbindEventFromOnFloatAttributeChanged_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Attribute != nullptr)
		*Attribute = params.Attribute;
}


// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.UnbindAllEventsFromOnIntegerAttributeChanged
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGbxAttributeInteger    Attribute                      (Parm, OutParm, ReferenceParm)

void UGbxAttributeFunctionLibrary::STATIC_UnbindAllEventsFromOnIntegerAttributeChanged(struct FGbxAttributeInteger* Attribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAttributeFunctionLibrary.UnbindAllEventsFromOnIntegerAttributeChanged");

	UGbxAttributeFunctionLibrary_UnbindAllEventsFromOnIntegerAttributeChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Attribute != nullptr)
		*Attribute = params.Attribute;
}


// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.UnbindAllEventsFromOnFloatAttributeChanged
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGbxAttributeFloat      Attribute                      (Parm, OutParm, ReferenceParm)

void UGbxAttributeFunctionLibrary::STATIC_UnbindAllEventsFromOnFloatAttributeChanged(struct FGbxAttributeFloat* Attribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAttributeFunctionLibrary.UnbindAllEventsFromOnFloatAttributeChanged");

	UGbxAttributeFunctionLibrary_UnbindAllEventsFromOnFloatAttributeChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Attribute != nullptr)
		*Attribute = params.Attribute;
}


// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.RemoveMultipleAttributeModifiers
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FGbxAttributeModifierHandle> ModifierHandles                (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UGbxAttributeFunctionLibrary::STATIC_RemoveMultipleAttributeModifiers(TArray<struct FGbxAttributeModifierHandle>* ModifierHandles)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAttributeFunctionLibrary.RemoveMultipleAttributeModifiers");

	UGbxAttributeFunctionLibrary_RemoveMultipleAttributeModifiers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ModifierHandles != nullptr)
		*ModifierHandles = params.ModifierHandles;
}


// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.RemoveModifierFromGbxAttribute
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UGbxAttributeData*       Attribute                      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ContextSource                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxAttributeModifierHandle ModifierHandle                 (Parm, OutParm, ReferenceParm)
// EGbxAttributeModifierActionExecOutput ModifierActionResult           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGbxAttributeFunctionLibrary::STATIC_RemoveModifierFromGbxAttribute(class UGbxAttributeData* Attribute, class UObject* ContextSource, struct FGbxAttributeModifierHandle* ModifierHandle, EGbxAttributeModifierActionExecOutput* ModifierActionResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAttributeFunctionLibrary.RemoveModifierFromGbxAttribute");

	UGbxAttributeFunctionLibrary_RemoveModifierFromGbxAttribute_Params params;
	params.Attribute = Attribute;
	params.ContextSource = ContextSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ModifierHandle != nullptr)
		*ModifierHandle = params.ModifierHandle;
	if (ModifierActionResult != nullptr)
		*ModifierActionResult = params.ModifierActionResult;
}


// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.RemoveAttributeModifier
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGbxAttributeModifierHandle ModifierHandle                 (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxAttributeFunctionLibrary::STATIC_RemoveAttributeModifier(struct FGbxAttributeModifierHandle* ModifierHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAttributeFunctionLibrary.RemoveAttributeModifier");

	UGbxAttributeFunctionLibrary_RemoveAttributeModifier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ModifierHandle != nullptr)
		*ModifierHandle = params.ModifierHandle;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.RefreshBindingToOnAttributeChangedEvent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGbxAttributeDelegateBindingHandle BindingHandle                  (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 ContextSource                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxAttributeDelegateBindingHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGbxAttributeDelegateBindingHandle UGbxAttributeFunctionLibrary::STATIC_RefreshBindingToOnAttributeChangedEvent(const struct FGbxAttributeDelegateBindingHandle& BindingHandle, class UObject* ContextSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAttributeFunctionLibrary.RefreshBindingToOnAttributeChangedEvent");

	UGbxAttributeFunctionLibrary_RefreshBindingToOnAttributeChangedEvent_Params params;
	params.BindingHandle = BindingHandle;
	params.ContextSource = ContextSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.MakeGbxAttributeInteger
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            BaseValue                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxAttributeInteger    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGbxAttributeInteger UGbxAttributeFunctionLibrary::STATIC_MakeGbxAttributeInteger(int BaseValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAttributeFunctionLibrary.MakeGbxAttributeInteger");

	UGbxAttributeFunctionLibrary_MakeGbxAttributeInteger_Params params;
	params.BaseValue = BaseValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.MakeGbxAttributeFloat
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          BaseValue                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxAttributeFloat      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGbxAttributeFloat UGbxAttributeFunctionLibrary::STATIC_MakeGbxAttributeFloat(float BaseValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAttributeFunctionLibrary.MakeGbxAttributeFloat");

	UGbxAttributeFunctionLibrary_MakeGbxAttributeFloat_Params params;
	params.BaseValue = BaseValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.GetValueOfAttributeAsInteger
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UGbxAttributeData*       Attribute                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ContextSource                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            DefaultValue                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGbxAttributeFunctionLibrary::STATIC_GetValueOfAttributeAsInteger(class UGbxAttributeData* Attribute, class UObject* ContextSource, int DefaultValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAttributeFunctionLibrary.GetValueOfAttributeAsInteger");

	UGbxAttributeFunctionLibrary_GetValueOfAttributeAsInteger_Params params;
	params.Attribute = Attribute;
	params.ContextSource = ContextSource;
	params.DefaultValue = DefaultValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.GetValueOfAttributeAsBoolean
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UGbxAttributeData*       Attribute                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ContextSource                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DefaultValue                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxAttributeFunctionLibrary::STATIC_GetValueOfAttributeAsBoolean(class UGbxAttributeData* Attribute, class UObject* ContextSource, bool DefaultValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAttributeFunctionLibrary.GetValueOfAttributeAsBoolean");

	UGbxAttributeFunctionLibrary_GetValueOfAttributeAsBoolean_Params params;
	params.Attribute = Attribute;
	params.ContextSource = ContextSource;
	params.DefaultValue = DefaultValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.GetValueOfAttribute
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UGbxAttributeData*       Attribute                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ContextSource                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          DefaultValue                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGbxAttributeFunctionLibrary::STATIC_GetValueOfAttribute(class UGbxAttributeData* Attribute, class UObject* ContextSource, float DefaultValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAttributeFunctionLibrary.GetValueOfAttribute");

	UGbxAttributeFunctionLibrary_GetValueOfAttribute_Params params;
	params.Attribute = Attribute;
	params.ContextSource = ContextSource;
	params.DefaultValue = DefaultValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.GetValueFromAttributeDefinedRow
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDataTableRowHandle     RowHandle                      (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 ContextSource                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGbxAttributeFunctionLibrary::STATIC_GetValueFromAttributeDefinedRow(const struct FDataTableRowHandle& RowHandle, class UObject* ContextSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAttributeFunctionLibrary.GetValueFromAttributeDefinedRow");

	UGbxAttributeFunctionLibrary_GetValueFromAttributeDefinedRow_Params params;
	params.RowHandle = RowHandle;
	params.ContextSource = ContextSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.EvaluateAttributeInitializer
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  Initializer                    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ContextSource                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGbxAttributeFunctionLibrary::STATIC_EvaluateAttributeInitializer(class UClass* Initializer, class UObject* ContextSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAttributeFunctionLibrary.EvaluateAttributeInitializer");

	UGbxAttributeFunctionLibrary_EvaluateAttributeInitializer_Params params;
	params.Initializer = Initializer;
	params.ContextSource = ContextSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.EvaluateAttributeInitializationData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAttributeInitializationData InitializationData             (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 ContextSource                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGbxAttributeFunctionLibrary::STATIC_EvaluateAttributeInitializationData(const struct FAttributeInitializationData& InitializationData, class UObject* ContextSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAttributeFunctionLibrary.EvaluateAttributeInitializationData");

	UGbxAttributeFunctionLibrary_EvaluateAttributeInitializationData_Params params;
	params.InitializationData = InitializationData;
	params.ContextSource = ContextSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.EqualEqual_GbxAttributeIntegerValue
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGbxAttributeInteger    A                              (ConstParm, Parm, OutParm, ReferenceParm)
// int                            B                              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxAttributeFunctionLibrary::STATIC_EqualEqual_GbxAttributeIntegerValue(const struct FGbxAttributeInteger& A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAttributeFunctionLibrary.EqualEqual_GbxAttributeIntegerValue");

	UGbxAttributeFunctionLibrary_EqualEqual_GbxAttributeIntegerValue_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.EqualEqual_GbxAttributeInteger
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGbxAttributeInteger    A                              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGbxAttributeInteger    B                              (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxAttributeFunctionLibrary::STATIC_EqualEqual_GbxAttributeInteger(const struct FGbxAttributeInteger& A, const struct FGbxAttributeInteger& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAttributeFunctionLibrary.EqualEqual_GbxAttributeInteger");

	UGbxAttributeFunctionLibrary_EqualEqual_GbxAttributeInteger_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.EqualEqual_GbxAttributeFloatValue
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGbxAttributeFloat      A                              (ConstParm, Parm, OutParm, ReferenceParm)
// float                          B                              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxAttributeFunctionLibrary::STATIC_EqualEqual_GbxAttributeFloatValue(const struct FGbxAttributeFloat& A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAttributeFunctionLibrary.EqualEqual_GbxAttributeFloatValue");

	UGbxAttributeFunctionLibrary_EqualEqual_GbxAttributeFloatValue_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.EqualEqual_GbxAttributeFloat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGbxAttributeFloat      A                              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGbxAttributeFloat      B                              (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxAttributeFunctionLibrary::STATIC_EqualEqual_GbxAttributeFloat(const struct FGbxAttributeFloat& A, const struct FGbxAttributeFloat& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAttributeFunctionLibrary.EqualEqual_GbxAttributeFloat");

	UGbxAttributeFunctionLibrary_EqualEqual_GbxAttributeFloat_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.Conv_GbxAttributeModifierHandleToString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGbxAttributeModifierHandle Attribute                      (ConstParm, Parm, OutParm, ReferenceParm)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UGbxAttributeFunctionLibrary::STATIC_Conv_GbxAttributeModifierHandleToString(const struct FGbxAttributeModifierHandle& Attribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAttributeFunctionLibrary.Conv_GbxAttributeModifierHandleToString");

	UGbxAttributeFunctionLibrary_Conv_GbxAttributeModifierHandleToString_Params params;
	params.Attribute = Attribute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.Conv_GbxAttributeIntegerToString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGbxAttributeInteger    Attribute                      (ConstParm, Parm, OutParm, ReferenceParm)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UGbxAttributeFunctionLibrary::STATIC_Conv_GbxAttributeIntegerToString(const struct FGbxAttributeInteger& Attribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAttributeFunctionLibrary.Conv_GbxAttributeIntegerToString");

	UGbxAttributeFunctionLibrary_Conv_GbxAttributeIntegerToString_Params params;
	params.Attribute = Attribute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.Conv_GbxAttributeIntegerToInteger
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGbxAttributeInteger    Attribute                      (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGbxAttributeFunctionLibrary::STATIC_Conv_GbxAttributeIntegerToInteger(const struct FGbxAttributeInteger& Attribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAttributeFunctionLibrary.Conv_GbxAttributeIntegerToInteger");

	UGbxAttributeFunctionLibrary_Conv_GbxAttributeIntegerToInteger_Params params;
	params.Attribute = Attribute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.Conv_GbxAttributeFloatToString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGbxAttributeFloat      Attribute                      (ConstParm, Parm, OutParm, ReferenceParm)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UGbxAttributeFunctionLibrary::STATIC_Conv_GbxAttributeFloatToString(const struct FGbxAttributeFloat& Attribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAttributeFunctionLibrary.Conv_GbxAttributeFloatToString");

	UGbxAttributeFunctionLibrary_Conv_GbxAttributeFloatToString_Params params;
	params.Attribute = Attribute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.Conv_GbxAttributeFloatToFloat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGbxAttributeFloat      Attribute                      (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGbxAttributeFunctionLibrary::STATIC_Conv_GbxAttributeFloatToFloat(const struct FGbxAttributeFloat& Attribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAttributeFunctionLibrary.Conv_GbxAttributeFloatToFloat");

	UGbxAttributeFunctionLibrary_Conv_GbxAttributeFloatToFloat_Params params;
	params.Attribute = Attribute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.Conv_AttributeInitializationDataToString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAttributeInitializationData InitData                       (ConstParm, Parm, OutParm, ReferenceParm)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UGbxAttributeFunctionLibrary::STATIC_Conv_AttributeInitializationDataToString(const struct FAttributeInitializationData& InitData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAttributeFunctionLibrary.Conv_AttributeInitializationDataToString");

	UGbxAttributeFunctionLibrary_Conv_AttributeInitializationDataToString_Params params;
	params.InitData = InitData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.BreakGbxAttributeInteger
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGbxAttributeInteger    Attribute                      (ConstParm, Parm, OutParm, ReferenceParm)
// int                            Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            BaseValue                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGbxAttributeFunctionLibrary::STATIC_BreakGbxAttributeInteger(const struct FGbxAttributeInteger& Attribute, int* Value, int* BaseValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAttributeFunctionLibrary.BreakGbxAttributeInteger");

	UGbxAttributeFunctionLibrary_BreakGbxAttributeInteger_Params params;
	params.Attribute = Attribute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
	if (BaseValue != nullptr)
		*BaseValue = params.BaseValue;
}


// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.BreakGbxAttributeFloat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGbxAttributeFloat      Attribute                      (ConstParm, Parm, OutParm, ReferenceParm)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          BaseValue                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGbxAttributeFunctionLibrary::STATIC_BreakGbxAttributeFloat(const struct FGbxAttributeFloat& Attribute, float* Value, float* BaseValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAttributeFunctionLibrary.BreakGbxAttributeFloat");

	UGbxAttributeFunctionLibrary_BreakGbxAttributeFloat_Params params;
	params.Attribute = Attribute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
	if (BaseValue != nullptr)
		*BaseValue = params.BaseValue;
}


// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.BindEventToOnIntegerAttributeChanged
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGbxAttributeInteger    Attribute                      (Parm, OutParm, ReferenceParm)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UGbxAttributeFunctionLibrary::STATIC_BindEventToOnIntegerAttributeChanged(const struct FScriptDelegate& Delegate, struct FGbxAttributeInteger* Attribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAttributeFunctionLibrary.BindEventToOnIntegerAttributeChanged");

	UGbxAttributeFunctionLibrary_BindEventToOnIntegerAttributeChanged_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Attribute != nullptr)
		*Attribute = params.Attribute;
}


// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.BindEventToOnFloatAttributeChanged
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGbxAttributeFloat      Attribute                      (Parm, OutParm, ReferenceParm)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UGbxAttributeFunctionLibrary::STATIC_BindEventToOnFloatAttributeChanged(const struct FScriptDelegate& Delegate, struct FGbxAttributeFloat* Attribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAttributeFunctionLibrary.BindEventToOnFloatAttributeChanged");

	UGbxAttributeFunctionLibrary_BindEventToOnFloatAttributeChanged_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Attribute != nullptr)
		*Attribute = params.Attribute;
}


// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.BindEventToOnAttributeChanged
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UGbxAttributeData*       Attribute                      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ContextSource                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         Delegate                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FGbxAttributeDelegateBindingHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGbxAttributeDelegateBindingHandle UGbxAttributeFunctionLibrary::STATIC_BindEventToOnAttributeChanged(class UGbxAttributeData* Attribute, class UObject* ContextSource, const struct FScriptDelegate& Delegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAttributeFunctionLibrary.BindEventToOnAttributeChanged");

	UGbxAttributeFunctionLibrary_BindEventToOnAttributeChanged_Params params;
	params.Attribute = Attribute;
	params.ContextSource = ContextSource;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.ApplyMultipleAttributeEffects
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FAttributeEffectData> Effects                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 ModifierValueContext           (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 AttributeToModifyContextSource (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGbxAttributeModifierHandle> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FGbxAttributeModifierHandle> UGbxAttributeFunctionLibrary::STATIC_ApplyMultipleAttributeEffects(TArray<struct FAttributeEffectData> Effects, class UObject* ModifierValueContext, class UObject* AttributeToModifyContextSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAttributeFunctionLibrary.ApplyMultipleAttributeEffects");

	UGbxAttributeFunctionLibrary_ApplyMultipleAttributeEffects_Params params;
	params.Effects = Effects;
	params.ModifierValueContext = ModifierValueContext;
	params.AttributeToModifyContextSource = AttributeToModifyContextSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.ApplyMultipleAttributeBaseValueData
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FAttributeBaseValueData> BaseValueData                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 AttributeToSetContextSource    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ValueContext                   (Parm, ZeroConstructor, IsPlainOldData)

void UGbxAttributeFunctionLibrary::STATIC_ApplyMultipleAttributeBaseValueData(TArray<struct FAttributeBaseValueData> BaseValueData, class UObject* AttributeToSetContextSource, class UObject* ValueContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAttributeFunctionLibrary.ApplyMultipleAttributeBaseValueData");

	UGbxAttributeFunctionLibrary_ApplyMultipleAttributeBaseValueData_Params params;
	params.BaseValueData = BaseValueData;
	params.AttributeToSetContextSource = AttributeToSetContextSource;
	params.ValueContext = ValueContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.ApplyAttributeEffect
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAttributeEffectData    Effect                         (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 ModifierValueContext           (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 AttributeToModifyContextSource (Parm, ZeroConstructor, IsPlainOldData)
// EGbxAttributeModifierActionExecOutput ModifierActionResult           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FGbxAttributeModifierHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGbxAttributeModifierHandle UGbxAttributeFunctionLibrary::STATIC_ApplyAttributeEffect(const struct FAttributeEffectData& Effect, class UObject* ModifierValueContext, class UObject* AttributeToModifyContextSource, EGbxAttributeModifierActionExecOutput* ModifierActionResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAttributeFunctionLibrary.ApplyAttributeEffect");

	UGbxAttributeFunctionLibrary_ApplyAttributeEffect_Params params;
	params.Effect = Effect;
	params.ModifierValueContext = ModifierValueContext;
	params.AttributeToModifyContextSource = AttributeToModifyContextSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ModifierActionResult != nullptr)
		*ModifierActionResult = params.ModifierActionResult;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.ApplyAttributeBaseValueData
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAttributeBaseValueData BaseValueData                  (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 AttributeToSetContextSource    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ValueContext                   (Parm, ZeroConstructor, IsPlainOldData)
// EGbxAttributeModifierActionExecOutput ModifierActionResult           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGbxAttributeFunctionLibrary::STATIC_ApplyAttributeBaseValueData(const struct FAttributeBaseValueData& BaseValueData, class UObject* AttributeToSetContextSource, class UObject* ValueContext, EGbxAttributeModifierActionExecOutput* ModifierActionResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAttributeFunctionLibrary.ApplyAttributeBaseValueData");

	UGbxAttributeFunctionLibrary_ApplyAttributeBaseValueData_Params params;
	params.BaseValueData = BaseValueData;
	params.AttributeToSetContextSource = AttributeToSetContextSource;
	params.ValueContext = ValueContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ModifierActionResult != nullptr)
		*ModifierActionResult = params.ModifierActionResult;
}


// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.AddModifierToGbxAttribute
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UGbxAttributeData*       Attribute                      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ContextSource                  (Parm, ZeroConstructor, IsPlainOldData)
// EGbxAttributeModifierType      ModifierType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ModifierValue                  (Parm, ZeroConstructor, IsPlainOldData)
// EGbxAttributeModifierActionExecOutput ModifierActionResult           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FGbxAttributeModifierHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGbxAttributeModifierHandle UGbxAttributeFunctionLibrary::STATIC_AddModifierToGbxAttribute(class UGbxAttributeData* Attribute, class UObject* ContextSource, EGbxAttributeModifierType ModifierType, float ModifierValue, EGbxAttributeModifierActionExecOutput* ModifierActionResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAttributeFunctionLibrary.AddModifierToGbxAttribute");

	UGbxAttributeFunctionLibrary_AddModifierToGbxAttribute_Params params;
	params.Attribute = Attribute;
	params.ContextSource = ContextSource;
	params.ModifierType = ModifierType;
	params.ModifierValue = ModifierValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ModifierActionResult != nullptr)
		*ModifierActionResult = params.ModifierActionResult;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxAttributesComponent.IsAttributeSetClassUnrelatedToExistingSet
// (Final, Native, Public, Const)
// Parameters:
// class UClass*                  AttributeSetClass              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxAttributesComponent::IsAttributeSetClassUnrelatedToExistingSet(class UClass* AttributeSetClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxAttributesComponent.IsAttributeSetClassUnrelatedToExistingSet");

	UGbxAttributesComponent_IsAttributeSetClassUnrelatedToExistingSet_Params params;
	params.AttributeSetClass = AttributeSetClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsVector
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGbxBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UBlackboardComponent*    BlackboardComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 Value                          (Parm, IsPlainOldData)

void UGbxBlackboardKeySelectorExt::STATIC_SetValueAsVector(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, const struct FVector& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsVector");

	UGbxBlackboardKeySelectorExt_SetValueAsVector_Params params;
	params.Key = Key;
	params.BlackboardComponent = BlackboardComponent;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsTargetActorInfo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGbxBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UBlackboardComponent*    BlackboardComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FTargetActorInfo        Value                          (ConstParm, Parm, OutParm, ReferenceParm)

void UGbxBlackboardKeySelectorExt::STATIC_SetValueAsTargetActorInfo(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, const struct FTargetActorInfo& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsTargetActorInfo");

	UGbxBlackboardKeySelectorExt_SetValueAsTargetActorInfo_Params params;
	params.Key = Key;
	params.BlackboardComponent = BlackboardComponent;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGbxBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UBlackboardComponent*    BlackboardComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class FString                  Value                          (Parm, ZeroConstructor)

void UGbxBlackboardKeySelectorExt::STATIC_SetValueAsString(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, const class FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsString");

	UGbxBlackboardKeySelectorExt_SetValueAsString_Params params;
	params.Key = Key;
	params.BlackboardComponent = BlackboardComponent;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsRotator
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGbxBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UBlackboardComponent*    BlackboardComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FRotator                Value                          (Parm, IsPlainOldData)

void UGbxBlackboardKeySelectorExt::STATIC_SetValueAsRotator(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, const struct FRotator& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsRotator");

	UGbxBlackboardKeySelectorExt_SetValueAsRotator_Params params;
	params.Key = Key;
	params.BlackboardComponent = BlackboardComponent;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsObject
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGbxBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UBlackboardComponent*    BlackboardComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UGbxBlackboardKeySelectorExt::STATIC_SetValueAsObject(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, class UObject* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsObject");

	UGbxBlackboardKeySelectorExt_SetValueAsObject_Params params;
	params.Key = Key;
	params.BlackboardComponent = BlackboardComponent;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGbxBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UBlackboardComponent*    BlackboardComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UGbxBlackboardKeySelectorExt::STATIC_SetValueAsName(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, const struct FName& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsName");

	UGbxBlackboardKeySelectorExt_SetValueAsName_Params params;
	params.Key = Key;
	params.BlackboardComponent = BlackboardComponent;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsInt
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGbxBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UBlackboardComponent*    BlackboardComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UGbxBlackboardKeySelectorExt::STATIC_SetValueAsInt(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsInt");

	UGbxBlackboardKeySelectorExt_SetValueAsInt_Params params;
	params.Key = Key;
	params.BlackboardComponent = BlackboardComponent;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsFloat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGbxBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UBlackboardComponent*    BlackboardComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UGbxBlackboardKeySelectorExt::STATIC_SetValueAsFloat(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsFloat");

	UGbxBlackboardKeySelectorExt_SetValueAsFloat_Params params;
	params.Key = Key;
	params.BlackboardComponent = BlackboardComponent;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsFlag
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGbxBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UBlackboardComponent*    BlackboardComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void UGbxBlackboardKeySelectorExt::STATIC_SetValueAsFlag(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, bool Value, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsFlag");

	UGbxBlackboardKeySelectorExt_SetValueAsFlag_Params params;
	params.Key = Key;
	params.BlackboardComponent = BlackboardComponent;
	params.Value = Value;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsEnum
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGbxBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UBlackboardComponent*    BlackboardComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// unsigned char                  Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UGbxBlackboardKeySelectorExt::STATIC_SetValueAsEnum(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, unsigned char Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsEnum");

	UGbxBlackboardKeySelectorExt_SetValueAsEnum_Params params;
	params.Key = Key;
	params.BlackboardComponent = BlackboardComponent;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsClass
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGbxBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UBlackboardComponent*    BlackboardComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UClass*                  Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UGbxBlackboardKeySelectorExt::STATIC_SetValueAsClass(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, class UClass* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsClass");

	UGbxBlackboardKeySelectorExt_SetValueAsClass_Params params;
	params.Key = Key;
	params.BlackboardComponent = BlackboardComponent;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsBool
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGbxBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UBlackboardComponent*    BlackboardComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UGbxBlackboardKeySelectorExt::STATIC_SetValueAsBool(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent, bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsBool");

	UGbxBlackboardKeySelectorExt_SetValueAsBool_Params params;
	params.Key = Key;
	params.BlackboardComponent = BlackboardComponent;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsVector
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGbxBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UBlackboardComponent*    BlackboardComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UGbxBlackboardKeySelectorExt::STATIC_GetValueAsVector(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsVector");

	UGbxBlackboardKeySelectorExt_GetValueAsVector_Params params;
	params.Key = Key;
	params.BlackboardComponent = BlackboardComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsTargetActorInfo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGbxBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UBlackboardComponent*    BlackboardComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FTargetActorInfo        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTargetActorInfo UGbxBlackboardKeySelectorExt::STATIC_GetValueAsTargetActorInfo(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsTargetActorInfo");

	UGbxBlackboardKeySelectorExt_GetValueAsTargetActorInfo_Params params;
	params.Key = Key;
	params.BlackboardComponent = BlackboardComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGbxBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UBlackboardComponent*    BlackboardComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UGbxBlackboardKeySelectorExt::STATIC_GetValueAsString(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsString");

	UGbxBlackboardKeySelectorExt_GetValueAsString_Params params;
	params.Key = Key;
	params.BlackboardComponent = BlackboardComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsRotator
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGbxBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UBlackboardComponent*    BlackboardComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UGbxBlackboardKeySelectorExt::STATIC_GetValueAsRotator(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsRotator");

	UGbxBlackboardKeySelectorExt_GetValueAsRotator_Params params;
	params.Key = Key;
	params.BlackboardComponent = BlackboardComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsObject
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGbxBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UBlackboardComponent*    BlackboardComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UGbxBlackboardKeySelectorExt::STATIC_GetValueAsObject(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsObject");

	UGbxBlackboardKeySelectorExt_GetValueAsObject_Params params;
	params.Key = Key;
	params.BlackboardComponent = BlackboardComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGbxBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UBlackboardComponent*    BlackboardComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UGbxBlackboardKeySelectorExt::STATIC_GetValueAsName(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsName");

	UGbxBlackboardKeySelectorExt_GetValueAsName_Params params;
	params.Key = Key;
	params.BlackboardComponent = BlackboardComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsInt
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGbxBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UBlackboardComponent*    BlackboardComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGbxBlackboardKeySelectorExt::STATIC_GetValueAsInt(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsInt");

	UGbxBlackboardKeySelectorExt_GetValueAsInt_Params params;
	params.Key = Key;
	params.BlackboardComponent = BlackboardComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsFloat
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGbxBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UBlackboardComponent*    BlackboardComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGbxBlackboardKeySelectorExt::STATIC_GetValueAsFloat(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsFloat");

	UGbxBlackboardKeySelectorExt_GetValueAsFloat_Params params;
	params.Key = Key;
	params.BlackboardComponent = BlackboardComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsEnum
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGbxBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UBlackboardComponent*    BlackboardComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UGbxBlackboardKeySelectorExt::STATIC_GetValueAsEnum(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsEnum");

	UGbxBlackboardKeySelectorExt_GetValueAsEnum_Params params;
	params.Key = Key;
	params.BlackboardComponent = BlackboardComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsClass
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGbxBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UBlackboardComponent*    BlackboardComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UGbxBlackboardKeySelectorExt::STATIC_GetValueAsClass(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsClass");

	UGbxBlackboardKeySelectorExt_GetValueAsClass_Params params;
	params.Key = Key;
	params.BlackboardComponent = BlackboardComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsBool
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGbxBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UBlackboardComponent*    BlackboardComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxBlackboardKeySelectorExt::STATIC_GetValueAsBool(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsBool");

	UGbxBlackboardKeySelectorExt_GetValueAsBool_Params params;
	params.Key = Key;
	params.BlackboardComponent = BlackboardComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsActor
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGbxBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UBlackboardComponent*    BlackboardComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UGbxBlackboardKeySelectorExt::STATIC_GetValueAsActor(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsActor");

	UGbxBlackboardKeySelectorExt_GetValueAsActor_Params params;
	params.Key = Key;
	params.BlackboardComponent = BlackboardComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetPropertyDescription
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGbxBlackboardKeySelector BBKey                          (ConstParm, Parm, OutParm, ReferenceParm)
// class UProperty*               Property                       (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UGbxBlackboardKeySelectorExt::STATIC_GetPropertyDescription(const struct FGbxBlackboardKeySelector& BBKey, class UProperty* Property)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetPropertyDescription");

	UGbxBlackboardKeySelectorExt_GetPropertyDescription_Params params;
	params.BBKey = BBKey;
	params.Property = Property;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.ClearValue
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGbxBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class UBlackboardComponent*    BlackboardComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGbxBlackboardKeySelectorExt::STATIC_ClearValue(const struct FGbxBlackboardKeySelector& Key, class UBlackboardComponent* BlackboardComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.ClearValue");

	UGbxBlackboardKeySelectorExt_ClearValue_Params params;
	params.Key = Key;
	params.BlackboardComponent = BlackboardComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxCondition_Blueprint.EvaluateCondition
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 OptionalContext                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxCondition_Blueprint::EvaluateCondition(class UObject* Context, class UObject* OptionalContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCondition_Blueprint.EvaluateCondition");

	UGbxCondition_Blueprint_EvaluateCondition_Params params;
	params.Context = Context;
	params.OptionalContext = OptionalContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCondition_List.RequiresNativeClass
// (Native, Public, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxCondition_List::RequiresNativeClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCondition_List.RequiresNativeClass");

	UGbxCondition_List_RequiresNativeClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxCondition_List.GetRequiredInterface
// (Native, Public, Const)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UGbxCondition_List::GetRequiredInterface()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxCondition_List.GetRequiredInterface");

	UGbxCondition_List_GetRequiredInterface_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxDataTableFunctionLibrary.GetDataTableValueFromHandle
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDataTableValueHandle   ValueHandle                    (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 ContextSource                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          DefaultValue                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGbxDataTableFunctionLibrary::STATIC_GetDataTableValueFromHandle(const struct FDataTableValueHandle& ValueHandle, class UObject* ContextSource, float DefaultValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxDataTableFunctionLibrary.GetDataTableValueFromHandle");

	UGbxDataTableFunctionLibrary_GetDataTableValueFromHandle_Params params;
	params.ValueHandle = ValueHandle;
	params.ContextSource = ContextSource;
	params.DefaultValue = DefaultValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxDataTableFunctionLibrary.GetDataTableValue
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UDataTable*              Table                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ValueName                      (Parm, ZeroConstructor, IsPlainOldData)
// class UScriptStruct*           ValueInStructType              (Parm, ZeroConstructor, IsPlainOldData)
// int                            OutValue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxDataTableFunctionLibrary::STATIC_GetDataTableValue(class UDataTable* Table, const struct FName& RowName, const struct FName& ValueName, class UScriptStruct* ValueInStructType, int* OutValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxDataTableFunctionLibrary.GetDataTableValue");

	UGbxDataTableFunctionLibrary_GetDataTableValue_Params params;
	params.Table = Table;
	params.RowName = RowName;
	params.ValueName = ValueName;
	params.ValueInStructType = ValueInStructType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutValue != nullptr)
		*OutValue = params.OutValue;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxDataTableFunctionLibrary.Conv_DataTableValueHandleToString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDataTableValueHandle   ValueHandle                    (ConstParm, Parm, OutParm, ReferenceParm)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UGbxDataTableFunctionLibrary::STATIC_Conv_DataTableValueHandleToString(const struct FDataTableValueHandle& ValueHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxDataTableFunctionLibrary.Conv_DataTableValueHandleToString");

	UGbxDataTableFunctionLibrary_Conv_DataTableValueHandleToString_Params params;
	params.ValueHandle = ValueHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxEqsRenderingComponent.GetAvailableEnvQueryParamRefNames
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// TArray<class FString>          Names                          (Parm, OutParm, ZeroConstructor)

void UGbxEqsRenderingComponent::GetAvailableEnvQueryParamRefNames(TArray<class FString>* Names)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxEqsRenderingComponent.GetAvailableEnvQueryParamRefNames");

	UGbxEqsRenderingComponent_GetAvailableEnvQueryParamRefNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Names != nullptr)
		*Names = params.Names;
}


// Function GbxGameSystemCore.GbxFeedbackBase.StopGbxFeedback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGbxFeedbackBase*        FeedbackData                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AGbxPlayerController*    Controller                     (Parm, ZeroConstructor, IsPlainOldData)

void UGbxFeedbackBase::STATIC_StopGbxFeedback(class UGbxFeedbackBase* FeedbackData, class UObject* WorldContextObject, class AGbxPlayerController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxFeedbackBase.StopGbxFeedback");

	UGbxFeedbackBase_StopGbxFeedback_Params params;
	params.FeedbackData = FeedbackData;
	params.WorldContextObject = WorldContextObject;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxFeedbackBase.PlayGbxFeedbackData3D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UGbxFeedbackBase*        FeedbackData                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AGbxPlayerController*    Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SourceLocation                 (Parm, IsPlainOldData)
// bool                           bLoop                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIgnoreController              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 SourceContext                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          EffectFalloffMinDistance       (Parm, ZeroConstructor, IsPlainOldData)
// float                          EffectFalloffMaxDistance       (Parm, ZeroConstructor, IsPlainOldData)

void UGbxFeedbackBase::STATIC_PlayGbxFeedbackData3D(class UGbxFeedbackBase* FeedbackData, class UObject* WorldContextObject, class AGbxPlayerController* Controller, const struct FVector& SourceLocation, bool bLoop, bool bIgnoreController, float Scale, class UObject* SourceContext, float EffectFalloffMinDistance, float EffectFalloffMaxDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxFeedbackBase.PlayGbxFeedbackData3D");

	UGbxFeedbackBase_PlayGbxFeedbackData3D_Params params;
	params.FeedbackData = FeedbackData;
	params.WorldContextObject = WorldContextObject;
	params.Controller = Controller;
	params.SourceLocation = SourceLocation;
	params.bLoop = bLoop;
	params.bIgnoreController = bIgnoreController;
	params.Scale = Scale;
	params.SourceContext = SourceContext;
	params.EffectFalloffMinDistance = EffectFalloffMinDistance;
	params.EffectFalloffMaxDistance = EffectFalloffMaxDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxFeedbackBase.PlayGbxFeedbackData2D
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGbxFeedbackBase*        FeedbackData                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AGbxPlayerController*    Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLoop                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIgnoreController              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 SourceContext                  (Parm, ZeroConstructor, IsPlainOldData)

void UGbxFeedbackBase::STATIC_PlayGbxFeedbackData2D(class UGbxFeedbackBase* FeedbackData, class UObject* WorldContextObject, class AGbxPlayerController* Controller, bool bLoop, bool bIgnoreController, float Scale, class UObject* SourceContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxFeedbackBase.PlayGbxFeedbackData2D");

	UGbxFeedbackBase_PlayGbxFeedbackData2D_Params params;
	params.FeedbackData = FeedbackData;
	params.WorldContextObject = WorldContextObject;
	params.Controller = Controller;
	params.bLoop = bLoop;
	params.bIgnoreController = bIgnoreController;
	params.Scale = Scale;
	params.SourceContext = SourceContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxFlagFunctionLibrary.SetFlagValue
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxFlag                Flag                           (Parm, OutParm, ReferenceParm)
// bool                           bNewValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UGbxFlagFunctionLibrary::STATIC_SetFlagValue(class UObject* WorldContextObject, bool bNewValue, struct FGbxFlag* Flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxFlagFunctionLibrary.SetFlagValue");

	UGbxFlagFunctionLibrary_SetFlagValue_Params params;
	params.WorldContextObject = WorldContextObject;
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Flag != nullptr)
		*Flag = params.Flag;
}


// Function GbxGameSystemCore.GbxFlagFunctionLibrary.SetFlagTrueTimed
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxFlag                Flag                           (Parm, OutParm, ReferenceParm)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void UGbxFlagFunctionLibrary::STATIC_SetFlagTrueTimed(class UObject* WorldContextObject, float Duration, struct FGbxFlag* Flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxFlagFunctionLibrary.SetFlagTrueTimed");

	UGbxFlagFunctionLibrary_SetFlagTrueTimed_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Flag != nullptr)
		*Flag = params.Flag;
}


// Function GbxGameSystemCore.GbxFlagFunctionLibrary.SetFlagDataValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxFlagData*            FlagData                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ContextSource                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNewValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UGbxFlagFunctionLibrary::STATIC_SetFlagDataValue(class UObject* WorldContextObject, class UGbxFlagData* FlagData, class UObject* ContextSource, bool bNewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxFlagFunctionLibrary.SetFlagDataValue");

	UGbxFlagFunctionLibrary_SetFlagDataValue_Params params;
	params.WorldContextObject = WorldContextObject;
	params.FlagData = FlagData;
	params.ContextSource = ContextSource;
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxFlagFunctionLibrary.SetFlagDataTrueTimed
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxFlagData*            FlagData                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ContextSource                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void UGbxFlagFunctionLibrary::STATIC_SetFlagDataTrueTimed(class UObject* WorldContextObject, class UGbxFlagData* FlagData, class UObject* ContextSource, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxFlagFunctionLibrary.SetFlagDataTrueTimed");

	UGbxFlagFunctionLibrary_SetFlagDataTrueTimed_Params params;
	params.WorldContextObject = WorldContextObject;
	params.FlagData = FlagData;
	params.ContextSource = ContextSource;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxFlagFunctionLibrary.GetFlagValue
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxFlag                Flag                           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxFlagFunctionLibrary::STATIC_GetFlagValue(class UObject* WorldContextObject, const struct FGbxFlag& Flag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxFlagFunctionLibrary.GetFlagValue");

	UGbxFlagFunctionLibrary_GetFlagValue_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Flag = Flag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxFlagFunctionLibrary.GetFlagDataValue
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxFlagData*            FlagData                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ContextSource                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxFlagFunctionLibrary::STATIC_GetFlagDataValue(class UObject* WorldContextObject, class UGbxFlagData* FlagData, class UObject* ContextSource)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxFlagFunctionLibrary.GetFlagDataValue");

	UGbxFlagFunctionLibrary_GetFlagDataValue_Params params;
	params.WorldContextObject = WorldContextObject;
	params.FlagData = FlagData;
	params.ContextSource = ContextSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxFlagFunctionLibrary.FlagTrueWithin
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxFlag                Flag                           (ConstParm, Parm, OutParm, ReferenceParm)
// float                          CheckTime                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxFlagFunctionLibrary::STATIC_FlagTrueWithin(class UObject* WorldContextObject, const struct FGbxFlag& Flag, float CheckTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxFlagFunctionLibrary.FlagTrueWithin");

	UGbxFlagFunctionLibrary_FlagTrueWithin_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Flag = Flag;
	params.CheckTime = CheckTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxFlagFunctionLibrary.FlagTrueFor
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxFlag                Flag                           (ConstParm, Parm, OutParm, ReferenceParm)
// float                          CheckTime                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxFlagFunctionLibrary::STATIC_FlagTrueFor(class UObject* WorldContextObject, const struct FGbxFlag& Flag, float CheckTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxFlagFunctionLibrary.FlagTrueFor");

	UGbxFlagFunctionLibrary_FlagTrueFor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Flag = Flag;
	params.CheckTime = CheckTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxFlagFunctionLibrary.FlagFalseWithin
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxFlag                Flag                           (ConstParm, Parm, OutParm, ReferenceParm)
// float                          CheckTime                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxFlagFunctionLibrary::STATIC_FlagFalseWithin(class UObject* WorldContextObject, const struct FGbxFlag& Flag, float CheckTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxFlagFunctionLibrary.FlagFalseWithin");

	UGbxFlagFunctionLibrary_FlagFalseWithin_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Flag = Flag;
	params.CheckTime = CheckTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxFlagFunctionLibrary.FlagFalseFor
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxFlag                Flag                           (ConstParm, Parm, OutParm, ReferenceParm)
// float                          CheckTime                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxFlagFunctionLibrary::STATIC_FlagFalseFor(class UObject* WorldContextObject, const struct FGbxFlag& Flag, float CheckTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxFlagFunctionLibrary.FlagFalseFor");

	UGbxFlagFunctionLibrary_FlagFalseFor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Flag = Flag;
	params.CheckTime = CheckTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxFlagFunctionLibrary.FlagDataTrueWithin
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxFlagData*            FlagData                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ContextSource                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          CheckTime                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxFlagFunctionLibrary::STATIC_FlagDataTrueWithin(class UObject* WorldContextObject, class UGbxFlagData* FlagData, class UObject* ContextSource, float CheckTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxFlagFunctionLibrary.FlagDataTrueWithin");

	UGbxFlagFunctionLibrary_FlagDataTrueWithin_Params params;
	params.WorldContextObject = WorldContextObject;
	params.FlagData = FlagData;
	params.ContextSource = ContextSource;
	params.CheckTime = CheckTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxFlagFunctionLibrary.FlagDataTrueFor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxFlagData*            FlagData                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ContextSource                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          CheckTime                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxFlagFunctionLibrary::STATIC_FlagDataTrueFor(class UObject* WorldContextObject, class UGbxFlagData* FlagData, class UObject* ContextSource, float CheckTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxFlagFunctionLibrary.FlagDataTrueFor");

	UGbxFlagFunctionLibrary_FlagDataTrueFor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.FlagData = FlagData;
	params.ContextSource = ContextSource;
	params.CheckTime = CheckTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxFlagFunctionLibrary.FlagDataFalseWithin
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxFlagData*            FlagData                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ContextSource                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          CheckTime                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxFlagFunctionLibrary::STATIC_FlagDataFalseWithin(class UObject* WorldContextObject, class UGbxFlagData* FlagData, class UObject* ContextSource, float CheckTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxFlagFunctionLibrary.FlagDataFalseWithin");

	UGbxFlagFunctionLibrary_FlagDataFalseWithin_Params params;
	params.WorldContextObject = WorldContextObject;
	params.FlagData = FlagData;
	params.ContextSource = ContextSource;
	params.CheckTime = CheckTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxFlagFunctionLibrary.FlagDataFalseFor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxFlagData*            FlagData                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ContextSource                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          CheckTime                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxFlagFunctionLibrary::STATIC_FlagDataFalseFor(class UObject* WorldContextObject, class UGbxFlagData* FlagData, class UObject* ContextSource, float CheckTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxFlagFunctionLibrary.FlagDataFalseFor");

	UGbxFlagFunctionLibrary_FlagDataFalseFor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.FlagData = FlagData;
	params.ContextSource = ContextSource;
	params.CheckTime = CheckTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxGameplayStatics.SetTeamCollisionResponseWith
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TeamActor                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIgnore                        (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameplayStatics::STATIC_SetTeamCollisionResponseWith(class AActor* Actor, class AActor* TeamActor, bool bIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameplayStatics.SetTeamCollisionResponseWith");

	UGbxGameplayStatics_SetTeamCollisionResponseWith_Params params;
	params.Actor = Actor;
	params.TeamActor = TeamActor;
	params.bIgnore = bIgnore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameplayStatics.SetTeamCollisionResponseToChannel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// ETeamCollisionChannel          Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIgnore                        (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameplayStatics::STATIC_SetTeamCollisionResponseToChannel(class AActor* Actor, ETeamCollisionChannel Channel, bool bIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameplayStatics.SetTeamCollisionResponseToChannel");

	UGbxGameplayStatics_SetTeamCollisionResponseToChannel_Params params;
	params.Actor = Actor;
	params.Channel = Channel;
	params.bIgnore = bIgnore;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameplayStatics.SetTeamCollisionChannelFrom
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TeamActor                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOn                            (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameplayStatics::STATIC_SetTeamCollisionChannelFrom(class AActor* Actor, class AActor* TeamActor, bool bOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameplayStatics.SetTeamCollisionChannelFrom");

	UGbxGameplayStatics_SetTeamCollisionChannelFrom_Params params;
	params.Actor = Actor;
	params.TeamActor = TeamActor;
	params.bOn = bOn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameplayStatics.SetTeamCollisionChannel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// ETeamCollisionChannel          Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOn                            (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameplayStatics::STATIC_SetTeamCollisionChannel(class AActor* Actor, ETeamCollisionChannel Channel, bool bOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameplayStatics.SetTeamCollisionChannel");

	UGbxGameplayStatics_SetTeamCollisionChannel_Params params;
	params.Actor = Actor;
	params.Channel = Channel;
	params.bOn = bOn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameplayStatics.SetPlayerMaster
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  AIActor                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  PlayerMaster                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxGameplayStatics::STATIC_SetPlayerMaster(class AActor* AIActor, class AActor* PlayerMaster)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameplayStatics.SetPlayerMaster");

	UGbxGameplayStatics_SetPlayerMaster_Params params;
	params.AIActor = AIActor;
	params.PlayerMaster = PlayerMaster;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxGameplayStatics.SetComponentTeamCollisionResponseWith
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  TeamActor                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIgnore                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPropagateToChildren           (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameplayStatics::STATIC_SetComponentTeamCollisionResponseWith(class USceneComponent* Component, class AActor* TeamActor, bool bIgnore, bool bPropagateToChildren)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameplayStatics.SetComponentTeamCollisionResponseWith");

	UGbxGameplayStatics_SetComponentTeamCollisionResponseWith_Params params;
	params.Component = Component;
	params.TeamActor = TeamActor;
	params.bIgnore = bIgnore;
	params.bPropagateToChildren = bPropagateToChildren;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameplayStatics.SetComponentTeamCollisionResponseToChannel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// ETeamCollisionChannel          Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIgnore                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPropagateToChildren           (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameplayStatics::STATIC_SetComponentTeamCollisionResponseToChannel(class USceneComponent* Component, ETeamCollisionChannel Channel, bool bIgnore, bool bPropagateToChildren)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameplayStatics.SetComponentTeamCollisionResponseToChannel");

	UGbxGameplayStatics_SetComponentTeamCollisionResponseToChannel_Params params;
	params.Component = Component;
	params.Channel = Channel;
	params.bIgnore = bIgnore;
	params.bPropagateToChildren = bPropagateToChildren;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameplayStatics.SetComponentTeamCollisionChannel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// ETeamCollisionChannel          Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOn                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPropagateToChildren           (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameplayStatics::STATIC_SetComponentTeamCollisionChannel(class USceneComponent* Component, ETeamCollisionChannel Channel, bool bOn, bool bPropagateToChildren)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameplayStatics.SetComponentTeamCollisionChannel");

	UGbxGameplayStatics_SetComponentTeamCollisionChannel_Params params;
	params.Component = Component;
	params.Channel = Channel;
	params.bOn = bOn;
	params.bPropagateToChildren = bPropagateToChildren;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameplayStatics.ProjectFromQueryToSimulation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UGbxSkeletalMeshComponent* Component                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BodyName                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 InOutHitPoint                  (Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 InOutHitNormal                 (Parm, OutParm, ReferenceParm, IsPlainOldData)

void UGbxGameplayStatics::STATIC_ProjectFromQueryToSimulation(class UGbxSkeletalMeshComponent* Component, const struct FName& BodyName, struct FVector* InOutHitPoint, struct FVector* InOutHitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameplayStatics.ProjectFromQueryToSimulation");

	UGbxGameplayStatics_ProjectFromQueryToSimulation_Params params;
	params.Component = Component;
	params.BodyName = BodyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InOutHitPoint != nullptr)
		*InOutHitPoint = params.InOutHitPoint;
	if (InOutHitNormal != nullptr)
		*InOutHitNormal = params.InOutHitNormal;
}


// Function GbxGameSystemCore.GbxGameplayStatics.GetPrimaryPlayerController
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APlayerController* UGbxGameplayStatics::STATIC_GetPrimaryPlayerController(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameplayStatics.GetPrimaryPlayerController");

	UGbxGameplayStatics_GetPrimaryPlayerController_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxGameplayStatics.GetAssociatedPrimaryCharacter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class AGbxCharacter*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AGbxCharacter* UGbxGameplayStatics::STATIC_GetAssociatedPrimaryCharacter(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameplayStatics.GetAssociatedPrimaryCharacter");

	UGbxGameplayStatics_GetAssociatedPrimaryCharacter_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxGameplayStatics.AlignTransformToSurface
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform              Transform                      (Parm, IsPlainOldData)
// struct FVector                 SurfaceNormal                  (Parm, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UGbxGameplayStatics::STATIC_AlignTransformToSurface(const struct FTransform& Transform, const struct FVector& SurfaceNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameplayStatics.AlignTransformToSurface");

	UGbxGameplayStatics_AlignTransformToSurface_Params params;
	params.Transform = Transform;
	params.SurfaceNormal = SurfaceNormal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxGameStatsBlueprintLibrary.UpdateStatForParty
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UGameStatData*           StatData                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameStatsBlueprintLibrary::STATIC_UpdateStatForParty(class UObject* WorldContextObject, class UGameStatData* StatData, int NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameStatsBlueprintLibrary.UpdateStatForParty");

	UGbxGameStatsBlueprintLibrary_UpdateStatForParty_Params params;
	params.WorldContextObject = WorldContextObject;
	params.StatData = StatData;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameStatsBlueprintLibrary.UpdateStat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  ContextActor                   (Parm, ZeroConstructor, IsPlainOldData)
// class UGameStatData*           StatData                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameStatsBlueprintLibrary::STATIC_UpdateStat(class AActor* ContextActor, class UGameStatData* StatData, int NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameStatsBlueprintLibrary.UpdateStat");

	UGbxGameStatsBlueprintLibrary_UpdateStat_Params params;
	params.ContextActor = ContextActor;
	params.StatData = StatData;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameStatsBlueprintLibrary.IncrementStatForParty
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UGameStatData*           StatData                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameStatsBlueprintLibrary::STATIC_IncrementStatForParty(class UObject* WorldContextObject, class UGameStatData* StatData, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameStatsBlueprintLibrary.IncrementStatForParty");

	UGbxGameStatsBlueprintLibrary_IncrementStatForParty_Params params;
	params.WorldContextObject = WorldContextObject;
	params.StatData = StatData;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameStatsBlueprintLibrary.IncrementStat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  ContextActor                   (Parm, ZeroConstructor, IsPlainOldData)
// class UGameStatData*           StatData                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameStatsBlueprintLibrary::STATIC_IncrementStat(class AActor* ContextActor, class UGameStatData* StatData, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameStatsBlueprintLibrary.IncrementStat");

	UGbxGameStatsBlueprintLibrary_IncrementStat_Params params;
	params.ContextActor = ContextActor;
	params.StatData = StatData;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameStatsBlueprintLibrary.GetStatValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  ContextActor                   (Parm, ZeroConstructor, IsPlainOldData)
// class UGameStatData*           StatData                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGbxGameStatsBlueprintLibrary::STATIC_GetStatValue(class AActor* ContextActor, class UGameStatData* StatData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameStatsBlueprintLibrary.GetStatValue");

	UGbxGameStatsBlueprintLibrary_GetStatValue_Params params;
	params.ContextActor = ContextActor;
	params.StatData = StatData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxGameStatsBlueprintLibrary.DecrementStatForParty
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UGameStatData*           StatData                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameStatsBlueprintLibrary::STATIC_DecrementStatForParty(class UObject* WorldContextObject, class UGameStatData* StatData, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameStatsBlueprintLibrary.DecrementStatForParty");

	UGbxGameStatsBlueprintLibrary_DecrementStatForParty_Params params;
	params.WorldContextObject = WorldContextObject;
	params.StatData = StatData;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameStatsBlueprintLibrary.DecrementStat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  ContextActor                   (Parm, ZeroConstructor, IsPlainOldData)
// class UGameStatData*           StatData                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameStatsBlueprintLibrary::STATIC_DecrementStat(class AActor* ContextActor, class UGameStatData* StatData, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameStatsBlueprintLibrary.DecrementStat");

	UGbxGameStatsBlueprintLibrary_DecrementStat_Params params;
	params.ContextActor = ContextActor;
	params.StatData = StatData;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.SetComponentPhysicalRotation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     Target                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          PitchRotation                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          YawRotation                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          RollRotation                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_SetComponentPhysicalRotation(class UPrimitiveComponent* Target, float PitchRotation, float YawRotation, float RollRotation, const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.SetComponentPhysicalRotation");

	UGbxGameSystemCoreBlueprintLibrary_SetComponentPhysicalRotation_Params params;
	params.Target = Target;
	params.PitchRotation = PitchRotation;
	params.YawRotation = YawRotation;
	params.RollRotation = RollRotation;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockTurns
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_ResourceUnlockTurns(class AActor* Actor, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockTurns");

	UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockTurns_Params params;
	params.Actor = Actor;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockTickAndRefreshBones
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_ResourceUnlockTickAndRefreshBones(class AActor* Actor, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockTickAndRefreshBones");

	UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockTickAndRefreshBones_Params params;
	params.Actor = Actor;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockRotation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_ResourceUnlockRotation(class AActor* Actor, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockRotation");

	UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockRotation_Params params;
	params.Actor = Actor;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockMovement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_ResourceUnlockMovement(class AActor* Actor, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockMovement");

	UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockMovement_Params params;
	params.Actor = Actor;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockMomentum
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_ResourceUnlockMomentum(class AActor* Actor, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockMomentum");

	UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockMomentum_Params params;
	params.Actor = Actor;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockMantling
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_ResourceUnlockMantling(class AActor* Actor, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockMantling");

	UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockMantling_Params params;
	params.Actor = Actor;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockLookAtTargetLocation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_ResourceUnlockLookAtTargetLocation(class AActor* Actor, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockLookAtTargetLocation");

	UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockLookAtTargetLocation_Params params;
	params.Actor = Actor;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockLookAt
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_ResourceUnlockLookAt(class AActor* Actor, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockLookAt");

	UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockLookAt_Params params;
	params.Actor = Actor;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockJumping
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_ResourceUnlockJumping(class AActor* Actor, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockJumping");

	UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockJumping_Params params;
	params.Actor = Actor;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockHandIk
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_ResourceUnlockHandIk(class AActor* Actor, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockHandIk");

	UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockHandIk_Params params;
	params.Actor = Actor;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockGod
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_ResourceUnlockGod(class AActor* Actor, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockGod");

	UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockGod_Params params;
	params.Actor = Actor;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockFootIkTracing
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_ResourceUnlockFootIkTracing(class AActor* Actor, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockFootIkTracing");

	UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockFootIkTracing_Params params;
	params.Actor = Actor;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockFootIk
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_ResourceUnlockFootIk(class AActor* Actor, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockFootIk");

	UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockFootIk_Params params;
	params.Actor = Actor;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockDodging
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_ResourceUnlockDodging(class AActor* Actor, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockDodging");

	UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockDodging_Params params;
	params.Actor = Actor;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockDemigod
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_ResourceUnlockDemigod(class AActor* Actor, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockDemigod");

	UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockDemigod_Params params;
	params.Actor = Actor;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockCrouching
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_ResourceUnlockCrouching(class AActor* Actor, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockCrouching");

	UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockCrouching_Params params;
	params.Actor = Actor;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockAIThinking
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_ResourceUnlockAIThinking(class AActor* Actor, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockAIThinking");

	UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockAIThinking_Params params;
	params.Actor = Actor;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockAiming
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_ResourceUnlockAiming(class AActor* Actor, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockAiming");

	UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockAiming_Params params;
	params.Actor = Actor;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockTurns
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_ResourceLockTurns(class AActor* Actor, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockTurns");

	UGbxGameSystemCoreBlueprintLibrary_ResourceLockTurns_Params params;
	params.Actor = Actor;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockTickAndRefreshBones
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_ResourceLockTickAndRefreshBones(class AActor* Actor, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockTickAndRefreshBones");

	UGbxGameSystemCoreBlueprintLibrary_ResourceLockTickAndRefreshBones_Params params;
	params.Actor = Actor;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockTargetable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTargetable                    (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_ResourceLockTargetable(class AActor* Actor, const struct FName& Reason, bool bTargetable)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockTargetable");

	UGbxGameSystemCoreBlueprintLibrary_ResourceLockTargetable_Params params;
	params.Actor = Actor;
	params.Reason = Reason;
	params.bTargetable = bTargetable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockRotation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_ResourceLockRotation(class AActor* Actor, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockRotation");

	UGbxGameSystemCoreBlueprintLibrary_ResourceLockRotation_Params params;
	params.Actor = Actor;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockPhysicsRotation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_ResourceLockPhysicsRotation(class AActor* Actor, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockPhysicsRotation");

	UGbxGameSystemCoreBlueprintLibrary_ResourceLockPhysicsRotation_Params params;
	params.Actor = Actor;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockMovement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_ResourceLockMovement(class AActor* Actor, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockMovement");

	UGbxGameSystemCoreBlueprintLibrary_ResourceLockMovement_Params params;
	params.Actor = Actor;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockMomentum
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_ResourceLockMomentum(class AActor* Actor, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockMomentum");

	UGbxGameSystemCoreBlueprintLibrary_ResourceLockMomentum_Params params;
	params.Actor = Actor;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockMantling
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_ResourceLockMantling(class AActor* Actor, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockMantling");

	UGbxGameSystemCoreBlueprintLibrary_ResourceLockMantling_Params params;
	params.Actor = Actor;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockLookAtTargetLocation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_ResourceLockLookAtTargetLocation(class AActor* Actor, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockLookAtTargetLocation");

	UGbxGameSystemCoreBlueprintLibrary_ResourceLockLookAtTargetLocation_Params params;
	params.Actor = Actor;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockLookAt
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_ResourceLockLookAt(class AActor* Actor, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockLookAt");

	UGbxGameSystemCoreBlueprintLibrary_ResourceLockLookAt_Params params;
	params.Actor = Actor;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockJumping
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_ResourceLockJumping(class AActor* Actor, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockJumping");

	UGbxGameSystemCoreBlueprintLibrary_ResourceLockJumping_Params params;
	params.Actor = Actor;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockHandIk
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_ResourceLockHandIk(class AActor* Actor, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockHandIk");

	UGbxGameSystemCoreBlueprintLibrary_ResourceLockHandIk_Params params;
	params.Actor = Actor;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockGod
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_ResourceLockGod(class AActor* Actor, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockGod");

	UGbxGameSystemCoreBlueprintLibrary_ResourceLockGod_Params params;
	params.Actor = Actor;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockFootIkTracing
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_ResourceLockFootIkTracing(class AActor* Actor, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockFootIkTracing");

	UGbxGameSystemCoreBlueprintLibrary_ResourceLockFootIkTracing_Params params;
	params.Actor = Actor;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockFootIk
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_ResourceLockFootIk(class AActor* Actor, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockFootIk");

	UGbxGameSystemCoreBlueprintLibrary_ResourceLockFootIk_Params params;
	params.Actor = Actor;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockDodging
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_ResourceLockDodging(class AActor* Actor, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockDodging");

	UGbxGameSystemCoreBlueprintLibrary_ResourceLockDodging_Params params;
	params.Actor = Actor;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockDemigod
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_ResourceLockDemigod(class AActor* Actor, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockDemigod");

	UGbxGameSystemCoreBlueprintLibrary_ResourceLockDemigod_Params params;
	params.Actor = Actor;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockCrouching
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_ResourceLockCrouching(class AActor* Actor, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockCrouching");

	UGbxGameSystemCoreBlueprintLibrary_ResourceLockCrouching_Params params;
	params.Actor = Actor;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockAIThinking
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAbort                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_ResourceLockAIThinking(class AActor* Actor, const struct FName& Reason, bool bAbort)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockAIThinking");

	UGbxGameSystemCoreBlueprintLibrary_ResourceLockAIThinking_Params params;
	params.Actor = Actor;
	params.Reason = Reason;
	params.bAbort = bAbort;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockAiming
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_ResourceLockAiming(class AActor* Actor, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockAiming");

	UGbxGameSystemCoreBlueprintLibrary_ResourceLockAiming_Params params;
	params.Actor = Actor;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.IsSplitScreen
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameInstance*           GameInstance                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxGameSystemCoreBlueprintLibrary::STATIC_IsSplitScreen(class UGameInstance* GameInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.IsSplitScreen");

	UGbxGameSystemCoreBlueprintLibrary_IsSplitScreen_Params params;
	params.GameInstance = GameInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.IsPlayer
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxGameSystemCoreBlueprintLibrary::STATIC_IsPlayer(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.IsPlayer");

	UGbxGameSystemCoreBlueprintLibrary_IsPlayer_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.IsContentCensored
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxGameSystemCoreBlueprintLibrary::STATIC_IsContentCensored(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.IsContentCensored");

	UGbxGameSystemCoreBlueprintLibrary_IsContentCensored_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.HoverComponentAtActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Altitude                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          AccelerationTime               (Parm, ZeroConstructor, IsPlainOldData)
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_HoverComponentAtActor(class USceneComponent* Component, class AActor* TargetActor, float Altitude, float Radius, float AccelerationTime, float Speed, float Duration, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.HoverComponentAtActor");

	UGbxGameSystemCoreBlueprintLibrary_HoverComponentAtActor_Params params;
	params.Component = Component;
	params.TargetActor = TargetActor;
	params.Altitude = Altitude;
	params.Radius = Radius;
	params.AccelerationTime = AccelerationTime;
	params.Speed = Speed;
	params.Duration = Duration;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.GetRelativeDirection
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRelativeDirectionData  RelativeDirectionData          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 DefaultDirection               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AActor*                  SourceActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SourceSocketName               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UGbxGameSystemCoreBlueprintLibrary::STATIC_GetRelativeDirection(const struct FRelativeDirectionData& RelativeDirectionData, const struct FVector& DefaultDirection, class AActor* SourceActor, const struct FName& SourceSocketName, class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.GetRelativeDirection");

	UGbxGameSystemCoreBlueprintLibrary_GetRelativeDirection_Params params;
	params.RelativeDirectionData = RelativeDirectionData;
	params.DefaultDirection = DefaultDirection;
	params.SourceActor = SourceActor;
	params.SourceSocketName = SourceSocketName;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.GetCurveFloatValue
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRuntimeFloatCurve      Curve                          (ConstParm, Parm, OutParm, ReferenceParm)
// float                          InTime                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGbxGameSystemCoreBlueprintLibrary::STATIC_GetCurveFloatValue(const struct FRuntimeFloatCurve& Curve, float InTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.GetCurveFloatValue");

	UGbxGameSystemCoreBlueprintLibrary_GetCurveFloatValue_Params params;
	params.Curve = Curve;
	params.InTime = InTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.GetAreAnyPlayersOverlappingActors
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          Actors                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxGameSystemCoreBlueprintLibrary::STATIC_GetAreAnyPlayersOverlappingActors(class UObject* WorldContextObject, TArray<class AActor*> Actors)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.GetAreAnyPlayersOverlappingActors");

	UGbxGameSystemCoreBlueprintLibrary_GetAreAnyPlayersOverlappingActors_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Actors = Actors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.GetAreAnyPlayersOverlappingActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxGameSystemCoreBlueprintLibrary::STATIC_GetAreAnyPlayersOverlappingActor(class UObject* WorldContextObject, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.GetAreAnyPlayersOverlappingActor");

	UGbxGameSystemCoreBlueprintLibrary_GetAreAnyPlayersOverlappingActor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.GetAreAllPlayersOverlappingActors
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          Actors                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxGameSystemCoreBlueprintLibrary::STATIC_GetAreAllPlayersOverlappingActors(class UObject* WorldContextObject, TArray<class AActor*> Actors)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.GetAreAllPlayersOverlappingActors");

	UGbxGameSystemCoreBlueprintLibrary_GetAreAllPlayersOverlappingActors_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Actors = Actors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.GetAreAllPlayersOverlappingActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxGameSystemCoreBlueprintLibrary::STATIC_GetAreAllPlayersOverlappingActor(class UObject* WorldContextObject, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.GetAreAllPlayersOverlappingActor");

	UGbxGameSystemCoreBlueprintLibrary_GetAreAllPlayersOverlappingActor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.GetActorListTrimmedToBestCluster
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<class AActor*>          OutputActors                   (Parm, OutParm, ZeroConstructor)
// struct FVector                 ClusterMidpoint                (Parm, OutParm, IsPlainOldData)
// TArray<class AActor*>          InputActors                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  SourceActor                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ClusterRadius                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPreferClusterContainingCurrentTarget (Parm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_GetActorListTrimmedToBestCluster(TArray<class AActor*> InputActors, class AActor* SourceActor, float ClusterRadius, bool bPreferClusterContainingCurrentTarget, TArray<class AActor*>* OutputActors, struct FVector* ClusterMidpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.GetActorListTrimmedToBestCluster");

	UGbxGameSystemCoreBlueprintLibrary_GetActorListTrimmedToBestCluster_Params params;
	params.InputActors = InputActors;
	params.SourceActor = SourceActor;
	params.ClusterRadius = ClusterRadius;
	params.bPreferClusterContainingCurrentTarget = bPreferClusterContainingCurrentTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutputActors != nullptr)
		*OutputActors = params.OutputActors;
	if (ClusterMidpoint != nullptr)
		*ClusterMidpoint = params.ClusterMidpoint;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.BranchOnIsPlayer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// EIsPlayerExecOutput            Branches                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_BranchOnIsPlayer(class AActor* Actor, EIsPlayerExecOutput* Branches)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.BranchOnIsPlayer");

	UGbxGameSystemCoreBlueprintLibrary_BranchOnIsPlayer_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Branches != nullptr)
		*Branches = params.Branches;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.BranchOnIsAutonomous
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// EIsAutonomousOuput             Branches                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_BranchOnIsAutonomous(class AActor* Actor, EIsAutonomousOuput* Branches)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.BranchOnIsAutonomous");

	UGbxGameSystemCoreBlueprintLibrary_BranchOnIsAutonomous_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Branches != nullptr)
		*Branches = params.Branches;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.AreAnyPlayersOverlappingActors
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          Actors                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// EPlayersOverlappingActorOutput Branches                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_AreAnyPlayersOverlappingActors(class UObject* WorldContextObject, TArray<class AActor*> Actors, EPlayersOverlappingActorOutput* Branches)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.AreAnyPlayersOverlappingActors");

	UGbxGameSystemCoreBlueprintLibrary_AreAnyPlayersOverlappingActors_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Actors = Actors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Branches != nullptr)
		*Branches = params.Branches;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.AreAnyPlayersOverlappingActor
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// EPlayersOverlappingActorOutput Branches                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_AreAnyPlayersOverlappingActor(class UObject* WorldContextObject, class AActor* Actor, EPlayersOverlappingActorOutput* Branches)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.AreAnyPlayersOverlappingActor");

	UGbxGameSystemCoreBlueprintLibrary_AreAnyPlayersOverlappingActor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Branches != nullptr)
		*Branches = params.Branches;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.AreAnyPlayersInVolume
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AVolume*>         Volumes                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// EPlayersInVolumeOutput         Branches                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_AreAnyPlayersInVolume(class UObject* WorldContextObject, TArray<class AVolume*> Volumes, EPlayersInVolumeOutput* Branches)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.AreAnyPlayersInVolume");

	UGbxGameSystemCoreBlueprintLibrary_AreAnyPlayersInVolume_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Volumes = Volumes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Branches != nullptr)
		*Branches = params.Branches;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.AreAllPlayersOverlappingActors
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          Actors                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// EPlayersOverlappingActorOutput Branches                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_AreAllPlayersOverlappingActors(class UObject* WorldContextObject, TArray<class AActor*> Actors, EPlayersOverlappingActorOutput* Branches)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.AreAllPlayersOverlappingActors");

	UGbxGameSystemCoreBlueprintLibrary_AreAllPlayersOverlappingActors_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Actors = Actors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Branches != nullptr)
		*Branches = params.Branches;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.AreAllPlayersOverlappingActor
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// EPlayersOverlappingActorOutput Branches                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_AreAllPlayersOverlappingActor(class UObject* WorldContextObject, class AActor* Actor, EPlayersOverlappingActorOutput* Branches)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.AreAllPlayersOverlappingActor");

	UGbxGameSystemCoreBlueprintLibrary_AreAllPlayersOverlappingActor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Branches != nullptr)
		*Branches = params.Branches;
}


// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.AreAllPlayersInVolume
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AVolume*>         Volumes                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// EPlayersInVolumeOutput         Branches                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGbxGameSystemCoreBlueprintLibrary::STATIC_AreAllPlayersInVolume(class UObject* WorldContextObject, TArray<class AVolume*> Volumes, EPlayersInVolumeOutput* Branches)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.AreAllPlayersInVolume");

	UGbxGameSystemCoreBlueprintLibrary_AreAllPlayersInVolume_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Volumes = Volumes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Branches != nullptr)
		*Branches = params.Branches;
}


// Function GbxGameSystemCore.GbxMediaManager.OnMovieMediaOpenFailed
// (Final, Native, Private)
// Parameters:
// class FString                  DeviceUrl                      (Parm, ZeroConstructor)

void UGbxMediaManager::OnMovieMediaOpenFailed(const class FString& DeviceUrl)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxMediaManager.OnMovieMediaOpenFailed");

	UGbxMediaManager_OnMovieMediaOpenFailed_Params params;
	params.DeviceUrl = DeviceUrl;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxMediaManager.OnMovieMediaClosed
// (Final, Native, Private)

void UGbxMediaManager::OnMovieMediaClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxMediaManager.OnMovieMediaClosed");

	UGbxMediaManager_OnMovieMediaClosed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxMediaManager.OnMovieEndReached
// (Final, Native, Private)

void UGbxMediaManager::OnMovieEndReached()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxMediaManager.OnMovieEndReached");

	UGbxMediaManager_OnMovieEndReached_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxMediaManager.GbxPlayMovie
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxMediaData*           InMediaData                    (Parm, ZeroConstructor, IsPlainOldData)
// class UMediaPlayer*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMediaPlayer* UGbxMediaManager::STATIC_GbxPlayMovie(class UObject* WorldContextObject, class UGbxMediaData* InMediaData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxMediaManager.GbxPlayMovie");

	UGbxMediaManager_GbxPlayMovie_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InMediaData = InMediaData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxNavAvoidanceInterface.SetObstacleAvoidanceLock
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           bDisable                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UGbxNavAvoidanceInterface::SetObstacleAvoidanceLock(bool bDisable, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxNavAvoidanceInterface.SetObstacleAvoidanceLock");

	UGbxNavAvoidanceInterface_SetObstacleAvoidanceLock_Params params;
	params.bDisable = bDisable;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxParamExt.IsValueInRangePure
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGbxParam               Param                          (ConstParm, Parm, OutParm, ReferenceParm)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxParamExt::STATIC_IsValueInRangePure(const struct FGbxParam& Param, float Value, class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxParamExt.IsValueInRangePure");

	UGbxParamExt_IsValueInRangePure_Params params;
	params.Param = Param;
	params.Value = Value;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxParamExt.IsValueInRange
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGbxParam               Param                          (ConstParm, Parm, OutParm, ReferenceParm)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxParamExt::STATIC_IsValueInRange(const struct FGbxParam& Param, float Value, class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxParamExt.IsValueInRange");

	UGbxParamExt_IsValueInRange_Params params;
	params.Param = Param;
	params.Value = Value;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxParamExt.GetParamPropertyDescription
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FGbxParam               Param                          (ConstParm, Parm, OutParm, ReferenceParm)
// class UProperty*               Property                       (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UGbxParamExt::STATIC_GetParamPropertyDescription(const struct FGbxParam& Param, class UProperty* Property)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxParamExt.GetParamPropertyDescription");

	UGbxParamExt_GetParamPropertyDescription_Params params;
	params.Param = Param;
	params.Property = Property;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxParamExt.GetParamDescriptionText
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGbxParam               Param                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UGbxParamExt::STATIC_GetParamDescriptionText(const struct FGbxParam& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxParamExt.GetParamDescriptionText");

	UGbxParamExt_GetParamDescriptionText_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxParamExt.GetParamDescription
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGbxParam               Param                          (ConstParm, Parm, OutParm, ReferenceParm)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UGbxParamExt::STATIC_GetParamDescription(const struct FGbxParam& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxParamExt.GetParamDescription");

	UGbxParamExt_GetParamDescription_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxParamExt.GetNamedParamDescriptionText
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGbxNamedParam          Param                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UGbxParamExt::STATIC_GetNamedParamDescriptionText(const struct FGbxNamedParam& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxParamExt.GetNamedParamDescriptionText");

	UGbxParamExt_GetNamedParamDescriptionText_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxParamExt.GetNamedParamDescription
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGbxNamedParam          Param                          (ConstParm, Parm, OutParm, ReferenceParm)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UGbxParamExt::STATIC_GetNamedParamDescription(const struct FGbxNamedParam& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxParamExt.GetNamedParamDescription");

	UGbxParamExt_GetNamedParamDescription_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxParamExt.EvaluatePure
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGbxParam               Param                          (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGbxParamExt::STATIC_EvaluatePure(const struct FGbxParam& Param, class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxParamExt.EvaluatePure");

	UGbxParamExt_EvaluatePure_Params params;
	params.Param = Param;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxParamExt.EvaluateIntPure
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGbxParam               Param                          (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGbxParamExt::STATIC_EvaluateIntPure(const struct FGbxParam& Param, class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxParamExt.EvaluateIntPure");

	UGbxParamExt_EvaluateIntPure_Params params;
	params.Param = Param;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxParamExt.EvaluateInt
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGbxParam               Param                          (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGbxParamExt::STATIC_EvaluateInt(const struct FGbxParam& Param, class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxParamExt.EvaluateInt");

	UGbxParamExt_EvaluateInt_Params params;
	params.Param = Param;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxParamExt.EvaluateBoolPure
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGbxParam               Param                          (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxParamExt::STATIC_EvaluateBoolPure(const struct FGbxParam& Param, class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxParamExt.EvaluateBoolPure");

	UGbxParamExt_EvaluateBoolPure_Params params;
	params.Param = Param;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxParamExt.EvaluateBool
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGbxParam               Param                          (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxParamExt::STATIC_EvaluateBool(const struct FGbxParam& Param, class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxParamExt.EvaluateBool");

	UGbxParamExt_EvaluateBool_Params params;
	params.Param = Param;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxParamExt.Evaluate
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGbxParam               Param                          (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGbxParamExt::STATIC_Evaluate(const struct FGbxParam& Param, class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxParamExt.Evaluate");

	UGbxParamExt_Evaluate_Params params;
	params.Param = Param;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GbxPhysicsSettings.StaticSetRigidBodySimulationInteractability
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  Comp                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bAesthetic                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BodyName                       (Parm, ZeroConstructor, IsPlainOldData)

void UGbxPhysicsSettings::STATIC_StaticSetRigidBodySimulationInteractability(class USkeletalMeshComponent* Comp, bool bAesthetic, const struct FName& BodyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxPhysicsSettings.StaticSetRigidBodySimulationInteractability");

	UGbxPhysicsSettings_StaticSetRigidBodySimulationInteractability_Params params;
	params.Comp = Comp;
	params.bAesthetic = bAesthetic;
	params.BodyName = BodyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxQueryManager.NotifyAIHotSpotListChangedFor
// (Final, Native, Public)
// Parameters:
// class AActor*                  OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UGbxQueryManager::NotifyAIHotSpotListChangedFor(class AActor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxQueryManager.NotifyAIHotSpotListChangedFor");

	UGbxQueryManager_NotifyAIHotSpotListChangedFor_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.GbxSignificanceSettings.EnumerateSignificanceEvents
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TArray<struct FName>           OutEvents                      (Parm, OutParm, ZeroConstructor)

void UGbxSignificanceSettings::STATIC_EnumerateSignificanceEvents(TArray<struct FName>* OutEvents)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxSignificanceSettings.EnumerateSignificanceEvents");

	UGbxSignificanceSettings_EnumerateSignificanceEvents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutEvents != nullptr)
		*OutEvents = params.OutEvents;
}


// Function GbxGameSystemCore.GbxSimpleMotionLibrary.UpdateVectorMotion
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CurrentValue                   (Parm, OutParm, IsPlainOldData)
// float                          ControlValue                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FSimpleMotionState      Data                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          SpeedScale                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetValue                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FSimpleMotionInstanceState State                          (Parm, OutParm)

void UGbxSimpleMotionLibrary::STATIC_UpdateVectorMotion(float DeltaTime, float ControlValue, const struct FSimpleMotionState& Data, float SpeedScale, const struct FVector& TargetValue, struct FVector* CurrentValue, struct FSimpleMotionInstanceState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxSimpleMotionLibrary.UpdateVectorMotion");

	UGbxSimpleMotionLibrary_UpdateVectorMotion_Params params;
	params.DeltaTime = DeltaTime;
	params.ControlValue = ControlValue;
	params.Data = Data;
	params.SpeedScale = SpeedScale;
	params.TargetValue = TargetValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentValue != nullptr)
		*CurrentValue = params.CurrentValue;
	if (State != nullptr)
		*State = params.State;
}


// Function GbxGameSystemCore.GbxSimpleMotionLibrary.UpdateRotatorMotion
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                CurrentValue                   (Parm, OutParm, IsPlainOldData)
// float                          ControlValue                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FSimpleMotionState      Data                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          SpeedScale                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                TargetValue                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bShortestRotation              (Parm, ZeroConstructor, IsPlainOldData)
// struct FSimpleMotionInstanceState State                          (Parm, OutParm)

void UGbxSimpleMotionLibrary::STATIC_UpdateRotatorMotion(float DeltaTime, float ControlValue, const struct FSimpleMotionState& Data, float SpeedScale, const struct FRotator& TargetValue, bool bShortestRotation, struct FRotator* CurrentValue, struct FSimpleMotionInstanceState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxSimpleMotionLibrary.UpdateRotatorMotion");

	UGbxSimpleMotionLibrary_UpdateRotatorMotion_Params params;
	params.DeltaTime = DeltaTime;
	params.ControlValue = ControlValue;
	params.Data = Data;
	params.SpeedScale = SpeedScale;
	params.TargetValue = TargetValue;
	params.bShortestRotation = bShortestRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentValue != nullptr)
		*CurrentValue = params.CurrentValue;
	if (State != nullptr)
		*State = params.State;
}


// Function GbxGameSystemCore.GbxSimpleMotionLibrary.UpdateFloatMotion
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ControlValue                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FSimpleMotionState      Data                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          SpeedScale                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          TargetValue                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FSimpleMotionInstanceState State                          (Parm, OutParm)

void UGbxSimpleMotionLibrary::STATIC_UpdateFloatMotion(float DeltaTime, float ControlValue, const struct FSimpleMotionState& Data, float SpeedScale, float TargetValue, float* CurrentValue, struct FSimpleMotionInstanceState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxSimpleMotionLibrary.UpdateFloatMotion");

	UGbxSimpleMotionLibrary_UpdateFloatMotion_Params params;
	params.DeltaTime = DeltaTime;
	params.ControlValue = ControlValue;
	params.Data = Data;
	params.SpeedScale = SpeedScale;
	params.TargetValue = TargetValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentValue != nullptr)
		*CurrentValue = params.CurrentValue;
	if (State != nullptr)
		*State = params.State;
}


// Function GbxGameSystemCore.GbxSimpleMotionLibrary.TeleportVectorMotion
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 CurrentValue                   (Parm, OutParm, IsPlainOldData)
// float                          ControlValue                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FSimpleMotionState      Data                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          SpeedScale                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetValue                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FSimpleMotionInstanceState State                          (Parm, OutParm)

void UGbxSimpleMotionLibrary::STATIC_TeleportVectorMotion(float ControlValue, const struct FSimpleMotionState& Data, float SpeedScale, const struct FVector& TargetValue, struct FVector* CurrentValue, struct FSimpleMotionInstanceState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxSimpleMotionLibrary.TeleportVectorMotion");

	UGbxSimpleMotionLibrary_TeleportVectorMotion_Params params;
	params.ControlValue = ControlValue;
	params.Data = Data;
	params.SpeedScale = SpeedScale;
	params.TargetValue = TargetValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentValue != nullptr)
		*CurrentValue = params.CurrentValue;
	if (State != nullptr)
		*State = params.State;
}


// Function GbxGameSystemCore.GbxSimpleMotionLibrary.TeleportRotatorMotion
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                CurrentValue                   (Parm, OutParm, IsPlainOldData)
// float                          ControlValue                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FSimpleMotionState      Data                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          SpeedScale                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                TargetValue                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FSimpleMotionInstanceState State                          (Parm, OutParm)

void UGbxSimpleMotionLibrary::STATIC_TeleportRotatorMotion(float ControlValue, const struct FSimpleMotionState& Data, float SpeedScale, const struct FRotator& TargetValue, struct FRotator* CurrentValue, struct FSimpleMotionInstanceState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxSimpleMotionLibrary.TeleportRotatorMotion");

	UGbxSimpleMotionLibrary_TeleportRotatorMotion_Params params;
	params.ControlValue = ControlValue;
	params.Data = Data;
	params.SpeedScale = SpeedScale;
	params.TargetValue = TargetValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentValue != nullptr)
		*CurrentValue = params.CurrentValue;
	if (State != nullptr)
		*State = params.State;
}


// Function GbxGameSystemCore.GbxSimpleMotionLibrary.TeleportFloatMotion
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          CurrentValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ControlValue                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FSimpleMotionState      Data                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          SpeedScale                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          TargetValue                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FSimpleMotionInstanceState State                          (Parm, OutParm)

void UGbxSimpleMotionLibrary::STATIC_TeleportFloatMotion(float ControlValue, const struct FSimpleMotionState& Data, float SpeedScale, float TargetValue, float* CurrentValue, struct FSimpleMotionInstanceState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxSimpleMotionLibrary.TeleportFloatMotion");

	UGbxSimpleMotionLibrary_TeleportFloatMotion_Params params;
	params.ControlValue = ControlValue;
	params.Data = Data;
	params.SpeedScale = SpeedScale;
	params.TargetValue = TargetValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentValue != nullptr)
		*CurrentValue = params.CurrentValue;
	if (State != nullptr)
		*State = params.State;
}


// Function GbxGameSystemCore.GbxSimpleMotionLibrary.ResetMotionState
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSimpleMotionInstanceState State                          (Parm, OutParm)

void UGbxSimpleMotionLibrary::STATIC_ResetMotionState(struct FSimpleMotionInstanceState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxSimpleMotionLibrary.ResetMotionState");

	UGbxSimpleMotionLibrary_ResetMotionState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
}


// Function GbxGameSystemCore.GbxUIName.GetFormattedText
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UGbxUIName::GetFormattedText()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GbxUIName.GetFormattedText");

	UGbxUIName_GetFormattedText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.GestaltPartData_Mesh.EnumerateGestaltMeshPartNames
// (Final, Native, Private, HasOutParms, Const)
// Parameters:
// TArray<struct FName>           OutPartNameList                (Parm, OutParm, ZeroConstructor)

void UGestaltPartData_Mesh::EnumerateGestaltMeshPartNames(TArray<struct FName>* OutPartNameList)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GestaltPartData_Mesh.EnumerateGestaltMeshPartNames");

	UGestaltPartData_Mesh_EnumerateGestaltMeshPartNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPartNameList != nullptr)
		*OutPartNameList = params.OutPartNameList;
}


// Function GbxGameSystemCore.GlobalBoneModBlueprintLibrary.K2_SetGBMP
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UGlobalBoneModifyProfileState* State                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UGlobalBoneModBlueprintLibrary::STATIC_K2_SetGBMP(class UGlobalBoneModifyProfileState* State, bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.GlobalBoneModBlueprintLibrary.K2_SetGBMP");

	UGlobalBoneModBlueprintLibrary_K2_SetGBMP_Params params;
	params.State = State;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.HitReactionBlueprintLibrary.SetHitReactionData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UHitReactionData*        HitReactionData                (Parm, ZeroConstructor, IsPlainOldData)

void UHitReactionBlueprintLibrary::STATIC_SetHitReactionData(class AActor* Actor, class UHitReactionData* HitReactionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.HitReactionBlueprintLibrary.SetHitReactionData");

	UHitReactionBlueprintLibrary_SetHitReactionData_Params params;
	params.Actor = Actor;
	params.HitReactionData = HitReactionData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.HitReactionBlueprintLibrary.ScriptHitReaction
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Causer                         (Parm, ZeroConstructor, IsPlainOldData)
// class UHitReactionTag*         Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LocalHitDirection              (Parm, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FForceSelection         Force                          (Parm)

void UHitReactionBlueprintLibrary::STATIC_ScriptHitReaction(class AActor* Actor, class AActor* Causer, class UHitReactionTag* Tag, const struct FVector& LocalHitDirection, const struct FName& BoneName, const struct FForceSelection& Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.HitReactionBlueprintLibrary.ScriptHitReaction");

	UHitReactionBlueprintLibrary_ScriptHitReaction_Params params;
	params.Actor = Actor;
	params.Causer = Causer;
	params.Tag = Tag;
	params.LocalHitDirection = LocalHitDirection;
	params.BoneName = BoneName;
	params.Force = Force;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.HitReactionBlueprintLibrary.ScriptDeath
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Causer                         (Parm, ZeroConstructor, IsPlainOldData)
// class UHitReactionTag*         Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 LocalHitDirection              (Parm, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FForceSelection         Force                          (Parm)

void UHitReactionBlueprintLibrary::STATIC_ScriptDeath(class AActor* Actor, class AActor* Causer, class UHitReactionTag* Tag, const struct FVector& LocalHitDirection, const struct FName& BoneName, const struct FForceSelection& Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.HitReactionBlueprintLibrary.ScriptDeath");

	UHitReactionBlueprintLibrary_ScriptDeath_Params params;
	params.Actor = Actor;
	params.Causer = Causer;
	params.Tag = Tag;
	params.LocalHitDirection = LocalHitDirection;
	params.BoneName = BoneName;
	params.Force = Force;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.HitReactionBlueprintLibrary.ResourceUnlockHitReactions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UHitReactionBlueprintLibrary::STATIC_ResourceUnlockHitReactions(class AActor* Actor, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.HitReactionBlueprintLibrary.ResourceUnlockHitReactions");

	UHitReactionBlueprintLibrary_ResourceUnlockHitReactions_Params params;
	params.Actor = Actor;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.HitReactionBlueprintLibrary.ResourceLockHitReactions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UHitReactionBlueprintLibrary::STATIC_ResourceLockHitReactions(class AActor* Actor, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.HitReactionBlueprintLibrary.ResourceLockHitReactions");

	UHitReactionBlueprintLibrary_ResourceLockHitReactions_Params params;
	params.Actor = Actor;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.HitReactionBlueprintLibrary.RemoveHitReactionLiveLayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Layer                          (Parm, ZeroConstructor, IsPlainOldData)

void UHitReactionBlueprintLibrary::STATIC_RemoveHitReactionLiveLayer(class AActor* Actor, class UClass* Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.HitReactionBlueprintLibrary.RemoveHitReactionLiveLayer");

	UHitReactionBlueprintLibrary_RemoveHitReactionLiveLayer_Params params;
	params.Actor = Actor;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.HitReactionBlueprintLibrary.RemoveHitReactionDeathLayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Layer                          (Parm, ZeroConstructor, IsPlainOldData)

void UHitReactionBlueprintLibrary::STATIC_RemoveHitReactionDeathLayer(class AActor* Actor, class UClass* Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.HitReactionBlueprintLibrary.RemoveHitReactionDeathLayer");

	UHitReactionBlueprintLibrary_RemoveHitReactionDeathLayer_Params params;
	params.Actor = Actor;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.HitReactionBlueprintLibrary.K2_GetHitLocationFromAction
// (Final, Native, Static, Private, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UGbxAction*              Action                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UHitReactionBlueprintLibrary::STATIC_K2_GetHitLocationFromAction(class UGbxAction* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.HitReactionBlueprintLibrary.K2_GetHitLocationFromAction");

	UHitReactionBlueprintLibrary_K2_GetHitLocationFromAction_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.HitReactionBlueprintLibrary.K2_GetHitDirectionFromAction
// (Final, Native, Static, Private, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UGbxAction*              Action                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLocalSpace                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UHitReactionBlueprintLibrary::STATIC_K2_GetHitDirectionFromAction(class UGbxAction* Action, bool bLocalSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.HitReactionBlueprintLibrary.K2_GetHitDirectionFromAction");

	UHitReactionBlueprintLibrary_K2_GetHitDirectionFromAction_Params params;
	params.Action = Action;
	params.bLocalSpace = bLocalSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.HitReactionBlueprintLibrary.K2_GetHitCauserFromAction
// (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
// Parameters:
// class UGbxAction*              Action                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UHitReactionBlueprintLibrary::STATIC_K2_GetHitCauserFromAction(class UGbxAction* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.HitReactionBlueprintLibrary.K2_GetHitCauserFromAction");

	UHitReactionBlueprintLibrary_K2_GetHitCauserFromAction_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.HitReactionBlueprintLibrary.K2_GetHealthPercentFromAction
// (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
// Parameters:
// class UGbxAction*              Action                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UHitReactionBlueprintLibrary::STATIC_K2_GetHealthPercentFromAction(class UGbxAction* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.HitReactionBlueprintLibrary.K2_GetHealthPercentFromAction");

	UHitReactionBlueprintLibrary_K2_GetHealthPercentFromAction_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.HitReactionBlueprintLibrary.K2_GetForceFromAction
// (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
// Parameters:
// class UGbxAction*              Action                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UHitReactionBlueprintLibrary::STATIC_K2_GetForceFromAction(class UGbxAction* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.HitReactionBlueprintLibrary.K2_GetForceFromAction");

	UHitReactionBlueprintLibrary_K2_GetForceFromAction_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.HitReactionBlueprintLibrary.K2_GetBoneIndexFromAction
// (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
// Parameters:
// class UGbxAction*              Action                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UHitReactionBlueprintLibrary::STATIC_K2_GetBoneIndexFromAction(class UGbxAction* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.HitReactionBlueprintLibrary.K2_GetBoneIndexFromAction");

	UHitReactionBlueprintLibrary_K2_GetBoneIndexFromAction_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.HitReactionBlueprintLibrary.IsHitReactionTagActive
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UHitReactionTag*         Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHitReactionBlueprintLibrary::STATIC_IsHitReactionTagActive(class AActor* Actor, class UHitReactionTag* Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.HitReactionBlueprintLibrary.IsHitReactionTagActive");

	UHitReactionBlueprintLibrary_IsHitReactionTagActive_Params params;
	params.Actor = Actor;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.HitReactionBlueprintLibrary.AddHitReactionLiveLayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Layer                          (Parm, ZeroConstructor, IsPlainOldData)

void UHitReactionBlueprintLibrary::STATIC_AddHitReactionLiveLayer(class AActor* Actor, class UClass* Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.HitReactionBlueprintLibrary.AddHitReactionLiveLayer");

	UHitReactionBlueprintLibrary_AddHitReactionLiveLayer_Params params;
	params.Actor = Actor;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.HitReactionBlueprintLibrary.AddHitReactionDeathLayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Layer                          (Parm, ZeroConstructor, IsPlainOldData)

void UHitReactionBlueprintLibrary::STATIC_AddHitReactionDeathLayer(class AActor* Actor, class UClass* Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.HitReactionBlueprintLibrary.AddHitReactionDeathLayer");

	UHitReactionBlueprintLibrary_AddHitReactionDeathLayer_Params params;
	params.Actor = Actor;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.HitReactionLayer_Blueprint.EvaluateTag
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UDamageComponent*        Receiver                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UDamageCauserComponent*  Causer                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          DamageAmount                   (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UHitRegionData*          HitRegion                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Force                          (Parm, ZeroConstructor, IsPlainOldData)
// class UHitReactionTag*         PreviousTag                    (Parm, ZeroConstructor, IsPlainOldData)
// class UHitReactionTag*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHitReactionTag* UHitReactionLayer_Blueprint::EvaluateTag(class UDamageComponent* Receiver, class UDamageCauserComponent* Causer, float DamageAmount, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class UHitRegionData* HitRegion, float Force, class UHitReactionTag* PreviousTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.HitReactionLayer_Blueprint.EvaluateTag");

	UHitReactionLayer_Blueprint_EvaluateTag_Params params;
	params.Receiver = Receiver;
	params.Causer = Causer;
	params.DamageAmount = DamageAmount;
	params.DamageType = DamageType;
	params.DamageSource = DamageSource;
	params.HitRegion = HitRegion;
	params.Force = Force;
	params.PreviousTag = PreviousTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.HitRegionFunctionLibrary.ResetHitRegionHealth
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UHitRegionData*          HitRegion                      (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     AssociatedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHitRegionFunctionLibrary::STATIC_ResetHitRegionHealth(class AActor* Actor, class UHitRegionData* HitRegion, class UPrimitiveComponent* AssociatedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.HitRegionFunctionLibrary.ResetHitRegionHealth");

	UHitRegionFunctionLibrary_ResetHitRegionHealth_Params params;
	params.Actor = Actor;
	params.HitRegion = HitRegion;
	params.AssociatedComponent = AssociatedComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.HitRegionFunctionLibrary.ResetAllHitRegionHealth
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UHitRegionFunctionLibrary::STATIC_ResetAllHitRegionHealth(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.HitRegionFunctionLibrary.ResetAllHitRegionHealth");

	UHitRegionFunctionLibrary_ResetAllHitRegionHealth_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.HitRegionFunctionLibrary.RefillHitRegionHealthByPercent
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          RefillPercent                  (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UHitRegionData*          HitRegion                      (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     AssociatedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHitRegionFunctionLibrary::STATIC_RefillHitRegionHealthByPercent(float RefillPercent, class AActor* Actor, class UHitRegionData* HitRegion, class UPrimitiveComponent* AssociatedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.HitRegionFunctionLibrary.RefillHitRegionHealthByPercent");

	UHitRegionFunctionLibrary_RefillHitRegionHealthByPercent_Params params;
	params.RefillPercent = RefillPercent;
	params.Actor = Actor;
	params.HitRegion = HitRegion;
	params.AssociatedComponent = AssociatedComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.HitRegionFunctionLibrary.RefillHitRegionHealthByAmount
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          RefillAmount                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UHitRegionData*          HitRegion                      (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     AssociatedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHitRegionFunctionLibrary::STATIC_RefillHitRegionHealthByAmount(float RefillAmount, class AActor* Actor, class UHitRegionData* HitRegion, class UPrimitiveComponent* AssociatedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.HitRegionFunctionLibrary.RefillHitRegionHealthByAmount");

	UHitRegionFunctionLibrary_RefillHitRegionHealthByAmount_Params params;
	params.RefillAmount = RefillAmount;
	params.Actor = Actor;
	params.HitRegion = HitRegion;
	params.AssociatedComponent = AssociatedComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.HitRegionFunctionLibrary.AssociateComponentWithHitRegion
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     ComponentToAssociate           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UHitRegionData*          HitRegion                      (Parm, ZeroConstructor, IsPlainOldData)

void UHitRegionFunctionLibrary::STATIC_AssociateComponentWithHitRegion(class AActor* Actor, class UPrimitiveComponent* ComponentToAssociate, class UHitRegionData* HitRegion)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.HitRegionFunctionLibrary.AssociateComponentWithHitRegion");

	UHitRegionFunctionLibrary_AssociateComponentWithHitRegion_Params params;
	params.Actor = Actor;
	params.ComponentToAssociate = ComponentToAssociate;
	params.HitRegion = HitRegion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.InspectionInfoProvider.GetInspectionInfo
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// struct FInspectionInfo         InspectionInfo                 (Parm, OutParm, ReferenceParm)

void UInspectionInfoProvider::GetInspectionInfo(struct FInspectionInfo* InspectionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.InspectionInfoProvider.GetInspectionInfo");

	UInspectionInfoProvider_GetInspectionInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InspectionInfo != nullptr)
		*InspectionInfo = params.InspectionInfo;
}


// Function GbxGameSystemCore.ImpactEffectFunctionLibrary.PlayTraceImpactAndGetParticleSystemComponents
// (Final, RequiredAPI, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UImpactData*             ImpactData                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TraceStart                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 TraceEnd                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// TArray<class UParticleSystemComponent*> SpawnedParticleSystemComponents (Parm, OutParm, ZeroConstructor)
// TEnumAsByte<ECollisionChannel> TraceChannel                   (Parm, ZeroConstructor, IsPlainOldData)

void UImpactEffectFunctionLibrary::STATIC_PlayTraceImpactAndGetParticleSystemComponents(class UImpactData* ImpactData, class AActor* Instigator, const struct FVector& TraceStart, const struct FVector& TraceEnd, TEnumAsByte<ECollisionChannel> TraceChannel, TArray<class UParticleSystemComponent*>* SpawnedParticleSystemComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ImpactEffectFunctionLibrary.PlayTraceImpactAndGetParticleSystemComponents");

	UImpactEffectFunctionLibrary_PlayTraceImpactAndGetParticleSystemComponents_Params params;
	params.ImpactData = ImpactData;
	params.Instigator = Instigator;
	params.TraceStart = TraceStart;
	params.TraceEnd = TraceEnd;
	params.TraceChannel = TraceChannel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnedParticleSystemComponents != nullptr)
		*SpawnedParticleSystemComponents = params.SpawnedParticleSystemComponents;
}


// Function GbxGameSystemCore.ImpactEffectFunctionLibrary.PlayTraceImpact
// (Final, RequiredAPI, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UImpactData*             ImpactData                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TraceStart                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 TraceEnd                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// TEnumAsByte<ECollisionChannel> TraceChannel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReplicated                    (Parm, ZeroConstructor, IsPlainOldData)

void UImpactEffectFunctionLibrary::STATIC_PlayTraceImpact(class UImpactData* ImpactData, class AActor* Instigator, const struct FVector& TraceStart, const struct FVector& TraceEnd, TEnumAsByte<ECollisionChannel> TraceChannel, bool bReplicated)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ImpactEffectFunctionLibrary.PlayTraceImpact");

	UImpactEffectFunctionLibrary_PlayTraceImpact_Params params;
	params.ImpactData = ImpactData;
	params.Instigator = Instigator;
	params.TraceStart = TraceStart;
	params.TraceEnd = TraceEnd;
	params.TraceChannel = TraceChannel;
	params.bReplicated = bReplicated;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ImpactEffectFunctionLibrary.PlayHitResultImpactGetParticleSystemComponents
// (Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UImpactData*             ImpactData                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// TArray<class UParticleSystemComponent*> SpawnedParticleSystemComponents (Parm, OutParm, ZeroConstructor)

void UImpactEffectFunctionLibrary::STATIC_PlayHitResultImpactGetParticleSystemComponents(class UImpactData* ImpactData, class AActor* Instigator, const struct FHitResult& HitInfo, TArray<class UParticleSystemComponent*>* SpawnedParticleSystemComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ImpactEffectFunctionLibrary.PlayHitResultImpactGetParticleSystemComponents");

	UImpactEffectFunctionLibrary_PlayHitResultImpactGetParticleSystemComponents_Params params;
	params.ImpactData = ImpactData;
	params.Instigator = Instigator;
	params.HitInfo = HitInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnedParticleSystemComponents != nullptr)
		*SpawnedParticleSystemComponents = params.SpawnedParticleSystemComponents;
}


// Function GbxGameSystemCore.ImpactEffectFunctionLibrary.PlayHitResultImpact
// (Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UImpactData*             ImpactData                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bReplicated                    (Parm, ZeroConstructor, IsPlainOldData)

void UImpactEffectFunctionLibrary::STATIC_PlayHitResultImpact(class UImpactData* ImpactData, class AActor* Instigator, const struct FHitResult& HitInfo, bool bReplicated)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ImpactEffectFunctionLibrary.PlayHitResultImpact");

	UImpactEffectFunctionLibrary_PlayHitResultImpact_Params params;
	params.ImpactData = ImpactData;
	params.Instigator = Instigator;
	params.HitInfo = HitInfo;
	params.bReplicated = bReplicated;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ImpactFXManagerComponent.SetEffectsEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UImpactFXManagerComponent::SetEffectsEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ImpactFXManagerComponent.SetEffectsEnabled");

	UImpactFXManagerComponent_SetEffectsEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ImpactFXManagerComponent.OnTrackedParticleSystemFinished
// (Final, Native, Protected)
// Parameters:
// class UParticleSystemComponent* PSC                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UImpactFXManagerComponent::OnTrackedParticleSystemFinished(class UParticleSystemComponent* PSC)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ImpactFXManagerComponent.OnTrackedParticleSystemFinished");

	UImpactFXManagerComponent_OnTrackedParticleSystemFinished_Params params;
	params.PSC = PSC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ImpactFXManagerComponent.OnTrackedComponentDeactivated
// (Final, Native, Protected)
// Parameters:
// class UActorComponent*         Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UImpactFXManagerComponent::OnTrackedComponentDeactivated(class UActorComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ImpactFXManagerComponent.OnTrackedComponentDeactivated");

	UImpactFXManagerComponent_OnTrackedComponentDeactivated_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ImpactFXManagerComponent.OnHit
// (Native, Protected, HasOutParms, HasDefaults)
// Parameters:
// class AActor*                  SelfActor                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UImpactFXManagerComponent::OnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ImpactFXManagerComponent.OnHit");

	UImpactFXManagerComponent_OnHit_Params params;
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.InspectionInfoFunctionLibrary.AddScreenOutput
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FInspectionInfo         InspectionInfo                 (Parm, OutParm, ReferenceParm)
// class FString                  String                         (Parm, ZeroConstructor)
// EDebugDisplayVerbosityLevel    Verbosity                      (Parm, ZeroConstructor, IsPlainOldData)

void UInspectionInfoFunctionLibrary::STATIC_AddScreenOutput(const class FString& String, EDebugDisplayVerbosityLevel Verbosity, struct FInspectionInfo* InspectionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.InspectionInfoFunctionLibrary.AddScreenOutput");

	UInspectionInfoFunctionLibrary_AddScreenOutput_Params params;
	params.String = String;
	params.Verbosity = Verbosity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InspectionInfo != nullptr)
		*InspectionInfo = params.InspectionInfo;
}


// Function GbxGameSystemCore.InspectionInfoFunctionLibrary.AddAboveActorOutput
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FInspectionInfo         InspectionInfo                 (Parm, OutParm, ReferenceParm)
// class FString                  String                         (Parm, ZeroConstructor)
// EDebugDisplayVerbosityLevel    Verbosity                      (Parm, ZeroConstructor, IsPlainOldData)

void UInspectionInfoFunctionLibrary::STATIC_AddAboveActorOutput(const class FString& String, EDebugDisplayVerbosityLevel Verbosity, struct FInspectionInfo* InspectionInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.InspectionInfoFunctionLibrary.AddAboveActorOutput");

	UInspectionInfoFunctionLibrary_AddAboveActorOutput_Params params;
	params.String = String;
	params.Verbosity = Verbosity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InspectionInfo != nullptr)
		*InspectionInfo = params.InspectionInfo;
}


// Function GbxGameSystemCore.InterpComponent.Stop
// (Final, Native, Public, BlueprintCallable)

void UInterpComponent::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.InterpComponent.Stop");

	UInterpComponent_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.InterpComponent.SetUpdateVelocity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewUpdateVelocity             (Parm, ZeroConstructor, IsPlainOldData)

void UInterpComponent::SetUpdateVelocity(bool bNewUpdateVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.InterpComponent.SetUpdateVelocity");

	UInterpComponent_SetUpdateVelocity_Params params;
	params.bNewUpdateVelocity = bNewUpdateVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.InterpComponent.SetRemoveOnCompletion
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bRemove                        (Parm, ZeroConstructor, IsPlainOldData)

void UInterpComponent::SetRemoveOnCompletion(bool bRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.InterpComponent.SetRemoveOnCompletion");

	UInterpComponent_SetRemoveOnCompletion_Params params;
	params.bRemove = bRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.InterpComponent.SetManualTick
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bManual                        (Parm, ZeroConstructor, IsPlainOldData)

void UInterpComponent::SetManualTick(bool bManual)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.InterpComponent.SetManualTick");

	UInterpComponent_SetManualTick_Params params;
	params.bManual = bManual;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.InterpComponent.SetClearVelocity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewClearVelocity              (Parm, ZeroConstructor, IsPlainOldData)

void UInterpComponent::SetClearVelocity(bool bNewClearVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.InterpComponent.SetClearVelocity");

	UInterpComponent_SetClearVelocity_Params params;
	params.bNewClearVelocity = bNewClearVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.InterpComponent.MatchRotationToVelocity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInSetToInitialWhenFinished    (Parm, ZeroConstructor, IsPlainOldData)

void UInterpComponent::MatchRotationToVelocity(bool bInSetToInitialWhenFinished)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.InterpComponent.MatchRotationToVelocity");

	UInterpComponent_MatchRotationToVelocity_Params params;
	params.bInSetToInitialWhenFinished = bInSetToInitialWhenFinished;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.InterpComponent.ManualTick
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UInterpComponent::ManualTick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.InterpComponent.ManualTick");

	UInterpComponent_ManualTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.InterpComponent.IsFinished
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInterpComponent::IsFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.InterpComponent.IsFinished");

	UInterpComponent_IsFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.InterpComponent.InterpRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                NewRot                         (Parm, IsPlainOldData)
// float                          InterpTime                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLinear                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bYawOnly                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInRelative                    (Parm, ZeroConstructor, IsPlainOldData)

void UInterpComponent::InterpRotation(const struct FRotator& NewRot, float InterpTime, bool bLinear, bool bYawOnly, bool bInRelative)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.InterpComponent.InterpRotation");

	UInterpComponent_InterpRotation_Params params;
	params.NewRot = NewRot;
	params.InterpTime = InterpTime;
	params.bLinear = bLinear;
	params.bYawOnly = bYawOnly;
	params.bInRelative = bInRelative;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.InterpComponent.InterpLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 NewLoc                         (Parm, IsPlainOldData)
// float                          InterpTime                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLinear                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNoZ                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInRelative                    (Parm, ZeroConstructor, IsPlainOldData)

void UInterpComponent::InterpLocation(const struct FVector& NewLoc, float InterpTime, bool bLinear, bool bNoZ, bool bInRelative)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.InterpComponent.InterpLocation");

	UInterpComponent_InterpLocation_Params params;
	params.NewLoc = NewLoc;
	params.InterpTime = InterpTime;
	params.bLinear = bLinear;
	params.bNoZ = bNoZ;
	params.bInRelative = bInRelative;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.InterpComponent.InterpDeltaRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                DeltaRot                       (Parm, IsPlainOldData)
// float                          InterpTime                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLinear                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bYawOnly                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInRelative                    (Parm, ZeroConstructor, IsPlainOldData)

void UInterpComponent::InterpDeltaRotation(const struct FRotator& DeltaRot, float InterpTime, bool bLinear, bool bYawOnly, bool bInRelative)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.InterpComponent.InterpDeltaRotation");

	UInterpComponent_InterpDeltaRotation_Params params;
	params.DeltaRot = DeltaRot;
	params.InterpTime = InterpTime;
	params.bLinear = bLinear;
	params.bYawOnly = bYawOnly;
	params.bInRelative = bInRelative;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.InterpComponent.InterpDeltaLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 DeltaLoc                       (Parm, IsPlainOldData)
// float                          InterpTime                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLinear                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNoZ                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInRelative                    (Parm, ZeroConstructor, IsPlainOldData)

void UInterpComponent::InterpDeltaLocation(const struct FVector& DeltaLoc, float InterpTime, bool bLinear, bool bNoZ, bool bInRelative)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.InterpComponent.InterpDeltaLocation");

	UInterpComponent_InterpDeltaLocation_Params params;
	params.DeltaLoc = DeltaLoc;
	params.InterpTime = InterpTime;
	params.bLinear = bLinear;
	params.bNoZ = bNoZ;
	params.bInRelative = bInRelative;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.InterpComponent.InterpBallisticsByTime
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 StartLoc                       (Parm, IsPlainOldData)
// struct FVector                 EndLoc                         (Parm, IsPlainOldData)
// float                          LeapTime                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          LeapGravity                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UInterpComponent::InterpBallisticsByTime(const struct FVector& StartLoc, const struct FVector& EndLoc, float LeapTime, float LeapGravity)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.InterpComponent.InterpBallisticsByTime");

	UInterpComponent_InterpBallisticsByTime_Params params;
	params.StartLoc = StartLoc;
	params.EndLoc = EndLoc;
	params.LeapTime = LeapTime;
	params.LeapGravity = LeapGravity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.InterpComponent.InterpBallistics
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 StartLoc                       (Parm, IsPlainOldData)
// struct FVector                 EndLoc                         (Parm, IsPlainOldData)
// float                          LeapSpeed                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          LeapAngle                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UInterpComponent::InterpBallistics(const struct FVector& StartLoc, const struct FVector& EndLoc, float LeapSpeed, float LeapAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.InterpComponent.InterpBallistics");

	UInterpComponent_InterpBallistics_Params params;
	params.StartLoc = StartLoc;
	params.EndLoc = EndLoc;
	params.LeapSpeed = LeapSpeed;
	params.LeapAngle = LeapAngle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.MotionControlLibrary.UpdateSpeed
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          CurrentSpeed                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          TargetSpeed                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Acceleration                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMotionControlLibrary::STATIC_UpdateSpeed(float CurrentSpeed, float TargetSpeed, float Acceleration, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.MotionControlLibrary.UpdateSpeed");

	UMotionControlLibrary_UpdateSpeed_Params params;
	params.CurrentSpeed = CurrentSpeed;
	params.TargetSpeed = TargetSpeed;
	params.Acceleration = Acceleration;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.MotionControlLibrary.Spin
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                CurrentRotation                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          RotationRate                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 RotationAxis                   (Parm, IsPlainOldData)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UMotionControlLibrary::STATIC_Spin(const struct FRotator& CurrentRotation, float RotationRate, const struct FVector& RotationAxis, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.MotionControlLibrary.Spin");

	UMotionControlLibrary_Spin_Params params;
	params.CurrentRotation = CurrentRotation;
	params.RotationRate = RotationRate;
	params.RotationAxis = RotationAxis;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.OrbitingActorComponent.SetTargetActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  NewTarget                      (Parm, ZeroConstructor, IsPlainOldData)

void UOrbitingActorComponent::SetTargetActor(class AActor* NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.OrbitingActorComponent.SetTargetActor");

	UOrbitingActorComponent_SetTargetActor_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.OrbitingActorComponent.OnRep_TargetActor
// (Final, Native, Protected)
// Parameters:
// class AActor*                  LastTarget                     (Parm, ZeroConstructor, IsPlainOldData)

void UOrbitingActorComponent::OnRep_TargetActor(class AActor* LastTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.OrbitingActorComponent.OnRep_TargetActor");

	UOrbitingActorComponent_OnRep_TargetActor_Params params;
	params.LastTarget = LastTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.PawnAttachmentFunctionLibrary.RequestDetachPawnFromSlot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SlotName                       (Parm, ZeroConstructor, IsPlainOldData)

void UPawnAttachmentFunctionLibrary::STATIC_RequestDetachPawnFromSlot(class AActor* Actor, const struct FName& SlotName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.PawnAttachmentFunctionLibrary.RequestDetachPawnFromSlot");

	UPawnAttachmentFunctionLibrary_RequestDetachPawnFromSlot_Params params;
	params.Actor = Actor;
	params.SlotName = SlotName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.PawnAttachmentFunctionLibrary.RequestDetachPawnFromActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void UPawnAttachmentFunctionLibrary::STATIC_RequestDetachPawnFromActor(class APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.PawnAttachmentFunctionLibrary.RequestDetachPawnFromActor");

	UPawnAttachmentFunctionLibrary_RequestDetachPawnFromActor_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.PawnAttachmentFunctionLibrary.QueryPawnAttachment
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FPawnAttachmentQueryResult ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPawnAttachmentQueryResult UPawnAttachmentFunctionLibrary::STATIC_QueryPawnAttachment(class APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.PawnAttachmentFunctionLibrary.QueryPawnAttachment");

	UPawnAttachmentFunctionLibrary_QueryPawnAttachment_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.PawnAttachmentFunctionLibrary.FindPawnAttachSlotComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// class UPawnAttachSlotComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPawnAttachSlotComponent* UPawnAttachmentFunctionLibrary::STATIC_FindPawnAttachSlotComponent(class APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.PawnAttachmentFunctionLibrary.FindPawnAttachSlotComponent");

	UPawnAttachmentFunctionLibrary_FindPawnAttachSlotComponent_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.PawnAttachmentFunctionLibrary.DetachPawnFromSlot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SlotName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInstant                       (Parm, ZeroConstructor, IsPlainOldData)

void UPawnAttachmentFunctionLibrary::STATIC_DetachPawnFromSlot(class AActor* Actor, const struct FName& SlotName, bool bInstant)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.PawnAttachmentFunctionLibrary.DetachPawnFromSlot");

	UPawnAttachmentFunctionLibrary_DetachPawnFromSlot_Params params;
	params.Actor = Actor;
	params.SlotName = SlotName;
	params.bInstant = bInstant;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.PawnAttachmentFunctionLibrary.DetachPawnFromActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInstant                       (Parm, ZeroConstructor, IsPlainOldData)

void UPawnAttachmentFunctionLibrary::STATIC_DetachPawnFromActor(class APawn* Pawn, bool bInstant)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.PawnAttachmentFunctionLibrary.DetachPawnFromActor");

	UPawnAttachmentFunctionLibrary_DetachPawnFromActor_Params params;
	params.Pawn = Pawn;
	params.bInstant = bInstant;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.PawnAttachmentFunctionLibrary.AttachPawnToSlot
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SlotName                       (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInstant                       (Parm, ZeroConstructor, IsPlainOldData)

void UPawnAttachmentFunctionLibrary::STATIC_AttachPawnToSlot(class AActor* Actor, const struct FName& SlotName, class APawn* Pawn, bool bInstant)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.PawnAttachmentFunctionLibrary.AttachPawnToSlot");

	UPawnAttachmentFunctionLibrary_AttachPawnToSlot_Params params;
	params.Actor = Actor;
	params.SlotName = SlotName;
	params.Pawn = Pawn;
	params.bInstant = bInstant;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ProjectileAimViewPointHomingTargetComponent.SetTargetController
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AController*             InTargetController             (Parm, ZeroConstructor, IsPlainOldData)

void UProjectileAimViewPointHomingTargetComponent::SetTargetController(class AController* InTargetController)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ProjectileAimViewPointHomingTargetComponent.SetTargetController");

	UProjectileAimViewPointHomingTargetComponent_SetTargetController_Params params;
	params.InTargetController = InTargetController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ProjectileAimViewPointHomingTargetComponent.SetTargetActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InTargetActor                  (Parm, ZeroConstructor, IsPlainOldData)

void UProjectileAimViewPointHomingTargetComponent::SetTargetActor(class AActor* InTargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ProjectileAimViewPointHomingTargetComponent.SetTargetActor");

	UProjectileAimViewPointHomingTargetComponent_SetTargetActor_Params params;
	params.InTargetActor = InTargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ProjectileAimViewPointHomingTargetComponent.GetTargetController
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AController*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AController* UProjectileAimViewPointHomingTargetComponent::GetTargetController()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ProjectileAimViewPointHomingTargetComponent.GetTargetController");

	UProjectileAimViewPointHomingTargetComponent_GetTargetController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.ProjectileAimViewPointHomingTargetComponent.GetCurrentHomingLoc
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UProjectileAimViewPointHomingTargetComponent::GetCurrentHomingLoc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ProjectileAimViewPointHomingTargetComponent.GetCurrentHomingLoc");

	UProjectileAimViewPointHomingTargetComponent_GetCurrentHomingLoc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.ReferenceActor.EnumeratePreviewClasses
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// TArray<struct FName>           ClasssList                     (Parm, OutParm, ZeroConstructor)

void AReferenceActor::EnumeratePreviewClasses(TArray<struct FName>* ClasssList)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ReferenceActor.EnumeratePreviewClasses");

	AReferenceActor_EnumeratePreviewClasses_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClasssList != nullptr)
		*ClasssList = params.ClasssList;
}


// Function GbxGameSystemCore.ReplicatedEmitter.OnRep_TemplateOptions
// (Final, Native, Protected)

void AReplicatedEmitter::OnRep_TemplateOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ReplicatedEmitter.OnRep_TemplateOptions");

	AReplicatedEmitter_OnRep_TemplateOptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ReplicatedEmitter.OnRep_ReplicatedWwiseEvent
// (Final, Native, Protected)

void AReplicatedEmitter::OnRep_ReplicatedWwiseEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ReplicatedEmitter.OnRep_ReplicatedWwiseEvent");

	AReplicatedEmitter_OnRep_ReplicatedWwiseEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ReplicatedEmitter.OnRep_ReplicatedVectorParams
// (Final, Native, Protected)

void AReplicatedEmitter::OnRep_ReplicatedVectorParams()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ReplicatedEmitter.OnRep_ReplicatedVectorParams");

	AReplicatedEmitter_OnRep_ReplicatedVectorParams_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ReplicatedEmitter.OnRep_ReplicatedFloatParams
// (Final, Native, Protected)

void AReplicatedEmitter::OnRep_ReplicatedFloatParams()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ReplicatedEmitter.OnRep_ReplicatedFloatParams");

	AReplicatedEmitter_OnRep_ReplicatedFloatParams_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ReplicatedEmitter.OnRep_ReplicatedColorParams
// (Final, Native, Protected)

void AReplicatedEmitter::OnRep_ReplicatedColorParams()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ReplicatedEmitter.OnRep_ReplicatedColorParams");

	AReplicatedEmitter_OnRep_ReplicatedColorParams_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ReplicatedEmitter.OnRep_OwnerNoSeeEmitter
// (Final, Native, Protected)

void AReplicatedEmitter::OnRep_OwnerNoSeeEmitter()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ReplicatedEmitter.OnRep_OwnerNoSeeEmitter");

	AReplicatedEmitter_OnRep_OwnerNoSeeEmitter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.RigidBodyComponent.SetKinematic
// (Final, Native, Public)
// Parameters:
// class UPrimitiveComponent*     SleepingComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void URigidBodyComponent::SetKinematic(class UPrimitiveComponent* SleepingComponent, const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.RigidBodyComponent.SetKinematic");

	URigidBodyComponent_SetKinematic_Params params;
	params.SleepingComponent = SleepingComponent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.SceneBodySwitchComponent.OnRep_ReplicatedState
// (Final, Native, Private)

void USceneBodySwitchComponent::OnRep_ReplicatedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.SceneBodySwitchComponent.OnRep_ReplicatedState");

	USceneBodySwitchComponent_OnRep_ReplicatedState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.SceneBodySwitchComponent.HandleWwiseEventFinished
// (Final, Native, Private)
// Parameters:
// class UWwiseAudioComponent*    WAC                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWwiseEvent*             WwiseEvent                     (Parm, ZeroConstructor, IsPlainOldData)

void USceneBodySwitchComponent::HandleWwiseEventFinished(class UWwiseAudioComponent* WAC, class UWwiseEvent* WwiseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.SceneBodySwitchComponent.HandleWwiseEventFinished");

	USceneBodySwitchComponent_HandleWwiseEventFinished_Params params;
	params.WAC = WAC;
	params.WwiseEvent = WwiseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.SceneBodySwitchComponent.HandleParticleSystemFinished
// (Final, Native, Private)
// Parameters:
// class UParticleSystemComponent* PSC                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USceneBodySwitchComponent::HandleParticleSystemFinished(class UParticleSystemComponent* PSC)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.SceneBodySwitchComponent.HandleParticleSystemFinished");

	USceneBodySwitchComponent_HandleParticleSystemFinished_Params params;
	params.PSC = PSC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.SceneBodySwitchComponent.GetValidSwitchStateNames
// (Final, Native, Private, HasOutParms, Const)
// Parameters:
// TArray<struct FName>           OutNames                       (Parm, OutParm, ZeroConstructor)

void USceneBodySwitchComponent::GetValidSwitchStateNames(TArray<struct FName>* OutNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.SceneBodySwitchComponent.GetValidSwitchStateNames");

	USceneBodySwitchComponent_GetValidSwitchStateNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNames != nullptr)
		*OutNames = params.OutNames;
}


// Function GbxGameSystemCore.SceneBodySwitchFunctionLibrary.EnumerateValidSwitchStateNames
// (Final, Native, Private, HasOutParms, Const)
// Parameters:
// struct FName                   SwitchName                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           Names                          (Parm, OutParm, ZeroConstructor)

void USceneBodySwitchFunctionLibrary::EnumerateValidSwitchStateNames(const struct FName& SwitchName, TArray<struct FName>* Names)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.SceneBodySwitchFunctionLibrary.EnumerateValidSwitchStateNames");

	USceneBodySwitchFunctionLibrary_EnumerateValidSwitchStateNames_Params params;
	params.SwitchName = SwitchName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Names != nullptr)
		*Names = params.Names;
}


// Function GbxGameSystemCore.SceneBodySwitchFunctionLibrary.EnumerateValidSwitchNames
// (Final, Native, Private, HasOutParms, Const)
// Parameters:
// TArray<struct FName>           Names                          (Parm, OutParm, ZeroConstructor)

void USceneBodySwitchFunctionLibrary::EnumerateValidSwitchNames(TArray<struct FName>* Names)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.SceneBodySwitchFunctionLibrary.EnumerateValidSwitchNames");

	USceneBodySwitchFunctionLibrary_EnumerateValidSwitchNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Names != nullptr)
		*Names = params.Names;
}


// Function GbxGameSystemCore.SceneBodySwitchFunctionLibrary.ChangeSwitchExternal
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SwitchName                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   StateName                      (Parm, ZeroConstructor, IsPlainOldData)

void USceneBodySwitchFunctionLibrary::STATIC_ChangeSwitchExternal(class AActor* Actor, const struct FName& SwitchName, const struct FName& StateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.SceneBodySwitchFunctionLibrary.ChangeSwitchExternal");

	USceneBodySwitchFunctionLibrary_ChangeSwitchExternal_Params params;
	params.Actor = Actor;
	params.SwitchName = SwitchName;
	params.StateName = StateName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.SceneBodySwitchFunctionLibrary.ChangeSwitch
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SwitchName                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   StateName                      (Parm, ZeroConstructor, IsPlainOldData)

void USceneBodySwitchFunctionLibrary::STATIC_ChangeSwitch(class UObject* Context, const struct FName& SwitchName, const struct FName& StateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.SceneBodySwitchFunctionLibrary.ChangeSwitch");

	USceneBodySwitchFunctionLibrary_ChangeSwitch_Params params;
	params.Context = Context;
	params.SwitchName = SwitchName;
	params.StateName = StateName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ScreenParticleManagerComponent.ShowScreenParticleForActor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         Template                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHideWhenFinished              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ContentDims                    (Parm, IsPlainOldData)
// float                          ParticleDepth                  (Parm, ZeroConstructor, IsPlainOldData)
// EScreenParticleScalingMode     ScalingMode                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOnlyOwnerSee                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAlwaysVisible                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAllowMultipleInstances        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bServerAuthority               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTickEvenWhenPaused            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHideDuringInGameMenu          (Parm, ZeroConstructor, IsPlainOldData)

void UScreenParticleManagerComponent::STATIC_ShowScreenParticleForActor(class AActor* Actor, class UParticleSystem* Template, bool bHideWhenFinished, const struct FVector2D& ContentDims, float ParticleDepth, EScreenParticleScalingMode ScalingMode, bool bOnlyOwnerSee, bool bAlwaysVisible, const struct FName& Tag, bool bAllowMultipleInstances, bool bServerAuthority, bool bTickEvenWhenPaused, bool bHideDuringInGameMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ScreenParticleManagerComponent.ShowScreenParticleForActor");

	UScreenParticleManagerComponent_ShowScreenParticleForActor_Params params;
	params.Actor = Actor;
	params.Template = Template;
	params.bHideWhenFinished = bHideWhenFinished;
	params.ContentDims = ContentDims;
	params.ParticleDepth = ParticleDepth;
	params.ScalingMode = ScalingMode;
	params.bOnlyOwnerSee = bOnlyOwnerSee;
	params.bAlwaysVisible = bAlwaysVisible;
	params.Tag = Tag;
	params.bAllowMultipleInstances = bAllowMultipleInstances;
	params.bServerAuthority = bServerAuthority;
	params.bTickEvenWhenPaused = bTickEvenWhenPaused;
	params.bHideDuringInGameMenu = bHideDuringInGameMenu;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ScreenParticleManagerComponent.OnScreenParticleFinished
// (Final, Native, Private)
// Parameters:
// class UParticleSystemComponent* Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UScreenParticleManagerComponent::OnScreenParticleFinished(class UParticleSystemComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ScreenParticleManagerComponent.OnScreenParticleFinished");

	UScreenParticleManagerComponent_OnScreenParticleFinished_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ScreenParticleManagerComponent.HideScreenParticleForActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         Template                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAllowParticleToFinish         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bServerAuthority               (Parm, ZeroConstructor, IsPlainOldData)

void UScreenParticleManagerComponent::STATIC_HideScreenParticleForActor(class AActor* Actor, class UParticleSystem* Template, const struct FName& Tag, bool bAllowParticleToFinish, bool bServerAuthority)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ScreenParticleManagerComponent.HideScreenParticleForActor");

	UScreenParticleManagerComponent_HideScreenParticleForActor_Params params;
	params.Actor = Actor;
	params.Template = Template;
	params.Tag = Tag;
	params.bAllowParticleToFinish = bAllowParticleToFinish;
	params.bServerAuthority = bServerAuthority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ScreenParticleManagerComponent.ClientTrackParticleProperty
// (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)
// Parameters:
// class UParticlePropertyTrackingData* TrackingData                   (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         Template                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PropertyName                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          PropertyValue                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAddToValue                    (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      UsedMaterialProperty           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   MaterialPropertyName           (Parm, ZeroConstructor, IsPlainOldData)

void UScreenParticleManagerComponent::ClientTrackParticleProperty(class UParticlePropertyTrackingData* TrackingData, class UParticleSystem* Template, const struct FName& Tag, const struct FName& PropertyName, float PropertyValue, bool bAddToValue, class UMaterialInterface* UsedMaterialProperty, const struct FName& MaterialPropertyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ScreenParticleManagerComponent.ClientTrackParticleProperty");

	UScreenParticleManagerComponent_ClientTrackParticleProperty_Params params;
	params.TrackingData = TrackingData;
	params.Template = Template;
	params.Tag = Tag;
	params.PropertyName = PropertyName;
	params.PropertyValue = PropertyValue;
	params.bAddToValue = bAddToValue;
	params.UsedMaterialProperty = UsedMaterialProperty;
	params.MaterialPropertyName = MaterialPropertyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ScreenParticleManagerComponent.ClientShowScreenParticleEx
// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// class UParticleSystem*         Template                       (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  InitFlags                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ContentDims                    (Parm, IsPlainOldData)
// float                          ParticleDepth                  (Parm, ZeroConstructor, IsPlainOldData)
// EScreenParticleScalingMode     ScalingMode                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData)

void UScreenParticleManagerComponent::ClientShowScreenParticleEx(class UParticleSystem* Template, unsigned char InitFlags, const struct FVector2D& ContentDims, float ParticleDepth, EScreenParticleScalingMode ScalingMode, const struct FName& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ScreenParticleManagerComponent.ClientShowScreenParticleEx");

	UScreenParticleManagerComponent_ClientShowScreenParticleEx_Params params;
	params.Template = Template;
	params.InitFlags = InitFlags;
	params.ContentDims = ContentDims;
	params.ParticleDepth = ParticleDepth;
	params.ScalingMode = ScalingMode;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ScreenParticleManagerComponent.ClientShowScreenParticle
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UParticleSystem*         Template                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHideWhenFinished              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ContentDims                    (Parm, IsPlainOldData)
// float                          ParticleDepth                  (Parm, ZeroConstructor, IsPlainOldData)
// EScreenParticleScalingMode     ScalingMode                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOnlyOwnerSee                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAlwaysVisible                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAllowMultipleInstances        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTickEvenWhenPaused            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHideDuringInGameMenu          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDepthPriorityWorld            (Parm, ZeroConstructor, IsPlainOldData)

void UScreenParticleManagerComponent::ClientShowScreenParticle(class UParticleSystem* Template, bool bHideWhenFinished, const struct FVector2D& ContentDims, float ParticleDepth, EScreenParticleScalingMode ScalingMode, bool bOnlyOwnerSee, bool bAlwaysVisible, const struct FName& Tag, bool bAllowMultipleInstances, bool bTickEvenWhenPaused, bool bHideDuringInGameMenu, bool bDepthPriorityWorld)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ScreenParticleManagerComponent.ClientShowScreenParticle");

	UScreenParticleManagerComponent_ClientShowScreenParticle_Params params;
	params.Template = Template;
	params.bHideWhenFinished = bHideWhenFinished;
	params.ContentDims = ContentDims;
	params.ParticleDepth = ParticleDepth;
	params.ScalingMode = ScalingMode;
	params.bOnlyOwnerSee = bOnlyOwnerSee;
	params.bAlwaysVisible = bAlwaysVisible;
	params.Tag = Tag;
	params.bAllowMultipleInstances = bAllowMultipleInstances;
	params.bTickEvenWhenPaused = bTickEvenWhenPaused;
	params.bHideDuringInGameMenu = bHideDuringInGameMenu;
	params.bDepthPriorityWorld = bDepthPriorityWorld;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ScreenParticleManagerComponent.ClientSetScreenParticleVectorParameter
// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient, BlueprintCallable)
// Parameters:
// class UParticleSystem*         Template                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Param                          (Parm, IsPlainOldData)

void UScreenParticleManagerComponent::ClientSetScreenParticleVectorParameter(class UParticleSystem* Template, const struct FName& Tag, const struct FName& ParameterName, const struct FVector& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ScreenParticleManagerComponent.ClientSetScreenParticleVectorParameter");

	UScreenParticleManagerComponent_ClientSetScreenParticleVectorParameter_Params params;
	params.Template = Template;
	params.Tag = Tag;
	params.ParameterName = ParameterName;
	params.Param = Param;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ScreenParticleManagerComponent.ClientSetScreenParticleMaterialParameter
// (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)
// Parameters:
// class UParticleSystem*         Template                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      Param                          (Parm, ZeroConstructor, IsPlainOldData)

void UScreenParticleManagerComponent::ClientSetScreenParticleMaterialParameter(class UParticleSystem* Template, const struct FName& Tag, const struct FName& ParameterName, class UMaterialInterface* Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ScreenParticleManagerComponent.ClientSetScreenParticleMaterialParameter");

	UScreenParticleManagerComponent_ClientSetScreenParticleMaterialParameter_Params params;
	params.Template = Template;
	params.Tag = Tag;
	params.ParameterName = ParameterName;
	params.Param = Param;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ScreenParticleManagerComponent.ClientSetScreenParticleFloatParameter
// (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)
// Parameters:
// class UParticleSystem*         Template                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Param                          (Parm, ZeroConstructor, IsPlainOldData)

void UScreenParticleManagerComponent::ClientSetScreenParticleFloatParameter(class UParticleSystem* Template, const struct FName& Tag, const struct FName& ParameterName, float Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ScreenParticleManagerComponent.ClientSetScreenParticleFloatParameter");

	UScreenParticleManagerComponent_ClientSetScreenParticleFloatParameter_Params params;
	params.Template = Template;
	params.Tag = Tag;
	params.ParameterName = ParameterName;
	params.Param = Param;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ScreenParticleManagerComponent.ClientSetScreenParticleColorParameter
// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient, BlueprintCallable)
// Parameters:
// class UParticleSystem*         Template                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Param                          (Parm, IsPlainOldData)

void UScreenParticleManagerComponent::ClientSetScreenParticleColorParameter(class UParticleSystem* Template, const struct FName& Tag, const struct FName& ParameterName, const struct FLinearColor& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ScreenParticleManagerComponent.ClientSetScreenParticleColorParameter");

	UScreenParticleManagerComponent_ClientSetScreenParticleColorParameter_Params params;
	params.Template = Template;
	params.Tag = Tag;
	params.ParameterName = ParameterName;
	params.Param = Param;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ScreenParticleManagerComponent.ClientSetScreenParticleActorParameter
// (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)
// Parameters:
// class UParticleSystem*         Template                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Param                          (Parm, ZeroConstructor, IsPlainOldData)

void UScreenParticleManagerComponent::ClientSetScreenParticleActorParameter(class UParticleSystem* Template, const struct FName& Tag, const struct FName& ParameterName, class AActor* Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ScreenParticleManagerComponent.ClientSetScreenParticleActorParameter");

	UScreenParticleManagerComponent_ClientSetScreenParticleActorParameter_Params params;
	params.Template = Template;
	params.Tag = Tag;
	params.ParameterName = ParameterName;
	params.Param = Param;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.ScreenParticleManagerComponent.ClientHideScreenParticle
// (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)
// Parameters:
// class UParticleSystem*         Template                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAllowParticleToFinish         (Parm, ZeroConstructor, IsPlainOldData)

void UScreenParticleManagerComponent::ClientHideScreenParticle(class UParticleSystem* Template, const struct FName& Tag, bool bAllowParticleToFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.ScreenParticleManagerComponent.ClientHideScreenParticle");

	UScreenParticleManagerComponent_ClientHideScreenParticle_Params params;
	params.Template = Template;
	params.Tag = Tag;
	params.bAllowParticleToFinish = bAllowParticleToFinish;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.StanceBlueprintLibrary.TryGetStanceComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AAIController*           AIController                   (Parm, ZeroConstructor, IsPlainOldData)
// class UStanceComponent*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UStanceComponent* UStanceBlueprintLibrary::STATIC_TryGetStanceComponent(class AAIController* AIController)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.StanceBlueprintLibrary.TryGetStanceComponent");

	UStanceBlueprintLibrary_TryGetStanceComponent_Params params;
	params.AIController = AIController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.StanceBlueprintLibrary.SetStance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UStanceDataProvider*     Stance                         (Parm, ZeroConstructor, IsPlainOldData)

void UStanceBlueprintLibrary::STATIC_SetStance(class AActor* Target, class UStanceDataProvider* Stance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.StanceBlueprintLibrary.SetStance");

	UStanceBlueprintLibrary_SetStance_Params params;
	params.Target = Target;
	params.Stance = Stance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.StanceBlueprintLibrary.IsStanceComponentInStance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UStanceComponent*        StanceComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UStanceDataProvider*     Stance                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStanceBlueprintLibrary::STATIC_IsStanceComponentInStance(class UStanceComponent* StanceComponent, class UStanceDataProvider* Stance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.StanceBlueprintLibrary.IsStanceComponentInStance");

	UStanceBlueprintLibrary_IsStanceComponentInStance_Params params;
	params.StanceComponent = StanceComponent;
	params.Stance = Stance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.StanceBlueprintLibrary.IsInStance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnimInstance*           AnimInstance                   (Parm, ZeroConstructor, IsPlainOldData)
// class UStanceDataProvider*     Stance                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStanceBlueprintLibrary::STATIC_IsInStance(class UAnimInstance* AnimInstance, class UStanceDataProvider* Stance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.StanceBlueprintLibrary.IsInStance");

	UStanceBlueprintLibrary_IsInStance_Params params;
	params.AnimInstance = AnimInstance;
	params.Stance = Stance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.StanceBlueprintLibrary.EqualEqual_StanceTypeStanceType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UStanceType*             A                              (Parm, ZeroConstructor, IsPlainOldData)
// class UStanceType*             B                              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStanceBlueprintLibrary::STATIC_EqualEqual_StanceTypeStanceType(class UStanceType* A, class UStanceType* B)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.StanceBlueprintLibrary.EqualEqual_StanceTypeStanceType");

	UStanceBlueprintLibrary_EqualEqual_StanceTypeStanceType_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.StanceBlueprintLibrary.EqualEqual_StanceDataStanceData
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UStanceData*             A                              (Parm, ZeroConstructor, IsPlainOldData)
// class UStanceData*             B                              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStanceBlueprintLibrary::STATIC_EqualEqual_StanceDataStanceData(class UStanceData* A, class UStanceData* B)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.StanceBlueprintLibrary.EqualEqual_StanceDataStanceData");

	UStanceBlueprintLibrary_EqualEqual_StanceDataStanceData_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.StanceBlueprintLibrary.ClearStance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)

void UStanceBlueprintLibrary::STATIC_ClearStance(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.StanceBlueprintLibrary.ClearStance");

	UStanceBlueprintLibrary_ClearStance_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.StanceComponent.StackStanceChangedCallback
// (Final, Native, Private)
// Parameters:
// EStanceStackLayer              PreviousLayer                  (Parm, ZeroConstructor, IsPlainOldData)
// class UStanceData*             PreviousStance                 (Parm, ZeroConstructor, IsPlainOldData)
// EStanceStackLayer              NextLayer                      (Parm, ZeroConstructor, IsPlainOldData)
// class UStanceData*             NextStance                     (Parm, ZeroConstructor, IsPlainOldData)

void UStanceComponent::StackStanceChangedCallback(EStanceStackLayer PreviousLayer, class UStanceData* PreviousStance, EStanceStackLayer NextLayer, class UStanceData* NextStance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.StanceComponent.StackStanceChangedCallback");

	UStanceComponent_StackStanceChangedCallback_Params params;
	params.PreviousLayer = PreviousLayer;
	params.PreviousStance = PreviousStance;
	params.NextLayer = NextLayer;
	params.NextStance = NextStance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.StanceComponent.SetStanceLayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EStanceStackLayer              Layer                          (Parm, ZeroConstructor, IsPlainOldData)
// class UStanceDataProvider*     NewStance                      (Parm, ZeroConstructor, IsPlainOldData)

void UStanceComponent::SetStanceLayer(EStanceStackLayer Layer, class UStanceDataProvider* NewStance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.StanceComponent.SetStanceLayer");

	UStanceComponent_SetStanceLayer_Params params;
	params.Layer = Layer;
	params.NewStance = NewStance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.StanceComponent.SetBlueprintStance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UStanceDataProvider*     NewStance                      (Parm, ZeroConstructor, IsPlainOldData)

void UStanceComponent::SetBlueprintStance(class UStanceDataProvider* NewStance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.StanceComponent.SetBlueprintStance");

	UStanceComponent_SetBlueprintStance_Params params;
	params.NewStance = NewStance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.StanceComponent.OnRep_StanceState
// (Final, Native, Private)

void UStanceComponent::OnRep_StanceState()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.StanceComponent.OnRep_StanceState");

	UStanceComponent_OnRep_StanceState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.StanceComponent.IsInStanceType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UStanceType*             Type                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStanceComponent::IsInStanceType(class UStanceType* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.StanceComponent.IsInStanceType");

	UStanceComponent_IsInStanceType_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.StanceComponent.IsInStanceLayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EStanceStackLayer              Layer                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStanceComponent::IsInStanceLayer(EStanceStackLayer Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.StanceComponent.IsInStanceLayer");

	UStanceComponent_IsInStanceLayer_Params params;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.StanceComponent.IsInStance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UStanceDataProvider*     Stance                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStanceComponent::IsInStance(class UStanceDataProvider* Stance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.StanceComponent.IsInStance");

	UStanceComponent_IsInStance_Params params;
	params.Stance = Stance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.StanceComponent.IsInAnimStance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UStanceDataProvider*     Stance                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStanceComponent::IsInAnimStance(class UStanceDataProvider* Stance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.StanceComponent.IsInAnimStance");

	UStanceComponent_IsInAnimStance_Params params;
	params.Stance = Stance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.StanceComponent.GetTimeSpentInCurrentStance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UStanceComponent::GetTimeSpentInCurrentStance()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.StanceComponent.GetTimeSpentInCurrentStance");

	UStanceComponent_GetTimeSpentInCurrentStance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.StanceComponent.GetStanceLayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EStanceStackLayer              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EStanceStackLayer UStanceComponent::GetStanceLayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.StanceComponent.GetStanceLayer");

	UStanceComponent_GetStanceLayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.StanceComponent.GetStance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UStanceData*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UStanceData* UStanceComponent::GetStance()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.StanceComponent.GetStance");

	UStanceComponent_GetStance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.StanceComponent.FindTypeForStance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UStanceData*             Stance                         (Parm, ZeroConstructor, IsPlainOldData)
// class UStanceType*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UStanceType* UStanceComponent::FindTypeForStance(class UStanceData* Stance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.StanceComponent.FindTypeForStance");

	UStanceComponent_FindTypeForStance_Params params;
	params.Stance = Stance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.StanceComponent.FindStanceForType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UStanceType*             Type                           (Parm, ZeroConstructor, IsPlainOldData)
// class UStanceData*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UStanceData* UStanceComponent::FindStanceForType(class UStanceType* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.StanceComponent.FindStanceForType");

	UStanceComponent_FindStanceForType_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.StanceComponent.ClearStanceLayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EStanceStackLayer              Layer                          (Parm, ZeroConstructor, IsPlainOldData)

void UStanceComponent::ClearStanceLayer(EStanceStackLayer Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.StanceComponent.ClearStanceLayer");

	UStanceComponent_ClearStanceLayer_Params params;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.StanceComponent.ClearBlueprintStance
// (Final, Native, Public, BlueprintCallable)

void UStanceComponent::ClearBlueprintStance()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.StanceComponent.ClearBlueprintStance");

	UStanceComponent_ClearBlueprintStance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.StatusEffect.OnEndEffect
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)

void UStatusEffect::OnEndEffect(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.StatusEffect.OnEndEffect");

	UStatusEffect_OnEndEffect_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.StatusEffect.OnBeginEffect
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)

void UStatusEffect::OnBeginEffect(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.StatusEffect.OnBeginEffect");

	UStatusEffect_OnBeginEffect_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.TargetableComponent.SetTargetUIName
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UGbxUIName*              NewTargetUIName                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UTargetableComponent::SetTargetUIName(class UGbxUIName* NewTargetUIName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetableComponent.SetTargetUIName");

	UTargetableComponent_SetTargetUIName_Params params;
	params.NewTargetUIName = NewTargetUIName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.TargetableComponent.SetTargetName
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   NewTargetName                  (ConstParm, Parm, OutParm, ReferenceParm)

void UTargetableComponent::SetTargetName(const struct FText& NewTargetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetableComponent.SetTargetName");

	UTargetableComponent_SetTargetName_Params params;
	params.NewTargetName = NewTargetName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.TargetableComponent.SetIsTargetableByNonPlayers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           IsTargetable                   (Parm, ZeroConstructor, IsPlainOldData)

void UTargetableComponent::SetIsTargetableByNonPlayers(bool IsTargetable)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetableComponent.SetIsTargetableByNonPlayers");

	UTargetableComponent_SetIsTargetableByNonPlayers_Params params;
	params.IsTargetable = IsTargetable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.TargetableComponent.SetIsTargetableByHumanPlayers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           IsTargetable                   (Parm, ZeroConstructor, IsPlainOldData)

void UTargetableComponent::SetIsTargetableByHumanPlayers(bool IsTargetable)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetableComponent.SetIsTargetableByHumanPlayers");

	UTargetableComponent_SetIsTargetableByHumanPlayers_Params params;
	params.IsTargetable = IsTargetable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.TargetableComponent.SetIsTargetableByAIPlayers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           IsTargetable                   (Parm, ZeroConstructor, IsPlainOldData)

void UTargetableComponent::SetIsTargetableByAIPlayers(bool IsTargetable)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetableComponent.SetIsTargetableByAIPlayers");

	UTargetableComponent_SetIsTargetableByAIPlayers_Params params;
	params.IsTargetable = IsTargetable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.TargetableComponent.SetIsTargetable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           IsTargetable                   (Parm, ZeroConstructor, IsPlainOldData)

void UTargetableComponent::SetIsTargetable(bool IsTargetable)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetableComponent.SetIsTargetable");

	UTargetableComponent_SetIsTargetable_Params params;
	params.IsTargetable = IsTargetable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.TargetableComponent.OnRep_TargetUIName
// (Final, Native, Private)

void UTargetableComponent::OnRep_TargetUIName()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetableComponent.OnRep_TargetUIName");

	UTargetableComponent_OnRep_TargetUIName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.TargetableComponent.IsTargetableByPawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn*                   Pawn                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTargetableComponent::IsTargetableByPawn(class APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetableComponent.IsTargetableByPawn");

	UTargetableComponent_IsTargetableByPawn_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.TargetableComponent.IsTargetableByNonPlayers
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTargetableComponent::IsTargetableByNonPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetableComponent.IsTargetableByNonPlayers");

	UTargetableComponent_IsTargetableByNonPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.TargetableComponent.IsTargetableByHumanPlayers
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTargetableComponent::IsTargetableByHumanPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetableComponent.IsTargetableByHumanPlayers");

	UTargetableComponent_IsTargetableByHumanPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.TargetableComponent.IsTargetableByController
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AController*             Controller                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTargetableComponent::IsTargetableByController(class AController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetableComponent.IsTargetableByController");

	UTargetableComponent_IsTargetableByController_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.TargetableComponent.IsTargetableByAIPlayers
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTargetableComponent::IsTargetableByAIPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetableComponent.IsTargetableByAIPlayers");

	UTargetableComponent_IsTargetableByAIPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.TargetableComponent.IsTargetableByActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTargetableComponent::IsTargetableByActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetableComponent.IsTargetableByActor");

	UTargetableComponent_IsTargetableByActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.TargetableComponent.IsTargetable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTargetableComponent::IsTargetable()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetableComponent.IsTargetable");

	UTargetableComponent_IsTargetable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.TargetableComponent.GetTargetSocketName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UTargetableComponent::GetTargetSocketName()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetableComponent.GetTargetSocketName");

	UTargetableComponent_GetTargetSocketName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.TargetableComponent.GetTargetProxyComponentNames
// (Final, Native, Private, HasOutParms, Const)
// Parameters:
// TArray<struct FName>           Array                          (Parm, OutParm, ZeroConstructor)

void UTargetableComponent::GetTargetProxyComponentNames(TArray<struct FName>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetableComponent.GetTargetProxyComponentNames");

	UTargetableComponent_GetTargetProxyComponentNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function GbxGameSystemCore.TargetableComponent.GetTargetNameString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UTargetableComponent::GetTargetNameString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetableComponent.GetTargetNameString");

	UTargetableComponent_GetTargetNameString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.TargetableComponent.GetTargetLocations
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector> UTargetableComponent::GetTargetLocations()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetableComponent.GetTargetLocations");

	UTargetableComponent_GetTargetLocations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.TargetableComponent.GetTargetLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UTargetableComponent::GetTargetLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetableComponent.GetTargetLocation");

	UTargetableComponent_GetTargetLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.TargetableComponent.GetClosestTargetLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 Origin                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Direction                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UTargetableComponent::GetClosestTargetLocation(const struct FVector& Origin, const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetableComponent.GetClosestTargetLocation");

	UTargetableComponent_GetClosestTargetLocation_Params params;
	params.Origin = Origin;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.TargetableComponent.GetAvailableSocketNames
// (Final, Native, Private, HasOutParms, Const)
// Parameters:
// TArray<struct FName>           Array                          (Parm, OutParm, ZeroConstructor)

void UTargetableComponent::GetAvailableSocketNames(TArray<struct FName>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetableComponent.GetAvailableSocketNames");

	UTargetableComponent_GetAvailableSocketNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function GbxGameSystemCore.TargetActorInfoLibrary.IsSenseActive
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTargetActorInfo        Info                           (ConstParm, Parm, OutParm, ReferenceParm)
// class UClass*                  Sense                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTargetActorInfoLibrary::STATIC_IsSenseActive(const struct FTargetActorInfo& Info, class UClass* Sense)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetActorInfoLibrary.IsSenseActive");

	UTargetActorInfoLibrary_IsSenseActive_Params params;
	params.Info = Info;
	params.Sense = Sense;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.TargetActorInfoLibrary.IsExistingTarget
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTargetActorInfo        Info                           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTargetActorInfoLibrary::STATIC_IsExistingTarget(const struct FTargetActorInfo& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetActorInfoLibrary.IsExistingTarget");

	UTargetActorInfoLibrary_IsExistingTarget_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.TargetActorInfoLibrary.IsDirectlySensed
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTargetActorInfo        Info                           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTargetActorInfoLibrary::STATIC_IsDirectlySensed(const struct FTargetActorInfo& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetActorInfoLibrary.IsDirectlySensed");

	UTargetActorInfoLibrary_IsDirectlySensed_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.TargetActorInfoLibrary.HasStimulusForSense
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTargetActorInfo        Info                           (ConstParm, Parm, OutParm, ReferenceParm)
// class UClass*                  Sense                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTargetActorInfoLibrary::STATIC_HasStimulusForSense(const struct FTargetActorInfo& Info, class UClass* Sense)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetActorInfoLibrary.HasStimulusForSense");

	UTargetActorInfoLibrary_HasStimulusForSense_Params params;
	params.Info = Info;
	params.Sense = Sense;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.TargetActorInfoLibrary.HasAnyKnownStimuli
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTargetActorInfo        Info                           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTargetActorInfoLibrary::STATIC_HasAnyKnownStimuli(const struct FTargetActorInfo& Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetActorInfoLibrary.HasAnyKnownStimuli");

	UTargetActorInfoLibrary_HasAnyKnownStimuli_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.TargetActorInfoLibrary.GetStimulusLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTargetActorInfo        Info                           (ConstParm, Parm, OutParm, ReferenceParm)
// class UClass*                  Sense                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UTargetActorInfoLibrary::STATIC_GetStimulusLocation(const struct FTargetActorInfo& Info, class UClass* Sense)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetActorInfoLibrary.GetStimulusLocation");

	UTargetActorInfoLibrary_GetStimulusLocation_Params params;
	params.Info = Info;
	params.Sense = Sense;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.TargetActorInfoLibrary.GetStimulusForSense
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTargetActorInfo        Info                           (ConstParm, Parm, OutParm, ReferenceParm)
// class UClass*                  Sense                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FAIStimulus             Stimulus                       (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTargetActorInfoLibrary::STATIC_GetStimulusForSense(const struct FTargetActorInfo& Info, class UClass* Sense, struct FAIStimulus* Stimulus)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetActorInfoLibrary.GetStimulusForSense");

	UTargetActorInfoLibrary_GetStimulusForSense_Params params;
	params.Info = Info;
	params.Sense = Sense;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stimulus != nullptr)
		*Stimulus = params.Stimulus;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.TargetActorInfoLibrary.GetReceiverLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTargetActorInfo        Info                           (ConstParm, Parm, OutParm, ReferenceParm)
// class UClass*                  Sense                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UTargetActorInfoLibrary::STATIC_GetReceiverLocation(const struct FTargetActorInfo& Info, class UClass* Sense)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetActorInfoLibrary.GetReceiverLocation");

	UTargetActorInfoLibrary_GetReceiverLocation_Params params;
	params.Info = Info;
	params.Sense = Sense;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.TargetActorInfoLibrary.GetBestStimulusLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTargetActorInfo        Info                           (ConstParm, Parm, OutParm, ReferenceParm)
// float                          Age                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UTargetActorInfoLibrary::STATIC_GetBestStimulusLocation(const struct FTargetActorInfo& Info, float* Age)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetActorInfoLibrary.GetBestStimulusLocation");

	UTargetActorInfoLibrary_GetBestStimulusLocation_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Age != nullptr)
		*Age = params.Age;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.TargetActorInfoLibrary.GetBestStimulus
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTargetActorInfo        Info                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FAIStimulus             Stimulus                       (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTargetActorInfoLibrary::STATIC_GetBestStimulus(const struct FTargetActorInfo& Info, struct FAIStimulus* Stimulus)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetActorInfoLibrary.GetBestStimulus");

	UTargetActorInfoLibrary_GetBestStimulus_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stimulus != nullptr)
		*Stimulus = params.Stimulus;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.TargetActorInfoLibrary.GetBestAttackLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTargetActorInfo        Info                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 OutTargetVelocity              (Parm, OutParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UTargetActorInfoLibrary::STATIC_GetBestAttackLocation(const struct FTargetActorInfo& Info, struct FVector* OutTargetVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetActorInfoLibrary.GetBestAttackLocation");

	UTargetActorInfoLibrary_GetBestAttackLocation_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTargetVelocity != nullptr)
		*OutTargetVelocity = params.OutTargetVelocity;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.TargetActorInfoLibrary.FindActorTargetingComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UTargetingComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UTargetingComponent* UTargetActorInfoLibrary::STATIC_FindActorTargetingComponent(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetActorInfoLibrary.FindActorTargetingComponent");

	UTargetActorInfoLibrary_FindActorTargetingComponent_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.TargetingComponent.ServerSetBestTarget
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class AActor*                  NewBestTarget                  (Parm, ZeroConstructor, IsPlainOldData)

void UTargetingComponent::ServerSetBestTarget(class AActor* NewBestTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetingComponent.ServerSetBestTarget");

	UTargetingComponent_ServerSetBestTarget_Params params;
	params.NewBestTarget = NewBestTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.TargetingComponent.IsBestTargetDirectlySensed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TargetIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTargetingComponent::IsBestTargetDirectlySensed(int TargetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetingComponent.IsBestTargetDirectlySensed");

	UTargetingComponent_IsBestTargetDirectlySensed_Params params;
	params.TargetIndex = TargetIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.TargetingComponent.HasTargets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTargetingComponent::HasTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetingComponent.HasTargets");

	UTargetingComponent_HasTargets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.TargetingComponent.HasTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTargetingComponent::HasTarget(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetingComponent.HasTarget");

	UTargetingComponent_HasTarget_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.TargetingComponent.GetTargetLocationForActor
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetLocation                 (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTargetingComponent::GetTargetLocationForActor(class AActor* Actor, struct FVector* TargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetingComponent.GetTargetLocationForActor");

	UTargetingComponent_GetTargetLocationForActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetLocation != nullptr)
		*TargetLocation = params.TargetLocation;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.TargetingComponent.GetTargetInfoForActor
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FTargetActorInfo        TargetInfo                     (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTargetingComponent::GetTargetInfoForActor(class AActor* Actor, struct FTargetActorInfo* TargetInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetingComponent.GetTargetInfoForActor");

	UTargetingComponent_GetTargetInfoForActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetInfo != nullptr)
		*TargetInfo = params.TargetInfo;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.TargetingComponent.GetTargetInfoCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTargetingComponent::GetTargetInfoCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetingComponent.GetTargetInfoCount");

	UTargetingComponent_GetTargetInfoCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.TargetingComponent.GetTargetInfoAt
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TargetIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FTargetActorInfo        TargetInfo                     (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTargetingComponent::GetTargetInfoAt(int TargetIndex, struct FTargetActorInfo* TargetInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetingComponent.GetTargetInfoAt");

	UTargetingComponent_GetTargetInfoAt_Params params;
	params.TargetIndex = TargetIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetInfo != nullptr)
		*TargetInfo = params.TargetInfo;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.TargetingComponent.GetTargetActorAt
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TargetIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UTargetingComponent::GetTargetActorAt(int TargetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetingComponent.GetTargetActorAt");

	UTargetingComponent_GetTargetActorAt_Params params;
	params.TargetIndex = TargetIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.TargetingComponent.GetBestThreatActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bRequireFirsthandKnowledge     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UTargetingComponent::GetBestThreatActor(bool bRequireFirsthandKnowledge)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetingComponent.GetBestThreatActor");

	UTargetingComponent_GetBestThreatActor_Params params;
	params.bRequireFirsthandKnowledge = bRequireFirsthandKnowledge;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.TargetingComponent.GetBestTargetLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TargetIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UTargetingComponent::GetBestTargetLocation(int TargetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetingComponent.GetBestTargetLocation");

	UTargetingComponent_GetBestTargetLocation_Params params;
	params.TargetIndex = TargetIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.TargetingComponent.GetBestTargetInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTargetActorInfo        TargetInfo                     (Parm, OutParm)
// int                            TargetIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTargetingComponent::GetBestTargetInfo(int TargetIndex, struct FTargetActorInfo* TargetInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetingComponent.GetBestTargetInfo");

	UTargetingComponent_GetBestTargetInfo_Params params;
	params.TargetIndex = TargetIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetInfo != nullptr)
		*TargetInfo = params.TargetInfo;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.TargetingComponent.GetBestTargetActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TargetIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UTargetingComponent::GetBestTargetActor(int TargetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetingComponent.GetBestTargetActor");

	UTargetingComponent_GetBestTargetActor_Params params;
	params.TargetIndex = TargetIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.TargetingComponent.GetBestTargetableComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            TargetIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// class UTargetableComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UTargetableComponent* UTargetingComponent::GetBestTargetableComponent(int TargetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetingComponent.GetBestTargetableComponent");

	UTargetingComponent_GetBestTargetableComponent_Params params;
	params.TargetIndex = TargetIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.TargetingComponent.GetBestAttackTargetLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 OutTargetVelocity              (Parm, OutParm, IsPlainOldData)
// int                            TargetIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UTargetingComponent::GetBestAttackTargetLocation(int TargetIndex, struct FVector* OutTargetVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetingComponent.GetBestAttackTargetLocation");

	UTargetingComponent_GetBestAttackTargetLocation_Params params;
	params.TargetIndex = TargetIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTargetVelocity != nullptr)
		*OutTargetVelocity = params.OutTargetVelocity;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.TargetingComponent.DoesBestTargetHaveStimulusForSense
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  Sense                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxAge                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            TargetIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTargetingComponent::DoesBestTargetHaveStimulusForSense(class UClass* Sense, float MaxAge, int TargetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetingComponent.DoesBestTargetHaveStimulusForSense");

	UTargetingComponent_DoesBestTargetHaveStimulusForSense_Params params;
	params.Sense = Sense;
	params.MaxAge = MaxAge;
	params.TargetIndex = TargetIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.TargetingDebugServerRpcComponent.SetInspectedActor
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UTargetingDebugServerRpcComponent::SetInspectedActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.TargetingDebugServerRpcComponent.SetInspectedActor");

	UTargetingDebugServerRpcComponent_SetInspectedActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.Team.GetAttitudeToward
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTeam*                   Team                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETeamAttitude>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ETeamAttitude> UTeam::GetAttitudeToward(class UTeam* Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.Team.GetAttitudeToward");

	UTeam_GetAttitudeToward_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.UserStatesInterface.HasEnableConditionsSetForAnyUserState
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUserStatesInterface::HasEnableConditionsSetForAnyUserState()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.UserStatesInterface.HasEnableConditionsSetForAnyUserState");

	UUserStatesInterface_HasEnableConditionsSetForAnyUserState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.UserStatesInterface.BlueprintStateHandler
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (Parm, ZeroConstructor, IsPlainOldData)

void UUserStatesInterface::BlueprintStateHandler(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.UserStatesInterface.BlueprintStateHandler");

	UUserStatesInterface_BlueprintStateHandler_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.UserStatesFunctionLibrary.HasEnableConditionsSetForSpecificUserState
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Context                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   UserStateProperty              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUserStatesFunctionLibrary::STATIC_HasEnableConditionsSetForSpecificUserState(class UObject* Context, const struct FName& UserStateProperty)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.UserStatesFunctionLibrary.HasEnableConditionsSetForSpecificUserState");

	UUserStatesFunctionLibrary_HasEnableConditionsSetForSpecificUserState_Params params;
	params.Context = Context;
	params.UserStateProperty = UserStateProperty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxGameSystemCore.UseSystemFunctionLibrary.SetIsUsable
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNewIsUsable                   (Parm, ZeroConstructor, IsPlainOldData)

void UUseSystemFunctionLibrary::STATIC_SetIsUsable(class AActor* Actor, bool bNewIsUsable)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.UseSystemFunctionLibrary.SetIsUsable");

	UUseSystemFunctionLibrary_SetIsUsable_Params params;
	params.Actor = Actor;
	params.bNewIsUsable = bNewIsUsable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxGameSystemCore.UseSystemFunctionLibrary.ResetUseCount
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UUseSystemFunctionLibrary::STATIC_ResetUseCount(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxGameSystemCore.UseSystemFunctionLibrary.ResetUseCount");

	UUseSystemFunctionLibrary_ResetUseCount_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
