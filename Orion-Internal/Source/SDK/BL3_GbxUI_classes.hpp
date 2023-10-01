#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxUI_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GbxUI.GbxGFxMovie
// 0x02D0 (0x04E0 - 0x0210)
class UGbxGFxMovie : public UGFxMoviePlayer
{
public:
	class USwfMovie*                                   MovieData;                                                // 0x0210(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGFxScaleMode>                         ScaleModeType;                                            // 0x0218(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGFxAlign>                             AlignmentType;                                            // 0x0219(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAnchorToViewport;                                        // 0x021A(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x021B(0x0001) MISSED OFFSET
	struct FGbxGFxAnchor                               AnchorData;                                               // 0x021C(0x0018) (Edit, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0234(0x000C) MISSED OFFSET
	class UDataTable*                                  AudioDataTable;                                           // 0x0240(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGbxGFxMovieClipAppendix                    GetChildAppendix;                                         // 0x0248(0x0060) (Edit, BlueprintReadOnly)
	EGbxGFxMovieGetChildStrategy                       GetChildStrategy;                                         // 0x02A8(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x02A9(0x0007) MISSED OFFSET
	class UGbxGFxObject*                               CachedStage;                                              // 0x02B0(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               GbxRoot;                                                  // 0x02B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               GetChildRoot;                                             // 0x02C0(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector2D                                   CachedGbxRootPosition;                                    // 0x02C8(0x0008) (BlueprintReadOnly, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x18];                                      // 0x02D0(0x0018) MISSED OFFSET
	bool                                               bIsTransitioning;                                         // 0x02E8(0x0001) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x02E9(0x0003) MISSED OFFSET
	float                                              TransitionTimeout;                                        // 0x02EC(0x0004) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x140];                                     // 0x02F0(0x0140) MISSED OFFSET
	class AGbxPlayerController*                        OwningGPC;                                                // 0x0430(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x68];                                      // 0x0438(0x0068) MISSED OFFSET
	TArray<class UGbxGFxObject*>                       Tickables;                                                // 0x04A0(0x0010) (BlueprintReadOnly, ZeroConstructor, Transient)
	unsigned char                                      UnknownData07[0x11];                                      // 0x04B0(0x0011) MISSED OFFSET
	bool                                               bGbxMovieStarted;                                         // 0x04C1(0x0001) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x1E];                                      // 0x04C2(0x001E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxGFxMovie");
		return ptr;
	}


	bool TranslateWorldToLocal(const struct FVector& LocationWorldSpace, bool bPlayerViewportRelative, bool bUseMovieDimensions, struct FVector2D* OutPositionLocal);
	struct FVector2D TranslateToScreen(const struct FVector2D& Point);
	struct FVector2D TranslateScreenToLocal(const struct FVector2D& Point, bool bUseMovieDimensions);
	struct FBox2D TranslateRectToScreen(const struct FBox2D& Rect);
	void SpawnMovie(class AGbxPlayerController* NewGPCOwner, class UTextureRenderTarget2D* RenderTarget);
	class UGbxGFxMovie* STATIC_SpawnGbxGFxMovie(class AGbxPlayerController* GbxPlayerController, class UClass* MovieClass);
	void SetViewportToPlayerScreen(class AGbxPlayerController* pc);
	void SetOffsetDisplayTransform(const struct FTransform& Transform);
	void SetBaseDisplayTransform(const struct FTransform& Transform);
	void SetAudioEnabled(bool bEnabled);
	void SetAnchor(const struct FGbxGFxAnchor& Anchor);
	bool RunUIEventAudio(const struct FName& EventName, const class FString& ProviderHistory);
	struct FVector2D GetViewportOffset();
	struct FVector2D GetViewportDimensions();
	struct FVector2D GetStageDimensions();
	class APawn* GetOwningPlayerPawn();
	class AGbxPlayerController* GetOwningPlayerController();
	struct FTransform GetOffsetDisplayTransform();
	struct FVector2D GetMovieDimensions();
	struct FTransform GetBaseDisplayTransform();
	void extTransitionComplete();
	void extAnimationFinished(const class FString& TargetName);
	void ApplyNewAudioSettings(class UDataTable* NewDataTable, EUIAudioSettingOperation MergeOperation);
};


// Class GbxUI.GbxGFxMenu
// 0x01A0 (0x0680 - 0x04E0)
class UGbxGFxMenu : public UGbxGFxMovie
{
public:
	EGbxFocusableWidgetMouseBehavior                   DefaultMouseFocusBehavior;                                // 0x04E0(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04E1(0x0007) MISSED OFFSET
	class UGbxGFxMenuData*                             MenuData;                                                 // 0x04E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class FString                                      ButtonFocusedAudioEventName;                              // 0x04F0(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class FString                                      ButtonClickedAudioEventName;                              // 0x0500(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class FString                                      SliderAudioEventName;                                     // 0x0510(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class FString                                      SpinnerAudioEventName;                                    // 0x0520(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class FString                                      NavigateBackAudioEventName;                               // 0x0530(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       OpenMenuAudioEventName;                                   // 0x0540(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       CloseMenuAudioEventName;                                  // 0x0548(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnMenuTransitionOutCompleted;                             // 0x0550(0x0010) (BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMenuInputChanged;                                       // 0x0560(0x0010) (BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	EGbxGFxListAlignment                               HintBarAlignment;                                         // 0x0570(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCallMenuTickOnlyIfMenuIsStarted;                         // 0x0571(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0572(0x0002) MISSED OFFSET
	float                                              SplitscreenRootOffset;                                    // 0x0574(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGbxGFxContextualMenu*                       OwnedContextualMenu;                                      // 0x0578(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxMenu*                                 ActiveDialog;                                             // 0x0580(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0588(0x0004) MISSED OFFSET
	TWeakObjectPtr<class AGbxPlayerController>         PCOwner;                                                  // 0x058C(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class AGbxCharacter>                PrimaryCharacterOwner;                                    // 0x0594(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UGbxMenuStack>                MenuStackOwner;                                           // 0x059C(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                DrawPriority;                                             // 0x05A4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxWidgetFocusManager*                      FocusManager;                                             // 0x05A8(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxHintBar*                                 HintBar;                                                  // 0x05B0(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxHintBarContainer*                     HintBarContainer;                                         // 0x05B8(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxMouseBlocker*                         MouseBlockerClip;                                         // 0x05C0(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bWantsDismiss;                                            // 0x05C8(0x0001) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x05C9(0x0003) MISSED OFFSET
	TWeakObjectPtr<class UGbxGameInstance>             GameInstanceRef;                                          // 0x05CC(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UGbxUIGlobals>                UIGlobalsRef;                                             // 0x05D4(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x05DC(0x0002) MISSED OFFSET
	bool                                               bCachedLastInputFromMouse;                                // 0x05DE(0x0001) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bReceiveMouseEvenIfNotActive;                             // 0x05DF(0x0001) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsInitedFromStash;                                       // 0x05E0(0x0001) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bMouseHitsAllowedYet;                                     // 0x05E1(0x0001) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bGotFirstMouseMove;                                       // 0x05E2(0x0001) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0xD];                                       // 0x05E3(0x000D) MISSED OFFSET
	class UGbxGFxObject*                               MenuContentClip;                                          // 0x05F0(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               MenuLayoutsClip;                                          // 0x05F8(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               MenuLayoutClip;                                           // 0x0600(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsSplitScreenLayout;                                     // 0x0608(0x0001) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x17];                                      // 0x0609(0x0017) MISSED OFFSET
	bool                                               bBlockPauseMenu;                                          // 0x0620(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bGFxMenuWasStarted;                                       // 0x0621(0x0001) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x6];                                       // 0x0622(0x0006) MISSED OFFSET
	class UGbxGFxButton*                               LastFocusedButton;                                        // 0x0628(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x50];                                      // 0x0630(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxGFxMenu");
		return ptr;
	}


	void SetWidgetAdjacency(const TScriptInterface<class UGbxFocusableWidget>& Widget, const struct FGbxFocusableWidgetAdjacencyInfo& AdjacencyInfo);
	void SetFocusedWidget(const TScriptInterface<class UGbxFocusableWidget>& WidgetToFocus, bool bFromMouse);
	void SetFocusableWidgetAdjancency(const TScriptInterface<class UGbxFocusableWidget>& Widget, class UObject* AdjacentUp, class UObject* AdjacentDown, class UObject* AdjacentLeft, class UObject* AdjacentRight);
	void RegisterFocusableWidgetWithAdjacency(const TScriptInterface<class UGbxFocusableWidget>& Widget, class UObject* AdjacentUp, class UObject* AdjacentDown, class UObject* AdjacentLeft, class UObject* AdjacentRight);
	void RegisterFocusableWidget(const TScriptInterface<class UGbxFocusableWidget>& Widget, const struct FGbxFocusableWidgetAdjacencyInfo& AdjacencyInfo);
	void MenuStack_Clear();
	bool IsWidgetFocused(class UObject* WidgetInQuestion);
	class UObject* GetFocusedWidget();
};


// Class GbxUI.GbxGFxHUDWidget
// 0x0150 (0x0630 - 0x04E0)
class UGbxGFxHUDWidget : public UGbxGFxMovie
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x04E0(0x0060) MISSED OFFSET
	EGFxHUDWidgetAnchorType                            AnchorType;                                               // 0x0540(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0541(0x0007) MISSED OFFSET
	class FString                                      LayoutInstanceStringOverride;                             // 0x0548(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)
	struct FName                                       AnchorBoneName;                                           // 0x0558(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxContextSensitivePromptTime;                            // 0x0560(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxTimeUntilStopAdvancing;                                // 0x0564(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0568(0x0008) MISSED OFFSET
	class FString                                      ShowFrameName;                                            // 0x0570(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)
	class FString                                      HideFrameName;                                            // 0x0580(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)
	class FString                                      OnFrameName;                                              // 0x0590(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)
	class FString                                      OffFrameName;                                             // 0x05A0(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)
	class UGbxGFxHintWidget*                           ContextSensitivePrompt;                                   // 0x05B0(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class FString                                      InstanceString;                                           // 0x05B8(0x0010) (BlueprintReadOnly, ZeroConstructor, Transient)
	TWeakObjectPtr<class AGbxHUD>                      OwningHUD;                                                // 0x05C8(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UGbxGFxHUDContainer>          OwningHUDContainer;                                       // 0x05D0(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class AGbxPlayerController>         OwningPC;                                                 // 0x05D8(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class APawn>                        OwningPawn;                                               // 0x05E0(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               IconTransitionWrapper;                                    // 0x05E8(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               InitializationClip;                                       // 0x05F0(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x14];                                      // 0x05F8(0x0014) MISSED OFFSET
	TWeakObjectPtr<class UGameInstance>                GameInstanceRef;                                          // 0x060C(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UGbxUIGlobals>                UIGlobalsRef;                                             // 0x0614(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x061C(0x0008) MISSED OFFSET
	unsigned char                                      bDynamicallyLoaded : 1;                                   // 0x0624(0x0001) (Edit, BlueprintReadOnly)
	unsigned char                                      UnknownData05[0xB];                                       // 0x0625(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxGFxHUDWidget");
		return ptr;
	}


	void extInitAnimationFinished();
	void extHideAnimationFinished();
};


// Class GbxUI.GbxUserWidget
// 0x00B0 (0x02B8 - 0x0208)
class UGbxUserWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0208(0x0010) MISSED OFFSET
	class UTextBlock*                                  LabelTextBlock;                                           // 0x0218(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  ValueTextBlock;                                           // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UImage*                                      SelectedImage;                                            // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	bool                                               bRegisterAsFocusableWidget;                               // 0x0230(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	EGbxFocusableWidgetMouseBehavior                   MouseFocusBehavior;                                       // 0x0231(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0232(0x0006) MISSED OFFSET
	class UGbxFocusableWidgetStyleData*                FocusableWidgetStyleData;                                 // 0x0238(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       OnFocusedAudioEventName;                                  // 0x0240(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       OnClickedAudioEventName;                                  // 0x0248(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bNeverCreateMouseFocusButton;                             // 0x0250(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0251(0x0007) MISSED OFFSET
	class UBUTTON*                                     MouseFocusButton;                                         // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptDelegate                             OnWidgetClicked;                                          // 0x0260(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnWidgetFocused;                                          // 0x0270(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FName                                       FocusableWidgetNavUp;                                     // 0x0280(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FName                                       FocusableWidgetNavDown;                                   // 0x0288(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FName                                       FocusableWidgetNavLeft;                                   // 0x0290(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FName                                       FocusableWidgetNavRight;                                  // 0x0298(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bFocusOnMenuCreation;                                     // 0x02A0(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x02A1(0x0003) MISSED OFFSET
	TWeakObjectPtr<class UGbxUmgMenu>                  MenuThatOwnsFocus;                                        // 0x02A4(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x02AC(0x0004) MISSED OFFSET
	class UDataTable*                                  AudioDataTable;                                           // 0x02B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxUserWidget");
		return ptr;
	}


	void SetLabelText(const struct FText& LabelText);
	void OnFocusableWidgetUnhovered();
	void OnFocusableWidgetReleased();
	void OnFocusableWidgetPressed();
	void OnFocusableWidgetHovered();
	void OnFocusableWidgetClicked();
	bool IsRegisteredAsFocusableWidget();
	bool STATIC_IsFocusableWidgetStateHovered(EGbxFocusableWidgetState State);
	bool STATIC_IsFocusableWidgetStateFocused(EGbxFocusableWidgetState State);
	void HandleFocusableWidgetStateChanged(EGbxFocusableWidgetState NewState, bool bBecameFocused, bool bLostFocus);
	void GotoAndStop(const struct FFrameTime& StopTime, class UWidgetAnimation* InAnimation);
	void GetAllChildWidgetsOfClass(class UClass* TargetClass, TArray<class UWidget*>* OutputArray);
};


