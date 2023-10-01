#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ScaleformUI_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ScaleformUI.GFxMoviePlayer.Start
struct UGFxMoviePlayer_Start_Params
{
	bool                                               bRefresh;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ScaleformUI.GFxMoviePlayer.SetVisible
struct UGFxMoviePlayer_SetVisible_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScaleformUI.GFxMoviePlayer.SetVisibility
struct UGFxMoviePlayer_SetVisibility_Params
{
	class FString                                      MovieClipName;                                            // (Parm, ZeroConstructor)
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScaleformUI.GFxMoviePlayer.SetViewScaleMode
struct UGFxMoviePlayer_SetViewScaleMode_Params
{
	TEnumAsByte<EGFxScaleMode>                         ScaleMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScaleformUI.GFxMoviePlayer.SetViewport
struct UGFxMoviePlayer_SetViewport_Params
{
	int                                                X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScaleformUI.GFxMoviePlayer.SetView3D
struct UGFxMoviePlayer_SetView3D_Params
{
	struct FTransform                                  ViewTransform;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ScaleformUI.GFxMoviePlayer.SetVariableValueArray
struct UGFxMoviePlayer_SetVariableValueArray_Params
{
	class FString                                      MovieClipName;                                            // (Parm, ZeroConstructor)
	class FString                                      MemberName;                                               // (Parm, ZeroConstructor)
	TArray<struct FASValue>                            Value;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ScaleformUI.GFxMoviePlayer.SetVariableValue
struct UGFxMoviePlayer_SetVariableValue_Params
{
	class FString                                      MovieClipName;                                            // (Parm, ZeroConstructor)
	class FString                                      MemberName;                                               // (Parm, ZeroConstructor)
	struct FASValue                                    Value;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ScaleformUI.GFxMoviePlayer.SetTimingMode
struct UGFxMoviePlayer_SetTimingMode_Params
{
	TEnumAsByte<EGFxTimingMode>                        TimingMode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScaleformUI.GFxMoviePlayer.SetScale
struct UGFxMoviePlayer_SetScale_Params
{
	class FString                                      MovieClipName;                                            // (Parm, ZeroConstructor)
	float                                              XScale;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              YScale;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScaleformUI.GFxMoviePlayer.SetPosition
struct UGFxMoviePlayer_SetPosition_Params
{
	class FString                                      MovieClipName;                                            // (Parm, ZeroConstructor)
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScaleformUI.GFxMoviePlayer.SetPerspective3D
struct UGFxMoviePlayer_SetPerspective3D_Params
{
	struct FASPerspectiveTransform                     PerspectiveTransform;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ScaleformUI.GFxMoviePlayer.SetPause
struct UGFxMoviePlayer_SetPause_Params
{
	bool                                               bPausePlayback;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScaleformUI.GFxMoviePlayer.SetMovieCanReceiveInput
struct UGFxMoviePlayer_SetMovieCanReceiveInput_Params
{
	bool                                               bCanReceiveInput;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScaleformUI.GFxMoviePlayer.SetMovieCanReceiveFocus
struct UGFxMoviePlayer_SetMovieCanReceiveFocus_Params
{
	bool                                               bCanReceiveFocus;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScaleformUI.GFxMoviePlayer.SetFocusIgnoreKeys
struct UGFxMoviePlayer_SetFocusIgnoreKeys_Params
{
	TArray<struct FKey>                                Keys;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ScaleformUI.GFxMoviePlayer.SetExternalTexture
struct UGFxMoviePlayer_SetExternalTexture_Params
{
	class FString                                      Resource;                                                 // (Parm, ZeroConstructor)
	class UTexture*                                    Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScaleformUI.GFxMoviePlayer.SetDisplayTransform
struct UGFxMoviePlayer_SetDisplayTransform_Params
{
	class FString                                      MovieClipName;                                            // (Parm, ZeroConstructor)
	struct FTransform                                  DisplayTransform;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ScaleformUI.GFxMoviePlayer.SetDisplayInfo
struct UGFxMoviePlayer_SetDisplayInfo_Params
{
	class FString                                      MovieClipName;                                            // (Parm, ZeroConstructor)
	struct FASDisplayInfo                              Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ScaleformUI.GFxMoviePlayer.SetColorTransform
struct UGFxMoviePlayer_SetColorTransform_Params
{
	class FString                                      MovieClipName;                                            // (Parm, ZeroConstructor)
	struct FASColorTransform                           UnrealColorTransform;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ScaleformUI.GFxMoviePlayer.SetCaptureKeys
struct UGFxMoviePlayer_SetCaptureKeys_Params
{
	TArray<struct FKey>                                Keys;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ScaleformUI.GFxMoviePlayer.SetAlignment
struct UGFxMoviePlayer_SetAlignment_Params
{
	TEnumAsByte<EGFxAlign>                             Align;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScaleformUI.GFxMoviePlayer.ReceiveGFxCommand
struct UGFxMoviePlayer_ReceiveGFxCommand_Params
{
	class FString                                      Command;                                                  // (Parm, ZeroConstructor)
	class FString                                      Arguments;                                                // (Parm, ZeroConstructor)
};

// Function ScaleformUI.GFxMoviePlayer.OpenMovie
struct UGFxMoviePlayer_OpenMovie_Params
{
	class USwfMovie*                                   SwfMovie;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ExternalScriptInterface;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      RenderToTexture;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UGFxMoviePlayer*                             MoviePlayer;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DisplayWithHudOff;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRefresh;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UGFxMoviePlayer*                             ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ScaleformUI.GFxMoviePlayer.OnTick
struct UGFxMoviePlayer_OnTick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScaleformUI.GFxMoviePlayer.OnStart
struct UGFxMoviePlayer_OnStart_Params
{
};

// Function ScaleformUI.GFxMoviePlayer.OnGameTick
struct UGFxMoviePlayer_OnGameTick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScaleformUI.GFxMoviePlayer.OnFocusLost
struct UGFxMoviePlayer_OnFocusLost_Params
{
	int                                                LocalPlayerIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScaleformUI.GFxMoviePlayer.OnFocusGained
struct UGFxMoviePlayer_OnFocusGained_Params
{
	int                                                LocalPlayerIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScaleformUI.GFxMoviePlayer.OnClose
struct UGFxMoviePlayer_OnClose_Params
{
};

// Function ScaleformUI.GFxMoviePlayer.IsVisible
struct UGFxMoviePlayer_IsVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ScaleformUI.GFxMoviePlayer.IsPaused
struct UGFxMoviePlayer_IsPaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ScaleformUI.GFxMoviePlayer.Invoke
struct UGFxMoviePlayer_Invoke_Params
{
	class FString                                      MovieClipName;                                            // (Parm, ZeroConstructor)
	class FString                                      FunctionName;                                             // (Parm, ZeroConstructor)
	TArray<struct FASValue>                            Params;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FASValue                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ScaleformUI.GFxMoviePlayer.GotoAndStopI
struct UGFxMoviePlayer_GotoAndStopI_Params
{
	class FString                                      MovieClipName;                                            // (Parm, ZeroConstructor)
	int                                                Frame;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScaleformUI.GFxMoviePlayer.GotoAndStop
struct UGFxMoviePlayer_GotoAndStop_Params
{
	class FString                                      MovieClipName;                                            // (Parm, ZeroConstructor)
	class FString                                      Frame;                                                    // (Parm, ZeroConstructor)
};

// Function ScaleformUI.GFxMoviePlayer.GotoAndPlayI
struct UGFxMoviePlayer_GotoAndPlayI_Params
{
	class FString                                      MovieClipName;                                            // (Parm, ZeroConstructor)
	int                                                Frame;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScaleformUI.GFxMoviePlayer.GotoAndPlay
struct UGFxMoviePlayer_GotoAndPlay_Params
{
	class FString                                      MovieClipName;                                            // (Parm, ZeroConstructor)
	class FString                                      Frame;                                                    // (Parm, ZeroConstructor)
};

// Function ScaleformUI.GFxMoviePlayer.GetVisibility
struct UGFxMoviePlayer_GetVisibility_Params
{
	class FString                                      MovieClipName;                                            // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ScaleformUI.GFxMoviePlayer.GetView3D
struct UGFxMoviePlayer_GetView3D_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ScaleformUI.GFxMoviePlayer.GetVariableValueArray
struct UGFxMoviePlayer_GetVariableValueArray_Params
{
	class FString                                      MovieClipName;                                            // (Parm, ZeroConstructor)
	class FString                                      MemberName;                                               // (Parm, ZeroConstructor)
	TArray<struct FASValue>                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ScaleformUI.GFxMoviePlayer.GetVariableValue
struct UGFxMoviePlayer_GetVariableValue_Params
{
	class FString                                      MovieClipName;                                            // (Parm, ZeroConstructor)
	class FString                                      MemberName;                                               // (Parm, ZeroConstructor)
	struct FASValue                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ScaleformUI.GFxMoviePlayer.GetScale
struct UGFxMoviePlayer_GetScale_Params
{
	class FString                                      MovieClipName;                                            // (Parm, ZeroConstructor)
	float                                              XScale;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              YScale;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ScaleformUI.GFxMoviePlayer.GetPosition
struct UGFxMoviePlayer_GetPosition_Params
{
	class FString                                      MovieClipName;                                            // (Parm, ZeroConstructor)
	float                                              X;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ScaleformUI.GFxMoviePlayer.GetPerspective3D
struct UGFxMoviePlayer_GetPerspective3D_Params
{
	struct FASPerspectiveTransform                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ScaleformUI.GFxMoviePlayer.GetMovieClip
struct UGFxMoviePlayer_GetMovieClip_Params
{
	class FString                                      MovieClipName;                                            // (Parm, ZeroConstructor)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ScaleformUI.GFxMoviePlayer.GetDisplayTransform
struct UGFxMoviePlayer_GetDisplayTransform_Params
{
	class FString                                      MovieClipName;                                            // (Parm, ZeroConstructor)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ScaleformUI.GFxMoviePlayer.GetDisplayInfo
struct UGFxMoviePlayer_GetDisplayInfo_Params
{
	class FString                                      MovieClipName;                                            // (Parm, ZeroConstructor)
	struct FASDisplayInfo                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ScaleformUI.GFxMoviePlayer.GetColorTransform
struct UGFxMoviePlayer_GetColorTransform_Params
{
	class FString                                      MovieClipName;                                            // (Parm, ZeroConstructor)
	struct FASColorTransform                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ScaleformUI.GFxMoviePlayer.Close
struct UGFxMoviePlayer_Close_Params
{
};

// Function ScaleformUI.GFxObject.SetVisible
struct UGFxObject_SetVisible_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScaleformUI.GFxObject.SetScale
struct UGFxObject_SetScale_Params
{
	float                                              XScale;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              YScale;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScaleformUI.GFxObject.SetPosition
struct UGFxObject_SetPosition_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScaleformUI.GFxObject.SetMemberValueArray
struct UGFxObject_SetMemberValueArray_Params
{
	class UGFxMoviePlayer*                             MoviePlayer;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      MemberName;                                               // (Parm, ZeroConstructor)
	TArray<struct FASValue>                            Input;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ScaleformUI.GFxObject.SetMemberValue
struct UGFxObject_SetMemberValue_Params
{
	class FString                                      MemberName;                                               // (Parm, ZeroConstructor)
	struct FASValue                                    Input;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ScaleformUI.GFxObject.SetDisplayTransform
struct UGFxObject_SetDisplayTransform_Params
{
	struct FTransform                                  DisplayTransform;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ScaleformUI.GFxObject.SetDisplayInfo
struct UGFxObject_SetDisplayInfo_Params
{
	struct FASDisplayInfo                              UnrealDisplayInfo;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ScaleformUI.GFxObject.SetColorTransform
struct UGFxObject_SetColorTransform_Params
{
	struct FASColorTransform                           UnrealColorTransform;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ScaleformUI.GFxObject.Invoke
struct UGFxObject_Invoke_Params
{
	class FString                                      FunctionName;                                             // (Parm, ZeroConstructor)
	TArray<struct FASValue>                            Params;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FASValue                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ScaleformUI.GFxObject.GotoAndStopI
struct UGFxObject_GotoAndStopI_Params
{
	int                                                FrameNumber;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScaleformUI.GFxObject.GotoAndStop
struct UGFxObject_GotoAndStop_Params
{
	class FString                                      FrameString;                                              // (Parm, ZeroConstructor)
};

// Function ScaleformUI.GFxObject.GotoAndPlayI
struct UGFxObject_GotoAndPlayI_Params
{
	int                                                FrameNumber;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScaleformUI.GFxObject.GotoAndPlay
struct UGFxObject_GotoAndPlay_Params
{
	class FString                                      FrameString;                                              // (Parm, ZeroConstructor)
};

// Function ScaleformUI.GFxObject.GetVisible
struct UGFxObject_GetVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ScaleformUI.GFxObject.GetScale
struct UGFxObject_GetScale_Params
{
	float                                              XScale;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              YScale;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ScaleformUI.GFxObject.GetPosition
struct UGFxObject_GetPosition_Params
{
	float                                              X;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ScaleformUI.GFxObject.GetMemberValueArray
struct UGFxObject_GetMemberValueArray_Params
{
	class FString                                      MemberName;                                               // (Parm, ZeroConstructor)
	TArray<struct FASValue>                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ScaleformUI.GFxObject.GetMemberValue
struct UGFxObject_GetMemberValue_Params
{
	class FString                                      MemberName;                                               // (Parm, ZeroConstructor)
	struct FASValue                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ScaleformUI.GFxObject.GetDisplayTransform
struct UGFxObject_GetDisplayTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function ScaleformUI.GFxObject.GetDisplayInfo
struct UGFxObject_GetDisplayInfo_Params
{
	struct FASDisplayInfo                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ScaleformUI.GFxObject.GetColorTransform
struct UGFxObject_GetColorTransform_Params
{
	struct FASColorTransform                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ScaleformUI.ScaleformBlueprintLibrary.OpenMovie
struct UScaleformBlueprintLibrary_OpenMovie_Params
{
	class USwfMovie*                                   Movie;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ExternalInterface;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      RenderTexture;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UGFxMoviePlayer*                             MoviePlayer;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DisplayWithHudOff;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               StartPaused;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UGFxMoviePlayer*                             ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ScaleformUI.ScaleformBlueprintLibrary.InvokeNoParams
struct UScaleformBlueprintLibrary_InvokeNoParams_Params
{
	class UGFxMoviePlayer*                             MoviePlayer;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      FunctionName;                                             // (ConstParm, Parm, ZeroConstructor)
	struct FASValue                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ScaleformUI.ScaleformBlueprintLibrary.Invoke
struct UScaleformBlueprintLibrary_Invoke_Params
{
	class UGFxMoviePlayer*                             MoviePlayer;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      FunctionName;                                             // (ConstParm, Parm, ZeroConstructor)
	TArray<struct FASValue>                            Params;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FASValue                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ScaleformUI.ScaleformBlueprintLibrary.GetVariable
struct UScaleformBlueprintLibrary_GetVariable_Params
{
	class UGFxMoviePlayer*                             MoviePlayer;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      VariablePath;                                             // (Parm, ZeroConstructor)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ScaleformUI.ScaleformBlueprintLibrary.GetMovieClip
struct UScaleformBlueprintLibrary_GetMovieClip_Params
{
	class UGFxMoviePlayer*                             MoviePlayer;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      MovieClipName;                                            // (Parm, ZeroConstructor)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ScaleformUI.ScaleformBlueprintLibrary.GetMember
struct UScaleformBlueprintLibrary_GetMember_Params
{
	class UGFxMoviePlayer*                             MoviePlayer;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      MemberName;                                               // (Parm, ZeroConstructor)
	class UGFxObject*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ScaleformUI.ScaleformBlueprintLibrary.GetAllGFxMoviePlayerOfClass
struct UScaleformBlueprintLibrary_GetAllGFxMoviePlayerOfClass_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UGFxMoviePlayer*>                     FoundGFxMoviePlayer;                                      // (ConstParm, Parm, OutParm, ZeroConstructor)
	class UClass*                                      GFxMoviePlayerClass;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               VisibleOnly;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScaleformUI.ScaleformBlueprintLibrary.CloseMovie
struct UScaleformBlueprintLibrary_CloseMovie_Params
{
	class UGFxMoviePlayer*                             MoviePlayer;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
