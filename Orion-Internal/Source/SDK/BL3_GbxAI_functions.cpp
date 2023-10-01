// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxAI_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GbxAI.AIActionBase.StopBP
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UAIActionBase*           Action                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FAIActionBlueprintContext Context                        (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bSucceeded                     (Parm, ZeroConstructor, IsPlainOldData)

void UAIActionBase::STATIC_StopBP(class UAIActionBase* Action, const struct FAIActionBlueprintContext& Context, bool bSucceeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AIActionBase.StopBP");

	UAIActionBase_StopBP_Params params;
	params.Action = Action;
	params.Context = Context;
	params.bSucceeded = bSucceeded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.AIActionBase.CreateSubobjectNoName
// (Final, Native, Public)
// Parameters:
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UAIActionBase::CreateSubobjectNoName(class UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AIActionBase.CreateSubobjectNoName");

	UAIActionBase_CreateSubobjectNoName_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.AIAction.CreateSubAction
// (Final, Native, Public)
// Parameters:
// class UClass*                  ActionClass                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// class UAIAction*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAIAction* UAIAction::CreateSubAction(class UClass* ActionClass, const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AIAction.CreateSubAction");

	UAIAction_CreateSubAction_Params params;
	params.ActionClass = ActionClass;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.AIAction_Composite.CreateChild
// (Final, Native, Public)
// Parameters:
// struct FName                   ChildName                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAIAction_CompositeChild* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAIAction_CompositeChild* UAIAction_Composite::CreateChild(const struct FName& ChildName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AIAction_Composite.CreateChild");

	UAIAction_Composite_CreateChild_Params params;
	params.ChildName = ChildName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.AIAction_CompositeChild.CreateAction
// (Final, Native, Public)
// Parameters:
// class UClass*                  ActionClass                    (Parm, ZeroConstructor, IsPlainOldData)
// class UAIAction*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAIAction* UAIAction_CompositeChild::CreateAction(class UClass* ActionClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AIAction_CompositeChild.CreateAction");

	UAIAction_CompositeChild_CreateAction_Params params;
	params.ActionClass = ActionClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.AIAction_MoveSpline.SetupMoveSpline
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 TargetSpline                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Offset                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsReverse                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIAction_MoveSpline::STATIC_SetupMoveSpline(class AActor* TargetActor, class UObject* TargetSpline, float Offset, bool bIsReverse)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AIAction_MoveSpline.SetupMoveSpline");

	UAIAction_MoveSpline_SetupMoveSpline_Params params;
	params.TargetActor = TargetActor;
	params.TargetSpline = TargetSpline;
	params.Offset = Offset;
	params.bIsReverse = bIsReverse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.AIAction_MoveSpline.ChangeSplineOffset
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Offset                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIAction_MoveSpline::STATIC_ChangeSplineOffset(class AActor* TargetActor, float Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AIAction_MoveSpline.ChangeSplineOffset");

	UAIAction_MoveSpline_ChangeSplineOffset_Params params;
	params.TargetActor = TargetActor;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.AIAction_StateMachineChild.GetAvailableStates
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// TArray<class UAIAction_StateMachineChild*> Array                          (Parm, OutParm, ZeroConstructor)

void UAIAction_StateMachineChild::GetAvailableStates(TArray<class UAIAction_StateMachineChild*>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AIAction_StateMachineChild.GetAvailableStates");

	UAIAction_StateMachineChild_GetAvailableStates_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function GbxAI.AIActionBlueprint.ShouldSkipBlackboardProperty
// (Final, Native, Static, Public)
// Parameters:
// class UProperty*               Property                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIActionBlueprint::STATIC_ShouldSkipBlackboardProperty(class UProperty* Property)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AIActionBlueprint.ShouldSkipBlackboardProperty");

	UAIActionBlueprint_ShouldSkipBlackboardProperty_Params params;
	params.Property = Property;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.GameplayTask_RunScriptedAIAction.RunScriptedAIAction_Object
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Action                         (Parm, ZeroConstructor, IsPlainOldData)
// class UGameplayTask_RunScriptedAIAction* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameplayTask_RunScriptedAIAction* UGameplayTask_RunScriptedAIAction::STATIC_RunScriptedAIAction_Object(class UObject* Object, class UClass* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_RunScriptedAIAction.RunScriptedAIAction_Object");

	UGameplayTask_RunScriptedAIAction_RunScriptedAIAction_Object_Params params;
	params.Object = Object;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.GameplayTask_RunScriptedAIAction.RunScriptedAIAction_Controller
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AGbxAIController*        Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Action                         (Parm, ZeroConstructor, IsPlainOldData)
// class UGameplayTask_RunScriptedAIAction* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameplayTask_RunScriptedAIAction* UGameplayTask_RunScriptedAIAction::STATIC_RunScriptedAIAction_Controller(class AGbxAIController* Controller, class UClass* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_RunScriptedAIAction.RunScriptedAIAction_Controller");

	UGameplayTask_RunScriptedAIAction_RunScriptedAIAction_Controller_Params params;
	params.Controller = Controller;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.GameplayTask_RunScriptedAIAction.RunScriptedAIAction_AIActionComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAIActionComponent*      AIActionComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UClass*                  Action                         (Parm, ZeroConstructor, IsPlainOldData)
// class UGameplayTask_RunScriptedAIAction* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameplayTask_RunScriptedAIAction* UGameplayTask_RunScriptedAIAction::STATIC_RunScriptedAIAction_AIActionComponent(class UAIActionComponent* AIActionComponent, class UClass* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_RunScriptedAIAction.RunScriptedAIAction_AIActionComponent");

	UGameplayTask_RunScriptedAIAction_RunScriptedAIAction_AIActionComponent_Params params;
	params.AIActionComponent = AIActionComponent;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.GameplayTask_RunScriptedAIAction.RunScriptedAIAction_Actor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Action                         (Parm, ZeroConstructor, IsPlainOldData)
// class UGameplayTask_RunScriptedAIAction* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameplayTask_RunScriptedAIAction* UGameplayTask_RunScriptedAIAction::STATIC_RunScriptedAIAction_Actor(class AActor* Actor, class UClass* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_RunScriptedAIAction.RunScriptedAIAction_Actor");

	UGameplayTask_RunScriptedAIAction_RunScriptedAIAction_Actor_Params params;
	params.Actor = Actor;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.AIActionComponent.ReplaceMainAIAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Action                         (Parm, ZeroConstructor, IsPlainOldData)

void UAIActionComponent::ReplaceMainAIAction(class UClass* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AIActionComponent.ReplaceMainAIAction");

	UAIActionComponent_ReplaceMainAIAction_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.AIActionComponent.GetBlackboardData
// (Final, Native, Public, Const)
// Parameters:
// class UBlackboardData*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBlackboardData* UAIActionComponent::GetBlackboardData()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AIActionComponent.GetBlackboardData");

	UAIActionComponent_GetBlackboardData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.AIActionComponent.AbortScriptedAIAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bStopImmediately               (Parm, ZeroConstructor, IsPlainOldData)

void UAIActionComponent::AbortScriptedAIAction(bool bStopImmediately)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AIActionComponent.AbortScriptedAIAction");

	UAIActionComponent_AbortScriptedAIAction_Params params;
	params.bStopImmediately = bStopImmediately;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.AIAspect_ActorCollision.OnPawnHit
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class AActor*                  SelfActor                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UAIAspect_ActorCollision::OnPawnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AIAspect_ActorCollision.OnPawnHit");

	UAIAspect_ActorCollision_OnPawnHit_Params params;
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.AIAspect_ActorCollision.GetOnCollisionOptions
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TArray<struct FName>           Options                        (Parm, OutParm, ZeroConstructor)

void UAIAspect_ActorCollision::STATIC_GetOnCollisionOptions(TArray<struct FName>* Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AIAspect_ActorCollision.GetOnCollisionOptions");

	UAIAspect_ActorCollision_GetOnCollisionOptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Options != nullptr)
		*Options = params.Options;
}


// Function GbxAI.AIAspect_Condition.GetConditionDataDescription
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FAIAspectSettings_ConditionData ConditionData                  (ConstParm, Parm, OutParm, ReferenceParm)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UAIAspect_Condition::STATIC_GetConditionDataDescription(const struct FAIAspectSettings_ConditionData& ConditionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AIAspect_Condition.GetConditionDataDescription");

	UAIAspect_Condition_GetConditionDataDescription_Params params;
	params.ConditionData = ConditionData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.AIAspect_BlackboardKey.GetSettingsDescription
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FAIAspectSettings_BlackboardKey BBKeySettings                  (ConstParm, Parm, OutParm, ReferenceParm)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UAIAspect_BlackboardKey::STATIC_GetSettingsDescription(const struct FAIAspectSettings_BlackboardKey& BBKeySettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AIAspect_BlackboardKey.GetSettingsDescription");

	UAIAspect_BlackboardKey_GetSettingsDescription_Params params;
	params.BBKeySettings = BBKeySettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.AIAspect_Navigation.GetNavSettingsDescription
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FAIAspectSettings_Navigation NavSettings                    (ConstParm, Parm, OutParm, ReferenceParm)
// class UProperty*               Property                       (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UAIAspect_Navigation::STATIC_GetNavSettingsDescription(const struct FAIAspectSettings_Navigation& NavSettings, class UProperty* Property)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AIAspect_Navigation.GetNavSettingsDescription");

	UAIAspect_Navigation_GetNavSettingsDescription_Params params;
	params.NavSettings = NavSettings;
	params.Property = Property;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.AIAspect_EnvQuery.GetQuerySettingsDescription
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FAIAspectSettings_EnvQuery QuerySettings                  (ConstParm, Parm, OutParm, ReferenceParm)
// class UProperty*               Property                       (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UAIAspect_EnvQuery::STATIC_GetQuerySettingsDescription(const struct FAIAspectSettings_EnvQuery& QuerySettings, class UProperty* Property)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AIAspect_EnvQuery.GetQuerySettingsDescription");

	UAIAspect_EnvQuery_GetQuerySettingsDescription_Params params;
	params.QuerySettings = QuerySettings;
	params.Property = Property;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.AIAspect_Leap.GetQuerySettingsDescription
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FAIAspectSettings_Leap  LeapSettings                   (ConstParm, Parm, OutParm, ReferenceParm)
// class UProperty*               Property                       (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UAIAspect_Leap::STATIC_GetQuerySettingsDescription(const struct FAIAspectSettings_Leap& LeapSettings, class UProperty* Property)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AIAspect_Leap.GetQuerySettingsDescription");

	UAIAspect_Leap_GetQuerySettingsDescription_Params params;
	params.LeapSettings = LeapSettings;
	params.Property = Property;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.AIAspect_Loop.GetSettingsDescription
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FAIAspectSettings_Loop  LoopSettings                   (ConstParm, Parm, OutParm, ReferenceParm)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UAIAspect_Loop::STATIC_GetSettingsDescription(const struct FAIAspectSettings_Loop& LoopSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AIAspect_Loop.GetSettingsDescription");

	UAIAspect_Loop_GetSettingsDescription_Params params;
	params.LoopSettings = LoopSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.AIAspect_Rotation.GetRotationSettingsDescription
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FAIAspectSettings_Rotation RotationSettings               (ConstParm, Parm, OutParm, ReferenceParm)
// class UProperty*               Property                       (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UAIAspect_Rotation::STATIC_GetRotationSettingsDescription(const struct FAIAspectSettings_Rotation& RotationSettings, class UProperty* Property)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AIAspect_Rotation.GetRotationSettingsDescription");

	UAIAspect_Rotation_GetRotationSettingsDescription_Params params;
	params.RotationSettings = RotationSettings;
	params.Property = Property;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.AIAspect_Rotation.GetRotationChannelSettingsDescription
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FAIAspectSettings_RotationChannel RotationChannelSettings        (ConstParm, Parm, OutParm, ReferenceParm)
// class UProperty*               Property                       (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UAIAspect_Rotation::STATIC_GetRotationChannelSettingsDescription(const struct FAIAspectSettings_RotationChannel& RotationChannelSettings, class UProperty* Property)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AIAspect_Rotation.GetRotationChannelSettingsDescription");

	UAIAspect_Rotation_GetRotationChannelSettingsDescription_Params params;
	params.RotationChannelSettings = RotationChannelSettings;
	params.Property = Property;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.AIAspect_Teleport.GetTeleportSettingsDescription
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FAIAspectSettings_Teleport TeleportSettings               (ConstParm, Parm, OutParm, ReferenceParm)
// class UProperty*               Property                       (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UAIAspect_Teleport::STATIC_GetTeleportSettingsDescription(const struct FAIAspectSettings_Teleport& TeleportSettings, class UProperty* Property)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AIAspect_Teleport.GetTeleportSettingsDescription");

	UAIAspect_Teleport_GetTeleportSettingsDescription_Params params;
	params.TeleportSettings = TeleportSettings;
	params.Property = Property;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.AIAspect_Weapon.GetWeaponSettingsDescription
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FAIAspectSettings_Weapon WeaponSettings                 (ConstParm, Parm, OutParm, ReferenceParm)
// class UProperty*               Property                       (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UAIAspect_Weapon::STATIC_GetWeaponSettingsDescription(const struct FAIAspectSettings_Weapon& WeaponSettings, class UProperty* Property)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AIAspect_Weapon.GetWeaponSettingsDescription");

	UAIAspect_Weapon_GetWeaponSettingsDescription_Params params;
	params.WeaponSettings = WeaponSettings;
	params.Property = Property;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.AICloakComponent.SetCloakData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAICloakData*            NewCloakData                   (Parm, ZeroConstructor, IsPlainOldData)

void UAICloakComponent::SetCloakData(class UAICloakData* NewCloakData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AICloakComponent.SetCloakData");

	UAICloakComponent_SetCloakData_Params params;
	params.NewCloakData = NewCloakData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.AICloakComponent.OnRep_Cloaked
// (Final, Native, Private)

void UAICloakComponent::OnRep_Cloaked()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AICloakComponent.OnRep_Cloaked");

	UAICloakComponent_OnRep_Cloaked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.AICloakComponent.IsPlayingAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAICloakComponent::IsPlayingAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AICloakComponent.IsPlayingAction");

	UAICloakComponent_IsPlayingAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.AICloakComponent.IsCloakStateForced
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAICloakComponent::IsCloakStateForced()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AICloakComponent.IsCloakStateForced");

	UAICloakComponent_IsCloakStateForced_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.AICloakComponent.IsCloaked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAICloakComponent::IsCloaked()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AICloakComponent.IsCloaked");

	UAICloakComponent_IsCloaked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.AICloakComponent.InterruptCloakAction
// (Final, Native, Public, BlueprintCallable)

void UAICloakComponent::InterruptCloakAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AICloakComponent.InterruptCloakAction");

	UAICloakComponent_InterruptCloakAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.AICloakComponent.GetCloakData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAICloakData*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAICloakData* UAICloakComponent::GetCloakData()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AICloakComponent.GetCloakData");

	UAICloakComponent_GetCloakData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.AICloakComponent.ForceUncloak
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInCanPlayActions              (Parm, ZeroConstructor, IsPlainOldData)

void UAICloakComponent::ForceUncloak(bool bInCanPlayActions)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AICloakComponent.ForceUncloak");

	UAICloakComponent_ForceUncloak_Params params;
	params.bInCanPlayActions = bInCanPlayActions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.AICloakComponent.ForceCloak
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInCanPlayActions              (Parm, ZeroConstructor, IsPlainOldData)

void UAICloakComponent::ForceCloak(bool bInCanPlayActions)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AICloakComponent.ForceCloak");

	UAICloakComponent_ForceCloak_Params params;
	params.bInCanPlayActions = bInCanPlayActions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.AICloakComponent.ClearForcedState
// (Final, Native, Public, BlueprintCallable)

void UAICloakComponent::ClearForcedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AICloakComponent.ClearForcedState");

	UAICloakComponent_ClearForcedState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.AICloakComponent.ClearCloakData
// (Final, Native, Public, BlueprintCallable)

void UAICloakComponent::ClearCloakData()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AICloakComponent.ClearCloakData");

	UAICloakComponent_ClearCloakData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.AIGroupBlueprintLibrary.IsUsingAITicket
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AAIController*           AIUser                         (Parm, ZeroConstructor, IsPlainOldData)
// class UAITicketDataAsset*      Ticket                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInterruptible                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIGroupBlueprintLibrary::STATIC_IsUsingAITicket(class AAIController* AIUser, class UAITicketDataAsset* Ticket, bool bInterruptible)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AIGroupBlueprintLibrary.IsUsingAITicket");

	UAIGroupBlueprintLibrary_IsUsingAITicket_Params params;
	params.AIUser = AIUser;
	params.Ticket = Ticket;
	params.bInterruptible = bInterruptible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.AIGroupBlueprintLibrary.IsTicketValid
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAITicketHandle         TicketHandle                   (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIGroupBlueprintLibrary::STATIC_IsTicketValid(struct FAITicketHandle* TicketHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AIGroupBlueprintLibrary.IsTicketValid");

	UAIGroupBlueprintLibrary_IsTicketValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TicketHandle != nullptr)
		*TicketHandle = params.TicketHandle;

	return params.ReturnValue;
}


// Function GbxAI.AIGroupBlueprintLibrary.ClearTicket
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAITicketHandle         TicketHandle                   (Parm, OutParm, ReferenceParm)
// float                          HoldDuration                   (Parm, ZeroConstructor, IsPlainOldData)

void UAIGroupBlueprintLibrary::STATIC_ClearTicket(float HoldDuration, struct FAITicketHandle* TicketHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AIGroupBlueprintLibrary.ClearTicket");

	UAIGroupBlueprintLibrary_ClearTicket_Params params;
	params.HoldDuration = HoldDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TicketHandle != nullptr)
		*TicketHandle = params.TicketHandle;
}


// Function GbxAI.AIGroupBlueprintLibrary.ClearAITicket
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AAIController*           AIUser                         (Parm, ZeroConstructor, IsPlainOldData)
// class UAITicketDataAsset*      Ticket                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          HoldDuration                   (Parm, ZeroConstructor, IsPlainOldData)

void UAIGroupBlueprintLibrary::STATIC_ClearAITicket(class AAIController* AIUser, class UAITicketDataAsset* Ticket, float HoldDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AIGroupBlueprintLibrary.ClearAITicket");

	UAIGroupBlueprintLibrary_ClearAITicket_Params params;
	params.AIUser = AIUser;
	params.Ticket = Ticket;
	params.HoldDuration = HoldDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.AIGroupBlueprintLibrary.CanUseAITicket
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AAIController*           AIUser                         (Parm, ZeroConstructor, IsPlainOldData)
// class UAITicketDataAsset*      Ticket                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInterruptible                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIGroupBlueprintLibrary::STATIC_CanUseAITicket(class AAIController* AIUser, class UAITicketDataAsset* Ticket, float Value, bool bInterruptible)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AIGroupBlueprintLibrary.CanUseAITicket");

	UAIGroupBlueprintLibrary_CanUseAITicket_Params params;
	params.AIUser = AIUser;
	params.Ticket = Ticket;
	params.Value = Value;
	params.bInterruptible = bInterruptible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.AIGroupBlueprintLibrary.AddAITicket
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAITicketHandle         OutTicketHandle                (Parm, OutParm)
// class AAIController*           AIUser                         (Parm, ZeroConstructor, IsPlainOldData)
// class UAITicketDataAsset*      Ticket                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxDuration                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPriority                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInterruptible                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIGroupBlueprintLibrary::STATIC_AddAITicket(class AAIController* AIUser, class UAITicketDataAsset* Ticket, float Value, float MaxDuration, bool bPriority, bool bInterruptible, struct FAITicketHandle* OutTicketHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AIGroupBlueprintLibrary.AddAITicket");

	UAIGroupBlueprintLibrary_AddAITicket_Params params;
	params.AIUser = AIUser;
	params.Ticket = Ticket;
	params.Value = Value;
	params.MaxDuration = MaxDuration;
	params.bPriority = bPriority;
	params.bInterruptible = bInterruptible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTicketHandle != nullptr)
		*OutTicketHandle = params.OutTicketHandle;

	return params.ReturnValue;
}


// Function GbxAI.AIGroupState.OnThreatActorDied
// (Final, Native, Private)
// Parameters:
// class AActor*                  DamageReceiver                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void UAIGroupState::OnThreatActorDied(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AIGroupState.OnThreatActorDied");

	UAIGroupState_OnThreatActorDied_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.AINode.OnPawnDepartedNodeCB
// (Final, Native, Private)
// Parameters:
// class AActor*                  NodeActor                      (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   DepartedPawn                   (Parm, ZeroConstructor, IsPlainOldData)

void AAINode::OnPawnDepartedNodeCB(class AActor* NodeActor, class APawn* DepartedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AINode.OnPawnDepartedNodeCB");

	AAINode_OnPawnDepartedNodeCB_Params params;
	params.NodeActor = NodeActor;
	params.DepartedPawn = DepartedPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.AINode.OnPawnArrivedNodeCB
// (Final, Native, Private)
// Parameters:
// class AActor*                  NodeActor                      (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ArrivedPawn                    (Parm, ZeroConstructor, IsPlainOldData)

void AAINode::OnPawnArrivedNodeCB(class AActor* NodeActor, class APawn* ArrivedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AINode.OnPawnArrivedNodeCB");

	AAINode_OnPawnArrivedNodeCB_Params params;
	params.NodeActor = NodeActor;
	params.ArrivedPawn = ArrivedPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.AINodeBlueprintLibrary.FindNearestNode
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bIncludeDisabled               (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UAINodeBlueprintLibrary::STATIC_FindNearestNode(class UObject* WorldContextObject, const struct FVector& Location, bool bIncludeDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AINodeBlueprintLibrary.FindNearestNode");

	UAINodeBlueprintLibrary_FindNearestNode_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Location = Location;
	params.bIncludeDisabled = bIncludeDisabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.AINodeBlueprintLibrary.FindAllNodes
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class AActor*>          OutputNodes                    (Parm, OutParm, ZeroConstructor)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncludeDisabled               (Parm, ZeroConstructor, IsPlainOldData)

void UAINodeBlueprintLibrary::STATIC_FindAllNodes(class UObject* WorldContextObject, bool bIncludeDisabled, TArray<class AActor*>* OutputNodes)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AINodeBlueprintLibrary.FindAllNodes");

	UAINodeBlueprintLibrary_FindAllNodes_Params params;
	params.WorldContextObject = WorldContextObject;
	params.bIncludeDisabled = bIncludeDisabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutputNodes != nullptr)
		*OutputNodes = params.OutputNodes;
}


// Function GbxAI.AINodeBlueprintLibrary.ChooseRandomNode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncludeDisabled               (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UAINodeBlueprintLibrary::STATIC_ChooseRandomNode(class UObject* WorldContextObject, bool bIncludeDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AINodeBlueprintLibrary.ChooseRandomNode");

	UAINodeBlueprintLibrary_ChooseRandomNode_Params params;
	params.WorldContextObject = WorldContextObject;
	params.bIncludeDisabled = bIncludeDisabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.AINodeComponent.SelectNextNode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UAINodeComponent::SelectNextNode()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AINodeComponent.SelectNextNode");

	UAINodeComponent_SelectNextNode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.AINodeComponent.HasLinkTo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Node                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAINodeComponent::HasLinkTo(class AActor* Node)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AINodeComponent.HasLinkTo");

	UAINodeComponent_HasLinkTo_Params params;
	params.Node = Node;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.AINodeComponent.HasLinkFrom
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Node                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAINodeComponent::HasLinkFrom(class AActor* Node)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AINodeComponent.HasLinkFrom");

	UAINodeComponent_HasLinkFrom_Params params;
	params.Node = Node;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.AINodeComponent.HasArrived
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 Point                          (Parm, IsPlainOldData)
// float                          Error                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAINodeComponent::HasArrived(const struct FVector& Point, float Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AINodeComponent.HasArrived");

	UAINodeComponent_HasArrived_Params params;
	params.Point = Point;
	params.Error = Error;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.AINodeComponent.GetLinkedNodeNum
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAINodeComponent::GetLinkedNodeNum()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AINodeComponent.GetLinkedNodeNum");

	UAINodeComponent_GetLinkedNodeNum_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.AINodeComponent.GetLinkedNode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            I                              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UAINodeComponent::GetLinkedNode(int I)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AINodeComponent.GetLinkedNode");

	UAINodeComponent_GetLinkedNode_Params params;
	params.I = I;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.AINodeComponent.CreateLinkTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Node                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Weight                         (Parm, ZeroConstructor, IsPlainOldData)

void UAINodeComponent::CreateLinkTo(class AActor* Node, float Weight)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AINodeComponent.CreateLinkTo");

	UAINodeComponent_CreateLinkTo_Params params;
	params.Node = Node;
	params.Weight = Weight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.AINodeComponent.BreakLinkTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Node                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAINodeComponent::BreakLinkTo(class AActor* Node)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AINodeComponent.BreakLinkTo");

	UAINodeComponent_BreakLinkTo_Params params;
	params.Node = Node;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.AITargetingBlueprintLibrary.IsThreatenedByInfo
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  AIActor                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FTargetActorInfo        TargetInfo                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAITargetingBlueprintLibrary::STATIC_IsThreatenedByInfo(class AActor* AIActor, const struct FTargetActorInfo& TargetInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AITargetingBlueprintLibrary.IsThreatenedByInfo");

	UAITargetingBlueprintLibrary_IsThreatenedByInfo_Params params;
	params.AIActor = AIActor;
	params.TargetInfo = TargetInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.AITargetingBlueprintLibrary.IsThreatenedBy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  AIActor                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAITargetingBlueprintLibrary::STATIC_IsThreatenedBy(class AActor* AIActor, class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AITargetingBlueprintLibrary.IsThreatenedBy");

	UAITargetingBlueprintLibrary_IsThreatenedBy_Params params;
	params.AIActor = AIActor;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.AITargetingBlueprintLibrary.GetTargetSenseAge
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTargetActorInfo        TargetInfo                     (ConstParm, Parm, OutParm, ReferenceParm)
// class UClass*                  Sense                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAITargetingBlueprintLibrary::STATIC_GetTargetSenseAge(const struct FTargetActorInfo& TargetInfo, class UClass* Sense)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AITargetingBlueprintLibrary.GetTargetSenseAge");

	UAITargetingBlueprintLibrary_GetTargetSenseAge_Params params;
	params.TargetInfo = TargetInfo;
	params.Sense = Sense;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.AITargetingBlueprintLibrary.GetNumTargetsInRange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  AIActor                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAITargetingBlueprintLibrary::STATIC_GetNumTargetsInRange(class AActor* AIActor, float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AITargetingBlueprintLibrary.GetNumTargetsInRange");

	UAITargetingBlueprintLibrary_GetNumTargetsInRange_Params params;
	params.AIActor = AIActor;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.AITargetingBlueprintLibrary.GetBestKnownLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  AIActor                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Socket                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UAITargetingBlueprintLibrary::STATIC_GetBestKnownLocation(class AActor* AIActor, class AActor* TargetActor, const struct FName& Socket)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AITargetingBlueprintLibrary.GetBestKnownLocation");

	UAITargetingBlueprintLibrary_GetBestKnownLocation_Params params;
	params.AIActor = AIActor;
	params.TargetActor = TargetActor;
	params.Socket = Socket;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.AITargetingBlueprintLibrary.CalcTargetGroupLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  AIActor                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          GroupDistance                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Result                         (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAITargetingBlueprintLibrary::STATIC_CalcTargetGroupLocation(class AActor* AIActor, float GroupDistance, struct FVector* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AITargetingBlueprintLibrary.CalcTargetGroupLocation");

	UAITargetingBlueprintLibrary_CalcTargetGroupLocation_Params params;
	params.AIActor = AIActor;
	params.GroupDistance = GroupDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

	return params.ReturnValue;
}


// Function GbxAI.AITargetingBlueprintLibrary.ApplyTargetScoringBoost
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoostName                      (Parm, ZeroConstructor, IsPlainOldData)
// EAITargetScoringBoost          ScoringBoost                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          DurationInSeconds              (Parm, ZeroConstructor, IsPlainOldData)

void UAITargetingBlueprintLibrary::STATIC_ApplyTargetScoringBoost(class AActor* TargetActor, const struct FName& BoostName, EAITargetScoringBoost ScoringBoost, float DurationInSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AITargetingBlueprintLibrary.ApplyTargetScoringBoost");

	UAITargetingBlueprintLibrary_ApplyTargetScoringBoost_Params params;
	params.TargetActor = TargetActor;
	params.BoostName = BoostName;
	params.ScoringBoost = ScoringBoost;
	params.DurationInSeconds = DurationInSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.AITargetingBlueprintLibrary.AISetTargetInBlackboard
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  AIActor                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxBlackboardKeySelector Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// int                            TargetIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UAITargetingBlueprintLibrary::STATIC_AISetTargetInBlackboard(class AActor* AIActor, const struct FGbxBlackboardKeySelector& Key, int TargetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AITargetingBlueprintLibrary.AISetTargetInBlackboard");

	UAITargetingBlueprintLibrary_AISetTargetInBlackboard_Params params;
	params.AIActor = AIActor;
	params.Key = Key;
	params.TargetIndex = TargetIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.AITargetingBlueprintLibrary.AISetScriptedTarget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  AIActor                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)

void UAITargetingBlueprintLibrary::STATIC_AISetScriptedTarget(class AActor* AIActor, class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AITargetingBlueprintLibrary.AISetScriptedTarget");

	UAITargetingBlueprintLibrary_AISetScriptedTarget_Params params;
	params.AIActor = AIActor;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.AITargetingBlueprintLibrary.AISendCommunication
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  AIActor                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void UAITargetingBlueprintLibrary::STATIC_AISendCommunication(class AActor* AIActor, float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AITargetingBlueprintLibrary.AISendCommunication");

	UAITargetingBlueprintLibrary_AISendCommunication_Params params;
	params.AIActor = AIActor;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.AITargetingBlueprintLibrary.AIProvokeSpecificSense
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AActor*                  AITarget                       (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Source                         (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  SenseType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 StimulusLocation               (Parm, IsPlainOldData)

void UAITargetingBlueprintLibrary::STATIC_AIProvokeSpecificSense(class AActor* AITarget, class AActor* Source, class UClass* SenseType, const struct FVector& StimulusLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AITargetingBlueprintLibrary.AIProvokeSpecificSense");

	UAITargetingBlueprintLibrary_AIProvokeSpecificSense_Params params;
	params.AITarget = AITarget;
	params.Source = Source;
	params.SenseType = SenseType;
	params.StimulusLocation = StimulusLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.AITargetingBlueprintLibrary.AIProvoke
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  AITarget                       (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Source                         (Parm, ZeroConstructor, IsPlainOldData)

void UAITargetingBlueprintLibrary::STATIC_AIProvoke(class AActor* AITarget, class AActor* Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AITargetingBlueprintLibrary.AIProvoke");

	UAITargetingBlueprintLibrary_AIProvoke_Params params;
	params.AITarget = AITarget;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.AITargetingBlueprintLibrary.AIPlayerProvoke
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  AITarget                       (Parm, ZeroConstructor, IsPlainOldData)

void UAITargetingBlueprintLibrary::STATIC_AIPlayerProvoke(class AActor* AITarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AITargetingBlueprintLibrary.AIPlayerProvoke");

	UAITargetingBlueprintLibrary_AIPlayerProvoke_Params params;
	params.AITarget = AITarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.AITargetingBlueprintLibrary.AIGetScriptedTarget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  AIActor                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UAITargetingBlueprintLibrary::STATIC_AIGetScriptedTarget(class AActor* AIActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AITargetingBlueprintLibrary.AIGetScriptedTarget");

	UAITargetingBlueprintLibrary_AIGetScriptedTarget_Params params;
	params.AIActor = AIActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.AITargetingBlueprintLibrary.AICanCommunicate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  AIActor                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          MinSenseAgeDelta               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAITargetingBlueprintLibrary::STATIC_AICanCommunicate(class AActor* AIActor, float Radius, float MinSenseAgeDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AITargetingBlueprintLibrary.AICanCommunicate");

	UAITargetingBlueprintLibrary_AICanCommunicate_Params params;
	params.AIActor = AIActor;
	params.Radius = Radius;
	params.MinSenseAgeDelta = MinSenseAgeDelta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.AIUseComponent.StopUse
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bSucceeded                     (Parm, ZeroConstructor, IsPlainOldData)

void UAIUseComponent::StopUse(bool bSucceeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AIUseComponent.StopUse");

	UAIUseComponent_StopUse_Params params;
	params.bSucceeded = bSucceeded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.AIUseComponent.RequestUse
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  SmartObject                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            ActionName                     (Parm)
// bool                           bAbortExisting                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUntilInterrupted              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIUseComponent::RequestUse(class AActor* SmartObject, const struct FGameplayTag& ActionName, bool bAbortExisting, bool bUntilInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AIUseComponent.RequestUse");

	UAIUseComponent_RequestUse_Params params;
	params.SmartObject = SmartObject;
	params.ActionName = ActionName;
	params.bAbortExisting = bAbortExisting;
	params.bUntilInterrupted = bUntilInterrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.AIUseComponent.OnUseCompleted
// (Final, Native, Private)
// Parameters:
// class UAITask*                 Task                           (Parm, ZeroConstructor, IsPlainOldData)
// ESmartObjectTaskResult         Result                         (Parm, ZeroConstructor, IsPlainOldData)

void UAIUseComponent::OnUseCompleted(class UAITask* Task, ESmartObjectTaskResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AIUseComponent.OnUseCompleted");

	UAIUseComponent_OnUseCompleted_Params params;
	params.Task = Task;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.AIUseComponent.GetCurrentObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UAIUseComponent::GetCurrentObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AIUseComponent.GetCurrentObject");

	UAIUseComponent_GetCurrentObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.AIUseSlotComponent.GetAvailableSocketNames
// (Final, Native, Private, HasOutParms, Const)
// Parameters:
// TArray<struct FName>           Array                          (Parm, OutParm, ZeroConstructor)

void UAIUseSlotComponent::GetAvailableSocketNames(TArray<struct FName>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AIUseSlotComponent.GetAvailableSocketNames");

	UAIUseSlotComponent_GetAvailableSocketNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function GbxAI.AIWeaponUserComponent.WantsToFire
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAIWeaponUserComponent::WantsToFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AIWeaponUserComponent.WantsToFire");

	UAIWeaponUserComponent_WantsToFire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.AIWeaponUserComponent.OnWeaponUsed
// (Final, Native, Private)

void UAIWeaponUserComponent::OnWeaponUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.AIWeaponUserComponent.OnWeaponUsed");

	UAIWeaponUserComponent_OnWeaponUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.Cover.SetEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void ACover::SetEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.Cover.SetEnabled");

	ACover_SetEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.Cover.IsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACover::IsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.Cover.IsEnabled");

	ACover_IsEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.CoverSlotComponent.SetEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewEnabled                    (Parm, ZeroConstructor, IsPlainOldData)

void UCoverSlotComponent::SetEnabled(bool bNewEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.CoverSlotComponent.SetEnabled");

	UCoverSlotComponent_SetEnabled_Params params;
	params.bNewEnabled = bNewEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.CoverSlotComponent.IsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCoverSlotComponent::IsEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.CoverSlotComponent.IsEnabled");

	UCoverSlotComponent_IsEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.CoverUserComponent.SetEnterTransitionTable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGbxCoverTransitionTable* NewTable                       (Parm, ZeroConstructor, IsPlainOldData)

void UCoverUserComponent::SetEnterTransitionTable(class UGbxCoverTransitionTable* NewTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.CoverUserComponent.SetEnterTransitionTable");

	UCoverUserComponent_SetEnterTransitionTable_Params params;
	params.NewTable = NewTable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.CoverUserComponent.OnRep_ClientData
// (Final, Native, Private)

void UCoverUserComponent::OnRep_ClientData()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.CoverUserComponent.OnRep_ClientData");

	UCoverUserComponent_OnRep_ClientData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.CoverUserComponent.OnMovementModeChanged
// (Final, Native, Private)
// Parameters:
// class ACharacter*              Character                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>     PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  PreviousCustomMode             (Parm, ZeroConstructor, IsPlainOldData)

void UCoverUserComponent::OnMovementModeChanged(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.CoverUserComponent.OnMovementModeChanged");

	UCoverUserComponent_OnMovementModeChanged_Params params;
	params.Character = Character;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.CoverUserComponent.GetStyle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCoverStyleData*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCoverStyleData* UCoverUserComponent::GetStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.CoverUserComponent.GetStyle");

	UCoverUserComponent_GetStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.GameplayTask_ScriptedAction.OnActorSpawned
// (Final, Native, Private)
// Parameters:
// class ASpawner*                Spawner                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayTask_ScriptedAction::OnActorSpawned(class ASpawner* Spawner, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_ScriptedAction.OnActorSpawned");

	UGameplayTask_ScriptedAction_OnActorSpawned_Params params;
	params.Spawner = Spawner;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction GbxAI.GameplayTask_ScriptedCover.TaskScriptedCoverDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UGameplayTask_ScriptedCover::TaskScriptedCoverDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GbxAI.GameplayTask_ScriptedCover.TaskScriptedCoverDelegate__DelegateSignature");

	UGameplayTask_ScriptedCover_TaskScriptedCoverDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.GameplayTask_ScriptedCover.EndScriptedCover
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  User                           (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayTask_ScriptedCover::STATIC_EndScriptedCover(class AActor* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_ScriptedCover.EndScriptedCover");

	UGameplayTask_ScriptedCover_EndScriptedCover_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.GameplayTask_ScriptedCover.BeginScriptedCover
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  User                           (Parm, ZeroConstructor, IsPlainOldData)
// class ACover*                  Cover                          (Parm, ZeroConstructor, IsPlainOldData)
// class UGameplayTask_ScriptedCover* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameplayTask_ScriptedCover* UGameplayTask_ScriptedCover::STATIC_BeginScriptedCover(class AActor* User, class ACover* Cover)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_ScriptedCover.BeginScriptedCover");

	UGameplayTask_ScriptedCover_BeginScriptedCover_Params params;
	params.User = User;
	params.Cover = Cover;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction GbxAI.GameplayTask_ScriptedFollow.TaskScriptedMoveDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UGameplayTask_ScriptedFollow::TaskScriptedMoveDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GbxAI.GameplayTask_ScriptedFollow.TaskScriptedMoveDelegate__DelegateSignature");

	UGameplayTask_ScriptedFollow_TaskScriptedMoveDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.GameplayTask_ScriptedFollow.BeginScriptedFollow
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Follower                       (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ActorToFollow                  (Parm, ZeroConstructor, IsPlainOldData)
// class UStanceDataProvider*     OptionalStance                 (Parm, ZeroConstructor, IsPlainOldData)
// class UGameplayTask_ScriptedFollow* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameplayTask_ScriptedFollow* UGameplayTask_ScriptedFollow::STATIC_BeginScriptedFollow(class AActor* Follower, class AActor* ActorToFollow, class UStanceDataProvider* OptionalStance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_ScriptedFollow.BeginScriptedFollow");

	UGameplayTask_ScriptedFollow_BeginScriptedFollow_Params params;
	params.Follower = Follower;
	params.ActorToFollow = ActorToFollow;
	params.OptionalStance = OptionalStance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction GbxAI.GameplayTask_ScriptedLand.TaskScriptedLandDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UGameplayTask_ScriptedLand::TaskScriptedLandDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GbxAI.GameplayTask_ScriptedLand.TaskScriptedLandDelegate__DelegateSignature");

	UGameplayTask_ScriptedLand_TaskScriptedLandDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.GameplayTask_ScriptedLand.BeginScriptedLand
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Lander                         (Parm, ZeroConstructor, IsPlainOldData)
// class UGameplayTask_ScriptedLand* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameplayTask_ScriptedLand* UGameplayTask_ScriptedLand::STATIC_BeginScriptedLand(class AActor* Lander)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_ScriptedLand.BeginScriptedLand");

	UGameplayTask_ScriptedLand_BeginScriptedLand_Params params;
	params.Lander = Lander;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction GbxAI.GameplayTask_ScriptedLead.TaskScriptedLeadDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UGameplayTask_ScriptedLead::TaskScriptedLeadDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GbxAI.GameplayTask_ScriptedLead.TaskScriptedLeadDelegate__DelegateSignature");

	UGameplayTask_ScriptedLead_TaskScriptedLeadDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.GameplayTask_ScriptedLead.BeginScriptedLead
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Leader                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DestAINode                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ActorToLead                    (Parm, ZeroConstructor, IsPlainOldData)
// class UStanceDataProvider*     OptionalStance                 (Parm, ZeroConstructor, IsPlainOldData)
// class UGameplayTask_ScriptedLead* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameplayTask_ScriptedLead* UGameplayTask_ScriptedLead::STATIC_BeginScriptedLead(class AActor* Leader, class AActor* DestAINode, class AActor* ActorToLead, class UStanceDataProvider* OptionalStance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_ScriptedLead.BeginScriptedLead");

	UGameplayTask_ScriptedLead_BeginScriptedLead_Params params;
	params.Leader = Leader;
	params.DestAINode = DestAINode;
	params.ActorToLead = ActorToLead;
	params.OptionalStance = OptionalStance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction GbxAI.GameplayTask_ScriptedMove.TaskScriptedMoveDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UGameplayTask_ScriptedMove::TaskScriptedMoveDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GbxAI.GameplayTask_ScriptedMove.TaskScriptedMoveDelegate__DelegateSignature");

	UGameplayTask_ScriptedMove_TaskScriptedMoveDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.GameplayTask_ScriptedMove.BeginScriptedMoveActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AAIController*           Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  StartNode                      (Parm, ZeroConstructor, IsPlainOldData)
// class UStanceDataProvider*     OptionalStance                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OptionalLookAtActor            (Parm, ZeroConstructor, IsPlainOldData)
// class UGameplayTask_ScriptedMove* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameplayTask_ScriptedMove* UGameplayTask_ScriptedMove::STATIC_BeginScriptedMoveActor(class AAIController* Target, class AActor* StartNode, class UStanceDataProvider* OptionalStance, class AActor* OptionalLookAtActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_ScriptedMove.BeginScriptedMoveActor");

	UGameplayTask_ScriptedMove_BeginScriptedMoveActor_Params params;
	params.Target = Target;
	params.StartNode = StartNode;
	params.OptionalStance = OptionalStance;
	params.OptionalLookAtActor = OptionalLookAtActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.GameplayTask_ScriptedMove.BeginScriptedMove2
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  User                           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  StartAINode                    (Parm, ZeroConstructor, IsPlainOldData)
// class UStanceDataProvider*     OptionalStance                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OptionalLookAtActor            (Parm, ZeroConstructor, IsPlainOldData)
// class UGameplayTask_ScriptedMove* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameplayTask_ScriptedMove* UGameplayTask_ScriptedMove::STATIC_BeginScriptedMove2(class AActor* User, class AActor* StartAINode, class UStanceDataProvider* OptionalStance, class AActor* OptionalLookAtActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_ScriptedMove.BeginScriptedMove2");

	UGameplayTask_ScriptedMove_BeginScriptedMove2_Params params;
	params.User = User;
	params.StartAINode = StartAINode;
	params.OptionalStance = OptionalStance;
	params.OptionalLookAtActor = OptionalLookAtActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.GameplayTask_ScriptedMove.BeginScriptedMove
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  StartNode                      (Parm, ZeroConstructor, IsPlainOldData)
// EScriptedActionRule            SuccessRule                    (Parm, ZeroConstructor, IsPlainOldData)
// EScriptedActionRule            FailRule                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAddSpawned                    (Parm, ZeroConstructor, IsPlainOldData)
// class UStanceDataProvider*     OptionalStance                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OptionalLookAtActor            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTeleportOnFail                (Parm, ZeroConstructor, IsPlainOldData)
// class UGameplayTask_ScriptedMove* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameplayTask_ScriptedMove* UGameplayTask_ScriptedMove::STATIC_BeginScriptedMove(class AActor* Target, class AActor* StartNode, EScriptedActionRule SuccessRule, EScriptedActionRule FailRule, bool bAddSpawned, class UStanceDataProvider* OptionalStance, class AActor* OptionalLookAtActor, bool bTeleportOnFail)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_ScriptedMove.BeginScriptedMove");

	UGameplayTask_ScriptedMove_BeginScriptedMove_Params params;
	params.Target = Target;
	params.StartNode = StartNode;
	params.SuccessRule = SuccessRule;
	params.FailRule = FailRule;
	params.bAddSpawned = bAddSpawned;
	params.OptionalStance = OptionalStance;
	params.OptionalLookAtActor = OptionalLookAtActor;
	params.bTeleportOnFail = bTeleportOnFail;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction GbxAI.GameplayTask_ScriptedMoveSpline.TaskScriptedMoveDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class AActor*                  Targeted                       (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayTask_ScriptedMoveSpline::TaskScriptedMoveDelegate__DelegateSignature(class AActor* Targeted)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GbxAI.GameplayTask_ScriptedMoveSpline.TaskScriptedMoveDelegate__DelegateSignature");

	UGameplayTask_ScriptedMoveSpline_TaskScriptedMoveDelegate__DelegateSignature_Params params;
	params.Targeted = Targeted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.GameplayTask_ScriptedMoveSpline.BeginScriptedMoveOnSpline
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  StartSpline                    (Parm, ZeroConstructor, IsPlainOldData)
// EScriptedActionRule            SuccessRule                    (Parm, ZeroConstructor, IsPlainOldData)
// EScriptedActionRule            FailRule                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Offset                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReverse                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAddSpawned                    (Parm, ZeroConstructor, IsPlainOldData)
// class UStanceDataProvider*     OptionalStance                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OptionalLookAtActor            (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OptionalAIAction               (Parm, ZeroConstructor, IsPlainOldData)
// class UGameplayTask_ScriptedMoveSpline* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameplayTask_ScriptedMoveSpline* UGameplayTask_ScriptedMoveSpline::STATIC_BeginScriptedMoveOnSpline(class AActor* Target, class AActor* StartSpline, EScriptedActionRule SuccessRule, EScriptedActionRule FailRule, float Offset, bool bReverse, bool bAddSpawned, class UStanceDataProvider* OptionalStance, class AActor* OptionalLookAtActor, class UClass* OptionalAIAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_ScriptedMoveSpline.BeginScriptedMoveOnSpline");

	UGameplayTask_ScriptedMoveSpline_BeginScriptedMoveOnSpline_Params params;
	params.Target = Target;
	params.StartSpline = StartSpline;
	params.SuccessRule = SuccessRule;
	params.FailRule = FailRule;
	params.Offset = Offset;
	params.bReverse = bReverse;
	params.bAddSpawned = bAddSpawned;
	params.OptionalStance = OptionalStance;
	params.OptionalLookAtActor = OptionalLookAtActor;
	params.OptionalAIAction = OptionalAIAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction GbxAI.GameplayTask_ScriptedMoveToLevelSequence.TaskScriptedMoveDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UGameplayTask_ScriptedMoveToLevelSequence::TaskScriptedMoveDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GbxAI.GameplayTask_ScriptedMoveToLevelSequence.TaskScriptedMoveDelegate__DelegateSignature");

	UGameplayTask_ScriptedMoveToLevelSequence_TaskScriptedMoveDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction GbxAI.GameplayTask_ScriptedMoveToLevelSequence.TaskScriptedMoveActorsDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UGameplayTask_ScriptedMoveToLevelSequence::TaskScriptedMoveActorsDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GbxAI.GameplayTask_ScriptedMoveToLevelSequence.TaskScriptedMoveActorsDelegate__DelegateSignature");

	UGameplayTask_ScriptedMoveToLevelSequence_TaskScriptedMoveActorsDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction GbxAI.GameplayTask_ScriptedMoveToLevelSequence.TaskScriptedMoveActorDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayTask_ScriptedMoveToLevelSequence::TaskScriptedMoveActorDelegate__DelegateSignature(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GbxAI.GameplayTask_ScriptedMoveToLevelSequence.TaskScriptedMoveActorDelegate__DelegateSignature");

	UGameplayTask_ScriptedMoveToLevelSequence_TaskScriptedMoveActorDelegate__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.GameplayTask_ScriptedMoveToLevelSequence.OnLevelSequenceStopped
// (Final, Native, Private)

void UGameplayTask_ScriptedMoveToLevelSequence::OnLevelSequenceStopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_ScriptedMoveToLevelSequence.OnLevelSequenceStopped");

	UGameplayTask_ScriptedMoveToLevelSequence_OnLevelSequenceStopped_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.GameplayTask_ScriptedMoveToLevelSequence.OnLevelSequenceFinished
// (Final, Native, Private)

void UGameplayTask_ScriptedMoveToLevelSequence::OnLevelSequenceFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_ScriptedMoveToLevelSequence.OnLevelSequenceFinished");

	UGameplayTask_ScriptedMoveToLevelSequence_OnLevelSequenceFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.GameplayTask_ScriptedMoveToLevelSequence.BeginScriptedMoveToLevelSequenceMulti
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class AActor*>          Targets                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AGbxLevelSequenceActor*  LevelSequenceActor             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bStartSequence                 (Parm, ZeroConstructor, IsPlainOldData)
// class UStanceDataProvider*     OptionalStance                 (Parm, ZeroConstructor, IsPlainOldData)
// class UGameplayTask_ScriptedMoveToLevelSequence* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameplayTask_ScriptedMoveToLevelSequence* UGameplayTask_ScriptedMoveToLevelSequence::STATIC_BeginScriptedMoveToLevelSequenceMulti(TArray<class AActor*> Targets, class AGbxLevelSequenceActor* LevelSequenceActor, bool bStartSequence, class UStanceDataProvider* OptionalStance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_ScriptedMoveToLevelSequence.BeginScriptedMoveToLevelSequenceMulti");

	UGameplayTask_ScriptedMoveToLevelSequence_BeginScriptedMoveToLevelSequenceMulti_Params params;
	params.Targets = Targets;
	params.LevelSequenceActor = LevelSequenceActor;
	params.bStartSequence = bStartSequence;
	params.OptionalStance = OptionalStance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.GameplayTask_ScriptedMoveToLevelSequence.BeginScriptedMoveToLevelSequence
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class AGbxLevelSequenceActor*  LevelSequenceActor             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bStartSequence                 (Parm, ZeroConstructor, IsPlainOldData)
// class UStanceDataProvider*     OptionalStance                 (Parm, ZeroConstructor, IsPlainOldData)
// class UGameplayTask_ScriptedMoveToLevelSequence* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameplayTask_ScriptedMoveToLevelSequence* UGameplayTask_ScriptedMoveToLevelSequence::STATIC_BeginScriptedMoveToLevelSequence(class AActor* Target, class AGbxLevelSequenceActor* LevelSequenceActor, bool bStartSequence, class UStanceDataProvider* OptionalStance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_ScriptedMoveToLevelSequence.BeginScriptedMoveToLevelSequence");

	UGameplayTask_ScriptedMoveToLevelSequence_BeginScriptedMoveToLevelSequence_Params params;
	params.Target = Target;
	params.LevelSequenceActor = LevelSequenceActor;
	params.bStartSequence = bStartSequence;
	params.OptionalStance = OptionalStance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction GbxAI.GameplayTask_ScriptedRoute.TaskScriptedMoveDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UGameplayTask_ScriptedRoute::TaskScriptedMoveDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GbxAI.GameplayTask_ScriptedRoute.TaskScriptedMoveDelegate__DelegateSignature");

	UGameplayTask_ScriptedRoute_TaskScriptedMoveDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.GameplayTask_ScriptedRoute.BeginScriptedRoute2
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  FirstAINode                    (Parm, ZeroConstructor, IsPlainOldData)
// EScriptedActionRule            SuccessRule                    (Parm, ZeroConstructor, IsPlainOldData)
// EScriptedActionRule            FailRule                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAddSpawned                    (Parm, ZeroConstructor, IsPlainOldData)
// class UStanceDataProvider*     OptionalStance                 (Parm, ZeroConstructor, IsPlainOldData)
// class UGameplayTask_ScriptedRoute* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameplayTask_ScriptedRoute* UGameplayTask_ScriptedRoute::STATIC_BeginScriptedRoute2(class AActor* Target, class AActor* FirstAINode, EScriptedActionRule SuccessRule, EScriptedActionRule FailRule, bool bAddSpawned, class UStanceDataProvider* OptionalStance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_ScriptedRoute.BeginScriptedRoute2");

	UGameplayTask_ScriptedRoute_BeginScriptedRoute2_Params params;
	params.Target = Target;
	params.FirstAINode = FirstAINode;
	params.SuccessRule = SuccessRule;
	params.FailRule = FailRule;
	params.bAddSpawned = bAddSpawned;
	params.OptionalStance = OptionalStance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.GameplayTask_ScriptedRoute.BeginScriptedRoute
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  User                           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  FirstAINode                    (Parm, ZeroConstructor, IsPlainOldData)
// class UStanceDataProvider*     OptionalStance                 (Parm, ZeroConstructor, IsPlainOldData)
// class UGameplayTask_ScriptedRoute* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameplayTask_ScriptedRoute* UGameplayTask_ScriptedRoute::STATIC_BeginScriptedRoute(class AActor* User, class AActor* FirstAINode, class UStanceDataProvider* OptionalStance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_ScriptedRoute.BeginScriptedRoute");

	UGameplayTask_ScriptedRoute_BeginScriptedRoute_Params params;
	params.User = User;
	params.FirstAINode = FirstAINode;
	params.OptionalStance = OptionalStance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.GameplayTask_SmartAction.UnreserveCallback
// (Final, Native, Private)
// Parameters:
// class AActor*                  User                           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  SmartObject                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            ActionTag                      (Parm)

void UGameplayTask_SmartAction::UnreserveCallback(class AActor* User, class AActor* SmartObject, const struct FGameplayTag& ActionTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_SmartAction.UnreserveCallback");

	UGameplayTask_SmartAction_UnreserveCallback_Params params;
	params.User = User;
	params.SmartObject = SmartObject;
	params.ActionTag = ActionTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.GameplayTask_SmartAction.SuccessCallback
// (Final, Native, Private)
// Parameters:
// class AActor*                  User                           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  SmartObject                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            ActionTag                      (Parm)

void UGameplayTask_SmartAction::SuccessCallback(class AActor* User, class AActor* SmartObject, const struct FGameplayTag& ActionTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_SmartAction.SuccessCallback");

	UGameplayTask_SmartAction_SuccessCallback_Params params;
	params.User = User;
	params.SmartObject = SmartObject;
	params.ActionTag = ActionTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.GameplayTask_SmartAction.ReserveCallback
// (Final, Native, Private)
// Parameters:
// class AActor*                  User                           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  SmartObject                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            ActionTag                      (Parm)

void UGameplayTask_SmartAction::ReserveCallback(class AActor* User, class AActor* SmartObject, const struct FGameplayTag& ActionTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_SmartAction.ReserveCallback");

	UGameplayTask_SmartAction_ReserveCallback_Params params;
	params.User = User;
	params.SmartObject = SmartObject;
	params.ActionTag = ActionTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.GameplayTask_SmartAction.InterruptCallback
// (Final, Native, Private)
// Parameters:
// class AActor*                  User                           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  SmartObject                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            ActionTag                      (Parm)

void UGameplayTask_SmartAction::InterruptCallback(class AActor* User, class AActor* SmartObject, const struct FGameplayTag& ActionTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_SmartAction.InterruptCallback");

	UGameplayTask_SmartAction_InterruptCallback_Params params;
	params.User = User;
	params.SmartObject = SmartObject;
	params.ActionTag = ActionTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.GameplayTask_SmartAction.EndSmartAction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  User                           (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayTask_SmartAction::STATIC_EndSmartAction(class AActor* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_SmartAction.EndSmartAction");

	UGameplayTask_SmartAction_EndSmartAction_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.GameplayTask_SmartAction.BeginSmartAction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  User                           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  SmartObject                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            ActionTag                      (Parm)
// class UGameplayTask_SmartAction* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameplayTask_SmartAction* UGameplayTask_SmartAction::STATIC_BeginSmartAction(class AActor* User, class AActor* SmartObject, const struct FGameplayTag& ActionTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_SmartAction.BeginSmartAction");

	UGameplayTask_SmartAction_BeginSmartAction_Params params;
	params.User = User;
	params.SmartObject = SmartObject;
	params.ActionTag = ActionTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.GameplayTask_SmartAction.BeginCallback
// (Final, Native, Private)
// Parameters:
// class AActor*                  User                           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  SmartObject                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            ActionTag                      (Parm)

void UGameplayTask_SmartAction::BeginCallback(class AActor* User, class AActor* SmartObject, const struct FGameplayTag& ActionTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GameplayTask_SmartAction.BeginCallback");

	UGameplayTask_SmartAction_BeginCallback_Params params;
	params.User = User;
	params.SmartObject = SmartObject;
	params.ActionTag = ActionTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction GbxAI.GameplayTask_SmartAction.AITaskEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UGameplayTask_SmartAction::AITaskEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GbxAI.GameplayTask_SmartAction.AITaskEvent__DelegateSignature");

	UGameplayTask_SmartAction_AITaskEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.GbxAction_Navigation.K2_GetExitLocation
// (Final, Native, Private, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UGbxAction_Navigation::K2_GetExitLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAction_Navigation.K2_GetExitLocation");

	UGbxAction_Navigation_K2_GetExitLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.GbxAction_Navigation.K2_GetEntryLocation
// (Final, Native, Private, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UGbxAction_Navigation::K2_GetEntryLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAction_Navigation.K2_GetEntryLocation");

	UGbxAction_Navigation_K2_GetEntryLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.GbxAction_NavJump.OnIdle
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UGbxAction_NavJump::OnIdle(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAction_NavJump.OnIdle");

	UGbxAction_NavJump_OnIdle_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.GbxAction_NavJump.OnExit
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UGbxAction_NavJump::OnExit(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAction_NavJump.OnExit");

	UGbxAction_NavJump_OnExit_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.GbxAction_NavLerp.OnAlmostDone
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UGbxAction_NavLerp::OnAlmostDone(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAction_NavLerp.OnAlmostDone");

	UGbxAction_NavLerp_OnAlmostDone_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.GbxAIBlueprintLibrary.SetPerceivableToAllAI
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPerceivable                   (Parm, ZeroConstructor, IsPlainOldData)

void UGbxAIBlueprintLibrary::STATIC_SetPerceivableToAllAI(class AActor* Actor, bool bPerceivable)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIBlueprintLibrary.SetPerceivableToAllAI");

	UGbxAIBlueprintLibrary_SetPerceivableToAllAI_Params params;
	params.Actor = Actor;
	params.bPerceivable = bPerceivable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.GbxAIBlueprintLibrary.SetAIPathFindingData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// class UHavokPathFindingData*   PathFindingData                (Parm, ZeroConstructor, IsPlainOldData)

void UGbxAIBlueprintLibrary::STATIC_SetAIPathFindingData(class AActor* InActor, class UHavokPathFindingData* PathFindingData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIBlueprintLibrary.SetAIPathFindingData");

	UGbxAIBlueprintLibrary_SetAIPathFindingData_Params params;
	params.InActor = InActor;
	params.PathFindingData = PathFindingData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.GbxAIBlueprintLibrary.SetAINavAreaData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// class UGbxNavAreaData*         NavAreaData                    (Parm, ZeroConstructor, IsPlainOldData)

void UGbxAIBlueprintLibrary::STATIC_SetAINavAreaData(class AActor* InActor, class UGbxNavAreaData* NavAreaData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIBlueprintLibrary.SetAINavAreaData");

	UGbxAIBlueprintLibrary_SetAINavAreaData_Params params;
	params.InActor = InActor;
	params.NavAreaData = NavAreaData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.GbxAIBlueprintLibrary.ResetTeamForAllAIChildren
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UGbxAIBlueprintLibrary::STATIC_ResetTeamForAllAIChildren(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIBlueprintLibrary.ResetTeamForAllAIChildren");

	UGbxAIBlueprintLibrary_ResetTeamForAllAIChildren_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.GbxAIBlueprintLibrary.IsActorThreatened
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  InActor                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxAIBlueprintLibrary::STATIC_IsActorThreatened(class AActor* InActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIBlueprintLibrary.IsActorThreatened");

	UGbxAIBlueprintLibrary_IsActorThreatened_Params params;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.GbxAIBlueprintLibrary.GetValueAsActorAndLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UBlackboardComponent*    Blackboard                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  Actor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxAIBlueprintLibrary::STATIC_GetValueAsActorAndLocation(class UBlackboardComponent* Blackboard, const struct FBlackboardKeySelector& Key, class AActor** Actor, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIBlueprintLibrary.GetValueAsActorAndLocation");

	UGbxAIBlueprintLibrary_GetValueAsActorAndLocation_Params params;
	params.Blackboard = Blackboard;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
	if (Location != nullptr)
		*Location = params.Location;

	return params.ReturnValue;
}


// Function GbxAI.GbxAIBlueprintLibrary.GetBlackboardValueAsActorAndLocation
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UBTNode*                 BTNode                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FBlackboardKeySelector  Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  Actor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxAIBlueprintLibrary::STATIC_GetBlackboardValueAsActorAndLocation(class UBTNode* BTNode, const struct FBlackboardKeySelector& Key, class AActor** Actor, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIBlueprintLibrary.GetBlackboardValueAsActorAndLocation");

	UGbxAIBlueprintLibrary_GetBlackboardValueAsActorAndLocation_Params params;
	params.BTNode = BTNode;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
	if (Location != nullptr)
		*Location = params.Location;

	return params.ReturnValue;
}


// Function GbxAI.GbxAIBlueprintLibrary.AIScriptedUseWeapon
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseWeapon                     (Parm, ZeroConstructor, IsPlainOldData)

void UGbxAIBlueprintLibrary::STATIC_AIScriptedUseWeapon(class AActor* Actor, bool bUseWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIBlueprintLibrary.AIScriptedUseWeapon");

	UGbxAIBlueprintLibrary_AIScriptedUseWeapon_Params params;
	params.Actor = Actor;
	params.bUseWeapon = bUseWeapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.GbxAIBlueprintLibrary.AIScriptedAction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Action                         (Parm, ZeroConstructor, IsPlainOldData)

void UGbxAIBlueprintLibrary::STATIC_AIScriptedAction(class AActor* Actor, class UClass* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIBlueprintLibrary.AIScriptedAction");

	UGbxAIBlueprintLibrary_AIScriptedAction_Params params;
	params.Actor = Actor;
	params.Action = Action;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.GbxAIBlueprintLibrary.AIIsWithinTerritory
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  AIActor                        (Parm, ZeroConstructor, IsPlainOldData)
// ETerritoryType                 Zone                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGbxAIBlueprintLibrary::STATIC_AIIsWithinTerritory(class AActor* AIActor, ETerritoryType Zone)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIBlueprintLibrary.AIIsWithinTerritory");

	UGbxAIBlueprintLibrary_AIIsWithinTerritory_Params params;
	params.AIActor = AIActor;
	params.Zone = Zone;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.GbxAIController.SetTerritory
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTerritoryComponent*     Territory                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AGbxAIController::SetTerritory(class UTerritoryComponent* Territory)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.SetTerritory");

	AGbxAIController_SetTerritory_Params params;
	params.Territory = Territory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.GbxAIController.SetTeam
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UTeam*                   Team                           (Parm, ZeroConstructor, IsPlainOldData)

void AGbxAIController::SetTeam(class UTeam* Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.SetTeam");

	AGbxAIController_SetTeam_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.GbxAIController.SetObstacleAvoidanceLock
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           bDisable                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Reason                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AGbxAIController::SetObstacleAvoidanceLock(bool bDisable, const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.SetObstacleAvoidanceLock");

	AGbxAIController_SetObstacleAvoidanceLock_Params params;
	params.bDisable = bDisable;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.GbxAIController.ResetTerritoryToDefault
// (Final, Native, Public, BlueprintCallable)

void AGbxAIController::ResetTerritoryToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.ResetTerritoryToDefault");

	AGbxAIController_ResetTerritoryToDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.GbxAIController.OnMyWeaponHitSomething
// (Final, Native, Private, HasDefaults)
// Parameters:
// class AActor*                  HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, IsPlainOldData)

void AGbxAIController::OnMyWeaponHitSomething(class AActor* HitActor, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.OnMyWeaponHitSomething");

	AGbxAIController_OnMyWeaponHitSomething_Params params;
	params.HitActor = HitActor;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.GbxAIController.GetWeaponUserComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAIWeaponUserComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAIWeaponUserComponent* AGbxAIController::GetWeaponUserComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.GetWeaponUserComponent");

	AGbxAIController_GetWeaponUserComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.GbxAIController.GetUseComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAIUseComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAIUseComponent* AGbxAIController::GetUseComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.GetUseComponent");

	AGbxAIController_GetUseComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.GbxAIController.GetTerritory
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTerritoryComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UTerritoryComponent* AGbxAIController::GetTerritory()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.GetTerritory");

	AGbxAIController_GetTerritory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.GbxAIController.GetTeamComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTeamComponent*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UTeamComponent* AGbxAIController::GetTeamComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.GetTeamComponent");

	AGbxAIController_GetTeamComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.GbxAIController.GetTeam
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTeam*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTeam* AGbxAIController::GetTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.GetTeam");

	AGbxAIController_GetTeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.GbxAIController.GetTargetingComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTargetingComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UTargetingComponent* AGbxAIController::GetTargetingComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.GetTargetingComponent");

	AGbxAIController_GetTargetingComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.GbxAIController.GetTargetableComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTargetableComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UTargetableComponent* AGbxAIController::GetTargetableComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.GetTargetableComponent");

	AGbxAIController_GetTargetableComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.GbxAIController.GetSpawnerComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USpawnerComponent*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USpawnerComponent* AGbxAIController::GetSpawnerComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.GetSpawnerComponent");

	AGbxAIController_GetSpawnerComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.GbxAIController.GetSpawner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ASpawner*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASpawner* AGbxAIController::GetSpawner()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.GetSpawner");

	AGbxAIController_GetSpawner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.GbxAIController.GetPerceptionComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAIPerceptionComponent*  ReturnValue                    (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAIPerceptionComponent* AGbxAIController::GetPerceptionComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.GetPerceptionComponent");

	AGbxAIController_GetPerceptionComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.GbxAIController.GetNumChildActors
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AGbxAIController::GetNumChildActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.GetNumChildActors");

	AGbxAIController_GetNumChildActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.GbxAIController.GetNavComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGbxNavComponent*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UGbxNavComponent* AGbxAIController::GetNavComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.GetNavComponent");

	AGbxAIController_GetNavComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.GbxAIController.GetMovementComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGbxCharacterMovementComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UGbxCharacterMovementComponent* AGbxAIController::GetMovementComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.GetMovementComponent");

	AGbxAIController_GetMovementComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.GbxAIController.GetGroupState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAIGroupState*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAIGroupState* AGbxAIController::GetGroupState()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.GetGroupState");

	AGbxAIController_GetGroupState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.GbxAIController.GetGbxCharacter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AGbxCharacter*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AGbxCharacter* AGbxAIController::GetGbxCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.GetGbxCharacter");

	AGbxAIController_GetGbxCharacter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.GbxAIController.GetGbxActionComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGbxActionComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UGbxActionComponent* AGbxAIController::GetGbxActionComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.GetGbxActionComponent");

	AGbxAIController_GetGbxActionComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.GbxAIController.GetChildActors
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>          ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<class AActor*> AGbxAIController::GetChildActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.GetChildActors");

	AGbxAIController_GetChildActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.GbxAIController.GetBlackboardComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UBlackboardComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UBlackboardComponent* AGbxAIController::GetBlackboardComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.GetBlackboardComponent");

	AGbxAIController_GetBlackboardComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.GbxAIController.GetBlackboardAsset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UBlackboardData*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBlackboardData* AGbxAIController::GetBlackboardAsset()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.GetBlackboardAsset");

	AGbxAIController_GetBlackboardAsset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.GbxAIController.GetAIGroupSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AGbxAIController::GetAIGroupSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.GetAIGroupSize");

	AGbxAIController_GetAIGroupSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.GbxAIController.GetAIGroupList
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>          AIGroupList                    (Parm, OutParm, ZeroConstructor)
// bool                           bIncludeSelf                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          InRadius                       (Parm, ZeroConstructor, IsPlainOldData)

void AGbxAIController::GetAIGroupList(bool bIncludeSelf, float InRadius, TArray<class AActor*>* AIGroupList)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.GetAIGroupList");

	AGbxAIController_GetAIGroupList_Params params;
	params.bIncludeSelf = bIncludeSelf;
	params.InRadius = InRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AIGroupList != nullptr)
		*AIGroupList = params.AIGroupList;
}


// Function GbxAI.GbxAIController.GetAIActionComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAIActionComponent*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAIActionComponent* AGbxAIController::GetAIActionComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.GetAIActionComponent");

	AGbxAIController_GetAIActionComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.GbxAIController.ChildDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                  DestroyedActor                 (Parm, ZeroConstructor, IsPlainOldData)

void AGbxAIController::ChildDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.ChildDestroyed");

	AGbxAIController_ChildDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.GbxAIController.CheckPauseWhileFalling
// (Final, Native, Private)
// Parameters:
// class ACharacter*              TheCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>     PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  PreviousCustomMode             (Parm, ZeroConstructor, IsPlainOldData)

void AGbxAIController::CheckPauseWhileFalling(class ACharacter* TheCharacter, TEnumAsByte<EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.CheckPauseWhileFalling");

	AGbxAIController_CheckPauseWhileFalling_Params params;
	params.TheCharacter = TheCharacter;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.GbxAIController.AddChildActors
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class AActor*>          NewChildren                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGbxAIController::AddChildActors(TArray<class AActor*> NewChildren)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.AddChildActors");

	AGbxAIController_AddChildActors_Params params;
	params.NewChildren = NewChildren;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.GbxAIController.AddChildActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  NewChild                       (Parm, ZeroConstructor, IsPlainOldData)

void AGbxAIController::AddChildActor(class AActor* NewChild)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAIController.AddChildActor");

	AGbxAIController_AddChildActor_Params params;
	params.NewChild = NewChild;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.GbxAnimStateManager_Cover.Owner_PostBeginPlay
// (Final, Native, Public)

void UGbxAnimStateManager_Cover::Owner_PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxAnimStateManager_Cover.Owner_PostBeginPlay");

	UGbxAnimStateManager_Cover_Owner_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.SmartObject.GetSmartObjectComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USmartObjectComponent*   ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USmartObjectComponent* ASmartObject::GetSmartObjectComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.SmartObject.GetSmartObjectComponent");

	ASmartObject_GetSmartObjectComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.SmartObject.GetGbxActionComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UGbxActionComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UGbxActionComponent* ASmartObject::GetGbxActionComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.SmartObject.GetGbxActionComponent");

	ASmartObject_GetGbxActionComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.GbxSpawner.GetGameplayTasksComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGameplayTasksComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UGameplayTasksComponent* AGbxSpawner::GetGameplayTasksComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxSpawner.GetGameplayTasksComponent");

	AGbxSpawner_GetGameplayTasksComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.GbxSpawner.GetAINodeComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAINodeComponent*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAINodeComponent* AGbxSpawner::GetAINodeComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxSpawner.GetAINodeComponent");

	AGbxSpawner_GetAINodeComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.GbxSpawner.GetAIGroupState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAIGroupState*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAIGroupState* AGbxSpawner::GetAIGroupState()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxSpawner.GetAIGroupState");

	AGbxSpawner_GetAIGroupState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.GbxSpawner.DEPRECATED_IsThreatened
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGbxSpawner::DEPRECATED_IsThreatened()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxSpawner.DEPRECATED_IsThreatened");

	AGbxSpawner_DEPRECATED_IsThreatened_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.GbxSpawnPoint.HasNavNearSpawnPointFor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USpawnPointComponent*    SpawnPointComp                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USpawnOptionData*        SpawnOptions                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGbxSpawnPoint::STATIC_HasNavNearSpawnPointFor(class USpawnPointComponent* SpawnPointComp, class USpawnOptionData* SpawnOptions)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.GbxSpawnPoint.HasNavNearSpawnPointFor");

	AGbxSpawnPoint_HasNavNearSpawnPointFor_Params params;
	params.SpawnPointComp = SpawnPointComp;
	params.SpawnOptions = SpawnOptions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.ScriptedBehaviorTreeLibrary.PerformScriptedAbort
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bStopImmediately               (Parm, ZeroConstructor, IsPlainOldData)

void UScriptedBehaviorTreeLibrary::STATIC_PerformScriptedAbort(class AActor* Target, bool bStopImmediately)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.ScriptedBehaviorTreeLibrary.PerformScriptedAbort");

	UScriptedBehaviorTreeLibrary_PerformScriptedAbort_Params params;
	params.Target = Target;
	params.bStopImmediately = bStopImmediately;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.ScriptedBehaviorTreeLibrary.BeginScriptedWait
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UStanceDataProvider*     OptionalStance                 (Parm, ZeroConstructor, IsPlainOldData)

void UScriptedBehaviorTreeLibrary::STATIC_BeginScriptedWait(class AActor* Target, class UStanceDataProvider* OptionalStance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.ScriptedBehaviorTreeLibrary.BeginScriptedWait");

	UScriptedBehaviorTreeLibrary_BeginScriptedWait_Params params;
	params.Target = Target;
	params.OptionalStance = OptionalStance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.ScriptedBehaviorTreeLibrary.BeginScriptedLook
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  LookAtActor                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAimAtActor                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFireWeaponAtActor             (Parm, ZeroConstructor, IsPlainOldData)
// class UStanceDataProvider*     OptionalStance                 (Parm, ZeroConstructor, IsPlainOldData)

void UScriptedBehaviorTreeLibrary::STATIC_BeginScriptedLook(class AActor* Target, class AActor* LookAtActor, bool bAimAtActor, bool bFireWeaponAtActor, class UStanceDataProvider* OptionalStance)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.ScriptedBehaviorTreeLibrary.BeginScriptedLook");

	UScriptedBehaviorTreeLibrary_BeginScriptedLook_Params params;
	params.Target = Target;
	params.LookAtActor = LookAtActor;
	params.bAimAtActor = bAimAtActor;
	params.bFireWeaponAtActor = bFireWeaponAtActor;
	params.OptionalStance = OptionalStance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.SmartObjectBlueprintLibrary.UseSmartObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  User                           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  SmartObject                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            ActionTag                      (Parm)
// bool                           bAbortExisting                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUntilInterrupted              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USmartObjectBlueprintLibrary::STATIC_UseSmartObject(class AActor* User, class AActor* SmartObject, const struct FGameplayTag& ActionTag, bool bAbortExisting, bool bUntilInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.SmartObjectBlueprintLibrary.UseSmartObject");

	USmartObjectBlueprintLibrary_UseSmartObject_Params params;
	params.User = User;
	params.SmartObject = SmartObject;
	params.ActionTag = ActionTag;
	params.bAbortExisting = bAbortExisting;
	params.bUntilInterrupted = bUntilInterrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.SmartObjectBlueprintLibrary.AbortSmartObjectUse
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  User                           (Parm, ZeroConstructor, IsPlainOldData)

void USmartObjectBlueprintLibrary::STATIC_AbortSmartObjectUse(class AActor* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.SmartObjectBlueprintLibrary.AbortSmartObjectUse");

	USmartObjectBlueprintLibrary_AbortSmartObjectUse_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.SmartObjectComponent.UnreserveEventSignature
// (Final, Native, Public)
// Parameters:
// class APawn*                   User                           (Parm, ZeroConstructor, IsPlainOldData)

void USmartObjectComponent::UnreserveEventSignature(class APawn* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.SmartObjectComponent.UnreserveEventSignature");

	USmartObjectComponent_UnreserveEventSignature_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.SmartObjectComponent.ToggleActionSet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSmartObjectActionSet   ActionSet                      (Parm)

void USmartObjectComponent::ToggleActionSet(const struct FSmartObjectActionSet& ActionSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.SmartObjectComponent.ToggleActionSet");

	USmartObjectComponent_ToggleActionSet_Params params;
	params.ActionSet = ActionSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.SmartObjectComponent.SuccessEventSignature
// (Final, Native, Public)
// Parameters:
// class APawn*                   User                           (Parm, ZeroConstructor, IsPlainOldData)

void USmartObjectComponent::SuccessEventSignature(class APawn* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.SmartObjectComponent.SuccessEventSignature");

	USmartObjectComponent_SuccessEventSignature_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.SmartObjectComponent.ReserveEventSignature
// (Final, Native, Public)
// Parameters:
// class APawn*                   User                           (Parm, ZeroConstructor, IsPlainOldData)

void USmartObjectComponent::ReserveEventSignature(class APawn* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.SmartObjectComponent.ReserveEventSignature");

	USmartObjectComponent_ReserveEventSignature_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.SmartObjectComponent.OnActionEnded
// (Final, Native, Private)
// Parameters:
// EGbxActionEndState             EndState                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            ActionName                     (Parm)
// class AController*             User                           (Parm, ZeroConstructor, IsPlainOldData)

void USmartObjectComponent::OnActionEnded(EGbxActionEndState EndState, const struct FGameplayTag& ActionName, class AController* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.SmartObjectComponent.OnActionEnded");

	USmartObjectComponent_OnActionEnded_Params params;
	params.EndState = EndState;
	params.ActionName = ActionName;
	params.User = User;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.SmartObjectComponent.InterruptEventSignature
// (Final, Native, Public)
// Parameters:
// class APawn*                   User                           (Parm, ZeroConstructor, IsPlainOldData)

void USmartObjectComponent::InterruptEventSignature(class APawn* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.SmartObjectComponent.InterruptEventSignature");

	USmartObjectComponent_InterruptEventSignature_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.SmartObjectComponent.GetAvailableSocketNames
// (Final, Native, Private, HasOutParms, Const)
// Parameters:
// TArray<struct FName>           Array                          (Parm, OutParm, ZeroConstructor)

void USmartObjectComponent::GetAvailableSocketNames(TArray<struct FName>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.SmartObjectComponent.GetAvailableSocketNames");

	USmartObjectComponent_GetAvailableSocketNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function GbxAI.SmartObjectComponent.GetActionUsers
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag            ActionTag                      (Parm)
// TArray<class APawn*>           OutUsers                       (Parm, OutParm, ZeroConstructor)

void USmartObjectComponent::GetActionUsers(const struct FGameplayTag& ActionTag, TArray<class APawn*>* OutUsers)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.SmartObjectComponent.GetActionUsers");

	USmartObjectComponent_GetActionUsers_Params params;
	params.ActionTag = ActionTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutUsers != nullptr)
		*OutUsers = params.OutUsers;
}


// Function GbxAI.SmartObjectComponent.EnableAllActions
// (Final, Native, Public, BlueprintCallable)

void USmartObjectComponent::EnableAllActions()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.SmartObjectComponent.EnableAllActions");

	USmartObjectComponent_EnableAllActions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.SmartObjectComponent.EnableAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag            ActionTag                      (Parm)

void USmartObjectComponent::EnableAction(const struct FGameplayTag& ActionTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.SmartObjectComponent.EnableAction");

	USmartObjectComponent_EnableAction_Params params;
	params.ActionTag = ActionTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.SmartObjectComponent.DisableAllActions
// (Final, Native, Public, BlueprintCallable)

void USmartObjectComponent::DisableAllActions()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.SmartObjectComponent.DisableAllActions");

	USmartObjectComponent_DisableAllActions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.SmartObjectComponent.DisableAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag            ActionTag                      (Parm)

void USmartObjectComponent::DisableAction(const struct FGameplayTag& ActionTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.SmartObjectComponent.DisableAction");

	USmartObjectComponent_DisableAction_Params params;
	params.ActionTag = ActionTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.SmartObjectComponent.BeginEventSignature
// (Final, Native, Public)
// Parameters:
// class APawn*                   User                           (Parm, ZeroConstructor, IsPlainOldData)

void USmartObjectComponent::BeginEventSignature(class APawn* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.SmartObjectComponent.BeginEventSignature");

	USmartObjectComponent_BeginEventSignature_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.SmartObjectPreviewComponent.OnReplayAction
// (Final, Native, Private)

void USmartObjectPreviewComponent::OnReplayAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.SmartObjectPreviewComponent.OnReplayAction");

	USmartObjectPreviewComponent_OnReplayAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.SmartObjectPreviewComponent.OnCycleActor
// (Final, Native, Private)
// Parameters:
// ECycleDirection                Direction                      (Parm, ZeroConstructor, IsPlainOldData)

void USmartObjectPreviewComponent::OnCycleActor(ECycleDirection Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.SmartObjectPreviewComponent.OnCycleActor");

	USmartObjectPreviewComponent_OnCycleActor_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.SpawnBlueprintLibrary.SetSpawnOptions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  SpawnerActor                   (Parm, ZeroConstructor, IsPlainOldData)
// class USpawnOptionData*        SpawnOptions                   (Parm, ZeroConstructor, IsPlainOldData)

void USpawnBlueprintLibrary::STATIC_SetSpawnOptions(class AActor* SpawnerActor, class USpawnOptionData* SpawnOptions)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.SpawnBlueprintLibrary.SetSpawnOptions");

	USpawnBlueprintLibrary_SetSpawnOptions_Params params;
	params.SpawnerActor = SpawnerActor;
	params.SpawnOptions = SpawnOptions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxAI.SpawnBlueprintLibrary.GenerateSpawnerByRadius
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// class USpawnerStyle*           Style                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETeamAttitude>     MinRequiredAttitude            (Parm, ZeroConstructor, IsPlainOldData)
// class ASpawner*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASpawner* USpawnBlueprintLibrary::STATIC_GenerateSpawnerByRadius(class AActor* Instigator, class USpawnerStyle* Style, float Radius, TEnumAsByte<ETeamAttitude> MinRequiredAttitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.SpawnBlueprintLibrary.GenerateSpawnerByRadius");

	USpawnBlueprintLibrary_GenerateSpawnerByRadius_Params params;
	params.Instigator = Instigator;
	params.Style = Style;
	params.Radius = Radius;
	params.MinRequiredAttitude = MinRequiredAttitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.SpawnBlueprintLibrary.GenerateSpawnerByOwningSpawner
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// class USpawnerStyle*           Style                          (Parm, ZeroConstructor, IsPlainOldData)
// class ASpawner*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ASpawner* USpawnBlueprintLibrary::STATIC_GenerateSpawnerByOwningSpawner(class AActor* Instigator, class USpawnerStyle* Style)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.SpawnBlueprintLibrary.GenerateSpawnerByOwningSpawner");

	USpawnBlueprintLibrary_GenerateSpawnerByOwningSpawner_Params params;
	params.Instigator = Instigator;
	params.Style = Style;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxAI.Territory.GetTerritoryComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTerritoryComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UTerritoryComponent* ATerritory::GetTerritoryComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxAI.Territory.GetTerritoryComponent");

	ATerritory_GetTerritoryComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