// Class GbxUI.GbxUmgMenu
// 0x0038 (0x02F0 - 0x02B8)
class UGbxUmgMenu : public UGbxUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02B8(0x0008) MISSED OFFSET
	class UGbxUmgMenuData*                             MenuData;                                                 // 0x02C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class AGbxPlayerController*                        PCOwner;                                                  // 0x02C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxMenuStack*                               MenuStackOwner;                                           // 0x02D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxWidgetFocusManager*                      FocusManager;                                             // 0x02D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxHintBar*                                 HintBar;                                                  // 0x02E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x02E8(0x0005) MISSED OFFSET
	EGbxFocusableWidgetMouseBehavior                   DefaultMouseFocusBehavior;                                // 0x02ED(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x02EE(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxUmgMenu");
		return ptr;
	}


	void SetWidgetAdjacency(class UObject* Widget, const struct FGbxFocusableWidgetAdjacencyInfo& AdjacencyInfo);
	void SetSlateFocusedWidget(class UWidget* Widget);
	void SetHintBarContainer(const TScriptInterface<class UGbxHintBarWidgetContainer>& InContainer);
	void SetFocusedWidget(class UObject* Widget, bool bFromMouse);
	void SetFocusableWidgetAdjancency(class UObject* Widget, class UObject* AdjacentUp, class UObject* AdjacentDown, class UObject* AdjacentLeft, class UObject* AdjacentRight);
	void RegisterStagePlacedHint(const TScriptInterface<class UGbxHintWidget>& InHintWidget, const struct FName& InInputAction);
	void RegisterFocusableWidgetWithAdjacency(class UObject* Widget, class UObject* AdjacentUp, class UObject* AdjacentDown, class UObject* AdjacentLeft, class UObject* AdjacentRight);
	void RegisterFocusableWidget(class UObject* Widget, const struct FGbxFocusableWidgetAdjacencyInfo& AdjacencyInfo);
	void PopulateHintBar();
	void NavigateBack();
	class UObject* MenuStack_SwitchTo(class UGbxMenuData* MenuDataIn);
	class UObject* MenuStack_Push(class UGbxMenuData* MenuDataIn);
	class UObject* MenuStack_PopToSwitchTo(class UObject* Menu, class UGbxMenuData* MenuDataIn);
	void MenuStack_PopTo(class UObject* Menu);
	void MenuStack_Pop();
	void MenuStack_Clear();
	bool IsWidgetFocused(class UObject* WidgetInQuestion);
	bool IsActiveMenuOnStack();
	void HandleMenuInputDeviceChanged(EGbxMenuInputDevice NewInputDevice);
	void HandleMenuInputAction(const struct FName& InputAction, int ControllerId);
	void HandleMenuInit();
	void HandleMenuDeinit();
	void HandleMenuDeactivate();
	void HandleMenuAspectRatioChanged(float NewAspectRatio);
	void HandleMenuActivate();
	class UGbxListItemFactory* GetListItemFactory();
	class UObject* GetFocusedWidget();
	EGbxMenuInputDevice GetCurrentInputDevice();
};


// Class GbxUI.GbxMenuSwitcherSubmenu
// 0x0008 (0x02F8 - 0x02F0)
class UGbxMenuSwitcherSubmenu : public UGbxUmgMenu
{
public:
	TWeakObjectPtr<class UGbxMenuSwitcher>             OwnerMenuSwitcher;                                        // 0x02F0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxMenuSwitcherSubmenu");
		return ptr;
	}

};


// Class GbxUI.GbxDebugMenuSubmenu
// 0x0000 (0x02F8 - 0x02F8)
class UGbxDebugMenuSubmenu : public UGbxMenuSwitcherSubmenu
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxDebugMenuSubmenu");
		return ptr;
	}

};


// Class GbxUI.GbxMenuData
// 0x0018 (0x0048 - 0x0030)
class UGbxMenuData : public UGbxDataAsset
{
public:
	bool                                               bHideMenusBeneath;                                        // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShowsMouse;                                              // 0x0031(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EGbxMenuInputMode                                  InputMode;                                                // 0x0032(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EGbxMenuParentType                                 ParentType;                                               // 0x0033(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAutoAttemptPop;                                          // 0x0034(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseMenuStashing;                                         // 0x0035(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bActivateIfPoppedTo;                                      // 0x0036(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0037(0x0001) MISSED OFFSET
	class UDialogEvent*                                IdleDialogEvent;                                          // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDialogParameter*                            IdleDialogTargetParamater;                                // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxMenuData");
		return ptr;
	}

};


// Class GbxUI.GbxGFxMenuData
// 0x0078 (0x00C0 - 0x0048)
class UGbxGFxMenuData : public UGbxMenuData
{
public:
	TSoftObjectPtr<class UClass>                       MovieClass;                                               // 0x0048(0x0028) (Edit)
	class FString                                      TransitionMovieClipTarget;                                // 0x0070(0x0010) (Edit, ZeroConstructor)
	class FString                                      TransitionOutAnimation;                                   // 0x0080(0x0010) (Edit, ZeroConstructor)
	float                                              TransitionOutTimeout;                                     // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	class UGbxHUDStateData*                            OverrideHUDState;                                         // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET
	int                                                GFxMenuDrawPriorityBoost;                                 // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	TArray<class UObject*>                             CreatedMenus;                                             // 0x00B0(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxGFxMenuData");
		return ptr;
	}

};


// Class GbxUI.GbxGFxObject
// 0x0138 (0x0170 - 0x0038)
class UGbxGFxObject : public UGFxObject
{
public:
	class UGbxGFxMovie*                                OwningMovie;                                              // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x130];                                     // 0x0040(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxGFxObject");
		return ptr;
	}


	void SetOffsetDisplayTransform(const struct FTransform& Transform);
	void SetBaseDisplayTransform(const struct FTransform& Transform);
	void RotateAboutPoint(float Degrees, const struct FVector2D& Point);
	struct FTransform GetOffsetDisplayTransform();
	struct FTransform GetBaseDisplayTransform();
};


// Class GbxUI.GbxGFxButton
// 0x0160 (0x02D0 - 0x0170)
class UGbxGFxButton : public UGbxGFxObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0170(0x0028) MISSED OFFSET
	EGbxFocusableWidgetMouseBehavior                   MouseFocusBehavior;                                       // 0x0198(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0199(0x0007) MISSED OFFSET
	struct FName                                       OnFocusedAudioEventName;                                  // 0x01A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       OnClickedAudioEventName;                                  // 0x01A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             OnClicked;                                                // 0x01B0(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnSecondaryClicked;                                       // 0x01C0(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnFocused;                                                // 0x01D0(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnUnfocused;                                              // 0x01E0(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnPressed;                                                // 0x01F0(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnReleased;                                               // 0x0200(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnHovered;                                                // 0x0210(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnUnhovered;                                              // 0x0220(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnHeld;                                                   // 0x0230(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
	TWeakObjectPtr<class UGbxGFxMenu>                  OwningMenu;                                               // 0x0240(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGbxTextField*                               Label;                                                    // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0250(0x0018) MISSED OFFSET
	class UGbxGFxObject*                               AppearanceFrameClip;                                      // 0x0268(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              TimeButtonHeld;                                           // 0x0270(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHasSentHeldEvent;                                        // 0x0274(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bWantsHeld;                                               // 0x0275(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIgnoreNextClick;                                         // 0x0276(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bNewIndicatorUsesLabels;                                  // 0x0277(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x58];                                      // 0x0278(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxGFxButton");
		return ptr;
	}


	void SetLockedState(EGbxGFxButtonLockedState InLockedState, bool bShouldRefresh);
	void SetLabelText(const struct FText& Text, bool bForceUpdate);
	void SetCheckedState(EGbxGFxButtonCheckedState InCheckedState, bool bShouldRefresh);
	void SetButtonType(EGbxGFxButtonType InButtonType);
	void RefreshView(EGbxFocusableWidgetState PrevState);
	void K2_HandleFocusableWidgetStateChanged(EGbxFocusableWidgetState NewState, bool bBecameFocused, bool bLostFocus);
	bool IsRegisteredAsFocusableWidget();
	bool IsLocked();
	bool STATIC_IsFocusableWidgetStateUp(EGbxFocusableWidgetState State);
	bool STATIC_IsFocusableWidgetStateHovered(EGbxFocusableWidgetState State);
	bool STATIC_IsFocusableWidgetStateFocused(EGbxFocusableWidgetState State);
	bool STATIC_IsFocusableWidgetStateDown(EGbxFocusableWidgetState State);
	bool STATIC_IsFocusableWidgetStateDisabled(EGbxFocusableWidgetState State);
	bool IsChecked();
	EGbxGFxButtonLockedState GetLockedState();
	EGbxGFxButtonCheckedState GetCheckedState();
	EGbxGFxButtonType GetButtonType();
	void GbxGFxButtonEvent__DelegateSignature(class UGbxGFxButton* BUTTON, const struct FGbxMenuInputEvent& InputInfo);
};


// Class GbxUI.GbxGFxListCell
// 0x0040 (0x0310 - 0x02D0)
class UGbxGFxListCell : public UGbxGFxButton
{
public:
	class UGbxGFxObject*                               CellBounds;                                               // 0x02D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                ListIndex;                                                // 0x02D8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector2D                                   PositionInContainer;                                      // 0x02DC(0x0008) (Transient, IsPlainOldData)
	float                                              TopOffsetPosition;                                        // 0x02E4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              BottomOffsetPosition;                                     // 0x02E8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              LeftOffsetPosition;                                       // 0x02EC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              RightOffsetPosition;                                      // 0x02F0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsReadjustingFocus;                                      // 0x02F4(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1B];                                      // 0x02F5(0x001B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxGFxListCell");
		return ptr;
	}

};


// Class GbxUI.GbxGFxListCellWithData
// 0x0010 (0x0320 - 0x0310)
class UGbxGFxListCellWithData : public UGbxGFxListCell
{
public:
	class UDataAsset*                                  DataAsset;                                                // 0x0310(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0318(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxGFxListCellWithData");
		return ptr;
	}

};


// Class GbxUI.GbxGFxListItemSpinner
// 0x0040 (0x0360 - 0x0320)
class UGbxGFxListItemSpinner : public UGbxGFxListCellWithData
{
public:
	class UGbxSpinner*                                 SpinnerItem;                                              // 0x0320(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0328(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxGFxListItemSpinner");
		return ptr;
	}


	void OnSpinnerValueUpdated();
};


// Class GbxUI.GbxGFxMenuSwitcherSubmenu
// 0x0010 (0x0690 - 0x0680)
class UGbxGFxMenuSwitcherSubmenu : public UGbxGFxMenu
{
public:
	TWeakObjectPtr<class UGbxGFxMenuSwitcher>          OwnerMenuSwitcher;                                        // 0x0680(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0688(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxGFxMenuSwitcherSubmenu");
		return ptr;
	}

};


// Class GbxUI.GbxGFxMenuSwitcher
// 0x0020 (0x06A0 - 0x0680)
class UGbxGFxMenuSwitcher : public UGbxGFxMenu
{
public:
	TWeakObjectPtr<class UGbxGFxMenuSwitcherSubmenu>   CurrentSubmenu;                                           // 0x0680(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       CurrentSubmenuId;                                         // 0x0688(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       PreviousSubmenuId;                                        // 0x0690(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumSubMenus;                                              // 0x0698(0x0004) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x069C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxGFxMenuSwitcher");
		return ptr;
	}

};


// Class GbxUI.GbxGFxMovieLoader
// 0x0030 (0x01A0 - 0x0170)
class UGbxGFxMovieLoader : public UGbxGFxObject
{
public:
	struct FScriptMulticastDelegate                    OnMovieLoadCompleteDelegate;                              // 0x0170(0x0010) (ZeroConstructor, Transient, InstancedReference)
	class UGbxGFxObject*                               LoadedMovie;                                              // 0x0180(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class USwfMovie*                                   QueuedLoadMovie;                                          // 0x0188(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class USwfMovie*                                   CurrentMovie;                                             // 0x0190(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0198(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxGFxMovieLoader");
		return ptr;
	}

};


