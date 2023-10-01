#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_CohtmlPlugin_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CohtmlPlugin.CohtmlBaseComponent.UpdateWholeDataModelFromStruct
struct UCohtmlBaseComponent_UpdateWholeDataModelFromStruct_Params
{
	class UStructProperty*                             Struct;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlBaseComponent.UpdateWholeDataModelFromObject
struct UCohtmlBaseComponent_UpdateWholeDataModelFromObject_Params
{
	class UObject*                                     Model;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlBaseComponent.TriggerJSEvent
struct UCohtmlBaseComponent_TriggerJSEvent_Params
{
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
	class UCohtmlJSEvent*                              EventData;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlBaseComponent.SynchronizeModels
struct UCohtmlBaseComponent_SynchronizeModels_Params
{
};

// Function CohtmlPlugin.CohtmlBaseComponent.ShowPaintRects
struct UCohtmlBaseComponent_ShowPaintRects_Params
{
	bool                                               show;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlBaseComponent.SetSoundAttenuation
struct UCohtmlBaseComponent_SetSoundAttenuation_Params
{
	struct FSoundAttenuationSettings                   Settings;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function CohtmlPlugin.CohtmlBaseComponent.Resize
struct UCohtmlBaseComponent_Resize_Params
{
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlBaseComponent.Reload
struct UCohtmlBaseComponent_Reload_Params
{
};

// Function CohtmlPlugin.CohtmlBaseComponent.Load
struct UCohtmlBaseComponent_Load_Params
{
	class FString                                      Path;                                                     // (Parm, ZeroConstructor)
};

// Function CohtmlPlugin.CohtmlBaseComponent.IsReadyToCreateView
struct UCohtmlBaseComponent_IsReadyToCreateView_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlBaseComponent.IsReadyForBindings
struct UCohtmlBaseComponent_IsReadyForBindings_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlBaseComponent.HasRequestedView
struct UCohtmlBaseComponent_HasRequestedView_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlBaseComponent.EndDebugFrameSave
struct UCohtmlBaseComponent_EndDebugFrameSave_Params
{
};

// Function CohtmlPlugin.CohtmlBaseComponent.EnableRendering
struct UCohtmlBaseComponent_EnableRendering_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlBaseComponent.EnableDelayedUpdate
struct UCohtmlBaseComponent_EnableDelayedUpdate_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlBaseComponent.DebugSaveNextFrame
struct UCohtmlBaseComponent_DebugSaveNextFrame_Params
{
};

// Function CohtmlPlugin.CohtmlBaseComponent.CreateJSEvent
struct UCohtmlBaseComponent_CreateJSEvent_Params
{
	class UCohtmlJSEvent*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlBaseComponent.CreateDataModelFromStruct
struct UCohtmlBaseComponent_CreateDataModelFromStruct_Params
{
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
	class UStructProperty*                             Arg;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlBaseComponent.CreateDataModelFromObject
struct UCohtmlBaseComponent_CreateDataModelFromObject_Params
{
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
	class UObject*                                     Model;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlBaseComponent.BeginDebugFrameSave
struct UCohtmlBaseComponent_BeginDebugFrameSave_Params
{
};

// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.TriggerJSEvent
struct UCohtmlBlueprintFunctionLibrary_TriggerJSEvent_Params
{
	class UCohtmlBaseComponent*                        Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class FString                                      EventName;                                                // (Parm, ZeroConstructor)
	class UCohtmlJSEvent*                              JSEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.CreateJSEvent
struct UCohtmlBlueprintFunctionLibrary_CreateJSEvent_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UCohtmlJSEvent*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddStructArg
struct UCohtmlBlueprintFunctionLibrary_AddStructArg_Params
{
	class UCohtmlJSEvent*                              JSEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UStructProperty*                             Arg;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddString
struct UCohtmlBlueprintFunctionLibrary_AddString_Params
{
	class UCohtmlJSEvent*                              JSEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Arg;                                                      // (Parm, ZeroConstructor)
};

// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddObject
struct UCohtmlBlueprintFunctionLibrary_AddObject_Params
{
	class UCohtmlJSEvent*                              JSEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Arg;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddInt32
struct UCohtmlBlueprintFunctionLibrary_AddInt32_Params
{
	class UCohtmlJSEvent*                              JSEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Arg;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddFloat
struct UCohtmlBlueprintFunctionLibrary_AddFloat_Params
{
	class UCohtmlJSEvent*                              JSEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Arg;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddByte
struct UCohtmlBlueprintFunctionLibrary_AddByte_Params
{
	class UCohtmlJSEvent*                              JSEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Arg;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddBool
struct UCohtmlBlueprintFunctionLibrary_AddBool_Params
{
	class UCohtmlJSEvent*                              JSEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Arg;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddArrayOfStructs
struct UCohtmlBlueprintFunctionLibrary_AddArrayOfStructs_Params
{
	class UCohtmlJSEvent*                              JSEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        Arg;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function CohtmlPlugin.CohtmlBlueprintFunctionLibrary.AddArray
struct UCohtmlBlueprintFunctionLibrary_AddArray_Params
{
	class UCohtmlJSEvent*                              JSEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        Arg;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ArrayType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlGameHUD.SetupView
struct ACohtmlGameHUD_SetupView_Params
{
	class FString                                      PageUrl;                                                  // (Parm, ZeroConstructor)
	bool                                               bEnableComplexCSSSupport;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDelayedUpdate;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlInputActor.ToggleCohtmlInputFocus
struct ACohtmlInputActor_ToggleCohtmlInputFocus_Params
{
};

// Function CohtmlPlugin.CohtmlInputActor.SetLineTraceMode
struct ACohtmlInputActor_SetLineTraceMode_Params
{
	TEnumAsByte<ECohtmlInputWidgetLineTraceMode>       Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlInputActor.SetInputPropagationBehaviour
struct ACohtmlInputActor_SetInputPropagationBehaviour_Params
{
	TEnumAsByte<ECohtmlInputPropagationBehaviour>      Propagation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlInputActor.SetCohtmlViewFocus
struct ACohtmlInputActor_SetCohtmlViewFocus_Params
{
	class UCohtmlBaseComponent*                        NewFocusedView;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlInputActor.SetCohtmlInputFocus
struct ACohtmlInputActor_SetCohtmlInputFocus_Params
{
	bool                                               FocusUI;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlInputActor.IsCohtmlFocused
struct ACohtmlInputActor_IsCohtmlFocused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlInputActor.Initialize
struct ACohtmlInputActor_Initialize_Params
{
	TEnumAsByte<ECollisionChannel>                     CollisionChannel;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextureAddress>                       AddressMode;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECohtmlInputWidgetRaycastQuality>      RaycastQuality;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                UVChannel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlInputActor.GetInputPropagationBehaviour
struct ACohtmlInputActor_GetInputPropagationBehaviour_Params
{
	TEnumAsByte<ECohtmlInputPropagationBehaviour>      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlInputActor.AlwaysAcceptMouseInput
struct ACohtmlInputActor_AlwaysAcceptMouseInput_Params
{
	bool                                               bAccept;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlJSEvent.AddText
struct UCohtmlJSEvent_AddText_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function CohtmlPlugin.CohtmlJSEvent.AddStructArg
struct UCohtmlJSEvent_AddStructArg_Params
{
	class UStructProperty*                             Arg;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlJSEvent.AddString
struct UCohtmlJSEvent_AddString_Params
{
	class FString                                      str;                                                      // (Parm, ZeroConstructor)
};

// Function CohtmlPlugin.CohtmlJSEvent.AddObject
struct UCohtmlJSEvent_AddObject_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlJSEvent.AddName
struct UCohtmlJSEvent_AddName_Params
{
	struct FName                                       Name;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlJSEvent.AddInt32
struct UCohtmlJSEvent_AddInt32_Params
{
	int                                                integer;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlJSEvent.AddFloat
struct UCohtmlJSEvent_AddFloat_Params
{
	float                                              fl;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlJSEvent.AddByte
struct UCohtmlJSEvent_AddByte_Params
{
	unsigned char                                      byte;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlJSEvent.AddBool
struct UCohtmlJSEvent_AddBool_Params
{
	bool                                               B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlJSEvent.AddArray
struct UCohtmlJSEvent_AddArray_Params
{
	TArray<int>                                        Array;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function CohtmlPlugin.CohtmlWidget.UpdateWholeDataModelFromStruct
struct UCohtmlWidget_UpdateWholeDataModelFromStruct_Params
{
	class UStructProperty*                             Struct;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlWidget.UpdateWholeDataModelFromObject
struct UCohtmlWidget_UpdateWholeDataModelFromObject_Params
{
	class UObject*                                     Model;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlWidget.TriggerJSEvent
struct UCohtmlWidget_TriggerJSEvent_Params
{
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
	class UCohtmlJSEvent*                              EventData;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlWidget.SynchronizeModels
struct UCohtmlWidget_SynchronizeModels_Params
{
};

// Function CohtmlPlugin.CohtmlWidget.ShowPaintRects
struct UCohtmlWidget_ShowPaintRects_Params
{
	bool                                               show;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlWidget.SetSoundAttenuation
struct UCohtmlWidget_SetSoundAttenuation_Params
{
	struct FSoundAttenuationSettings                   Settings;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function CohtmlPlugin.CohtmlWidget.SetInputPropagationBehaviour
struct UCohtmlWidget_SetInputPropagationBehaviour_Params
{
	TEnumAsByte<ECohtmlInputPropagationBehaviour>      Propagation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlWidget.Reload
struct UCohtmlWidget_Reload_Params
{
};

// Function CohtmlPlugin.CohtmlWidget.Load
struct UCohtmlWidget_Load_Params
{
	class FString                                      Path;                                                     // (Parm, ZeroConstructor)
};

// Function CohtmlPlugin.CohtmlWidget.IsReadyToCreateView
struct UCohtmlWidget_IsReadyToCreateView_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlWidget.IsReadyForBindings
struct UCohtmlWidget_IsReadyForBindings_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlWidget.HasRequestedView
struct UCohtmlWidget_HasRequestedView_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlWidget.GetRenderTexture
struct UCohtmlWidget_GetRenderTexture_Params
{
	class UTextureRenderTarget2D*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlWidget.GetInputPropagationBehaviour
struct UCohtmlWidget_GetInputPropagationBehaviour_Params
{
	TEnumAsByte<ECohtmlInputPropagationBehaviour>      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlWidget.CreateJSEvent
struct UCohtmlWidget_CreateJSEvent_Params
{
	class UCohtmlJSEvent*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlWidget.CreateDataModelFromStruct
struct UCohtmlWidget_CreateDataModelFromStruct_Params
{
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
	class UStructProperty*                             Struct;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CohtmlPlugin.CohtmlWidget.CreateDataModelFromObject
struct UCohtmlWidget_CreateDataModelFromObject_Params
{
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
	class UObject*                                     Model;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
