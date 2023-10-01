#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxUI_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GbxUI.GbxGFxMovie.TranslateWorldToLocal
struct UGbxGFxMovie_TranslateWorldToLocal_Params
{
	struct FVector                                     LocationWorldSpace;                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   OutPositionLocal;                                         // (Parm, OutParm, IsPlainOldData)
	bool                                               bPlayerViewportRelative;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseMovieDimensions;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxGFxMovie.TranslateToScreen
struct UGbxGFxMovie_TranslateToScreen_Params
{
	struct FVector2D                                   Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxGFxMovie.TranslateScreenToLocal
struct UGbxGFxMovie_TranslateScreenToLocal_Params
{
	struct FVector2D                                   Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bUseMovieDimensions;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxGFxMovie.TranslateRectToScreen
struct UGbxGFxMovie_TranslateRectToScreen_Params
{
	struct FBox2D                                      Rect;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FBox2D                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxUI.GbxGFxMovie.SpawnMovie
struct UGbxGFxMovie_SpawnMovie_Params
{
	class AGbxPlayerController*                        NewGPCOwner;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      RenderTarget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxGFxMovie.SpawnGbxGFxMovie
struct UGbxGFxMovie_SpawnGbxGFxMovie_Params
{
	class AGbxPlayerController*                        GbxPlayerController;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MovieClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxGFxMovie*                                ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxGFxMovie.SetViewportToPlayerScreen
struct UGbxGFxMovie_SetViewportToPlayerScreen_Params
{
	class AGbxPlayerController*                        pc;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxGFxMovie.SetOffsetDisplayTransform
struct UGbxGFxMovie_SetOffsetDisplayTransform_Params
{
	struct FTransform                                  Transform;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GbxUI.GbxGFxMovie.SetBaseDisplayTransform
struct UGbxGFxMovie_SetBaseDisplayTransform_Params
{
	struct FTransform                                  Transform;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GbxUI.GbxGFxMovie.SetAudioEnabled
struct UGbxGFxMovie_SetAudioEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxGFxMovie.SetAnchor
struct UGbxGFxMovie_SetAnchor_Params
{
	struct FGbxGFxAnchor                               Anchor;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxUI.GbxGFxMovie.RunUIEventAudio
struct UGbxGFxMovie_RunUIEventAudio_Params
{
	struct FName                                       EventName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ProviderHistory;                                          // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxGFxMovie.GetViewportOffset
struct UGbxGFxMovie_GetViewportOffset_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxGFxMovie.GetViewportDimensions
struct UGbxGFxMovie_GetViewportDimensions_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxGFxMovie.GetStageDimensions
struct UGbxGFxMovie_GetStageDimensions_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxGFxMovie.GetOwningPlayerPawn
struct UGbxGFxMovie_GetOwningPlayerPawn_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxGFxMovie.GetOwningPlayerController
struct UGbxGFxMovie_GetOwningPlayerController_Params
{
	class AGbxPlayerController*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxGFxMovie.GetOffsetDisplayTransform
struct UGbxGFxMovie_GetOffsetDisplayTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxGFxMovie.GetMovieDimensions
struct UGbxGFxMovie_GetMovieDimensions_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxGFxMovie.GetBaseDisplayTransform
struct UGbxGFxMovie_GetBaseDisplayTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxGFxMovie.extTransitionComplete
struct UGbxGFxMovie_extTransitionComplete_Params
{
};

// Function GbxUI.GbxGFxMovie.extAnimationFinished
struct UGbxGFxMovie_extAnimationFinished_Params
{
	class FString                                      TargetName;                                               // (Parm, ZeroConstructor)
};

// Function GbxUI.GbxGFxMovie.ApplyNewAudioSettings
struct UGbxGFxMovie_ApplyNewAudioSettings_Params
{
	class UDataTable*                                  NewDataTable;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EUIAudioSettingOperation                           MergeOperation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxGFxMenu.SetWidgetAdjacency
struct UGbxGFxMenu_SetWidgetAdjacency_Params
{
	TScriptInterface<class UGbxFocusableWidget>        Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxFocusableWidgetAdjacencyInfo            AdjacencyInfo;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxUI.GbxGFxMenu.SetFocusedWidget
struct UGbxGFxMenu_SetFocusedWidget_Params
{
	TScriptInterface<class UGbxFocusableWidget>        WidgetToFocus;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromMouse;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxGFxMenu.SetFocusableWidgetAdjancency
struct UGbxGFxMenu_SetFocusableWidgetAdjancency_Params
{
	TScriptInterface<class UGbxFocusableWidget>        Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     AdjacentUp;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     AdjacentDown;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     AdjacentLeft;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     AdjacentRight;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxGFxMenu.RegisterFocusableWidgetWithAdjacency
struct UGbxGFxMenu_RegisterFocusableWidgetWithAdjacency_Params
{
	TScriptInterface<class UGbxFocusableWidget>        Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     AdjacentUp;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     AdjacentDown;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     AdjacentLeft;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     AdjacentRight;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxGFxMenu.RegisterFocusableWidget
struct UGbxGFxMenu_RegisterFocusableWidget_Params
{
	TScriptInterface<class UGbxFocusableWidget>        Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxFocusableWidgetAdjacencyInfo            AdjacencyInfo;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxUI.GbxGFxMenu.MenuStack_Clear
struct UGbxGFxMenu_MenuStack_Clear_Params
{
};

// Function GbxUI.GbxGFxMenu.IsWidgetFocused
struct UGbxGFxMenu_IsWidgetFocused_Params
{
	class UObject*                                     WidgetInQuestion;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxGFxMenu.GetFocusedWidget
struct UGbxGFxMenu_GetFocusedWidget_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxGFxHUDWidget.extInitAnimationFinished
struct UGbxGFxHUDWidget_extInitAnimationFinished_Params
{
};

// Function GbxUI.GbxGFxHUDWidget.extHideAnimationFinished
struct UGbxGFxHUDWidget_extHideAnimationFinished_Params
{
};

// Function GbxUI.GbxUserWidget.SetLabelText
struct UGbxUserWidget_SetLabelText_Params
{
	struct FText                                       LabelText;                                                // (Parm)
};

// Function GbxUI.GbxUserWidget.OnFocusableWidgetUnhovered
struct UGbxUserWidget_OnFocusableWidgetUnhovered_Params
{
};

// Function GbxUI.GbxUserWidget.OnFocusableWidgetReleased
struct UGbxUserWidget_OnFocusableWidgetReleased_Params
{
};

// Function GbxUI.GbxUserWidget.OnFocusableWidgetPressed
struct UGbxUserWidget_OnFocusableWidgetPressed_Params
{
};

// Function GbxUI.GbxUserWidget.OnFocusableWidgetHovered
struct UGbxUserWidget_OnFocusableWidgetHovered_Params
{
};

// Function GbxUI.GbxUserWidget.OnFocusableWidgetClicked
struct UGbxUserWidget_OnFocusableWidgetClicked_Params
{
};

// Function GbxUI.GbxUserWidget.IsRegisteredAsFocusableWidget
struct UGbxUserWidget_IsRegisteredAsFocusableWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxUserWidget.IsFocusableWidgetStateHovered
struct UGbxUserWidget_IsFocusableWidgetStateHovered_Params
{
	EGbxFocusableWidgetState                           State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxUserWidget.IsFocusableWidgetStateFocused
struct UGbxUserWidget_IsFocusableWidgetStateFocused_Params
{
	EGbxFocusableWidgetState                           State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxUserWidget.HandleFocusableWidgetStateChanged
struct UGbxUserWidget_HandleFocusableWidgetStateChanged_Params
{
	EGbxFocusableWidgetState                           NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBecameFocused;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLostFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxUserWidget.GotoAndStop
struct UGbxUserWidget_GotoAndStop_Params
{
	struct FFrameTime                                  StopTime;                                                 // (ConstParm, Parm)
	class UWidgetAnimation*                            InAnimation;                                              // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxUI.GbxUserWidget.GetAllChildWidgetsOfClass
struct UGbxUserWidget_GetAllChildWidgetsOfClass_Params
{
	class UClass*                                      TargetClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UWidget*>                             OutputArray;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GbxUI.GbxUmgMenu.SetWidgetAdjacency
struct UGbxUmgMenu_SetWidgetAdjacency_Params
{
	class UObject*                                     Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxFocusableWidgetAdjacencyInfo            AdjacencyInfo;                                            // (ConstParm, Parm)
};

// Function GbxUI.GbxUmgMenu.SetSlateFocusedWidget
struct UGbxUmgMenu_SetSlateFocusedWidget_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxUI.GbxUmgMenu.SetHintBarContainer
struct UGbxUmgMenu_SetHintBarContainer_Params
{
	TScriptInterface<class UGbxHintBarWidgetContainer> InContainer;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function GbxUI.GbxUmgMenu.SetFocusedWidget
struct UGbxUmgMenu_SetFocusedWidget_Params
{
	class UObject*                                     Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromMouse;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxUmgMenu.SetFocusableWidgetAdjancency
struct UGbxUmgMenu_SetFocusableWidgetAdjancency_Params
{
	class UObject*                                     Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     AdjacentUp;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     AdjacentDown;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     AdjacentLeft;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     AdjacentRight;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxUmgMenu.RegisterStagePlacedHint
struct UGbxUmgMenu_RegisterStagePlacedHint_Params
{
	TScriptInterface<class UGbxHintWidget>             InHintWidget;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       InInputAction;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxUmgMenu.RegisterFocusableWidgetWithAdjacency
struct UGbxUmgMenu_RegisterFocusableWidgetWithAdjacency_Params
{
	class UObject*                                     Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     AdjacentUp;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     AdjacentDown;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     AdjacentLeft;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     AdjacentRight;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxUmgMenu.RegisterFocusableWidget
struct UGbxUmgMenu_RegisterFocusableWidget_Params
{
	class UObject*                                     Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxFocusableWidgetAdjacencyInfo            AdjacencyInfo;                                            // (Parm)
};

// Function GbxUI.GbxUmgMenu.PopulateHintBar
struct UGbxUmgMenu_PopulateHintBar_Params
{
};

// Function GbxUI.GbxUmgMenu.NavigateBack
struct UGbxUmgMenu_NavigateBack_Params
{
};

// Function GbxUI.GbxUmgMenu.MenuStack_SwitchTo
struct UGbxUmgMenu_MenuStack_SwitchTo_Params
{
	class UGbxMenuData*                                MenuDataIn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxUmgMenu.MenuStack_Push
struct UGbxUmgMenu_MenuStack_Push_Params
{
	class UGbxMenuData*                                MenuDataIn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxUmgMenu.MenuStack_PopToSwitchTo
struct UGbxUmgMenu_MenuStack_PopToSwitchTo_Params
{
	class UObject*                                     Menu;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxMenuData*                                MenuDataIn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxUmgMenu.MenuStack_PopTo
struct UGbxUmgMenu_MenuStack_PopTo_Params
{
	class UObject*                                     Menu;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxUmgMenu.MenuStack_Pop
struct UGbxUmgMenu_MenuStack_Pop_Params
{
};

// Function GbxUI.GbxUmgMenu.MenuStack_Clear
struct UGbxUmgMenu_MenuStack_Clear_Params
{
};

// Function GbxUI.GbxUmgMenu.IsWidgetFocused
struct UGbxUmgMenu_IsWidgetFocused_Params
{
	class UObject*                                     WidgetInQuestion;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxUmgMenu.IsActiveMenuOnStack
struct UGbxUmgMenu_IsActiveMenuOnStack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxUmgMenu.HandleMenuInputDeviceChanged
struct UGbxUmgMenu_HandleMenuInputDeviceChanged_Params
{
	EGbxMenuInputDevice                                NewInputDevice;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxUmgMenu.HandleMenuInputAction
struct UGbxUmgMenu_HandleMenuInputAction_Params
{
	struct FName                                       InputAction;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                ControllerId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxUmgMenu.HandleMenuInit
struct UGbxUmgMenu_HandleMenuInit_Params
{
};

// Function GbxUI.GbxUmgMenu.HandleMenuDeinit
struct UGbxUmgMenu_HandleMenuDeinit_Params
{
};

// Function GbxUI.GbxUmgMenu.HandleMenuDeactivate
struct UGbxUmgMenu_HandleMenuDeactivate_Params
{
};

// Function GbxUI.GbxUmgMenu.HandleMenuAspectRatioChanged
struct UGbxUmgMenu_HandleMenuAspectRatioChanged_Params
{
	float                                              NewAspectRatio;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxUmgMenu.HandleMenuActivate
struct UGbxUmgMenu_HandleMenuActivate_Params
{
};

// Function GbxUI.GbxUmgMenu.GetListItemFactory
struct UGbxUmgMenu_GetListItemFactory_Params
{
	class UGbxListItemFactory*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxUmgMenu.GetFocusedWidget
struct UGbxUmgMenu_GetFocusedWidget_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxUmgMenu.GetCurrentInputDevice
struct UGbxUmgMenu_GetCurrentInputDevice_Params
{
	EGbxMenuInputDevice                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxGFxObject.SetOffsetDisplayTransform
struct UGbxGFxObject_SetOffsetDisplayTransform_Params
{
	struct FTransform                                  Transform;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GbxUI.GbxGFxObject.SetBaseDisplayTransform
struct UGbxGFxObject_SetBaseDisplayTransform_Params
{
	struct FTransform                                  Transform;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GbxUI.GbxGFxObject.RotateAboutPoint
struct UGbxGFxObject_RotateAboutPoint_Params
{
	float                                              Degrees;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GbxUI.GbxGFxObject.GetOffsetDisplayTransform
struct UGbxGFxObject_GetOffsetDisplayTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxGFxObject.GetBaseDisplayTransform
struct UGbxGFxObject_GetBaseDisplayTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxGFxButton.SetLockedState
struct UGbxGFxButton_SetLockedState_Params
{
	EGbxGFxButtonLockedState                           InLockedState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldRefresh;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxGFxButton.SetLabelText
struct UGbxGFxButton_SetLabelText_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bForceUpdate;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxGFxButton.SetCheckedState
struct UGbxGFxButton_SetCheckedState_Params
{
	EGbxGFxButtonCheckedState                          InCheckedState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldRefresh;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxGFxButton.SetButtonType
struct UGbxGFxButton_SetButtonType_Params
{
	EGbxGFxButtonType                                  InButtonType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxGFxButton.RefreshView
struct UGbxGFxButton_RefreshView_Params
{
	EGbxFocusableWidgetState                           PrevState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxGFxButton.K2_HandleFocusableWidgetStateChanged
struct UGbxGFxButton_K2_HandleFocusableWidgetStateChanged_Params
{
	EGbxFocusableWidgetState                           NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBecameFocused;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLostFocus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxGFxButton.IsRegisteredAsFocusableWidget
struct UGbxGFxButton_IsRegisteredAsFocusableWidget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxGFxButton.IsLocked
struct UGbxGFxButton_IsLocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxGFxButton.IsFocusableWidgetStateUp
struct UGbxGFxButton_IsFocusableWidgetStateUp_Params
{
	EGbxFocusableWidgetState                           State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxGFxButton.IsFocusableWidgetStateHovered
struct UGbxGFxButton_IsFocusableWidgetStateHovered_Params
{
	EGbxFocusableWidgetState                           State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxGFxButton.IsFocusableWidgetStateFocused
struct UGbxGFxButton_IsFocusableWidgetStateFocused_Params
{
	EGbxFocusableWidgetState                           State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxGFxButton.IsFocusableWidgetStateDown
struct UGbxGFxButton_IsFocusableWidgetStateDown_Params
{
	EGbxFocusableWidgetState                           State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxGFxButton.IsFocusableWidgetStateDisabled
struct UGbxGFxButton_IsFocusableWidgetStateDisabled_Params
{
	EGbxFocusableWidgetState                           State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxGFxButton.IsChecked
struct UGbxGFxButton_IsChecked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxGFxButton.GetLockedState
struct UGbxGFxButton_GetLockedState_Params
{
	EGbxGFxButtonLockedState                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxGFxButton.GetCheckedState
struct UGbxGFxButton_GetCheckedState_Params
{
	EGbxGFxButtonCheckedState                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxGFxButton.GetButtonType
struct UGbxGFxButton_GetButtonType_Params
{
	EGbxGFxButtonType                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction GbxUI.GbxGFxButton.GbxGFxButtonEvent__DelegateSignature
struct UGbxGFxButton_GbxGFxButtonEvent__DelegateSignature_Params
{
	class UGbxGFxButton*                               BUTTON;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxMenuInputEvent                          InputInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxUI.GbxGFxListItemSpinner.OnSpinnerValueUpdated
struct UGbxGFxListItemSpinner_OnSpinnerValueUpdated_Params
{
};

// Function GbxUI.GbxGFxProgressBar.SetPercent
struct UGbxGFxProgressBar_SetPercent_Params
{
	float                                              InPercent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxGFxProgressBar.SetMaxValueText
struct UGbxGFxProgressBar_SetMaxValueText_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxUI.GbxGFxProgressBar.SetFillColorAndOpacity
struct UGbxGFxProgressBar_SetFillColorAndOpacity_Params
{
	struct FLinearColor                                InColor;                                                  // (Parm, IsPlainOldData)
};

// Function GbxUI.GbxGFxProgressBar.SetCurrentValueText
struct UGbxGFxProgressBar_SetCurrentValueText_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxUI.GbxGFxProgressBar.PassedPercentThreshold
struct UGbxGFxProgressBar_PassedPercentThreshold_Params
{
	float                                              Threshold;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OldValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncreasing;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDecreasing;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxGFxProgressBar.InterpolateToPercentWithInterpolator
struct UGbxGFxProgressBar_InterpolateToPercentWithInterpolator_Params
{
	float                                              InPercent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxProgressBarInterpolator                 Interpolator;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxUI.GbxGFxProgressBar.InterpolateToPercent
struct UGbxGFxProgressBar_InterpolateToPercent_Params
{
	float                                              InPercent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxGFxProgressBar.HandlePercentChanged
struct UGbxGFxProgressBar_HandlePercentChanged_Params
{
	float                                              OldValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInterpolating;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxProgressBarInterpolator                 ActiveInterpolator;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxUI.GbxGFxProgressBar.HandleEnterPercentRange
struct UGbxGFxProgressBar_HandleEnterPercentRange_Params
{
	struct FName                                       RangeName;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function GbxUI.GbxGFxProgressBar.GetPercent
struct UGbxGFxProgressBar_GetPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxGFxProgressBar.EnteredPercentRange
struct UGbxGFxProgressBar_EnteredPercentRange_Params
{
	float                                              RangeMin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangeMax;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OldValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncreasing;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDecreasing;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxGFxGridScrollingList.OnScrollBarPositionUpdated
struct UGbxGFxGridScrollingList_OnScrollBarPositionUpdated_Params
{
	float                                              SliderPercentage;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxGFxListItemNumber.OnSliderUpdated
struct UGbxGFxListItemNumber_OnSliderUpdated_Params
{
	float                                              SliderPct;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxHUDContainer.HandleInit
struct UGbxHUDContainer_HandleInit_Params
{
};

// Function GbxUI.GbxHUDContainer.HandleDeinit
struct UGbxHUDContainer_HandleDeinit_Params
{
};

// Function GbxUI.GbxHUDContainer.HandleDeactivate
struct UGbxHUDContainer_HandleDeactivate_Params
{
};

// Function GbxUI.GbxHUDContainer.HandleActivate
struct UGbxHUDContainer_HandleActivate_Params
{
};

// Function GbxUI.GbxHUDWidget.HandleInit
struct UGbxHUDWidget_HandleInit_Params
{
};

// Function GbxUI.GbxHUDWidget.HandleDeinit
struct UGbxHUDWidget_HandleDeinit_Params
{
};

// Function GbxUI.GbxHUDWidget.HandleDeactivate
struct UGbxHUDWidget_HandleDeactivate_Params
{
};

// Function GbxUI.GbxHUDWidget.HandleActivate
struct UGbxHUDWidget_HandleActivate_Params
{
};

// Function GbxUI.GbxListItem.GetItemIndex
struct UGbxListItem_GetItemIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxHUD.SwitchToHUDState
struct AGbxHUD_SwitchToHUDState_Params
{
	class AGbxPlayerController*                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxHUDStateData*                            State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxHUD.SetHUDContainer
struct AGbxHUD_SetHUDContainer_Params
{
	class AGbxPlayerController*                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxHUDData*                                 ContainerDefinition;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxHUD.PushHUDState
struct AGbxHUD_PushHUDState_Params
{
	class AGbxPlayerController*                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxHUDStateData*                            State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowDuplicatePush;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxHUD.PopToSwitchToHUDState
struct AGbxHUD_PopToSwitchToHUDState_Params
{
	class AGbxPlayerController*                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxHUDStateData*                            PopToState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxHUDStateData*                            SwitchToState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxHUD.PopToHUDState
struct AGbxHUD_PopToHUDState_Params
{
	class AGbxPlayerController*                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxHUDStateData*                            State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxHUD.PopSpecifiedHUDState
struct AGbxHUD_PopSpecifiedHUDState_Params
{
	class AGbxPlayerController*                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxHUDStateData*                            State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxHUD.PopHUDState
struct AGbxHUD_PopHUDState_Params
{
	class AGbxPlayerController*                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxHUD.OnPrimaryCharacterChanged
struct AGbxHUD_OnPrimaryCharacterChanged_Params
{
	class AGbxCharacter*                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxHUD.OnPawnChanged
struct AGbxHUD_OnPawnChanged_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       OldPawn;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxHUD.GotoPreviousHUDState
struct AGbxHUD_GotoPreviousHUDState_Params
{
	class AGbxPlayerController*                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxHUD.GotoHUDState
struct AGbxHUD_GotoHUDState_Params
{
	class AGbxPlayerController*                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxHUDStateData*                            State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxHUD.GetCurrentHUDState
struct AGbxHUD_GetCurrentHUDState_Params
{
	class AGbxPlayerController*                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxHUDStateData*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxHUD.ClearToDefaultHUDState
struct AGbxHUD_ClearToDefaultHUDState_Params
{
	class AGbxPlayerController*                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxHUD.ClearHUDStates
struct AGbxHUD_ClearHUDStates_Params
{
	class AGbxPlayerController*                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxUILibrary.SendTextToDebugHUD
struct UGbxUILibrary_SendTextToDebugHUD_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm)
	struct FLinearColor                                Color;                                                    // (Parm, IsPlainOldData)
	int                                                TextSize;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxUILibrary.PlayFullScreenMovie
struct UGbxUILibrary_PlayFullScreenMovie_Params
{
	class AGbxPlayerController*                        GbxPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UMediaSource*                                MediaSource;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayOnceAndDestroy;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxFullScreenMovie*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxUI.GbxUILibrary.CreateTextListItemWithDelegates
struct UGbxUILibrary_CreateTextListItemWithDelegates_Params
{
	TScriptInterface<class UGbxList>                   OwningList;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           OwningPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       LabelText;                                                // (Parm)
	struct FScriptDelegate                             ClickedDelegate;                                          // (Parm, ZeroConstructor)
	struct FScriptDelegate                             SelectedDelegate;                                         // (Parm, ZeroConstructor)
	class UGbxListItemText*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxUI.GbxUILibrary.CreateTextListItem
struct UGbxUILibrary_CreateTextListItem_Params
{
	TScriptInterface<class UGbxList>                   OwningList;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           OwningPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       LabelText;                                                // (Parm)
	class UGbxListItemText*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxUI.GbxUILibrary.CreateNumberListItemWithDelegates
struct UGbxUILibrary_CreateNumberListItemWithDelegates_Params
{
	TScriptInterface<class UGbxList>                   OwningList;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           OwningPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       LabelText;                                                // (Parm)
	float                                              InitialValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SliderMin;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SliderMax;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SliderStep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ChangedDelegate;                                          // (Parm, ZeroConstructor)
	struct FScriptDelegate                             SelectedDelegate;                                         // (Parm, ZeroConstructor)
	class UGbxListItemNumber*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxUI.GbxUILibrary.CreateNumberListItem
struct UGbxUILibrary_CreateNumberListItem_Params
{
	TScriptInterface<class UGbxList>                   OwningList;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           OwningPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       LabelText;                                                // (Parm)
	float                                              InitialValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SliderMin;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SliderMax;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SliderStep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxListItemNumber*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxUI.GbxUILibrary.CreateListItemWithDelegates
struct UGbxUILibrary_CreateListItemWithDelegates_Params
{
	TScriptInterface<class UGbxList>                   OwningList;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           OwningPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ClickedDelegate;                                          // (Parm, ZeroConstructor)
	struct FScriptDelegate                             SelectedDelegate;                                         // (Parm, ZeroConstructor)
	class UGbxListItem*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxUI.GbxUILibrary.CreateListItem
struct UGbxUILibrary_CreateListItem_Params
{
	TScriptInterface<class UGbxList>                   OwningList;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           OwningPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxListItem*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxUI.GbxUILibrary.CreateDefaultListItemWithDelegates
struct UGbxUILibrary_CreateDefaultListItemWithDelegates_Params
{
	TScriptInterface<class UGbxList>                   OwningList;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           OwningPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ClickedDelegate;                                          // (Parm, ZeroConstructor)
	struct FScriptDelegate                             SelectedDelegate;                                         // (Parm, ZeroConstructor)
	class UGbxListItem*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxUI.GbxUILibrary.CreateDefaultListItem
struct UGbxUILibrary_CreateDefaultListItem_Params
{
	TScriptInterface<class UGbxList>                   OwningList;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           OwningPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxListItem*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxUI.GbxUILibrary.CreateComboBoxListItemWithDelegates
struct UGbxUILibrary_CreateComboBoxListItemWithDelegates_Params
{
	TScriptInterface<class UGbxList>                   OwningList;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           OwningPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       LabelText;                                                // (Parm)
	TArray<struct FText>                               Items;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                InitialIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ChangedDelegate;                                          // (Parm, ZeroConstructor)
	struct FScriptDelegate                             SelectedDelegate;                                         // (Parm, ZeroConstructor)
	class UGbxListItemComboBox*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxUI.GbxUILibrary.CreateComboBoxListItem
struct UGbxUILibrary_CreateComboBoxListItem_Params
{
	TScriptInterface<class UGbxList>                   OwningList;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           OwningPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       LabelText;                                                // (Parm)
	TArray<struct FText>                               Items;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                InitialIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxListItemComboBox*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxUI.GbxUILibrary.CreateBooleanListItemWithDelegates
struct UGbxUILibrary_CreateBooleanListItemWithDelegates_Params
{
	TScriptInterface<class UGbxList>                   OwningList;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           OwningPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       LabelText;                                                // (Parm)
	bool                                               InitialValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ChangedDelegate;                                          // (Parm, ZeroConstructor)
	struct FScriptDelegate                             SelectedDelegate;                                         // (Parm, ZeroConstructor)
	class UGbxListItemBoolean*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxUI.GbxUILibrary.CreateBooleanListItem
struct UGbxUILibrary_CreateBooleanListItem_Params
{
	TScriptInterface<class UGbxList>                   OwningList;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           OwningPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       LabelText;                                                // (Parm)
	bool                                               InitialValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxListItemBoolean*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxUI.GbxUILibrary.AbbreviateNumberText
struct UGbxUILibrary_AbbreviateNumberText_Params
{
	float                                              ValueToFormat;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GbxUI.GbxCascadingList.SetActiveList
struct UGbxCascadingList_SetActiveList_Params
{
	class UGbxGridListWidget*                          List;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxUI.GbxCascadingList.PushItems
struct UGbxCascadingList_PushItems_Params
{
	TArray<struct FGbxCascadingListItemData>           Items;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GbxUI.GbxCascadingList.Pop
struct UGbxCascadingList_Pop_Params
{
};

// Function GbxUI.GbxCascadingList.OnShiftListsForward
struct UGbxCascadingList_OnShiftListsForward_Params
{
};

// Function GbxUI.GbxCascadingList.OnShiftListsBack
struct UGbxCascadingList_OnShiftListsBack_Params
{
};

// Function GbxUI.GbxCascadingList.OnItemSelected_Internal
struct UGbxCascadingList_OnItemSelected_Internal_Params
{
	class UGbxListItem*                                Item;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxUI.GbxCascadingList.OnItemClicked_Internal
struct UGbxCascadingList_OnItemClicked_Internal_Params
{
	class UGbxListItem*                                Item;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxUI.GbxCascadingList.HasItems
struct UGbxCascadingList_HasItems_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxCascadingList.GetStackDepth
struct UGbxCascadingList_GetStackDepth_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxCascadingList.Clear
struct UGbxCascadingList_Clear_Params
{
};

// Function GbxUI.GbxComboBoxDropdownMenu.OnChoiceClicked
struct UGbxComboBoxDropdownMenu_OnChoiceClicked_Params
{
	class UGbxListItem*                                ListItem;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxUI.GbxComboBoxDropdownMenu.DismissWithoutChanging
struct UGbxComboBoxDropdownMenu_DismissWithoutChanging_Params
{
};

// Function GbxUI.GbxComboBox.OnComboBoxClicked
struct UGbxComboBox_OnComboBoxClicked_Params
{
	class UGbxUserWidget*                              Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGbxMenuInputEvent                          InputInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxUI.GbxComboBox.GetCurentChoiceReferenceIndex
struct UGbxComboBox_GetCurentChoiceReferenceIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxCoreDialogBoxHelpers.ShowYesNoDialog
struct UGbxCoreDialogBoxHelpers_ShowYesNoDialog_Params
{
	class AGbxPlayerController*                        pc;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       HeaderText;                                               // (ConstParm, Parm)
	struct FText                                       MessageText;                                              // (ConstParm, Parm)
	bool                                               bAnyUserCanInteract;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDialogBox*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxUI.GbxCoreDialogBoxHelpers.ShowOkayDialog
struct UGbxCoreDialogBoxHelpers_ShowOkayDialog_Params
{
	class AGbxPlayerController*                        pc;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       HeaderText;                                               // (ConstParm, Parm)
	struct FText                                       MessageText;                                              // (ConstParm, Parm)
	bool                                               bAnyUserCanInteract;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	EGbxDialogBoxHelpersDialogTemplate                 Template;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDialogBox*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxUI.GbxCoreDialogBoxHelpers.ShowDialog
struct UGbxCoreDialogBoxHelpers_ShowDialog_Params
{
	class AGbxPlayerController*                        pc;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxDialogBoxInfo                           DialogBoxInfo;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	class UGbxDialogBox*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxUI.GbxCoreDialogBoxHelpers.ShowConfirmCancelDialog
struct UGbxCoreDialogBoxHelpers_ShowConfirmCancelDialog_Params
{
	class AGbxPlayerController*                        pc;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       HeaderText;                                               // (ConstParm, Parm)
	struct FText                                       MessageText;                                              // (ConstParm, Parm)
	bool                                               bAnyUserCanInteract;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDialogBox*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxUI.GbxCoreDialogBoxHelpers.ShowBlockingDialog
struct UGbxCoreDialogBoxHelpers_ShowBlockingDialog_Params
{
	class AGbxPlayerController*                        pc;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       HeaderText;                                               // (ConstParm, Parm)
	struct FText                                       MessageText;                                              // (ConstParm, Parm)
	bool                                               bBlocksAllUsers;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDialogBox*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxUI.GbxMenuSwitcher.SwitchToPage
struct UGbxMenuSwitcher_SwitchToPage_Params
{
	struct FName                                       SubMenuId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxMenuSwitcher.PrevPage
struct UGbxMenuSwitcher_PrevPage_Params
{
};

// Function GbxUI.GbxMenuSwitcher.NextPage
struct UGbxMenuSwitcher_NextPage_Params
{
};

// Function GbxUI.GbxMenuSwitcher.GetCurrentSubmenuId
struct UGbxMenuSwitcher_GetCurrentSubmenuId_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxDebugMenu.OnCloseClicked
struct UGbxDebugMenu_OnCloseClicked_Params
{
};

// Function GbxUI.GbxDebugMenu.OnCategorySelected
struct UGbxDebugMenu_OnCategorySelected_Params
{
	class UGbxUserWidget*                              Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGbxMenuInputEvent                          InputInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxUI.GbxDebugRumbleMenu.OnSliderValueChanged
struct UGbxDebugRumbleMenu_OnSliderValueChanged_Params
{
	class UGbxListItem*                                Item;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxUI.GbxDialogBox.UpdateText
struct UGbxDialogBox_UpdateText_Params
{
	struct FText                                       NewHeaderText;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       NewBodyText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxUI.GbxDialogBox.SetupDialog
struct UGbxDialogBox_SetupDialog_Params
{
	struct FGbxDialogBoxInfo                           DialogBoxInfo;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxUI.GbxDialogBox.SetHeaderTextFormatArg
struct UGbxDialogBox_SetHeaderTextFormatArg_Params
{
	class FString                                      ArgName;                                                  // (Parm, ZeroConstructor)
	struct FText                                       ReplacementText;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxUI.GbxDialogBox.SetHeaderText
struct UGbxDialogBox_SetHeaderText_Params
{
	struct FText                                       NewText;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bClearFormatArgs;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxDialogBox.SetBodyTextFormatArg
struct UGbxDialogBox_SetBodyTextFormatArg_Params
{
	class FString                                      ArgName;                                                  // (Parm, ZeroConstructor)
	struct FText                                       ReplacementText;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxUI.GbxDialogBox.SetBodyText
struct UGbxDialogBox_SetBodyText_Params
{
	struct FText                                       NewText;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bClearFormatArgs;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxDialogBox.OnChoiceClicked
struct UGbxDialogBox_OnChoiceClicked_Params
{
	class UGbxListItem*                                ClickedItem;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxUI.GbxDialogBox.Dismiss
struct UGbxDialogBox_Dismiss_Params
{
};

// Function GbxUI.GbxFocusableWidget.SetFocusableWidgetEnabled
struct UGbxFocusableWidget_SetFocusableWidgetEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxFocusableWidget.IsFocusableWidgetFocused
struct UGbxFocusableWidget_IsFocusableWidgetFocused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxFocusableWidget.IsFocusableWidgetEnabled
struct UGbxFocusableWidget_IsFocusableWidgetEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxFocusableWidget.GetFocusableWidgetState
struct UGbxFocusableWidget_GetFocusableWidgetState_Params
{
	EGbxFocusableWidgetState                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxFullScreenMovie.OnMovieFinishedPlaying
struct UGbxFullScreenMovie_OnMovieFinishedPlaying_Params
{
};

// Function GbxUI.GbxGFxContextualMenu.OnSelectionChanged
struct UGbxGFxContextualMenu_OnSelectionChanged_Params
{
	class UGbxGFxListCell*                             Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxGFxContextualMenu.OnContextualMenuItemClicked
struct UGbxGFxContextualMenu_OnContextualMenuItemClicked_Params
{
	class UGbxGFxButton*                               PressedButton;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxMenuInputEvent                          InputInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxUI.GbxGFxDragDropManager.OnDropButtonUnhovered
struct UGbxGFxDragDropManager_OnDropButtonUnhovered_Params
{
	class UGbxGFxButton*                               UnhoveredButton;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxMenuInputEvent                          InputInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxUI.GbxGFxDragDropManager.OnDropButtonHovered
struct UGbxGFxDragDropManager_OnDropButtonHovered_Params
{
	class UGbxGFxButton*                               HoveredButton;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxMenuInputEvent                          InputInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxUI.GbxGFxDropDownList.OnEntryClicked
struct UGbxGFxDropDownList_OnEntryClicked_Params
{
	class UGbxGFxButton*                               BUTTON;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxMenuInputEvent                          InputInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxUI.GbxGFxDropDownList.OnDropDownButtonClicked
struct UGbxGFxDropDownList_OnDropDownButtonClicked_Params
{
	class UGbxGFxButton*                               BUTTON;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxMenuInputEvent                          InputInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxUI.GbxGFxHintWidget.OnThisHintClicked
struct UGbxGFxHintWidget_OnThisHintClicked_Params
{
	class UGbxGFxButton*                               BUTTON;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxMenuInputEvent                          InputInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxUI.GbxGFxListItemComboBox.OnSelectionUpdated
struct UGbxGFxListItemComboBox_OnSelectionUpdated_Params
{
	class UGbxGFxListCell*                             Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxGFxListItemComboBox.OnOwningListSelectionChanged
struct UGbxGFxListItemComboBox_OnOwningListSelectionChanged_Params
{
	class UGbxGFxListCell*                             Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxGFxListItemComboBox.OnDropDownButtonClicked
struct UGbxGFxListItemComboBox_OnDropDownButtonClicked_Params
{
};

// Function GbxUI.GbxGFxMediaPlayer.OnMovieTracksChanged
struct UGbxGFxMediaPlayer_OnMovieTracksChanged_Params
{
};

// Function GbxUI.GbxGFxMediaPlayer.OnMovieSeekCompleted
struct UGbxGFxMediaPlayer_OnMovieSeekCompleted_Params
{
};

// Function GbxUI.GbxGFxMediaPlayer.OnMoviePlaybackSuspended
struct UGbxGFxMediaPlayer_OnMoviePlaybackSuspended_Params
{
};

// Function GbxUI.GbxGFxMediaPlayer.OnMoviePlaybackResumed
struct UGbxGFxMediaPlayer_OnMoviePlaybackResumed_Params
{
};

// Function GbxUI.GbxGFxMediaPlayer.OnMovieMediaOpenFailed
struct UGbxGFxMediaPlayer_OnMovieMediaOpenFailed_Params
{
	class FString                                      FailedUrl;                                                // (Parm, ZeroConstructor)
};

// Function GbxUI.GbxGFxMediaPlayer.OnMovieMediaOpened
struct UGbxGFxMediaPlayer_OnMovieMediaOpened_Params
{
	class FString                                      OpenedUrl;                                                // (Parm, ZeroConstructor)
};

// Function GbxUI.GbxGFxMediaPlayer.OnMovieMediaClosed
struct UGbxGFxMediaPlayer_OnMovieMediaClosed_Params
{
};

// Function GbxUI.GbxGFxMediaPlayer.OnMovieEndReached
struct UGbxGFxMediaPlayer_OnMovieEndReached_Params
{
};

// DelegateFunction GbxUI.GbxGFxMediaPlayer.GbxGFxMediaPlayerEvent__DelegateSignature
struct UGbxGFxMediaPlayer_GbxGFxMediaPlayerEvent__DelegateSignature_Params
{
};

// Function GbxUI.GbxGFxMenuSwitcherNavWidget.OnTabClicked
struct UGbxGFxMenuSwitcherNavWidget_OnTabClicked_Params
{
	class UGbxGFxButton*                               BUTTON;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxMenuInputEvent                          InputInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// DelegateFunction GbxUI.GbxGFxSlider.GbxGFxSliderUpdateEvent__DelegateSignature
struct UGbxGFxSlider_GbxGFxSliderUpdateEvent__DelegateSignature_Params
{
	float                                              SliderPercent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxGFxSlider.EndSlide
struct UGbxGFxSlider_EndSlide_Params
{
	class UGbxGFxButton*                               BUTTON;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxMenuInputEvent                          InputInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxUI.GbxGFxSlider.BeginRightSlide
struct UGbxGFxSlider_BeginRightSlide_Params
{
	class UGbxGFxButton*                               BUTTON;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxMenuInputEvent                          InputInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxUI.GbxGFxSlider.BeginLeftSlide
struct UGbxGFxSlider_BeginLeftSlide_Params
{
	class UGbxGFxButton*                               BUTTON;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxMenuInputEvent                          InputInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxUI.GbxHintBarWidgetContainer.HintBarSetVisible
struct UGbxHintBarWidgetContainer_HintBarSetVisible_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxHintBarWidgetContainer.HintBarInitOwnerInfo
struct UGbxHintBarWidgetContainer_HintBarInitOwnerInfo_Params
{
	class UGbxHintBar*                                 HintBarOwner;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AGbxPlayerController*                        PlayerControllerContext;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxHintBarWidgetContainer.HintBarClearAllHints
struct UGbxHintBarWidgetContainer_HintBarClearAllHints_Params
{
};

// Function GbxUI.GbxHintBarWidgetContainer.HintBarAppendHint
struct UGbxHintBarWidgetContainer_HintBarAppendHint_Params
{
	struct FGbxHintInfo                                HintInfo;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxUI.GbxHintBar.OnHintClicked
struct UGbxHintBar_OnHintClicked_Params
{
	struct FName                                       InputAction;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bHeld;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxHintWidget.HintWidgetSetVisible
struct UGbxHintWidget_HintWidgetSetVisible_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxHintWidget.HintWidgetSetInfo
struct UGbxHintWidget_HintWidgetSetInfo_Params
{
	struct FGbxHintInfo                                HintInfo;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxUI.GbxHintWidget.HintWidgetInitOwnerInfo
struct UGbxHintWidget_HintWidgetInitOwnerInfo_Params
{
	class UGbxHintBar*                                 HintBarOwner;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AGbxPlayerController*                        PlayerControllerContext;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxList.TryToAcquireMenuFocus
struct UGbxList_TryToAcquireMenuFocus_Params
{
	bool                                               bFromMouse;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxList.SetSelectionChangedDelegate
struct UGbxList_SetSelectionChangedDelegate_Params
{
	struct FScriptDelegate                             InSelectionChangedDelegate;                               // (Parm, ZeroConstructor)
};

// Function GbxUI.GbxList.SetSelectedItem
struct UGbxList_SetSelectedItem_Params
{
	class UGbxListItem*                                Item;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bScrollIntoView;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAnimateScroll;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxList.SetSelectedIndex
struct UGbxList_SetSelectedIndex_Params
{
	int                                                NewSelection;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bScrollIntoView;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAnimateScroll;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxList.SetItemClickedDelegate
struct UGbxList_SetItemClickedDelegate_Params
{
	struct FScriptDelegate                             InItemClickedDelegate;                                    // (Parm, ZeroConstructor)
};

// Function GbxUI.GbxList.RemoveListItem
struct UGbxList_RemoveListItem_Params
{
	class UGbxListItem*                                Item;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxUI.GbxList.RemoveAllListItems
struct UGbxList_RemoveAllListItems_Params
{
};

// Function GbxUI.GbxList.OnItemClicked
struct UGbxList_OnItemClicked_Params
{
	class UGbxListItem*                                Item;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxUI.GbxList.MoveSelectionUp
struct UGbxList_MoveSelectionUp_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxList.MoveSelectionRight
struct UGbxList_MoveSelectionRight_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxList.MoveSelectionLeft
struct UGbxList_MoveSelectionLeft_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxList.MoveSelectionDown
struct UGbxList_MoveSelectionDown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxList.IsListFocused
struct UGbxList_IsListFocused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxList.IsListEnabled
struct UGbxList_IsListEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxList.InsertListItem
struct UGbxList_InsertListItem_Params
{
	class UGbxListItem*                                Item;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxUI.GbxList.GetSelectedItem
struct UGbxList_GetSelectedItem_Params
{
	class UGbxListItem*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxUI.GbxList.GetSelectedIndex
struct UGbxList_GetSelectedIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxList.GetNumItemsInList
struct UGbxList_GetNumItemsInList_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxList.GetListItemFactory
struct UGbxList_GetListItemFactory_Params
{
	class UGbxListItemFactory*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxList.GetItemAtIndex
struct UGbxList_GetItemAtIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxListItem*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxUI.GbxList.GetDefaultItemClass
struct UGbxList_GetDefaultItemClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxListItemBoolean.SetChecked
struct UGbxListItemBoolean_SetChecked_Params
{
	bool                                               bChecked;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxListItemBoolean.IsChecked
struct UGbxListItemBoolean_IsChecked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxListItemBoolean.HandleFocusableWidgetPressed
struct UGbxListItemBoolean_HandleFocusableWidgetPressed_Params
{
	struct FGbxMenuInputEvent                          InputInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxUI.GbxListItemComboBox.SetSelectedOptionIndex
struct UGbxListItemComboBox_SetSelectedOptionIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxListItemComboBox.SelectPreviousOption
struct UGbxListItemComboBox_SelectPreviousOption_Params
{
};

// Function GbxUI.GbxListItemComboBox.SelectNextOption
struct UGbxListItemComboBox_SelectNextOption_Params
{
};

// Function GbxUI.GbxListItemComboBox.OnValueComboBoxChanged
struct UGbxListItemComboBox_OnValueComboBoxChanged_Params
{
	class FString                                      SelectedItem;                                             // (Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction GbxUI.GbxListItemComboBox.ListItemComboBoxSelectionChangedDelegate__DelegateSignature
struct UGbxListItemComboBox_ListItemComboBoxSelectionChangedDelegate__DelegateSignature_Params
{
	int                                                NewSelectedIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxListItemComboBox.InitializeComboBox
struct UGbxListItemComboBox_InitializeComboBox_Params
{
	TArray<struct FText>                               Items;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                InitialValue;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxListItemComboBox.GetSelectedOptionIndex
struct UGbxListItemComboBox_GetSelectedOptionIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxListItemFactory.CreateTextItem
struct UGbxListItemFactory_CreateTextItem_Params
{
	class APlayerController*                           Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGbxList>                   Parent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       LabelText;                                                // (Parm)
	struct FScriptDelegate                             ClickedDelegate;                                          // (Parm, ZeroConstructor)
	struct FScriptDelegate                             SelectedDelegate;                                         // (Parm, ZeroConstructor)
	class UGbxListItemText*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxUI.GbxListItemFactory.CreateNumberItem
struct UGbxListItemFactory_CreateNumberItem_Params
{
	class APlayerController*                           Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGbxList>                   Parent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       LabelText;                                                // (Parm)
	float                                              InitialValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SliderMin;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SliderMax;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SliderStep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ChangedDelegate;                                          // (Parm, ZeroConstructor)
	struct FScriptDelegate                             SelectedDelegate;                                         // (Parm, ZeroConstructor)
	class UGbxListItemNumber*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxUI.GbxListItemFactory.CreateItemWithDelegates
struct UGbxListItemFactory_CreateItemWithDelegates_Params
{
	class APlayerController*                           Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGbxList>                   Parent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ClickedDelegate;                                          // (Parm, ZeroConstructor)
	struct FScriptDelegate                             SelectedDelegate;                                         // (Parm, ZeroConstructor)
	class UGbxListItem*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxUI.GbxListItemFactory.CreateItem
struct UGbxListItemFactory_CreateItem_Params
{
	class APlayerController*                           Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGbxList>                   Parent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ItemClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UGbxListItem*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxUI.GbxListItemFactory.CreateComboBoxItem
struct UGbxListItemFactory_CreateComboBoxItem_Params
{
	class APlayerController*                           Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGbxList>                   Parent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       LabelText;                                                // (Parm)
	TArray<struct FText>                               Items;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                InitialIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ChangedDelegate;                                          // (Parm, ZeroConstructor)
	struct FScriptDelegate                             SelectedDelegate;                                         // (Parm, ZeroConstructor)
	class UGbxListItemComboBox*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxUI.GbxListItemFactory.CreateBooleanItem
struct UGbxListItemFactory_CreateBooleanItem_Params
{
	class APlayerController*                           Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGbxList>                   Parent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       LabelText;                                                // (Parm)
	bool                                               InitialValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ChangedDelegate;                                          // (Parm, ZeroConstructor)
	struct FScriptDelegate                             SelectedDelegate;                                         // (Parm, ZeroConstructor)
	class UGbxListItemBoolean*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxUI.GbxListItemNumber.OnSliderValueChanged
struct UGbxListItemNumber_OnSliderValueChanged_Params
{
	float                                              NewPosition;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxListItemNumber.IncrementSlider
struct UGbxListItemNumber_IncrementSlider_Params
{
};

// Function GbxUI.GbxListItemNumber.GetCurrentValue
struct UGbxListItemNumber_GetCurrentValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxListItemNumber.DecrementSlider
struct UGbxListItemNumber_DecrementSlider_Params
{
};

// Function GbxUI.GbxMenuStack.Tick
struct UGbxMenuStack_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxMenuStack.SwitchTo
struct UGbxMenuStack_SwitchTo_Params
{
	class UGbxMenuData*                                MenuData;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxMenuStack.SetBlockingMode
struct UGbxMenuStack_SetBlockingMode_Params
{
	bool                                               bShouldBlock;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxMenuStack.SetBlockAllRawInput
struct UGbxMenuStack_SetBlockAllRawInput_Params
{
	bool                                               bShouldBlock;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxMenuStack.Push
struct UGbxMenuStack_Push_Params
{
	class UGbxMenuData*                                MenuData;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxMenuStack.PopToSwitchTo
struct UGbxMenuStack_PopToSwitchTo_Params
{
	class UObject*                                     Menu;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxMenuData*                                MenuData;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxMenuStack.PopTo
struct UGbxMenuStack_PopTo_Params
{
	class UObject*                                     Menu;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxMenuStack.Pop
struct UGbxMenuStack_Pop_Params
{
};

// Function GbxUI.GbxMenuStack.Num
struct UGbxMenuStack_Num_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxMenuStack.HandleRawInput
struct UGbxMenuStack_HandleRawInput_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	TEnumAsByte<EInputEvent>                           EVENTTYPE;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ControllerId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxMenuStack.GetTopMenu
struct UGbxMenuStack_GetTopMenu_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxMenuStack.GetMenuAtIndex
struct UGbxMenuStack_GetMenuAtIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxMenuStack.GetIndexOfMenu
struct UGbxMenuStack_GetIndexOfMenu_Params
{
	class UObject*                                     Menu;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxMenuStack.GetCurrentInputDevice
struct UGbxMenuStack_GetCurrentInputDevice_Params
{
	EGbxMenuInputDevice                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxMenuStack.Draw
struct UGbxMenuStack_Draw_Params
{
};

// Function GbxUI.GbxMenuStack.Clear
struct UGbxMenuStack_Clear_Params
{
};

// Function GbxUI.GbxProgressBar.SetShear
struct UGbxProgressBar_SetShear_Params
{
	float                                              InShear;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxProgressBar.SetPercent
struct UGbxProgressBar_SetPercent_Params
{
	float                                              InPercent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxProgressBar.SetMaxValueText
struct UGbxProgressBar_SetMaxValueText_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxUI.GbxProgressBar.SetFillColorAndOpacity
struct UGbxProgressBar_SetFillColorAndOpacity_Params
{
	struct FLinearColor                                InColor;                                                  // (Parm, IsPlainOldData)
};

// Function GbxUI.GbxProgressBar.SetCurrentValueText
struct UGbxProgressBar_SetCurrentValueText_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxUI.GbxProgressBar.PassedPercentThreshold
struct UGbxProgressBar_PassedPercentThreshold_Params
{
	float                                              Threshold;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OldValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncreasing;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDecreasing;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxProgressBar.IsInterpolating
struct UGbxProgressBar_IsInterpolating_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxProgressBar.InterpolateToPercentWithInterpolator
struct UGbxProgressBar_InterpolateToPercentWithInterpolator_Params
{
	float                                              InPercent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxProgressBarInterpolator                 Interpolator;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxUI.GbxProgressBar.InterpolateToPercent
struct UGbxProgressBar_InterpolateToPercent_Params
{
	float                                              InPercent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxProgressBar.HandleShowDeltaEffect
struct UGbxProgressBar_HandleShowDeltaEffect_Params
{
	class UWidget*                                     Effect;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              OldValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxProgressBar.HandlePercentChanged
struct UGbxProgressBar_HandlePercentChanged_Params
{
	float                                              OldValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInterpolating;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxProgressBarInterpolator                 ActiveInterpolator;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxUI.GbxProgressBar.HandleEnterPercentRange
struct UGbxProgressBar_HandleEnterPercentRange_Params
{
	struct FName                                       RangeName;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function GbxUI.GbxProgressBar.GetShear
struct UGbxProgressBar_GetShear_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxProgressBar.GetPercent
struct UGbxProgressBar_GetPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction GbxUI.GbxProgressBar.GbxProgressBarRangeEvent__DelegateSignature
struct UGbxProgressBar_GbxProgressBarRangeEvent__DelegateSignature_Params
{
	struct FName                                       RangeName;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// DelegateFunction GbxUI.GbxProgressBar.GbxProgressBarEvent__DelegateSignature
struct UGbxProgressBar_GbxProgressBarEvent__DelegateSignature_Params
{
};

// Function GbxUI.GbxProgressBar.EnteredPercentRange
struct UGbxProgressBar_EnteredPercentRange_Params
{
	float                                              RangeMin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RangeMax;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OldValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentValue;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncreasing;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDecreasing;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxSpinner.SpinRight
struct UGbxSpinner_SpinRight_Params
{
	class UGbxGFxButton*                               PressedButton;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxMenuInputEvent                          InputInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// DelegateFunction GbxUI.GbxSpinner.SpinnerValueUpdatedEvent__DelegateSignature
struct UGbxSpinner_SpinnerValueUpdatedEvent__DelegateSignature_Params
{
};

// Function GbxUI.GbxSpinner.SpinLeft
struct UGbxSpinner_SpinLeft_Params
{
	class UGbxGFxButton*                               PressedButton;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxMenuInputEvent                          InputInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GbxUI.GbxTextField.OnScrollBarPositionUpdated
struct UGbxTextField_OnScrollBarPositionUpdated_Params
{
	float                                              SliderPercentage;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxUILocalization.PlatformToText
struct UGbxUILocalization_PlatformToText_Params
{
	struct FName                                       Platform;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AGbxPlayerController*                        pc;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxUI.GbxUILocalization.PlatformToRichText
struct UGbxUILocalization_PlatformToRichText_Params
{
	struct FName                                       Platform;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AGbxPlayerController*                        pc;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   GlyphSize;                                                // (Parm, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxUI.GbxUILocalization.PlatformToGlyph
struct UGbxUILocalization_PlatformToGlyph_Params
{
	struct FName                                       Platform;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AGbxPlayerController*                        pc;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxUI.GbxUILocalization.PlatformToGFxHTMLText
struct UGbxUILocalization_PlatformToGFxHTMLText_Params
{
	struct FName                                       Platform;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AGbxPlayerController*                        pc;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GlyphHeight;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                VSpace;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxUI.GbxUILocalization.IsPlatformGlyphAvailable
struct UGbxUILocalization_IsPlatformGlyphAvailable_Params
{
	struct FName                                       Platform;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AGbxPlayerController*                        pc;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxUILocalization.IsInputActionGlyphAvailable
struct UGbxUILocalization_IsInputActionGlyphAvailable_Params
{
	struct FName                                       ActionName;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AGbxPlayerController*                        pc;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EGbxActionToTextType                               GlyphType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxUILocalization.InputActionToText
struct UGbxUILocalization_InputActionToText_Params
{
	struct FName                                       ActionName;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AGbxPlayerController*                        pc;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EGbxActionToTextType                               GlyphType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxUI.GbxUILocalization.InputActionToRichText
struct UGbxUILocalization_InputActionToRichText_Params
{
	struct FName                                       ActionName;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AGbxPlayerController*                        pc;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EGbxActionToTextType                               GlyphType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   GlyphSize;                                                // (Parm, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxUI.GbxUILocalization.InputActionToGlyph
struct UGbxUILocalization_InputActionToGlyph_Params
{
	struct FName                                       ActionName;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AGbxPlayerController*                        pc;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EGbxActionToTextType                               GlyphType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxUI.GbxUILocalization.InputActionToGFxHTMLText
struct UGbxUILocalization_InputActionToGFxHTMLText_Params
{
	struct FName                                       ActionName;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AGbxPlayerController*                        pc;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EGbxActionToTextType                               GlyphType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GlyphHeight;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                VSpace;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxUI.GbxUILocalization.FKeyToGFxHTMLText
struct UGbxUILocalization_FKeyToGFxHTMLText_Params
{
	struct FKey                                        Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class AGbxPlayerController*                        pc;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EGbxActionToTextType                               GlyphType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GlyphHeight;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GbxUI.GbxUISpinnerWidget.MoveToNumber
struct UGbxUISpinnerWidget_MoveToNumber_Params
{
	unsigned char                                      NewNumber;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EGbxSpinnerWidgetGoToMethod                        GoToMethod;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxUI.GbxWidgetComponent.Setup
struct UGbxWidgetComponent_Setup_Params
{
	class UClass*                                      NewWidgetClass;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AGbxPlayerController*                        NewTrackedPlayer;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             ParentComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EWidgetSpace                                       WidgetSpace;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewLayerZOrder;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CollisionProfile;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxWidgetComponent.SetDistanceScaleCurve
struct UGbxWidgetComponent_SetDistanceScaleCurve_Params
{
	class UCurveFloat*                                 NewDistanceScaleCurve;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxWidgetComponent.SetDistanceAlphaCurve
struct UGbxWidgetComponent_SetDistanceAlphaCurve_Params
{
	class UCurveFloat*                                 NewDistanceAlphaCurve;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxUI.GbxWidgetComponent.SetDistanceAlphaBorder
struct UGbxWidgetComponent_SetDistanceAlphaBorder_Params
{
	class UBorder*                                     NewDistanceAlphaBorder;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GbxUI.GbxWorldSpaceProxyWidget.GetWorldLocation
struct UGbxWorldSpaceProxyWidget_GetWorldLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxUI.InWorldDamageNumber.OnWentOffscreen
struct UInWorldDamageNumber_OnWentOffscreen_Params
{
};

// Function GbxUI.InWorldDamageNumber.ImpulseAnimationCompleted
struct UInWorldDamageNumber_ImpulseAnimationCompleted_Params
{
	class UUserWidget*                                 AssociatedWidget;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