// Class GbxUI.GbxGFxProgressBar
// 0x01B0 (0x0320 - 0x0170)
class UGbxGFxProgressBar : public UGbxGFxObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0170(0x0008) MISSED OFFSET
	float                                              Percent;                                                  // 0x0178(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumFillFrames;                                            // 0x017C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumDeltaBarFrames;                                        // 0x0180(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                NumBackgroundBarFrames;                                   // 0x0184(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FGbxProgressBarInterpolator                 DefaultInterpolator;                                      // 0x0188(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FGbxProgressBarRange>                Ranges;                                                   // 0x01B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      EdgeFlashID;                                              // 0x01C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      EdgeFlashInnerID;                                         // 0x01D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      FillBarId;                                                // 0x01E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      DeltaBarId;                                               // 0x01F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      BackgroundBarId;                                          // 0x0200(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      CurrentValueLabelId;                                      // 0x0210(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class FString                                      MaxValueLabelId;                                          // 0x0220(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x88];                                      // 0x0230(0x0088) MISSED OFFSET
	struct FScriptDelegate                             OnInterpolationComplete;                                  // 0x02B8(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnEnterRange;                                             // 0x02C8(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FGbxProgressBarInterpolator                 Interpolator;                                             // 0x02D8(0x0028) (Transient)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0300(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxGFxProgressBar");
		return ptr;
	}


	void SetPercent(float InPercent);
	void SetMaxValueText(const struct FText& Text);
	void SetFillColorAndOpacity(const struct FLinearColor& InColor);
	void SetCurrentValueText(const struct FText& Text);
	bool STATIC_PassedPercentThreshold(float Threshold, float OldValue, float CurrentValue, bool bIncreasing, bool bDecreasing);
	void InterpolateToPercentWithInterpolator(float InPercent, const struct FGbxProgressBarInterpolator& Interpolator);
	void InterpolateToPercent(float InPercent);
	void HandlePercentChanged(float OldValue, float CurrentValue, bool bIsInterpolating, const struct FGbxProgressBarInterpolator& ActiveInterpolator);
	void HandleEnterPercentRange(const struct FName& RangeName);
	float GetPercent();
	bool STATIC_EnteredPercentRange(float RangeMin, float RangeMax, float OldValue, float CurrentValue, bool bIncreasing, bool bDecreasing);
};


// Class GbxUI.GbxGFxGridScrollingList
// 0x01B0 (0x0320 - 0x0170)
class UGbxGFxGridScrollingList : public UGbxGFxObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0170(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    SelectionChangedDelegate;                                 // 0x0180(0x0010) (ZeroConstructor, Transient, InstancedReference)
	struct FScriptMulticastDelegate                    ItemPressedDelegate;                                      // 0x0190(0x0010) (ZeroConstructor, Transient, InstancedReference)
	unsigned char                                      UnknownData01[0x8];                                       // 0x01A0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    ItemClickedDelegate;                                      // 0x01A8(0x0010) (ZeroConstructor, Transient, InstancedReference)
	struct FScriptMulticastDelegate                    ItemSecondaryClickedDelegate;                             // 0x01B8(0x0010) (ZeroConstructor, Transient, InstancedReference)
	unsigned char                                      UnknownData02[0x18];                                      // 0x01C8(0x0018) MISSED OFFSET
	struct FGbxGFxListConfig                           Config;                                                   // 0x01E0(0x0090) (Transient)
	int                                                SelectedIndex;                                            // 0x0270(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                SelectedIndexWhenFocusWasLost;                            // 0x0274(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FGbxScrollingListCellInfo>           AllCells;                                                 // 0x0278(0x0010) (ZeroConstructor, Transient)
	TArray<struct FGbxScrollingListCellInfo>           UnusedCellPool;                                           // 0x0288(0x0010) (ZeroConstructor, Transient)
	class UGbxGFxObject*                               GridArea;                                                 // 0x0298(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               GridMask;                                                 // 0x02A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector2D                                   PositionOfFirstItem;                                      // 0x02A8(0x0008) (Transient, IsPlainOldData)
	int                                                NextUniqueId;                                             // 0x02B0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ViewWindowSize;                                           // 0x02B4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FGbxUIScroller                              UiScroller;                                               // 0x02B8(0x0034) (Transient)
	bool                                               bIsContentDirty;                                          // 0x02EC(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x02ED(0x0003) MISSED OFFSET
	struct FVector2D                                   AverageItemDims;                                          // 0x02F0(0x0008) (Transient, IsPlainOldData)
	class UGbxGFxSlider*                               ScrollBar;                                                // 0x02F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bScrollbarIsChildOfThis;                                  // 0x0300(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1F];                                      // 0x0301(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxGFxGridScrollingList");
		return ptr;
	}


	void OnScrollBarPositionUpdated(float SliderPercentage);
};


// Class GbxUI.GbxGFxPooledGridList
// 0x00A0 (0x03C0 - 0x0320)
class UGbxGFxPooledGridList : public UGbxGFxGridScrollingList
{
public:
	struct FScriptDelegate                             CellChangedDelegate;                                      // 0x0320(0x0014) (ZeroConstructor, Transient, InstancedReference)
	struct FScriptDelegate                             CellFocusedDelegate;                                      // 0x0330(0x0014) (ZeroConstructor, Transient, InstancedReference)
	struct FScriptDelegate                             CellClickedDelegate;                                      // 0x0340(0x0014) (ZeroConstructor, Transient, InstancedReference)
	struct FGbxGFxPooledGridListConfig                 PooledConfig;                                             // 0x0350(0x0030) (Edit)
	float                                              HelperDataDirDim;                                         // 0x0380(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                HelperDataItemsInDir;                                     // 0x0384(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                HelperDataItemsPerDir;                                    // 0x0388(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                HelperDataFirstItemIndex;                                 // 0x038C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                HelperDataNumVisibleItems;                                // 0x0390(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              HelperDataScrollOffset;                                   // 0x0394(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FGbxGFxPooledGridPoolInfo>           MasterCellPool;                                           // 0x0398(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x18];                                      // 0x03A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxGFxPooledGridList");
		return ptr;
	}

};


// Class GbxUI.GbxGFxRadioButtonList
// 0x0000 (0x0320 - 0x0320)
class UGbxGFxRadioButtonList : public UGbxGFxGridScrollingList
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxGFxRadioButtonList");
		return ptr;
	}

};


// Class GbxUI.GbxGFxListItemNumber
// 0x0080 (0x03A0 - 0x0320)
class UGbxGFxListItemNumber : public UGbxGFxListCellWithData
{
public:
	int                                                SliderFastestSteps;                                       // 0x0320(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0324(0x001C) MISSED OFFSET
	class UGbxGFxSlider*                               SliderItem;                                               // 0x0340(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               ValueItem;                                                // 0x0348(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0350(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxGFxListItemNumber");
		return ptr;
	}


	void OnSliderUpdated(float SliderPct);
};


// Class GbxUI.GbxGFxEditableTextField
// 0x0110 (0x0420 - 0x0310)
class UGbxGFxEditableTextField : public UGbxGFxListCell
{
public:
	bool                                               bConfirmOnFocusOut;                                       // 0x0310(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0311(0x0007) MISSED OFFSET
	class FString                                      EditText;                                                 // 0x0318(0x0010) (Edit, ZeroConstructor)
	bool                                               bMultiline;                                               // 0x0328(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EGFxVirtualKeyboardType                            KeyboardType;                                             // 0x0329(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLoseFocusOnConfirm;                                      // 0x032A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xBD];                                      // 0x032B(0x00BD) MISSED OFFSET
	struct FName                                       OnTextSubmittedAudioEventName;                            // 0x03E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       OnTextEditAbortedAudioEventName;                          // 0x03F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       OnTextInputAudioEventName;                                // 0x03F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0400(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxGFxEditableTextField");
		return ptr;
	}

};


// Class GbxUI.GbxGFxGridScrollingListPaged
// 0x0010 (0x0330 - 0x0320)
class UGbxGFxGridScrollingListPaged : public UGbxGFxGridScrollingList
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0320(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxGFxGridScrollingListPaged");
		return ptr;
	}

};


// Class GbxUI.GbxGFxMenuSwitcherMenuData
// 0x0020 (0x00E0 - 0x00C0)
class UGbxGFxMenuSwitcherMenuData : public UGbxGFxMenuData
{
public:
	TArray<struct FGbxGFxMenuSwitcherSubmenuInfo>      CurrentSubmenus;                                          // 0x00C0(0x0010) (ZeroConstructor, Transient)
	TArray<struct FGbxGFxMenuSwitcherSubmenuInfo>      Submenus;                                                 // 0x00D0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxGFxMenuSwitcherMenuData");
		return ptr;
	}

};


// Class GbxUI.GbxHUDContainer
// 0x0028 (0x02E0 - 0x02B8)
class UGbxHUDContainer : public UGbxUserWidget
{
public:
	class UCanvasPanel*                                RootPanel;                                                // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AGbxPlayerController*                        OwningPlayerController;                                   // 0x02C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class AGbxHUD*                                     OwningHUD;                                                // 0x02C8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                ProjectedContainerZOrder;                                 // 0x02D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02D4(0x0004) MISSED OFFSET
	class UCanvasPanel*                                DebugPanel;                                               // 0x02D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxHUDContainer");
		return ptr;
	}


	void HandleInit();
	void HandleDeinit();
	void HandleDeactivate();
	void HandleActivate();
};


// Class GbxUI.GbxHUDWidget
// 0x0058 (0x0310 - 0x02B8)
class UGbxHUDWidget : public UGbxUserWidget
{
public:
	struct FGeometry                                   CachedGeometry;                                           // 0x02B8(0x0038) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	class UGbxHUDContainer*                            OwningHUDContainer;                                       // 0x02F0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AGbxHUD*                                     OwningHUD;                                                // 0x02F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class AGbxPlayerController*                        OwningPlayerController;                                   // 0x0300(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0308(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxHUDWidget");
		return ptr;
	}


	void HandleInit();
	void HandleDeinit();
	void HandleDeactivate();
	void HandleActivate();
};


// Class GbxUI.GbxListItem
// 0x0030 (0x02E8 - 0x02B8)
class UGbxListItem : public UGbxUserWidget
{
public:
	struct FScriptDelegate                             OnListItemValueChanged;                                   // 0x02B8(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
	TScriptInterface<class UGbxList>                   ListOwner;                                                // 0x02C8(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       ChangedAudioEventName;                                    // 0x02D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxListItem");
		return ptr;
	}


	int GetItemIndex();
};


// Class GbxUI.GbxListItemText
// 0x0000 (0x02E8 - 0x02E8)
class UGbxListItemText : public UGbxListItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxListItemText");
		return ptr;
	}

};


// Class GbxUI.GbxGFxHUDContainer
// 0x00E0 (0x05C0 - 0x04E0)
class UGbxGFxHUDContainer : public UGbxGFxMovie
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x04E0(0x0030) MISSED OFFSET
	TArray<class UGbxGFxHUDWidget*>                    Widgets;                                                  // 0x0510(0x0010) (BlueprintReadOnly, ZeroConstructor, Transient)
	class UGbxHUDData*                                 HUDData;                                                  // 0x0520(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FGbxHUDFeedbackManager                      FeedbackManager;                                          // 0x0528(0x0068) (BlueprintReadOnly, Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0590(0x0008) MISSED OFFSET
	TWeakObjectPtr<class AGbxPlayerController>         OwningPC;                                                 // 0x0598(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class AGbxHUD>                      OwningHUD;                                                // 0x05A0(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class APawn>                        OwningPawn;                                               // 0x05A8(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bViewportNeedsRefresh;                                    // 0x05B0(0x0001) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bFinishedInitializing;                                    // 0x05B1(0x0001) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0xE];                                       // 0x05B2(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxGFxHUDContainer");
		return ptr;
	}

};


