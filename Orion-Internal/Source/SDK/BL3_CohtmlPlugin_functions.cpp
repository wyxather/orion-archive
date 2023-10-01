// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_CohtmlPlugin_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CohtmlPlugin.CohtmlBaseComponent.UpdateWholeDataModelFromStruct
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UStructProperty*         Struct                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCohtmlBaseComponent::UpdateWholeDataModelFromStruct(class UStructProperty* Struct)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.UpdateWholeDataModelFromStruct");

	UCohtmlBaseComponent_UpdateWholeDataModelFromStruct_Params params;
	params.Struct = Struct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlBaseComponent.UpdateWholeDataModelFromObject
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UObject*                 Model                          (Parm, ZeroConstructor, IsPlainOldData)

void UCohtmlBaseComponent::UpdateWholeDataModelFromObject(class UObject* Model)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.UpdateWholeDataModelFromObject");

	UCohtmlBaseComponent_UpdateWholeDataModelFromObject_Params params;
	params.Model = Model;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlBaseComponent.TriggerJSEvent
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class FString                  Name                           (Parm, ZeroConstructor)
// class UCohtmlJSEvent*          EventData                      (Parm, ZeroConstructor, IsPlainOldData)

void UCohtmlBaseComponent::TriggerJSEvent(const class FString& Name, class UCohtmlJSEvent* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.TriggerJSEvent");

	UCohtmlBaseComponent_TriggerJSEvent_Params params;
	params.Name = Name;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlBaseComponent.SynchronizeModels
// (Final, Native, Public, BlueprintCallable, Const)

void UCohtmlBaseComponent::SynchronizeModels()
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.SynchronizeModels");

	UCohtmlBaseComponent_SynchronizeModels_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlBaseComponent.ShowPaintRects
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           show                           (Parm, ZeroConstructor, IsPlainOldData)

void UCohtmlBaseComponent::ShowPaintRects(bool show)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.ShowPaintRects");

	UCohtmlBaseComponent_ShowPaintRects_Params params;
	params.show = show;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlBaseComponent.SetSoundAttenuation
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSoundAttenuationSettings Settings                       (ConstParm, Parm, OutParm, ReferenceParm)

void UCohtmlBaseComponent::SetSoundAttenuation(const struct FSoundAttenuationSettings& Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.SetSoundAttenuation");

	UCohtmlBaseComponent_SetSoundAttenuation_Params params;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlBaseComponent.Resize
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData)

void UCohtmlBaseComponent::Resize(int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.Resize");

	UCohtmlBaseComponent_Resize_Params params;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlBaseComponent.Reload
// (Final, Native, Public, BlueprintCallable)

void UCohtmlBaseComponent::Reload()
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.Reload");

	UCohtmlBaseComponent_Reload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlBaseComponent.Load
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  Path                           (Parm, ZeroConstructor)

void UCohtmlBaseComponent::Load(const class FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.Load");

	UCohtmlBaseComponent_Load_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlBaseComponent.IsReadyToCreateView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCohtmlBaseComponent::IsReadyToCreateView()
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.IsReadyToCreateView");

	UCohtmlBaseComponent_IsReadyToCreateView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CohtmlPlugin.CohtmlBaseComponent.IsReadyForBindings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCohtmlBaseComponent::IsReadyForBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.IsReadyForBindings");

	UCohtmlBaseComponent_IsReadyForBindings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CohtmlPlugin.CohtmlBaseComponent.HasRequestedView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCohtmlBaseComponent::HasRequestedView()
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.HasRequestedView");

	UCohtmlBaseComponent_HasRequestedView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CohtmlPlugin.CohtmlBaseComponent.EndDebugFrameSave
// (Final, Native, Public, BlueprintCallable)

void UCohtmlBaseComponent::EndDebugFrameSave()
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.EndDebugFrameSave");

	UCohtmlBaseComponent_EndDebugFrameSave_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlBaseComponent.EnableRendering
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UCohtmlBaseComponent::EnableRendering(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.EnableRendering");

	UCohtmlBaseComponent_EnableRendering_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlBaseComponent.EnableDelayedUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UCohtmlBaseComponent::EnableDelayedUpdate(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.EnableDelayedUpdate");

	UCohtmlBaseComponent_EnableDelayedUpdate_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlBaseComponent.DebugSaveNextFrame
// (Final, Native, Public, BlueprintCallable)

void UCohtmlBaseComponent::DebugSaveNextFrame()
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.DebugSaveNextFrame");

	UCohtmlBaseComponent_DebugSaveNextFrame_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlBaseComponent.CreateJSEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCohtmlJSEvent*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCohtmlJSEvent* UCohtmlBaseComponent::CreateJSEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.CreateJSEvent");

	UCohtmlBaseComponent_CreateJSEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CohtmlPlugin.CohtmlBaseComponent.CreateDataModelFromStruct
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  Name                           (Parm, ZeroConstructor)
// class UStructProperty*         Arg                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCohtmlBaseComponent::CreateDataModelFromStruct(const class FString& Name, class UStructProperty* Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.CreateDataModelFromStruct");

	UCohtmlBaseComponent_CreateDataModelFromStruct_Params params;
	params.Name = Name;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlBaseComponent.CreateDataModelFromObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  Name                           (Parm, ZeroConstructor)
// class UObject*                 Model                          (Parm, ZeroConstructor, IsPlainOldData)

void UCohtmlBaseComponent::CreateDataModelFromObject(const class FString& Name, class UObject* Model)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.CreateDataModelFromObject");

	UCohtmlBaseComponent_CreateDataModelFromObject_Params params;
	params.Name = Name;
	params.Model = Model;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlBaseComponent.BeginDebugFrameSave
// (Final, Native, Public, BlueprintCallable)

void UCohtmlBaseComponent::BeginDebugFrameSave()
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBaseComponent.BeginDebugFrameSave");

	UCohtmlBaseComponent_BeginDebugFrameSave_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.TriggerJSEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCohtmlBaseComponent*    Component                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class FString                  EventName                      (Parm, ZeroConstructor)
// class UCohtmlJSEvent*          JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)

void UCohtmlBlueprintFunctionLibrary::STATIC_TriggerJSEvent(class UCohtmlBaseComponent* Component, const class FString& EventName, class UCohtmlJSEvent* JSEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.TriggerJSEvent");

	UCohtmlBlueprintFunctionLibrary_TriggerJSEvent_Params params;
	params.Component = Component;
	params.EventName = EventName;
	params.JSEvent = JSEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.CreateJSEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UCohtmlJSEvent*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCohtmlJSEvent* UCohtmlBlueprintFunctionLibrary::STATIC_CreateJSEvent(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.CreateJSEvent");

	UCohtmlBlueprintFunctionLibrary_CreateJSEvent_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddStructArg
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCohtmlJSEvent*          JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// class UStructProperty*         Arg                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCohtmlBlueprintFunctionLibrary::STATIC_AddStructArg(class UCohtmlJSEvent* JSEvent, class UStructProperty* Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddStructArg");

	UCohtmlBlueprintFunctionLibrary_AddStructArg_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCohtmlJSEvent*          JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Arg                            (Parm, ZeroConstructor)

void UCohtmlBlueprintFunctionLibrary::STATIC_AddString(class UCohtmlJSEvent* JSEvent, const class FString& Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddString");

	UCohtmlBlueprintFunctionLibrary_AddString_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCohtmlJSEvent*          JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Arg                            (Parm, ZeroConstructor, IsPlainOldData)

void UCohtmlBlueprintFunctionLibrary::STATIC_AddObject(class UCohtmlJSEvent* JSEvent, class UObject* Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddObject");

	UCohtmlBlueprintFunctionLibrary_AddObject_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddInt32
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCohtmlJSEvent*          JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            Arg                            (Parm, ZeroConstructor, IsPlainOldData)

void UCohtmlBlueprintFunctionLibrary::STATIC_AddInt32(class UCohtmlJSEvent* JSEvent, int Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddInt32");

	UCohtmlBlueprintFunctionLibrary_AddInt32_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddFloat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCohtmlJSEvent*          JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Arg                            (Parm, ZeroConstructor, IsPlainOldData)

void UCohtmlBlueprintFunctionLibrary::STATIC_AddFloat(class UCohtmlJSEvent* JSEvent, float Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddFloat");

	UCohtmlBlueprintFunctionLibrary_AddFloat_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddByte
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCohtmlJSEvent*          JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Arg                            (Parm, ZeroConstructor, IsPlainOldData)

void UCohtmlBlueprintFunctionLibrary::STATIC_AddByte(class UCohtmlJSEvent* JSEvent, unsigned char Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddByte");

	UCohtmlBlueprintFunctionLibrary_AddByte_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddBool
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCohtmlJSEvent*          JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Arg                            (Parm, ZeroConstructor, IsPlainOldData)

void UCohtmlBlueprintFunctionLibrary::STATIC_AddBool(class UCohtmlJSEvent* JSEvent, bool Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddBool");

	UCohtmlBlueprintFunctionLibrary_AddBool_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddArrayOfStructs
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UCohtmlJSEvent*          JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    Arg                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCohtmlBlueprintFunctionLibrary::STATIC_AddArrayOfStructs(class UCohtmlJSEvent* JSEvent, TArray<int> Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddArrayOfStructs");

	UCohtmlBlueprintFunctionLibrary_AddArrayOfStructs_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddArray
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UCohtmlJSEvent*          JSEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    Arg                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ArrayType                      (Parm, ZeroConstructor, IsPlainOldData)

void UCohtmlBlueprintFunctionLibrary::STATIC_AddArray(class UCohtmlJSEvent* JSEvent, TArray<int> Arg, int ArrayType)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddArray");

	UCohtmlBlueprintFunctionLibrary_AddArray_Params params;
	params.JSEvent = JSEvent;
	params.Arg = Arg;
	params.ArrayType = ArrayType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlGameHUD.SetupView
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  PageUrl                        (Parm, ZeroConstructor)
// bool                           bEnableComplexCSSSupport       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDelayedUpdate                 (Parm, ZeroConstructor, IsPlainOldData)

void ACohtmlGameHUD::SetupView(const class FString& PageUrl, bool bEnableComplexCSSSupport, bool bDelayedUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlGameHUD.SetupView");

	ACohtmlGameHUD_SetupView_Params params;
	params.PageUrl = PageUrl;
	params.bEnableComplexCSSSupport = bEnableComplexCSSSupport;
	params.bDelayedUpdate = bDelayedUpdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlInputActor.ToggleCohtmlInputFocus
// (Final, Native, Public, BlueprintCallable)

void ACohtmlInputActor::ToggleCohtmlInputFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlInputActor.ToggleCohtmlInputFocus");

	ACohtmlInputActor_ToggleCohtmlInputFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlInputActor.SetLineTraceMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ECohtmlInputWidgetLineTraceMode> Mode                           (Parm, ZeroConstructor, IsPlainOldData)

void ACohtmlInputActor::SetLineTraceMode(TEnumAsByte<ECohtmlInputWidgetLineTraceMode> Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlInputActor.SetLineTraceMode");

	ACohtmlInputActor_SetLineTraceMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlInputActor.SetInputPropagationBehaviour
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ECohtmlInputPropagationBehaviour> Propagation                    (Parm, ZeroConstructor, IsPlainOldData)

void ACohtmlInputActor::SetInputPropagationBehaviour(TEnumAsByte<ECohtmlInputPropagationBehaviour> Propagation)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlInputActor.SetInputPropagationBehaviour");

	ACohtmlInputActor_SetInputPropagationBehaviour_Params params;
	params.Propagation = Propagation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlInputActor.SetCohtmlViewFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCohtmlBaseComponent*    NewFocusedView                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ACohtmlInputActor::SetCohtmlViewFocus(class UCohtmlBaseComponent* NewFocusedView)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlInputActor.SetCohtmlViewFocus");

	ACohtmlInputActor_SetCohtmlViewFocus_Params params;
	params.NewFocusedView = NewFocusedView;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlInputActor.SetCohtmlInputFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           FocusUI                        (Parm, ZeroConstructor, IsPlainOldData)

void ACohtmlInputActor::SetCohtmlInputFocus(bool FocusUI)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlInputActor.SetCohtmlInputFocus");

	ACohtmlInputActor_SetCohtmlInputFocus_Params params;
	params.FocusUI = FocusUI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlInputActor.IsCohtmlFocused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ACohtmlInputActor::IsCohtmlFocused()
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlInputActor.IsCohtmlFocused");

	ACohtmlInputActor_IsCohtmlFocused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CohtmlPlugin.CohtmlInputActor.Initialize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ECollisionChannel> CollisionChannel               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETextureAddress>   AddressMode                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECohtmlInputWidgetRaycastQuality> RaycastQuality                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            UVChannel                      (Parm, ZeroConstructor, IsPlainOldData)

void ACohtmlInputActor::Initialize(TEnumAsByte<ECollisionChannel> CollisionChannel, TEnumAsByte<ETextureAddress> AddressMode, TEnumAsByte<ECohtmlInputWidgetRaycastQuality> RaycastQuality, int UVChannel)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlInputActor.Initialize");

	ACohtmlInputActor_Initialize_Params params;
	params.CollisionChannel = CollisionChannel;
	params.AddressMode = AddressMode;
	params.RaycastQuality = RaycastQuality;
	params.UVChannel = UVChannel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlInputActor.GetInputPropagationBehaviour
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ECohtmlInputPropagationBehaviour> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ECohtmlInputPropagationBehaviour> ACohtmlInputActor::GetInputPropagationBehaviour()
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlInputActor.GetInputPropagationBehaviour");

	ACohtmlInputActor_GetInputPropagationBehaviour_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CohtmlPlugin.CohtmlInputActor.AlwaysAcceptMouseInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bAccept                        (Parm, ZeroConstructor, IsPlainOldData)

void ACohtmlInputActor::AlwaysAcceptMouseInput(bool bAccept)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlInputActor.AlwaysAcceptMouseInput");

	ACohtmlInputActor_AlwaysAcceptMouseInput_Params params;
	params.bAccept = bAccept;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlJSEvent.AddText
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void UCohtmlJSEvent::AddText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlJSEvent.AddText");

	UCohtmlJSEvent_AddText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlJSEvent.AddStructArg
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UStructProperty*         Arg                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCohtmlJSEvent::AddStructArg(class UStructProperty* Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlJSEvent.AddStructArg");

	UCohtmlJSEvent_AddStructArg_Params params;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlJSEvent.AddString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  str                            (Parm, ZeroConstructor)

void UCohtmlJSEvent::AddString(const class FString& str)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlJSEvent.AddString");

	UCohtmlJSEvent_AddString_Params params;
	params.str = str;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlJSEvent.AddObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)

void UCohtmlJSEvent::AddObject(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlJSEvent.AddObject");

	UCohtmlJSEvent_AddObject_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlJSEvent.AddName
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UCohtmlJSEvent::AddName(const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlJSEvent.AddName");

	UCohtmlJSEvent_AddName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlJSEvent.AddInt32
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            integer                        (Parm, ZeroConstructor, IsPlainOldData)

void UCohtmlJSEvent::AddInt32(int integer)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlJSEvent.AddInt32");

	UCohtmlJSEvent_AddInt32_Params params;
	params.integer = integer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlJSEvent.AddFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          fl                             (Parm, ZeroConstructor, IsPlainOldData)

void UCohtmlJSEvent::AddFloat(float fl)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlJSEvent.AddFloat");

	UCohtmlJSEvent_AddFloat_Params params;
	params.fl = fl;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlJSEvent.AddByte
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// unsigned char                  byte                           (Parm, ZeroConstructor, IsPlainOldData)

void UCohtmlJSEvent::AddByte(unsigned char byte)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlJSEvent.AddByte");

	UCohtmlJSEvent_AddByte_Params params;
	params.byte = byte;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlJSEvent.AddBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           B                              (Parm, ZeroConstructor, IsPlainOldData)

void UCohtmlJSEvent::AddBool(bool B)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlJSEvent.AddBool");

	UCohtmlJSEvent_AddBool_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlJSEvent.AddArray
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<int>                    Array                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCohtmlJSEvent::AddArray(TArray<int> Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlJSEvent.AddArray");

	UCohtmlJSEvent_AddArray_Params params;
	params.Array = Array;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlWidget.UpdateWholeDataModelFromStruct
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UStructProperty*         Struct                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCohtmlWidget::UpdateWholeDataModelFromStruct(class UStructProperty* Struct)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.UpdateWholeDataModelFromStruct");

	UCohtmlWidget_UpdateWholeDataModelFromStruct_Params params;
	params.Struct = Struct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlWidget.UpdateWholeDataModelFromObject
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UObject*                 Model                          (Parm, ZeroConstructor, IsPlainOldData)

void UCohtmlWidget::UpdateWholeDataModelFromObject(class UObject* Model)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.UpdateWholeDataModelFromObject");

	UCohtmlWidget_UpdateWholeDataModelFromObject_Params params;
	params.Model = Model;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlWidget.TriggerJSEvent
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class FString                  Name                           (Parm, ZeroConstructor)
// class UCohtmlJSEvent*          EventData                      (Parm, ZeroConstructor, IsPlainOldData)

void UCohtmlWidget::TriggerJSEvent(const class FString& Name, class UCohtmlJSEvent* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.TriggerJSEvent");

	UCohtmlWidget_TriggerJSEvent_Params params;
	params.Name = Name;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlWidget.SynchronizeModels
// (Final, Native, Public, BlueprintCallable, Const)

void UCohtmlWidget::SynchronizeModels()
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.SynchronizeModels");

	UCohtmlWidget_SynchronizeModels_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlWidget.ShowPaintRects
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           show                           (Parm, ZeroConstructor, IsPlainOldData)

void UCohtmlWidget::ShowPaintRects(bool show)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.ShowPaintRects");

	UCohtmlWidget_ShowPaintRects_Params params;
	params.show = show;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlWidget.SetSoundAttenuation
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSoundAttenuationSettings Settings                       (ConstParm, Parm, OutParm, ReferenceParm)

void UCohtmlWidget::SetSoundAttenuation(const struct FSoundAttenuationSettings& Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.SetSoundAttenuation");

	UCohtmlWidget_SetSoundAttenuation_Params params;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlWidget.SetInputPropagationBehaviour
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ECohtmlInputPropagationBehaviour> Propagation                    (Parm, ZeroConstructor, IsPlainOldData)

void UCohtmlWidget::SetInputPropagationBehaviour(TEnumAsByte<ECohtmlInputPropagationBehaviour> Propagation)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.SetInputPropagationBehaviour");

	UCohtmlWidget_SetInputPropagationBehaviour_Params params;
	params.Propagation = Propagation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlWidget.Reload
// (Final, Native, Public, BlueprintCallable)

void UCohtmlWidget::Reload()
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.Reload");

	UCohtmlWidget_Reload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlWidget.Load
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  Path                           (Parm, ZeroConstructor)

void UCohtmlWidget::Load(const class FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.Load");

	UCohtmlWidget_Load_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlWidget.IsReadyToCreateView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCohtmlWidget::IsReadyToCreateView()
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.IsReadyToCreateView");

	UCohtmlWidget_IsReadyToCreateView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CohtmlPlugin.CohtmlWidget.IsReadyForBindings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCohtmlWidget::IsReadyForBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.IsReadyForBindings");

	UCohtmlWidget_IsReadyForBindings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CohtmlPlugin.CohtmlWidget.HasRequestedView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCohtmlWidget::HasRequestedView()
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.HasRequestedView");

	UCohtmlWidget_HasRequestedView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CohtmlPlugin.CohtmlWidget.GetRenderTexture
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTextureRenderTarget2D*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTextureRenderTarget2D* UCohtmlWidget::GetRenderTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.GetRenderTexture");

	UCohtmlWidget_GetRenderTexture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CohtmlPlugin.CohtmlWidget.GetInputPropagationBehaviour
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<ECohtmlInputPropagationBehaviour> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ECohtmlInputPropagationBehaviour> UCohtmlWidget::GetInputPropagationBehaviour()
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.GetInputPropagationBehaviour");

	UCohtmlWidget_GetInputPropagationBehaviour_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CohtmlPlugin.CohtmlWidget.CreateJSEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCohtmlJSEvent*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCohtmlJSEvent* UCohtmlWidget::CreateJSEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.CreateJSEvent");

	UCohtmlWidget_CreateJSEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CohtmlPlugin.CohtmlWidget.CreateDataModelFromStruct
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  Name                           (Parm, ZeroConstructor)
// class UStructProperty*         Struct                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCohtmlWidget::CreateDataModelFromStruct(const class FString& Name, class UStructProperty* Struct)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.CreateDataModelFromStruct");

	UCohtmlWidget_CreateDataModelFromStruct_Params params;
	params.Name = Name;
	params.Struct = Struct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CohtmlPlugin.CohtmlWidget.CreateDataModelFromObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  Name                           (Parm, ZeroConstructor)
// class UObject*                 Model                          (Parm, ZeroConstructor, IsPlainOldData)

void UCohtmlWidget::CreateDataModelFromObject(const class FString& Name, class UObject* Model)
{
	static auto fn = UObject::FindObject<UFunction>("Function CohtmlPlugin.CohtmlWidget.CreateDataModelFromObject");

	UCohtmlWidget_CreateDataModelFromObject_Params params;
	params.Name = Name;
	params.Model = Model;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