// Class GbxUI.GbxHUD
// 0x00B0 (0x0628 - 0x0578)
class AGbxHUD : public AHUD
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0578(0x0018) MISSED OFFSET
	struct FGbxHUDStateManager                         HudStateManager;                                          // 0x0590(0x0040) (Transient)
	bool                                               bDisplayScaleformHUD;                                     // 0x05D0(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x05D1(0x0007) MISSED OFFSET
	class APawn*                                       ChangedFromPawn;                                          // 0x05D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x05E0(0x0008) MISSED OFFSET
	class UGbxGFxHUDContainer*                         GFxHUDContainer;                                          // 0x05E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxHUDData*                                 OverrideContainerDefinition;                              // 0x05F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x05F8(0x0010) MISSED OFFSET
	EGbxMenuInputDevice                                CurrentInputDevice;                                       // 0x0608(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0609(0x0003) MISSED OFFSET
	TWeakObjectPtr<class AGbxPlayerController>         OwningPC;                                                 // 0x060C(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class AGbxCharacter>                OwningPrimaryCharacter;                                   // 0x0614(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class APawn>                        OwningPawn;                                               // 0x061C(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0624(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxHUD");
		return ptr;
	}


	void STATIC_SwitchToHUDState(class AGbxPlayerController* PlayerController, class UGbxHUDStateData* State);
	void STATIC_SetHUDContainer(class AGbxPlayerController* PlayerController, class UGbxHUDData* ContainerDefinition);
	void STATIC_PushHUDState(class AGbxPlayerController* PlayerController, class UGbxHUDStateData* State, bool bAllowDuplicatePush);
	void STATIC_PopToSwitchToHUDState(class AGbxPlayerController* PlayerController, class UGbxHUDStateData* PopToState, class UGbxHUDStateData* SwitchToState);
	void STATIC_PopToHUDState(class AGbxPlayerController* PlayerController, class UGbxHUDStateData* State);
	void STATIC_PopSpecifiedHUDState(class AGbxPlayerController* PlayerController, class UGbxHUDStateData* State);
	void STATIC_PopHUDState(class AGbxPlayerController* PlayerController);
	void OnPrimaryCharacterChanged(class AGbxCharacter* Character);
	void OnPawnChanged(class APawn* Pawn, class APawn* OldPawn);
	void STATIC_GotoPreviousHUDState(class AGbxPlayerController* PlayerController);
	void STATIC_GotoHUDState(class AGbxPlayerController* PlayerController, class UGbxHUDStateData* State);
	class UGbxHUDStateData* STATIC_GetCurrentHUDState(class AGbxPlayerController* PlayerController);
	void STATIC_ClearToDefaultHUDState(class AGbxPlayerController* PlayerController);
	void STATIC_ClearHUDStates(class AGbxPlayerController* PlayerController);
};


// Class GbxUI.GbxUILibrary
// 0x0000 (0x0028 - 0x0028)
class UGbxUILibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxUILibrary");
		return ptr;
	}


	void STATIC_SendTextToDebugHUD(class UObject* WorldContextObject, const struct FText& Text, const struct FLinearColor& Color, int TextSize, float Duration);
	class UGbxFullScreenMovie* STATIC_PlayFullScreenMovie(class AGbxPlayerController* GbxPC, class UMediaSource* MediaSource, bool bPlayOnceAndDestroy);
	class UGbxListItemText* STATIC_CreateTextListItemWithDelegates(const TScriptInterface<class UGbxList>& OwningList, class APlayerController* OwningPlayer, const struct FText& LabelText, const struct FScriptDelegate& ClickedDelegate, const struct FScriptDelegate& SelectedDelegate);
	class UGbxListItemText* STATIC_CreateTextListItem(const TScriptInterface<class UGbxList>& OwningList, class APlayerController* OwningPlayer, const struct FText& LabelText);
	class UGbxListItemNumber* STATIC_CreateNumberListItemWithDelegates(const TScriptInterface<class UGbxList>& OwningList, class APlayerController* OwningPlayer, const struct FText& LabelText, float InitialValue, float SliderMin, float SliderMax, float SliderStep, const struct FScriptDelegate& ChangedDelegate, const struct FScriptDelegate& SelectedDelegate);
	class UGbxListItemNumber* STATIC_CreateNumberListItem(const TScriptInterface<class UGbxList>& OwningList, class APlayerController* OwningPlayer, const struct FText& LabelText, float InitialValue, float SliderMin, float SliderMax, float SliderStep);
	class UGbxListItem* STATIC_CreateListItemWithDelegates(const TScriptInterface<class UGbxList>& OwningList, class APlayerController* OwningPlayer, class UClass* ItemClass, const struct FScriptDelegate& ClickedDelegate, const struct FScriptDelegate& SelectedDelegate);
	class UGbxListItem* STATIC_CreateListItem(const TScriptInterface<class UGbxList>& OwningList, class APlayerController* OwningPlayer, class UClass* ItemClass);
	class UGbxListItem* STATIC_CreateDefaultListItemWithDelegates(const TScriptInterface<class UGbxList>& OwningList, class APlayerController* OwningPlayer, const struct FScriptDelegate& ClickedDelegate, const struct FScriptDelegate& SelectedDelegate);
	class UGbxListItem* STATIC_CreateDefaultListItem(const TScriptInterface<class UGbxList>& OwningList, class APlayerController* OwningPlayer);
	class UGbxListItemComboBox* STATIC_CreateComboBoxListItemWithDelegates(const TScriptInterface<class UGbxList>& OwningList, class APlayerController* OwningPlayer, const struct FText& LabelText, TArray<struct FText> Items, int InitialIndex, const struct FScriptDelegate& ChangedDelegate, const struct FScriptDelegate& SelectedDelegate);
	class UGbxListItemComboBox* STATIC_CreateComboBoxListItem(const TScriptInterface<class UGbxList>& OwningList, class APlayerController* OwningPlayer, const struct FText& LabelText, TArray<struct FText> Items, int InitialIndex);
	class UGbxListItemBoolean* STATIC_CreateBooleanListItemWithDelegates(const TScriptInterface<class UGbxList>& OwningList, class APlayerController* OwningPlayer, const struct FText& LabelText, bool InitialValue, const struct FScriptDelegate& ChangedDelegate, const struct FScriptDelegate& SelectedDelegate);
	class UGbxListItemBoolean* STATIC_CreateBooleanListItem(const TScriptInterface<class UGbxList>& OwningList, class APlayerController* OwningPlayer, const struct FText& LabelText, bool InitialValue);
	class FString STATIC_AbbreviateNumberText(float ValueToFormat);
};


// Class GbxUI.GbxUIGlobals
// 0x0258 (0x0288 - 0x0030)
class UGbxUIGlobals : public UGbxDataAsset
{
public:
	class UGbxInputToGlyphMap*                         InputToGlyphMap;                                          // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGbxPlatformToGlyphMap*                      PlatformToGlyphMap;                                       // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultPlatformGlyphHeight;                               // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	class UGbxDialogBoxData*                           DialogBoxTemplates;                                       // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGbxListItemFactory*                         DefaultListItemFactory;                                   // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      FullScreenMovieWidget;                                    // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMediaPlayer*                                FullScreenMediaPlayer;                                    // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UGbxHUDData*>                         PersistentWidgetGroups;                                   // 0x0068(0x0010) (Edit, ZeroConstructor)
	double                                             MaxWidgetLoadTimePerFrameInMs;                            // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UGbxGFxContextualMenuData*                   GFxContextualMenuTemplate;                                // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      MarkupStartCharacter;                                     // 0x0088(0x0010) (Edit, ZeroConstructor)
	class FString                                      MarkupEndCharacter;                                       // 0x0098(0x0010) (Edit, ZeroConstructor)
	TMap<class FString, struct FTextMarkupDictionaryEntry> MarkupDictionary;                                         // 0x00A8(0x0050) (Edit, ZeroConstructor)
	struct FVector2D                                   DefaultGlyphSize;                                         // 0x00F8(0x0008) (Edit, IsPlainOldData)
	class FString                                      GlyphMarkupStartCharacter;                                // 0x0100(0x0010) (Edit, ZeroConstructor)
	class FString                                      GlyphMarkupEndCharacter;                                  // 0x0110(0x0010) (Edit, ZeroConstructor)
	TMap<struct FName, struct FText>                   ClosedCaptioningTable;                                    // 0x0120(0x0050) (Edit, ZeroConstructor)
	TArray<class UGbxMenuData*>                        AlwaysLoadedGFxMenus;                                     // 0x0170(0x0010) (Edit, ZeroConstructor)
	TArray<TSoftObjectPtr<class USwfMovie>>            AlwaysLoadedGFxMovies;                                    // 0x0180(0x0010) (Edit, ZeroConstructor)
	int                                                HintGlyphVSpace;                                          // 0x0190(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0194(0x0004) MISSED OFFSET
	TMap<TSoftObjectPtr<class UClass>, struct FGbxMenuSplitscreenLayouts> SplitscreenLayouts;                                       // 0x0198(0x0050) (Edit, ZeroConstructor)
	TMap<TSoftObjectPtr<class UClass>, struct FGbxDLCMenuSplitscreenLayouts> DLCSplitscreenLayouts;                                    // 0x01E8(0x0050) (Edit, ZeroConstructor, Transient)
	TMap<struct FSoftObjectPath, struct FGbxDLCMenuSplitscreenLayouts> SoftDLCSpltiscreenLayouts;                                // 0x0238(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxUIGlobals");
		return ptr;
	}

};


// Class GbxUI.GbxUmgMenuData
// 0x0010 (0x0058 - 0x0048)
class UGbxUmgMenuData : public UGbxMenuData
{
public:
	class UClass*                                      MenuClass;                                                // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGbxListItemFactory*                         ListItemFactory;                                          // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxUmgMenuData");
		return ptr;
	}

};


// Class GbxUI.GbxCascadingList
// 0x0060 (0x0318 - 0x02B8)
class UGbxCascadingList : public UGbxUserWidget
{
public:
	class UClass*                                      DefaultListItemClass;                                     // 0x02B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UGbxGridListWidget*>                  ListViews;                                                // 0x02C0(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor, Transient)
	struct FScriptDelegate                             OnItemSelected;                                           // 0x02D0(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnItemClicked;                                            // 0x02E0(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnItemCreated;                                            // 0x02F0(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
	class UGbxGridListWidget*                          ActiveList;                                               // 0x0300(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<struct FGbxCascadingListItemData>           NavigationStack;                                          // 0x0308(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxCascadingList");
		return ptr;
	}


	void SetActiveList(class UGbxGridListWidget* List);
	void PushItems(TArray<struct FGbxCascadingListItemData> Items);
	void Pop();
	void OnShiftListsForward();
	void OnShiftListsBack();
	void OnItemSelected_Internal(class UGbxListItem* Item);
	void OnItemClicked_Internal(class UGbxListItem* Item);
	bool HasItems();
	int GetStackDepth();
	void Clear();
};


// Class GbxUI.GbxComboBoxDropdownMenu
// 0x0028 (0x0318 - 0x02F0)
class UGbxComboBoxDropdownMenu : public UGbxUmgMenu
{
public:
	TArray<struct FGbxComboBoxItemInfo>                ChoiceListArray;                                          // 0x02F0(0x0010) (ZeroConstructor)
	class UWidget*                                     ChoiceListContainer;                                      // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxGridListWidget*                          ChoiceList;                                               // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UGbxComboBox>                 ComboBoxOwner;                                            // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxComboBoxDropdownMenu");
		return ptr;
	}


	void OnChoiceClicked(class UGbxListItem* ListItem);
	void DismissWithoutChanging();
};


// Class GbxUI.GbxComboBox
// 0x0070 (0x0358 - 0x02E8)
class UGbxComboBox : public UGbxListItem
{
public:
	class UClass*                                      DropdownMenuClass;                                        // 0x02E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   DropdownMenuOffset;                                       // 0x02F0(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FScriptDelegate                             OnComboChoiceChanged;                                     // 0x02F8(0x0014) (BlueprintVisible, ZeroConstructor, Transient, InstancedReference)
	TArray<struct FGbxComboBoxItemInfo>                ChoiceListArray;                                          // 0x0308(0x0010) (ZeroConstructor, Transient)
	int                                                CurrentChoiceReferenceIndex;                              // 0x0318(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FGeometry                                   LastKnownGeometry;                                        // 0x031C(0x0038) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0354(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxComboBox");
		return ptr;
	}


	void OnComboBoxClicked(class UGbxUserWidget* Widget, const struct FGbxMenuInputEvent& InputInfo);
	int GetCurentChoiceReferenceIndex();
};


// Class GbxUI.GbxCoreDialogBoxHelpers
// 0x0000 (0x0028 - 0x0028)
class UGbxCoreDialogBoxHelpers : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxCoreDialogBoxHelpers");
		return ptr;
	}


	class UGbxDialogBox* STATIC_ShowYesNoDialog(class AGbxPlayerController* pc, const struct FText& HeaderText, const struct FText& MessageText, bool bAnyUserCanInteract);
	class UGbxDialogBox* STATIC_ShowOkayDialog(class AGbxPlayerController* pc, const struct FText& HeaderText, const struct FText& MessageText, bool bAnyUserCanInteract, EGbxDialogBoxHelpersDialogTemplate Template);
	class UGbxDialogBox* STATIC_ShowDialog(class AGbxPlayerController* pc, const struct FGbxDialogBoxInfo& DialogBoxInfo);
	class UGbxDialogBox* STATIC_ShowConfirmCancelDialog(class AGbxPlayerController* pc, const struct FText& HeaderText, const struct FText& MessageText, bool bAnyUserCanInteract);
	class UGbxDialogBox* STATIC_ShowBlockingDialog(class AGbxPlayerController* pc, const struct FText& HeaderText, const struct FText& MessageText, bool bBlocksAllUsers);
};


// Class GbxUI.GbxCrosshairDataAsset
// 0x0020 (0x0050 - 0x0030)
class UGbxCrosshairDataAsset : public UGbxDataAsset
{
public:
	class FString                                      CrosshairFrameName;                                       // 0x0030(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      CrosshairActorClass;                                      // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHideMinSpreadReticle;                                    // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHideAccuracyReticle;                                     // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EChargeClipState                                   ChargeClipState;                                          // 0x004A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x004B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxCrosshairDataAsset");
		return ptr;
	}

};


// Class GbxUI.GbxMenuSwitcherMenuData
// 0x0010 (0x0068 - 0x0058)
class UGbxMenuSwitcherMenuData : public UGbxUmgMenuData
{
public:
	TArray<struct FGbxMenuSwitcherSubmenuInfo>         Submenus;                                                 // 0x0058(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxMenuSwitcherMenuData");
		return ptr;
	}

};


// Class GbxUI.GbxDebugMenuData
// 0x0000 (0x0068 - 0x0068)
class UGbxDebugMenuData : public UGbxMenuSwitcherMenuData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxDebugMenuData");
		return ptr;
	}

};


// Class GbxUI.GbxMenuSwitcher
// 0x0018 (0x0308 - 0x02F0)
class UGbxMenuSwitcher : public UGbxUmgMenu
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x02F0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxMenuSwitcher");
		return ptr;
	}


	void SwitchToPage(const struct FName& SubMenuId);
	void PrevPage();
	void NextPage();
	struct FName GetCurrentSubmenuId();
};


// Class GbxUI.GbxDebugMenu
// 0x0028 (0x0330 - 0x0308)
class UGbxDebugMenu : public UGbxMenuSwitcher
{
public:
	class UGbxGridListWidget*                          CategoryList;                                             // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UBUTTON*                                     CloseButton;                                              // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UPanelWidget*                                SubmenuContainer;                                         // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<struct FName>                               HiddenSubmenus;                                           // 0x0320(0x0010) (ZeroConstructor, Config, GlobalConfig)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxDebugMenu");
		return ptr;
	}


	void OnCloseClicked();
	void OnCategorySelected(class UGbxUserWidget* Widget, const struct FGbxMenuInputEvent& InputInfo);
};


// Class GbxUI.GbxDebugRumbleMenu
// 0x0040 (0x0338 - 0x02F8)
class UGbxDebugRumbleMenu : public UGbxDebugMenuSubmenu
{
public:
	float                                              SliderStepSize;                                           // 0x02F8(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02FC(0x0004) MISSED OFFSET
	class UGbxScrollBoxList*                           ContentPanel;                                             // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxListItemNumber*                          LeftLargeSlider;                                          // 0x0308(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UGbxListItemNumber*                          LeftSmallSlider;                                          // 0x0310(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UGbxListItemNumber*                          RightLargeSlider;                                         // 0x0318(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UGbxListItemNumber*                          RightSmallSlider;                                         // 0x0320(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0328(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxDebugRumbleMenu");
		return ptr;
	}


	void OnSliderValueChanged(class UGbxListItem* Item);
};


// Class GbxUI.GbxDialogBoxData
// 0x0070 (0x00C8 - 0x0058)
class UGbxDialogBoxData : public UGbxUmgMenuData
{
public:
	struct FGbxDialogBoxInfo                           DialogInfo;                                               // 0x0058(0x0060) (Transient)
	TArray<struct FGbxDialogBoxTemplateMapItem>        Templates;                                                // 0x00B8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxDialogBoxData");
		return ptr;
	}

};


// Class GbxUI.GbxDialogBox
// 0x00E0 (0x03D0 - 0x02F0)
class UGbxDialogBox : public UGbxUmgMenu
{
public:
	bool                                               bWantsToDismiss;                                          // 0x02F0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02F1(0x0007) MISSED OFFSET
	struct FText                                       HeaderText;                                               // 0x02F8(0x0028) (Transient)
	struct FText                                       BodyText;                                                 // 0x0310(0x0028) (Transient)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x0328(0x00A0) MISSED OFFSET
	class UGbxScrollBoxList*                           ChoiceList;                                               // 0x03C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxDialogBox");
		return ptr;
	}


	void UpdateText(const struct FText& NewHeaderText, const struct FText& NewBodyText);
	void SetupDialog(const struct FGbxDialogBoxInfo& DialogBoxInfo);
	void SetHeaderTextFormatArg(const class FString& ArgName, const struct FText& ReplacementText);
	void SetHeaderText(const struct FText& NewText, bool bClearFormatArgs);
	void SetBodyTextFormatArg(const class FString& ArgName, const struct FText& ReplacementText);
	void SetBodyText(const struct FText& NewText, bool bClearFormatArgs);
	void OnChoiceClicked(class UGbxListItem* ClickedItem);
	void Dismiss();
};


// Class GbxUI.GbxDialogBoxChoiceWidget
// 0x0008 (0x02F0 - 0x02E8)
class UGbxDialogBoxChoiceWidget : public UGbxListItem
{
public:
	struct FName                                       ChoiceNameId;                                             // 0x02E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxDialogBoxChoiceWidget");
		return ptr;
	}

};


// Class GbxUI.GbxDragDropContainerInterface
// 0x0000 (0x0028 - 0x0028)
class UGbxDragDropContainerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxDragDropContainerInterface");
		return ptr;
	}

};


// Class GbxUI.GbxFocusableWidgetStyleData
// 0x0190 (0x01C0 - 0x0030)
class UGbxFocusableWidgetStyleData : public UGbxDataAsset
{
public:
	TArray<struct FGbxFocusableWidgetItemStyle>        Styles;                                                   // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FGbxFocusableWidgetItemStyle                DefaultFocusedStyle;                                      // 0x0040(0x00C0) (Edit, DisableEditOnInstance)
	struct FGbxFocusableWidgetItemStyle                DefaultNotFocusedStyle;                                   // 0x0100(0x00C0) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxFocusableWidgetStyleData");
		return ptr;
	}

};


// Class GbxUI.GbxFocusableWidget
// 0x0000 (0x0028 - 0x0028)
class UGbxFocusableWidget : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxFocusableWidget");
		return ptr;
	}


	void SetFocusableWidgetEnabled(bool bEnabled);
	bool IsFocusableWidgetFocused();
	bool IsFocusableWidgetEnabled();
	EGbxFocusableWidgetState GetFocusableWidgetState();
};


// Class GbxUI.GbxFullScreenMovie
// 0x0008 (0x02C0 - 0x02B8)
class UGbxFullScreenMovie : public UGbxUserWidget
{
public:
	class UMediaPlayer*                                CurrentPlayer;                                            // 0x02B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxFullScreenMovie");
		return ptr;
	}


	void OnMovieFinishedPlaying();
};


// Class GbxUI.GbxGFxContextualMenuData
// 0x0080 (0x0140 - 0x00C0)
class UGbxGFxContextualMenuData : public UGbxGFxMenuData
{
public:
	struct FContextualMenuInfo                         ContextualMenuInfo;                                       // 0x00C0(0x0080) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxGFxContextualMenuData");
		return ptr;
	}

};


// Class GbxUI.GbxGFxContextualMenu
// 0x00E0 (0x0760 - 0x0680)
class UGbxGFxContextualMenu : public UGbxGFxMenu
{
public:
	TArray<struct FGbxGFxContextualMenuLocTableData>   LocTable;                                                 // 0x0680(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)
	class UGFxObject*                                  ContextualMenu;                                           // 0x0690(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxGridScrollingList*                    ContentPanel;                                             // 0x0698(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               ToolTipsTextField;                                        // 0x06A0(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x06A8(0x0020) MISSED OFFSET
	struct FText                                       RemoveFriendText;                                         // 0x06C8(0x0028) (BlueprintReadOnly, Config)
	struct FText                                       AddShiftFriendText;                                       // 0x06E0(0x0028) (BlueprintReadOnly, Config)
	struct FText                                       RemoveShiftFriendText;                                    // 0x06F8(0x0028) (BlueprintReadOnly, Config)
	struct FText                                       BlockShiftUserText;                                       // 0x0710(0x0028) (BlueprintReadOnly, Config)
	struct FText                                       UnblockShiftUserText;                                     // 0x0728(0x0028) (BlueprintReadOnly, Config)
	struct FText                                       ReportShiftPlayerText;                                    // 0x0740(0x0028) (BlueprintReadOnly, Config)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0758(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxGFxContextualMenu");
		return ptr;
	}


	void OnSelectionChanged(class UGbxGFxListCell* Item);
	void OnContextualMenuItemClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo);
};


// Class GbxUI.GbxGFxContextualMenuHelpers
// 0x0000 (0x0028 - 0x0028)
class UGbxGFxContextualMenuHelpers : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxGFxContextualMenuHelpers");
		return ptr;
	}

};


// Class GbxUI.GbxGFxDragDropManager
// 0x0088 (0x00B0 - 0x0028)
class UGbxGFxDragDropManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0028(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxGFxDragDropManager");
		return ptr;
	}


	void OnDropButtonUnhovered(class UGbxGFxButton* UnhoveredButton, const struct FGbxMenuInputEvent& InputInfo);
	void OnDropButtonHovered(class UGbxGFxButton* HoveredButton, const struct FGbxMenuInputEvent& InputInfo);
};


// Class GbxUI.GbxGFxDropDownList
// 0x0080 (0x01F0 - 0x0170)
class UGbxGFxDropDownList : public UGbxGFxObject
{
public:
	class UGbxTextField*                               CurrentSelectionText;                                     // 0x0170(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxSlider*                               ListScrollBar;                                            // 0x0178(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxButton*                               DropDownButton;                                           // 0x0180(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxButton*                               TopButton;                                                // 0x0188(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               DropDownListContainer;                                    // 0x0190(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxComboBoxScrollingList*                DropDownList;                                             // 0x0198(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x01A0(0x0008) MISSED OFFSET
	TArray<struct FText>                               EntriesList;                                              // 0x01A8(0x0010) (ZeroConstructor, Transient)
	struct FText                                       CurrentlySelectedEntry;                                   // 0x01B8(0x0028) (Transient)
	unsigned char                                      UnknownData01[0x20];                                      // 0x01D0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxGFxDropDownList");
		return ptr;
	}


	void OnEntryClicked(class UGbxGFxButton* BUTTON, const struct FGbxMenuInputEvent& InputInfo);
	void OnDropDownButtonClicked(class UGbxGFxButton* BUTTON, const struct FGbxMenuInputEvent& InputInfo);
};


// Class GbxUI.GbxGFxComboBoxScrollingList
// 0x0010 (0x0330 - 0x0320)
class UGbxGFxComboBoxScrollingList : public UGbxGFxGridScrollingList
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0320(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxGFxComboBoxScrollingList");
		return ptr;
	}

};


// Class GbxUI.GbxGFxHintBarContainer
// 0x0020 (0x0340 - 0x0320)
class UGbxGFxHintBarContainer : public UGbxGFxGridScrollingList
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0320(0x0008) MISSED OFFSET
	TWeakObjectPtr<class UGbxHintBar>                  HintBarOwningBar;                                         // 0x0328(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class AGbxPlayerController>         HintBarOwnerPC;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0338(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxGFxHintBarContainer");
		return ptr;
	}

};


// Class GbxUI.GbxGFxHintWidget
// 0x00C0 (0x03D0 - 0x0310)
class UGbxGFxHintWidget : public UGbxGFxListCell
{
public:
	TWeakObjectPtr<class UGbxHintBar>                  HintBarOwnerBar;                                          // 0x0310(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class AGbxPlayerController>         HintBarOwnerPC;                                           // 0x0318(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FGbxHintInfo                                HintBarHintInfo;                                          // 0x0320(0x0040) (Transient)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0360(0x0018) MISSED OFFSET
	class UGbxTextField*                               HintText;                                                 // 0x0378(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               HoldToPressBar;                                           // 0x0380(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxProgressBar*                          HoldToPressGamepad;                                       // 0x0388(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxProgressBar*                          HoldToPressKeyboard;                                      // 0x0390(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxProgressBar*                          HoldToPressKeyboardWide;                                  // 0x0398(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxProgressBar*                          HoldToPressKeyboardXWide;                                 // 0x03A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               HintCaret;                                                // 0x03A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHasInitialHintTextWidth;                                 // 0x03B0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03B1(0x0003) MISSED OFFSET
	float                                              InitialHintTextWidth;                                     // 0x03B4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	EHoldToPressGlyphType                              HoldToPressType;                                          // 0x03B8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03B9(0x0003) MISSED OFFSET
	float                                              ManualPressToHoldProgress;                                // 0x03BC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHasBroadcastPressToHoldEvent;                            // 0x03C0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsHintVisible;                                           // 0x03C1(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsAvailable;                                             // 0x03C2(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bInputNeedsResetBeforeShowingProgress;                    // 0x03C3(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              ExternalHintHeldProgress;                                 // 0x03C4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxGFxHintWidget");
		return ptr;
	}


	void OnThisHintClicked(class UGbxGFxButton* BUTTON, const struct FGbxMenuInputEvent& InputInfo);
};


// Class GbxUI.GbxGFxListItemComboBox
// 0x0030 (0x0350 - 0x0320)
class UGbxGFxListItemComboBox : public UGbxGFxListCellWithData
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0320(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxGFxListItemComboBox");
		return ptr;
	}


	void OnSelectionUpdated(class UGbxGFxListCell* Item);
	void OnOwningListSelectionChanged(class UGbxGFxListCell* Item);
	void OnDropDownButtonClicked();
};


// Class GbxUI.GbxGFxListItemControls
// 0x0080 (0x03A0 - 0x0320)
class UGbxGFxListItemControls : public UGbxGFxListCellWithData
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0320(0x0040) MISSED OFFSET
	class UGbxTextField*                               TitleItem;                                                // 0x0360(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               BadBindingIcon;                                           // 0x0368(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               RebindButton;                                             // 0x0370(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               LinkedRebindButton;                                       // 0x0378(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0380(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxGFxListItemControls");
		return ptr;
	}

};


// Class GbxUI.GbxGFxMediaPlayer
// 0x0070 (0x0098 - 0x0028)
class UGbxGFxMediaPlayer : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnMovieStartedPlaying;                                    // 0x0028(0x0010) (ZeroConstructor, Transient, InstancedReference)
	struct FScriptMulticastDelegate                    OnMovieStoppedPlaying;                                    // 0x0038(0x0010) (ZeroConstructor, Transient, InstancedReference)
	struct FGbxGFxMediaPlayerConfig                    PlayerConfig;                                             // 0x0048(0x0030) (Transient)
	struct FGbxGFxMaterialRenderer                     MaterialRenderer;                                         // 0x0078(0x0018) (Transient)
	class UMediaPlayer*                                MediaPlayer;                                              // 0x0090(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxGFxMediaPlayer");
		return ptr;
	}


	void OnMovieTracksChanged();
	void OnMovieSeekCompleted();
	void OnMoviePlaybackSuspended();
	void OnMoviePlaybackResumed();
	void OnMovieMediaOpenFailed(const class FString& FailedUrl);
	void OnMovieMediaOpened(const class FString& OpenedUrl);
	void OnMovieMediaClosed();
	void OnMovieEndReached();
	void GbxGFxMediaPlayerEvent__DelegateSignature();
};


// Class GbxUI.GbxGFxMenuSwitcherNavCell
// 0x0020 (0x0330 - 0x0310)
class UGbxGFxMenuSwitcherNavCell : public UGbxGFxListCell
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0310(0x0018) MISSED OFFSET
	bool                                               bOuterFocusedState;                                       // 0x0328(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0329(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxGFxMenuSwitcherNavCell");
		return ptr;
	}

};


// Class GbxUI.GbxGFxMenuSwitcherNavWidget
// 0x0090 (0x0200 - 0x0170)
class UGbxGFxMenuSwitcherNavWidget : public UGbxGFxObject
{
public:
	struct FScriptDelegate                             OnNavTabClickedDelegate;                                  // 0x0170(0x0014) (ZeroConstructor, Transient, InstancedReference)
	class UGbxGFxHintWidget*                           PrevTabHintClip;                                          // 0x0180(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxHintWidget*                           NextTabHintClip;                                          // 0x0188(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxGridScrollingList*                    NavListClip;                                              // 0x0190(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0198(0x0030) MISSED OFFSET
	EGbxGFxMenuSwitchNavWidgetType                     NavType;                                                  // 0x01C8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0198(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData02[0x4];                                       // 0x01CC(0x0004) MISSED OFFSET
	TArray<struct FGbxGFxMenuSwitcherSubmenuInfo>      NavListSubmenuDatas;                                      // 0x01D0(0x0010) (ZeroConstructor, Transient)
	TArray<struct FGbxGFxMenuSwitcherNavWidgetCustomItem> NavListItemDatas;                                         // 0x01E0(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x10];                                      // 0x01F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxGFxMenuSwitcherNavWidget");
		return ptr;
	}


	void OnTabClicked(class UGbxGFxButton* BUTTON, const struct FGbxMenuInputEvent& InputInfo);
};


// Class GbxUI.GbxGFxSprite
// 0x0010 (0x0180 - 0x0170)
class UGbxGFxSprite : public UGbxGFxObject
{
public:
	class UGbxGFxObject*                               Graphics;                                                 // 0x0170(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0178(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxGFxSprite");
		return ptr;
	}

};


// Class GbxUI.GbxGFxMouseBlocker
// 0x0000 (0x0180 - 0x0180)
class UGbxGFxMouseBlocker : public UGbxGFxSprite
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxGFxMouseBlocker");
		return ptr;
	}

};


// Class GbxUI.GbxGFxMouseCapturePanel
// 0x00E0 (0x0250 - 0x0170)
class UGbxGFxMouseCapturePanel : public UGbxGFxObject
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0170(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxGFxMouseCapturePanel");
		return ptr;
	}

};


// Class GbxUI.GbxGFxRechargeableProgressBar
// 0x0020 (0x0340 - 0x0320)
class UGbxGFxRechargeableProgressBar : public UGbxGFxProgressBar
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0320(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxGFxRechargeableProgressBar");
		return ptr;
	}

};


// Class GbxUI.GbxGFxSlider
// 0x00C0 (0x0390 - 0x02D0)
class UGbxGFxSlider : public UGbxGFxButton
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x02D0(0x0008) MISSED OFFSET
	class UGbxGFxButton*                               UpOrLeftButton;                                           // 0x02D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxButton*                               DownOrRightButton;                                        // 0x02E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxButton*                               SliderThumb;                                              // 0x02E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxButton*                               SliderTrack;                                              // 0x02F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               SliderTrackButton;                                        // 0x02F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               MaskFill;                                                 // 0x0300(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               SliderDefaultThumb;                                       // 0x0308(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x80];                                      // 0x0310(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxGFxSlider");
		return ptr;
	}


	void GbxGFxSliderUpdateEvent__DelegateSignature(float SliderPercent);
	void EndSlide(class UGbxGFxButton* BUTTON, const struct FGbxMenuInputEvent& InputInfo);
	void BeginRightSlide(class UGbxGFxButton* BUTTON, const struct FGbxMenuInputEvent& InputInfo);
	void BeginLeftSlide(class UGbxGFxButton* BUTTON, const struct FGbxMenuInputEvent& InputInfo);
};


// Class GbxUI.GbxGridListWidget
// 0x00A0 (0x01E8 - 0x0148)
class UGbxGridListWidget : public UGridPanel
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0148(0x0018) MISSED OFFSET
	int                                                SelectedColumn;                                           // 0x0160(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                SelectedRow;                                              // 0x0164(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                SelectedIndexWhenFocusWasLost;                            // 0x0168(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UGbxUmgMenu>                  MenuThatOwnsFocus;                                        // 0x016C(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	int                                                GridColumns;                                              // 0x0174(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                GridRows;                                                 // 0x0178(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EGbxGridWidgetFill                                 GridFill;                                                 // 0x017C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x017D(0x0003) MISSED OFFSET
	struct FScriptDelegate                             SelectionChangedDelegate;                                 // 0x0180(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             ItemClickedDelegate;                                      // 0x0190(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
	EGbxListWrapMode                                   RowWrapMode;                                              // 0x01A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EGbxListWrapMode                                   ColumnWrapMode;                                           // 0x01A1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EGbxFocusableWidgetMouseBehavior                   DefaultItemSelectionBehavior;                             // 0x01A2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x01A3(0x0005) MISSED OFFSET
	class UGbxListItemFactory*                         ListItemFactory;                                          // 0x01A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DefaultListItemClass;                                     // 0x01B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EGbxListFocusChangedAction                         FocusChangeAction;                                        // 0x01B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRegisterAsFocusableWidget;                               // 0x01B9(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x01BA(0x0006) MISSED OFFSET
	struct FName                                       FocusableWidgetNavUp;                                     // 0x01C0(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FName                                       FocusableWidgetNavDown;                                   // 0x01C8(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FName                                       FocusableWidgetNavLeft;                                   // 0x01D0(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FName                                       FocusableWidgetNavRight;                                  // 0x01D8(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bFocusOnMenuCreation;                                     // 0x01E0(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x01E1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxGridListWidget");
		return ptr;
	}

};


// Class GbxUI.GbxGuidePanel
// 0x0000 (0x0128 - 0x0128)
class UGbxGuidePanel : public UCanvasPanel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxGuidePanel");
		return ptr;
	}

};


// Class GbxUI.GbxHintBarWidgetContainer
// 0x0000 (0x0028 - 0x0028)
class UGbxHintBarWidgetContainer : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxHintBarWidgetContainer");
		return ptr;
	}


	void HintBarSetVisible(bool bVisible);
	void HintBarInitOwnerInfo(class UGbxHintBar* HintBarOwner, class AGbxPlayerController* PlayerControllerContext);
	void HintBarClearAllHints();
	void HintBarAppendHint(const struct FGbxHintInfo& HintInfo);
};


// Class GbxUI.GbxHintBar
// 0x0080 (0x00A8 - 0x0028)
class UGbxHintBar : public UObject
{
public:
	class UObject*                                     Container;                                                // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	TScriptInterface<class UGbxHintBarWidgetContainer> ContainerInterface;                                       // 0x0040(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGbxMenu>                   MenuOwner;                                                // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGbxHintInfo>                        HintInfos;                                                // 0x0060(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0070(0x0010) MISSED OFFSET
	TArray<struct FGbxHintWidgetMapItem>               StagePlacedHints;                                         // 0x0080(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0090(0x0010) MISSED OFFSET
	bool                                               bAreHintsVisible;                                         // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsInputBlocked;                                          // 0x00A1(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHideOnOwnerMenuDeactivate;                               // 0x00A2(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bSendInputActionEvenIfOwnerIsDeactivated;                 // 0x00A3(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxHintBar");
		return ptr;
	}


	void OnHintClicked(const struct FName& InputAction, bool bHeld);
};


// Class GbxUI.GbxHintWidget
// 0x0000 (0x0028 - 0x0028)
class UGbxHintWidget : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxHintWidget");
		return ptr;
	}


	void HintWidgetSetVisible(bool bVisible);
	void HintWidgetSetInfo(const struct FGbxHintInfo& HintInfo);
	void HintWidgetInitOwnerInfo(class UGbxHintBar* HintBarOwner, class AGbxPlayerController* PlayerControllerContext);
};


// Class GbxUI.GbxHUDData
// 0x00A8 (0x00D8 - 0x0030)
class UGbxHUDData : public UGbxDataAsset
{
public:
	class UClass*                                      ContainerClass;                                           // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FGbxGFxHUDWidgetInfo>                Widgets;                                                  // 0x0038(0x0010) (Edit, ZeroConstructor)
	struct FGbxHUDLayoutData                           StandardLayout;                                           // 0x0048(0x0010) (Edit)
	struct FGbxHUDLayoutData                           TwoPlayerHorizontalLayout;                                // 0x0058(0x0010) (Edit)
	struct FGbxHUDLayoutData                           TwoPlayerVerticalLayout;                                  // 0x0068(0x0010) (Edit)
	struct FGbxHUDLayoutData                           FourPlayerLayout;                                         // 0x0078(0x0010) (Edit)
	struct FGbxHUDLayoutData                           StandardLayoutGearUpMode;                                 // 0x0088(0x0010) (Edit)
	struct FGbxHUDLayoutData                           TwoPlayerHorizontalLayoutGearUpMode;                      // 0x0098(0x0010) (Edit)
	struct FGbxHUDLayoutData                           TwoPlayerVerticalLayoutGearUpMode;                        // 0x00A8(0x0010) (Edit)
	struct FGbxHUDLayoutData                           FourPlayerLayoutGearUpMode;                               // 0x00B8(0x0010) (Edit)
	class UGbxGFxHUDFeedbackData*                      FeedbackData;                                             // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UGbxHUDStateData*                            StartState;                                               // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxHUDData");
		return ptr;
	}

};


// Class GbxUI.HUDDataProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UHUDDataProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.HUDDataProviderInterface");
		return ptr;
	}

};


// Class GbxUI.GbxGFxHUDFeedbackData
// 0x0010 (0x0098 - 0x0088)
class UGbxGFxHUDFeedbackData : public UGbxHUDFeedbackData
{
public:
	TArray<TSoftObjectPtr<class UClass>>               ValidWidgetTypes;                                         // 0x0088(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxGFxHUDFeedbackData");
		return ptr;
	}

};


// Class GbxUI.GbxHUDStateData
// 0x0028 (0x0058 - 0x0030)
class UGbxHUDStateData : public UGbxDataAsset
{
public:
	struct FName                                       StateName;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EHUDInitializationAnimationSet                     InitializationAnimSet;                                    // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EGbxHUDStateListType                               ListType;                                                 // 0x0039(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	TArray<TSoftObjectPtr<class UClass>>               ValidWidgetTypes;                                         // 0x0040(0x0010) (Edit, ZeroConstructor)
	bool                                               StayOnTopOfStack;                                         // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxHUDStateData");
		return ptr;
	}

};


// Class GbxUI.GbxList
// 0x0000 (0x0028 - 0x0028)
class UGbxList : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxList");
		return ptr;
	}


	void TryToAcquireMenuFocus(bool bFromMouse);
	void SetSelectionChangedDelegate(const struct FScriptDelegate& InSelectionChangedDelegate);
	void SetSelectedItem(class UGbxListItem* Item, bool bScrollIntoView, bool bAnimateScroll);
	void SetSelectedIndex(int NewSelection, bool bScrollIntoView, bool bAnimateScroll);
	void SetItemClickedDelegate(const struct FScriptDelegate& InItemClickedDelegate);
	void RemoveListItem(class UGbxListItem* Item);
	void RemoveAllListItems();
	void OnItemClicked(class UGbxListItem* Item);
	bool MoveSelectionUp();
	bool MoveSelectionRight();
	bool MoveSelectionLeft();
	bool MoveSelectionDown();
	bool IsListFocused();
	bool IsListEnabled();
	void InsertListItem(class UGbxListItem* Item);
	class UGbxListItem* GetSelectedItem();
	int GetSelectedIndex();
	int GetNumItemsInList();
	class UGbxListItemFactory* GetListItemFactory();
	class UGbxListItem* GetItemAtIndex(int Index);
	class UClass* GetDefaultItemClass();
};


// Class GbxUI.GbxListItemBoolean
// 0x0008 (0x02F0 - 0x02E8)
class UGbxListItemBoolean : public UGbxListItem
{
public:
	class UCheckBox*                                   ValueCheckBox;                                            // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxListItemBoolean");
		return ptr;
	}


	void SetChecked(bool bChecked);
	bool IsChecked();
	void HandleFocusableWidgetPressed(const struct FGbxMenuInputEvent& InputInfo);
};


// Class GbxUI.GbxListItemComboBox
// 0x0018 (0x0300 - 0x02E8)
class UGbxListItemComboBox : public UGbxListItem
{
public:
	class UComboBoxString*                             ValueComboBox;                                            // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnComboBoxSelectionChanged;                               // 0x02F0(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxListItemComboBox");
		return ptr;
	}


	void SetSelectedOptionIndex(int Index);
	void SelectPreviousOption();
	void SelectNextOption();
	void OnValueComboBoxChanged(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void ListItemComboBoxSelectionChangedDelegate__DelegateSignature(int NewSelectedIndex);
	void InitializeComboBox(TArray<struct FText> Items, int InitialValue);
	int GetSelectedOptionIndex();
};


// Class GbxUI.GbxListItemFactory
// 0x0028 (0x0058 - 0x0030)
class UGbxListItemFactory : public UDataAsset
{
public:
	class UClass*                                      DefaultListItem;                                          // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      BasicTextListItem;                                        // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      BooleanListItem;                                          // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      NumberListItem;                                           // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ComboBoxListItem;                                         // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxListItemFactory");
		return ptr;
	}


	class UGbxListItemText* CreateTextItem(class APlayerController* Owner, const TScriptInterface<class UGbxList>& Parent, const struct FText& LabelText, const struct FScriptDelegate& ClickedDelegate, const struct FScriptDelegate& SelectedDelegate);
	class UGbxListItemNumber* CreateNumberItem(class APlayerController* Owner, const TScriptInterface<class UGbxList>& Parent, const struct FText& LabelText, float InitialValue, float SliderMin, float SliderMax, float SliderStep, const struct FScriptDelegate& ChangedDelegate, const struct FScriptDelegate& SelectedDelegate);
	class UGbxListItem* STATIC_CreateItemWithDelegates(class APlayerController* Owner, const TScriptInterface<class UGbxList>& Parent, class UClass* ItemClass, const struct FScriptDelegate& ClickedDelegate, const struct FScriptDelegate& SelectedDelegate);
	class UGbxListItem* STATIC_CreateItem(class APlayerController* Owner, const TScriptInterface<class UGbxList>& Parent, class UClass* ItemClass);
	class UGbxListItemComboBox* CreateComboBoxItem(class APlayerController* Owner, const TScriptInterface<class UGbxList>& Parent, const struct FText& LabelText, TArray<struct FText> Items, int InitialIndex, const struct FScriptDelegate& ChangedDelegate, const struct FScriptDelegate& SelectedDelegate);
	class UGbxListItemBoolean* CreateBooleanItem(class APlayerController* Owner, const TScriptInterface<class UGbxList>& Parent, const struct FText& LabelText, bool InitialValue, const struct FScriptDelegate& ChangedDelegate, const struct FScriptDelegate& SelectedDelegate);
};


// Class GbxUI.GbxListItemNumber
// 0x0030 (0x0318 - 0x02E8)
class UGbxListItemNumber : public UGbxListItem
{
public:
	class USlider*                                     ValueSlider;                                              // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x02F0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxListItemNumber");
		return ptr;
	}


	void OnSliderValueChanged(float NewPosition);
	void IncrementSlider();
	float GetCurrentValue();
	void DecrementSlider();
};


// Class GbxUI.GbxMenu
// 0x0000 (0x0028 - 0x0028)
class UGbxMenu : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxMenu");
		return ptr;
	}

};


// Class GbxUI.GbxMenuInputSettings
// 0x0040 (0x0068 - 0x0028)
class UGbxMenuInputSettings : public UObject
{
public:
	struct FGbxMenuKeyRepeatInfo                       KeyRepeatConfig;                                          // 0x0028(0x0018) (Edit, Transient, Config)
	float                                              AxisAsButtonThreshold;                                    // 0x0040(0x0004) (Edit, ZeroConstructor, Transient, Config, IsPlainOldData)
	float                                              AxisThreshold;                                            // 0x0044(0x0004) (Edit, ZeroConstructor, Transient, Config, IsPlainOldData)
	TArray<struct FGbxMenuInputAction>                 ActionMappings;                                           // 0x0048(0x0010) (Edit, ZeroConstructor, Transient, Config)
	TArray<struct FGbxMenuInputAxisAction>             AxisMappings;                                             // 0x0058(0x0010) (Edit, ZeroConstructor, Transient, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxMenuInputSettings");
		return ptr;
	}

};


// Class GbxUI.GbxMenuInput
// 0x00C8 (0x00F0 - 0x0028)
class UGbxMenuInput : public UObject
{
public:
	struct FScriptDelegate                             UnpairedInputHandlerDelegate;                             // 0x0028(0x0014) (ZeroConstructor, Transient, InstancedReference)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
	bool                                               bShowDebugKeyStates;                                      // 0x0048(0x0001) (ZeroConstructor, Transient, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	int                                                FramesToIgnoreMouseMoves;                                 // 0x004C(0x0004) (ZeroConstructor, Transient, Config, IsPlainOldData)
	TArray<TScriptInterface<class UGbxMenuInputListener>> InputListeners;                                           // 0x0050(0x0010) (ZeroConstructor, Transient)
	struct FGbxMenuKeyRepeatInfo                       KeyRepeatConfig;                                          // 0x0060(0x0018) (Transient)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0078(0x0020) MISSED OFFSET
	float                                              AxisAsButtonThreshold;                                    // 0x0098(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              AxisThreshold;                                            // 0x009C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FGbxMenuInputAction>                 ActionMappings;                                           // 0x00A0(0x0010) (ZeroConstructor, Transient)
	TArray<struct FGbxMenuInputAxisAction>             AxisMappings;                                             // 0x00B0(0x0010) (ZeroConstructor, Transient)
	TArray<struct FGbxMenuInputRawMousePos>            MousePoses;                                               // 0x00C0(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x20];                                      // 0x00D0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxMenuInput");
		return ptr;
	}

};


// Class GbxUI.GbxMenuInputListener
// 0x0000 (0x0028 - 0x0028)
class UGbxMenuInputListener : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxMenuInputListener");
		return ptr;
	}

};


// Class GbxUI.GbxMenuStackMenuInfo
// 0x0018 (0x0040 - 0x0028)
class UGbxMenuStackMenuInfo : public UBaseMenuStackMenuInfo
{
public:
	TScriptInterface<class UGbxMenu>                   MenuObject;                                               // 0x0028(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxMenuData*                                MenuData;                                                 // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxMenuStackMenuInfo");
		return ptr;
	}

};


// Class GbxUI.GbxMenuStack
// 0x0160 (0x0188 - 0x0028)
class UGbxMenuStack : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TWeakObjectPtr<class AGbxPlayerController>         PCOwner;                                                  // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UGbxMenuInput>                MenuInput;                                                // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UGbxMenuStackMenuInfo*>               MenuStack;                                                // 0x0040(0x0010) (ZeroConstructor, Transient)
	TArray<class UGbxMenuStackMenuInfo*>               MenuDeleteList;                                           // 0x0050(0x0010) (ZeroConstructor, Transient)
	TArray<struct FGbxMenuInputEvent>                  QueuedInputActions;                                       // 0x0060(0x0010) (ZeroConstructor, Transient)
	TArray<struct FGbxMenuInputEvent>                  UnpairedInputCache;                                       // 0x0070(0x0010) (ZeroConstructor, Transient)
	TArray<struct FGbxMenuAxisInputEvent>              QueuedAxisInputActions;                                   // 0x0080(0x0010) (ZeroConstructor, Transient)
	TArray<class UGbxMenuStackMenuInfo*>               PopupMenus;                                               // 0x0090(0x0010) (ZeroConstructor, Transient)
	int                                                PriorityBase;                                             // 0x00A0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                PriorityDelta;                                            // 0x00A4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                PopupMenuPriorityBase;                                    // 0x00A8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bStackHasChanged;                                         // 0x00AC(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsTicking;                                               // 0x00AD(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsDoingMenuInit;                                         // 0x00AE(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsDoingMenuDeinit;                                       // 0x00AF(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsDoingMenuDeactivate;                                   // 0x00B0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	float                                              AxisAsButtonThreshold;                                    // 0x00B4(0x0004) (ZeroConstructor, Transient, Config, IsPlainOldData)
	EGbxMenuInputDevice                                CurrentInputDevice;                                       // 0x00B8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bLastInputFromMouse;                                      // 0x00B9(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x00BA(0x0002) MISSED OFFSET
	int                                                BlockAllRawInput;                                         // 0x00BC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsProcessingInput;                                       // 0x00C0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bProcessingInputCancelled;                                // 0x00C1(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bStackHidden;                                             // 0x00C2(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x65];                                      // 0x00C3(0x0065) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPrePushMenuDelegate;                                    // 0x0128(0x0010) (ZeroConstructor, Transient, InstancedReference)
	struct FScriptMulticastDelegate                    OnMenuActivatedDelegate;                                  // 0x0138(0x0010) (ZeroConstructor, Transient, InstancedReference)
	struct FScriptMulticastDelegate                    OnStackEmptied;                                           // 0x0148(0x0010) (ZeroConstructor, Transient, InstancedReference)
	TArray<class UGbxMenuData*>                        PassiveMenuLoadQueue;                                     // 0x0158(0x0010) (ZeroConstructor)
	class UGbxMenuStackMenuInfo*                       PassiveLoadingMenu;                                       // 0x0168(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0170(0x0010) MISSED OFFSET
	class UGbxGameInstance*                            CachedGameInstance;                                       // 0x0180(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxMenuStack");
		return ptr;
	}


	void Tick(float DeltaTime);
	class UObject* SwitchTo(class UGbxMenuData* MenuData);
	void SetBlockingMode(bool bShouldBlock);
	void SetBlockAllRawInput(bool bShouldBlock);
	class UObject* Push(class UGbxMenuData* MenuData);
	class UObject* PopToSwitchTo(class UObject* Menu, class UGbxMenuData* MenuData);
	void PopTo(class UObject* Menu);
	void Pop();
	int Num();
	void HandleRawInput(const struct FKey& Key, TEnumAsByte<EInputEvent> EVENTTYPE, int ControllerId);
	class UObject* GetTopMenu();
	class UObject* GetMenuAtIndex(int Index);
	int GetIndexOfMenu(class UObject* Menu);
	EGbxMenuInputDevice GetCurrentInputDevice();
	void Draw();
	void Clear();
};


// Class GbxUI.GbxMeshWidget
// 0x0028 (0x0128 - 0x0100)
class UGbxMeshWidget : public UWidget
{
public:
	class USlateVectorArtData*                         MeshData;                                                 // 0x0100(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxNumUnits;                                              // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x010C(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxMeshWidget");
		return ptr;
	}

};


// Class GbxUI.GbxNoClipCanvasPanel
// 0x0010 (0x0138 - 0x0128)
class UGbxNoClipCanvasPanel : public UCanvasPanel
{
public:
	struct FVector2D                                   ClipZoneAdjustmentMin;                                    // 0x0128(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   ClipZoneAdjustmentMax;                                    // 0x0130(0x0008) (Edit, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxNoClipCanvasPanel");
		return ptr;
	}

};


// Class GbxUI.GbxProgressBar
// 0x00F0 (0x03A8 - 0x02B8)
class UGbxProgressBar : public UGbxUserWidget
{
public:
	class UTexture2D*                                  FillTexture;                                              // 0x02B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShowDeltaBar;                                            // 0x02C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02C1(0x0007) MISSED OFFSET
	class UTexture2D*                                  DeltaTexture;                                             // 0x02C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  DeltaEffectTexture;                                       // 0x02D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  BackgroundTexture;                                        // 0x02D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EGbxProgressBarFillDirection                       FillDirection;                                            // 0x02E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02E1(0x0003) MISSED OFFSET
	float                                              Percent;                                                  // 0x02E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Shear;                                                    // 0x02E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FGbxProgressBarInterpolator                 DefaultInterpolator;                                      // 0x02EC(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0314(0x0004) MISSED OFFSET
	TArray<struct FGbxProgressBarRange>                Ranges;                                                   // 0x0318(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FScriptDelegate                             OnInterpolationComplete;                                  // 0x0328(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnEnterRange;                                             // 0x0338(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
	class UImage*                                      Fill;                                                     // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UImage*                                      DeltaEffect;                                              // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UImage*                                      Background;                                               // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  CurrentValueText;                                         // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UTextBlock*                                  MaxValueText;                                             // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UGbxUserWidget*                              PercentAnimationOwner;                                    // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UWidgetAnimation*                            PercentAnimation;                                         // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x28];                                      // 0x0380(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxProgressBar");
		return ptr;
	}


	void SetShear(float InShear);
	void SetPercent(float InPercent);
	void SetMaxValueText(const struct FText& Text);
	void SetFillColorAndOpacity(const struct FLinearColor& InColor);
	void SetCurrentValueText(const struct FText& Text);
	bool STATIC_PassedPercentThreshold(float Threshold, float OldValue, float CurrentValue, bool bIncreasing, bool bDecreasing);
	bool IsInterpolating();
	void InterpolateToPercentWithInterpolator(float InPercent, const struct FGbxProgressBarInterpolator& Interpolator);
	void InterpolateToPercent(float InPercent);
	void HandleShowDeltaEffect(class UWidget* Effect, float OldValue, float CurrentValue);
	void HandlePercentChanged(float OldValue, float CurrentValue, bool bIsInterpolating, const struct FGbxProgressBarInterpolator& ActiveInterpolator);
	void HandleEnterPercentRange(const struct FName& RangeName);
	float GetShear();
	float GetPercent();
	void GbxProgressBarRangeEvent__DelegateSignature(const struct FName& RangeName);
	void GbxProgressBarEvent__DelegateSignature();
	bool STATIC_EnteredPercentRange(float RangeMin, float RangeMax, float OldValue, float CurrentValue, bool bIncreasing, bool bDecreasing);
};


// Class GbxUI.GbxRetainerBox
// 0x0010 (0x0158 - 0x0148)
class UGbxRetainerBox : public URetainerBox
{
public:
	struct FScriptDelegate                             TransformDelegate;                                        // 0x0148(0x0014) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxRetainerBox");
		return ptr;
	}

};


// Class GbxUI.GbxRichTextBlock
// 0x0020 (0x0380 - 0x0360)
class UGbxRichTextBlock : public URichTextBlock
{
public:
	int16_t                                            Baseline;                                                 // 0x0360(0x0002) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0362(0x0002) MISSED OFFSET
	struct FVector2D                                   ShadowOffset;                                             // 0x0364(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FLinearColor                                ShadowColorAndOpacity;                                    // 0x036C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x037C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxRichTextBlock");
		return ptr;
	}

};


// Class GbxUI.GbxScrollBoxList
// 0x0090 (0x08F0 - 0x0860)
class UGbxScrollBoxList : public UScrollBox
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0860(0x0018) MISSED OFFSET
	int                                                SelectedIndex;                                            // 0x0878(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                SelectedIndexWhenFocusWasLost;                            // 0x087C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UGbxUmgMenu>                  MenuThatOwnsFocus;                                        // 0x0880(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FScriptDelegate                             SelectionChangedDelegate;                                 // 0x0888(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             ItemClickedDelegate;                                      // 0x0898(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
	EGbxScrollBoxListWrapMode                          WrapMode;                                                 // 0x08A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EGbxFocusableWidgetMouseBehavior                   DefaultItemSelectionBehavior;                             // 0x08A9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x08AA(0x0006) MISSED OFFSET
	class UGbxListItemFactory*                         ListItemFactory;                                          // 0x08B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DefaultListItemClass;                                     // 0x08B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EGbxScrollBoxListFocusChangedAction                FocusChangeAction;                                        // 0x08C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRegisterAsFocusableWidget;                               // 0x08C1(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x08C2(0x0006) MISSED OFFSET
	struct FName                                       FocusableWidgetNavUp;                                     // 0x08C8(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FName                                       FocusableWidgetNavDown;                                   // 0x08D0(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FName                                       FocusableWidgetNavLeft;                                   // 0x08D8(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FName                                       FocusableWidgetNavRight;                                  // 0x08E0(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bFocusOnMenuCreation;                                     // 0x08E8(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x08E9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxScrollBoxList");
		return ptr;
	}

};


// Class GbxUI.GbxSpinner
// 0x0050 (0x0320 - 0x02D0)
class UGbxSpinner : public UGbxGFxButton
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02D0(0x0020) MISSED OFFSET
	class UGbxGFxButton*                               LeftButton;                                               // 0x02F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxButton*                               RightButton;                                              // 0x02F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               ChoiceText;                                               // 0x0300(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0308(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxSpinner");
		return ptr;
	}


	void SpinRight(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo);
	void SpinnerValueUpdatedEvent__DelegateSignature();
	void SpinLeft(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo);
};


// Class GbxUI.GbxTextField
// 0x0100 (0x0270 - 0x0170)
class UGbxTextField : public UGbxGFxObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0170(0x0010) MISSED OFFSET
	class UGbxGFxSlider*                               ScrollBar;                                                // 0x0180(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xE8];                                      // 0x0188(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxTextField");
		return ptr;
	}


	void OnScrollBarPositionUpdated(float SliderPercentage);
};


// Class GbxUI.UIAccessors
// 0x0000 (0x0028 - 0x0028)
class UUIAccessors : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.UIAccessors");
		return ptr;
	}

};


// Class GbxUI.GbxUILocalization
// 0x0000 (0x0028 - 0x0028)
class UGbxUILocalization : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxUILocalization");
		return ptr;
	}


	struct FText STATIC_PlatformToText(const struct FName& Platform, class AGbxPlayerController* pc);
	struct FText STATIC_PlatformToRichText(const struct FName& Platform, class AGbxPlayerController* pc, const struct FVector2D& GlyphSize);
	struct FSlateBrush STATIC_PlatformToGlyph(const struct FName& Platform, class AGbxPlayerController* pc);
	struct FText STATIC_PlatformToGFxHTMLText(const struct FName& Platform, class AGbxPlayerController* pc, float GlyphHeight, int VSpace);
	bool STATIC_IsPlatformGlyphAvailable(const struct FName& Platform, class AGbxPlayerController* pc);
	bool STATIC_IsInputActionGlyphAvailable(const struct FName& ActionName, class AGbxPlayerController* pc, EGbxActionToTextType GlyphType);
	struct FText STATIC_InputActionToText(const struct FName& ActionName, class AGbxPlayerController* pc, EGbxActionToTextType GlyphType);
	struct FText STATIC_InputActionToRichText(const struct FName& ActionName, class AGbxPlayerController* pc, EGbxActionToTextType GlyphType, const struct FVector2D& GlyphSize);
	struct FSlateBrush STATIC_InputActionToGlyph(const struct FName& ActionName, class AGbxPlayerController* pc, EGbxActionToTextType GlyphType);
	struct FText STATIC_InputActionToGFxHTMLText(const struct FName& ActionName, class AGbxPlayerController* pc, EGbxActionToTextType GlyphType, float GlyphHeight, int VSpace);
	struct FText STATIC_FKeyToGFxHTMLText(const struct FKey& Key, class AGbxPlayerController* pc, EGbxActionToTextType GlyphType, float GlyphHeight);
};


// Class GbxUI.GbxInputToGlyphMap
// 0x0020 (0x0050 - 0x0030)
class UGbxInputToGlyphMap : public UGbxDataAsset
{
public:
	TArray<struct FGbxInputToGlyphMapItem>             InputMap;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGbxInputToGlyphSpecialActionItem>   SpecialInputActionMap;                                    // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxInputToGlyphMap");
		return ptr;
	}

};


// Class GbxUI.GbxPlatformToGlyphMap
// 0x0050 (0x0080 - 0x0030)
class UGbxPlatformToGlyphMap : public UGbxDataAsset
{
public:
	TMap<struct FName, struct FSlateBrush>             PlatformMap;                                              // 0x0030(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxPlatformToGlyphMap");
		return ptr;
	}

};


// Class GbxUI.GbxUISpinnerWidget
// 0x0020 (0x02D8 - 0x02B8)
class UGbxUISpinnerWidget : public UGbxUserWidget
{
public:
	class UCanvasPanel*                                SpinnerDisplayStrip;                                      // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      TotalDigitsDisplayed;                                     // 0x02C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02C1(0x0003) MISSED OFFSET
	float                                              AnimationTime;                                            // 0x02C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CurrentValue;                                             // 0x02C8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bTransitionUpwards;                                       // 0x02C9(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x02CA(0x0002) MISSED OFFSET
	float                                              CurrentDistanceRemaining;                                 // 0x02CC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurrentAnimSpeed;                                         // 0x02D0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      NewValueToGoTo;                                           // 0x02D4(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	EGbxSpinnerWidgetGoToMethod                        AnimationType;                                            // 0x02D5(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x02D6(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxUISpinnerWidget");
		return ptr;
	}


	float MoveToNumber(unsigned char NewNumber, EGbxSpinnerWidgetGoToMethod GoToMethod);
};


// Class GbxUI.GbxWidgetComponent
// 0x0020 (0x0870 - 0x0850)
class UGbxWidgetComponent : public UWidgetComponent
{
public:
	class UCurveFloat*                                 DistanceAlphaCurve;                                       // 0x0850(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UBorder*                                     DistanceAlphaBorder;                                      // 0x0858(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AGbxPlayerController*                        TrackedPlayerController;                                  // 0x0860(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxUserWidget*                              GbxWidget;                                                // 0x0868(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxWidgetComponent");
		return ptr;
	}


	void Setup(class UClass* NewWidgetClass, class AGbxPlayerController* NewTrackedPlayer, class USceneComponent* ParentComponent, EWidgetSpace WidgetSpace, int NewLayerZOrder, const struct FName& CollisionProfile);
	void SetDistanceScaleCurve(class UCurveFloat* NewDistanceScaleCurve);
	void SetDistanceAlphaCurve(class UCurveFloat* NewDistanceAlphaCurve);
	void SetDistanceAlphaBorder(class UBorder* NewDistanceAlphaBorder);
};


// Class GbxUI.GbxWidgetFocusManager
// 0x0068 (0x0090 - 0x0028)
class UGbxWidgetFocusManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	class UObject*                                     OwnerMenu;                                                // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
	class UObject*                                     FocusedWidget;                                            // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
	TArray<struct FGbxFocusableWidgetInfo>             RegisteredWidgets;                                        // 0x0058(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x28];                                      // 0x0068(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxWidgetFocusManager");
		return ptr;
	}

};


// Class GbxUI.GbxWorldSpaceProxyWidget
// 0x0048 (0x0300 - 0x02B8)
class UGbxWorldSpaceProxyWidget : public UGbxUserWidget
{
public:
	float                                              Depth;                                                    // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Alignment;                                                // 0x02BC(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x02C4(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.GbxWorldSpaceProxyWidget");
		return ptr;
	}


	struct FVector GetWorldLocation();
};


// Class GbxUI.InWorldDamageNumber
// 0x0030 (0x02E8 - 0x02B8)
class UInWorldDamageNumber : public UGbxUserWidget
{
public:
	class UGbxRichTextBlock*                           DisplayField;                                             // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                DisplayPanel;                                             // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FDamageAnimationPairing>             DamageAnimationPairings;                                  // 0x02C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class AGbxPlayerController*                        InstigatingPlayer;                                        // 0x02D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetComponent*                            DamageNumberContainer;                                    // 0x02E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxUI.InWorldDamageNumber");
		return ptr;
	}


	void OnWentOffscreen();
	void ImpulseAnimationCompleted(class UUserWidget* AssociatedWidget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
