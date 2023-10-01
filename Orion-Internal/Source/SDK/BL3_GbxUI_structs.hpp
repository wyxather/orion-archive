#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_SlateCore_classes.hpp"
#include "BL3_CoreUObject_classes.hpp"
#include "BL3_ScaleformUI_classes.hpp"
#include "BL3_UMG_classes.hpp"
#include "BL3_GbxRuntime_classes.hpp"
#include "BL3_Engine_classes.hpp"
#include "BL3_GbxGameSystemCore_classes.hpp"
#include "BL3_InputCore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GbxUI.EGbxFocusableWidgetState
enum class EGbxFocusableWidgetState : uint8_t
{
	Unknown                        = 0,
	Disabled                       = 1,
	NotFocused                     = 2,
	NotFocused_MouseHovered        = 3,
	NotFocused_MouseDown           = 4,
	Focused                        = 5,
	Focused_MouseHovered           = 6,
	Focused_MouseDown              = 7,
	EGbxFocusableWidgetState_MAX   = 8
};


// Enum GbxUI.EGbxFocusableWidgetMouseBehavior
enum class EGbxFocusableWidgetMouseBehavior : uint8_t
{
	None                           = 0,
	SelectOnHover                  = 1,
	SelectOnClick                  = 2,
	InheritFromOwner               = 3,
	EGbxFocusableWidgetMouseBehavior_MAX = 4
};


// Enum GbxUI.EGbxGFxButtonType
enum class EGbxGFxButtonType : uint8_t
{
	Standard                       = 0,
	Checkbox                       = 1,
	Radio                          = 2,
	UserCheckbox                   = 3,
	EGbxGFxButtonType_MAX          = 4
};


// Enum GbxUI.EGbxGFxButtonCheckedState
enum class EGbxGFxButtonCheckedState : uint8_t
{
	Unchecked                      = 0,
	Checked                        = 1,
	EGbxGFxButtonCheckedState_MAX  = 2
};


// Enum GbxUI.EGbxGFxButtonLockedState
enum class EGbxGFxButtonLockedState : uint8_t
{
	Unlocked                       = 0,
	Locked                         = 1,
	EGbxGFxButtonLockedState_MAX   = 2
};


// Enum GbxUI.EMenuTransition
enum class EMenuTransition : uint8_t
{
	CreateCharacterMenu_MainMenu   = 0,
	LoadCharacterMenu_MainMenu     = 1,
	MainMenu_LoadCharacterMenu     = 2,
	MainMenu_NewGameSettingMenu    = 3,
	MainMenu_OptionMenu            = 4,
	NewGameSettingsMenu_MainMenu   = 5,
	OptionMenu_MainMenu            = 6,
	TitleScreen_MainMenu           = 7,
	TitleScreen_FirstBoot          = 8,
	FirstBoot_MainMenu             = 9,
	PlaythroughSelectionMenu_MainMenu = 10,
	MainMenu_PlaythroughSelectionMenu = 11,
	Invalid                        = 12,
	None                           = 13,
	EMenuTransition_MAX            = 14
};


// Enum GbxUI.EGbxMenuInputDevice
enum class EGbxMenuInputDevice : uint8_t
{
	Unknown                        = 0,
	Gamepad                        = 1,
	KeyboardMouse                  = 2,
	EGbxMenuInputDevice_MAX        = 3
};


// Enum GbxUI.EBindingType
enum class EBindingType : uint8_t
{
	Walking                        = 0,
	Common                         = 1,
	Driving                        = 2,
	EBindingType_MAX               = 3
};


// Enum GbxUI.EGbxProgressBarFillDirection
enum class EGbxProgressBarFillDirection : uint8_t
{
	LeftToRight                    = 0,
	RightToLeft                    = 1,
	EGbxProgressBarFillDirection_MAX = 2
};


// Enum GbxUI.EHUDInitializationAnimationSet
enum class EHUDInitializationAnimationSet : uint8_t
{
	None                           = 0,
	InitialSet                     = 1,
	AmmoBar                        = 2,
	ShieldBar                      = 3,
	MissionTracker                 = 4,
	GrenadeBar                     = 5,
	Full                           = 6,
	EHUDInitializationAnimationSet_MAX = 7
};


// Enum GbxUI.EUIAudioSettingOperation
enum class EUIAudioSettingOperation : uint8_t
{
	Delete                         = 0,
	Replace                        = 1,
	Preserve                       = 2,
	EUIAudioSettingOperation_MAX   = 3
};


// Enum GbxUI.EGbxGFxListAlignment
enum class EGbxGFxListAlignment : uint8_t
{
	Left                           = 0,
	Right                          = 1,
	Center                         = 2,
	EGbxGFxListAlignment_MAX       = 3
};


// Enum GbxUI.EGFxHUDWidgetAnchorType
enum class EGFxHUDWidgetAnchorType : uint8_t
{
	Viewport                       = 0,
	Crosshair                      = 1,
	EGFxHUDWidgetAnchorType_MAX    = 2
};


// Enum GbxUI.EGbxDialogBoxHelpersDialogTemplate
enum class EGbxDialogBoxHelpersDialogTemplate : uint8_t
{
	Default                        = 0,
	Warning                        = 1,
	Error                          = 2,
	EGbxDialogBoxHelpersDialogTemplate_MAX = 3
};


// Enum GbxUI.EChargeClipState
enum class EChargeClipState : uint8_t
{
	NOCHARGE                       = 0,
	SPREADCLIP                     = 1,
	ACCURACYCLIP                   = 2,
	EChargeClipState_MAX           = 3
};


// Enum GbxUI.EContextualMenuEntryType
enum class EContextualMenuEntryType : uint8_t
{
	Invite                         = 0,
	Join                           = 1,
	SendItem                       = 2,
	Favorite                       = 3,
	Unfavorite                     = 4,
	Mute                           = 5,
	Unmute                         = 6,
	Delete                         = 7,
	KickOut                        = 8,
	Inspect                        = 9,
	ViewProfile                    = 10,
	AddFriend                      = 11,
	RemoveFriend                   = 12,
	NetworkOption_Anyone           = 13,
	NetworkOption_FriendsOnly      = 14,
	NetworkOption_InviteOnly       = 15,
	LootMode_Classic               = 16,
	LootMode_Shared                = 17,
	Shift_SecondaryIdentity        = 18,
	Shift_AddFriend                = 19,
	Shift_RemoveFriend             = 20,
	Shift_Block                    = 21,
	Shift_Unblock                  = 22,
	Shift_Report                   = 23,
	None                           = 24,
	Count                          = 25,
	EContextualMenuEntryType_MAX   = 26
};


// Enum GbxUI.EContextualMenuExpandDirection
enum class EContextualMenuExpandDirection : uint8_t
{
	Unknown                        = 0,
	Down                           = 1,
	Up                             = 2,
	EContextualMenuExpandDirection_MAX = 3
};


// Enum GbxUI.EContextualMenuLayout
enum class EContextualMenuLayout : uint8_t
{
	RosterMenu                     = 0,
	MailMenuSendTo                 = 1,
	MailMenuRecieved               = 2,
	EContextualMenuLayout_MAX      = 3
};


// Enum GbxUI.GFxVirtualKeyboardType
enum class EGFxVirtualKeyboardType : uint8_t
{
	Default                        = 0,
	Number                         = 1,
	Web                            = 2,
	Email                          = 3,
	Password                       = 4,
	AlphaNumeric                   = 5,
	GFxVirtualKeyboardType_MAX     = 6
};


// Enum GbxUI.EGbxGFxListConfigType
enum class EGbxGFxListConfigType : uint8_t
{
	All                            = 0,
	PreserveLayout                 = 1,
	EGbxGFxListConfigType_MAX      = 2
};


// Enum GbxUI.EGbxGFxScrollListAddedItemPriority
enum class EGbxGFxScrollListAddedItemPriority : uint8_t
{
	NewestOnTop                    = 0,
	OldestOnTop                    = 1,
	EGbxGFxScrollListAddedItemPriority_MAX = 2
};


// Enum GbxUI.EGbxGFxScrollListFocusOrderPriority
enum class EGbxGFxScrollListFocusOrderPriority : uint8_t
{
	BringToFront                   = 0,
	LeaveUnchanged                 = 1,
	BringToFrontWithEverythingElseInOrder = 2,
	BringToFrontWithEverythingElseInReverseOrder = 3,
	EGbxGFxScrollListFocusOrderPriority_MAX = 4
};


// Enum GbxUI.EGFxHUDWidgetTransitionType
enum class EGFxHUDWidgetTransitionType : uint8_t
{
	Animate                        = 0,
	Instant                        = 1,
	EGFxHUDWidgetTransitionType_MAX = 2
};


// Enum GbxUI.EGbxGFxListOrientation
enum class EGbxGFxListOrientation : uint8_t
{
	Vertical                       = 0,
	Horizontal                     = 1,
	EGbxGFxListOrientation_MAX     = 2
};


// Enum GbxUI.EGbxGFxScrollListFocusChangedAction
enum class EGbxGFxScrollListFocusChangedAction : uint8_t
{
	DoNotChangeSelection           = 0,
	SelectNoneOnLossSelectFirstOnGain = 1,
	SelectNoneOnLossRestorePreviousOnGain = 2,
	EGbxGFxScrollListFocusChangedAction_MAX = 3
};


// Enum GbxUI.EGbxGFxScrollListWrapMode
enum class EGbxGFxScrollListWrapMode : uint8_t
{
	Stick                          = 0,
	Wrap                           = 1,
	EGbxGFxScrollListWrapMode_MAX  = 2
};


// Enum GbxUI.EGbxGFxMenuSwitcherSubmenuInitReason
enum class EGbxGFxMenuSwitcherSubmenuInitReason : uint8_t
{
	Unknown                        = 0,
	Pushed                         = 1,
	NextPage                       = 2,
	PrevPage                       = 3,
	Switched                       = 4,
	EGbxGFxMenuSwitcherSubmenuInitReason_MAX = 5
};


// Enum GbxUI.EGbxGFxMenuSwitchNavWidgetType
enum class EGbxGFxMenuSwitchNavWidgetType : uint8_t
{
	Unknown                        = 0,
	MenuSwitcher                   = 1,
	CustomSwitcher                 = 2,
	EGbxGFxMenuSwitchNavWidgetType_MAX = 3
};


// Enum GbxUI.EEdgeFlashType
enum class EEdgeFlashType : uint8_t
{
	None                           = 0,
	InterpolatedDecreaseOnly       = 1,
	All                            = 2,
	EEdgeFlashType_MAX             = 3
};


// Enum GbxUI.EGbxGFxSliderState
enum class EGbxGFxSliderState : uint8_t
{
	NotScrolling                   = 0,
	ScrollingLeft                  = 1,
	ScrollingRight                 = 2,
	EGbxGFxSliderState_MAX         = 3
};


// Enum GbxUI.EGbxGFxSliderDirection
enum class EGbxGFxSliderDirection : uint8_t
{
	Horizontal                     = 0,
	Vertical                       = 1,
	EGbxGFxSliderDirection_MAX     = 2
};


// Enum GbxUI.EGbxGridWidgetFill
enum class EGbxGridWidgetFill : uint8_t
{
	FillRow                        = 0,
	FillColumn                     = 1,
	EGbxGridWidgetFill_MAX         = 2
};


// Enum GbxUI.EGbxHUDStateListType
enum class EGbxHUDStateListType : uint8_t
{
	WhiteList                      = 0,
	BlackList                      = 1,
	EGbxHUDStateListType_MAX       = 2
};


// Enum GbxUI.EHUDStateManagerVisibility
enum class EHUDStateManagerVisibility : uint8_t
{
	Unknown                        = 0,
	Visible                        = 1,
	NotVisible                     = 2,
	EHUDStateManagerVisibility_MAX = 3
};


// Enum GbxUI.EGbxListFocusChangedAction
enum class EGbxListFocusChangedAction : uint8_t
{
	DoNotChangeSelection           = 0,
	SelectNoneOnLossSelectFirstOnGain = 1,
	SelectNoneOnLossRestorePreviousOnGain = 2,
	EGbxListFocusChangedAction_MAX = 3
};


// Enum GbxUI.EGbxListWrapMode
enum class EGbxListWrapMode : uint8_t
{
	Stick                          = 0,
	Wrap                           = 1,
	EGbxListWrapMode_MAX           = 2
};


// Enum GbxUI.EGbxMenuInputMode
enum class EGbxMenuInputMode : uint8_t
{
	None                           = 0,
	OwnerPlayer                    = 1,
	OwnerPlayer_DontConsumeInput   = 2,
	AnyLocalPlayer                 = 3,
	AnyController                  = 4,
	Inherit                        = 5,
	EGbxMenuInputMode_MAX          = 6
};


// Enum GbxUI.EGbxMenuParentType
enum class EGbxMenuParentType : uint8_t
{
	Viewport                       = 0,
	PlayerScreen                   = 1,
	Inherit                        = 2,
	EGbxMenuParentType_MAX         = 3
};


// Enum GbxUI.EGbxMenuInputActionTrigger
enum class EGbxMenuInputActionTrigger : uint8_t
{
	Pressed                        = 0,
	Held                           = 1,
	HeldLong                       = 2,
	Released                       = 3,
	EGbxMenuInputActionTrigger_MAX = 4
};


// Enum GbxUI.EGbxMenuSwitcherSubmenuInitReason
enum class EGbxMenuSwitcherSubmenuInitReason : uint8_t
{
	Unknown                        = 0,
	Pushed                         = 1,
	NextPage                       = 2,
	PrevPage                       = 3,
	Switched                       = 4,
	EGbxMenuSwitcherSubmenuInitReason_MAX = 5
};


// Enum GbxUI.EMenuTransitionOperation
enum class EMenuTransitionOperation : uint8_t
{
	Push                           = 0,
	Pop                            = 1,
	Invalid                        = 2,
	None                           = 3,
	EMenuTransitionOperation_MAX   = 4
};


// Enum GbxUI.EGbxScrollBoxListFocusChangedAction
enum class EGbxScrollBoxListFocusChangedAction : uint8_t
{
	DoNotChangeSelection           = 0,
	SelectNoneOnLossSelectFirstOnGain = 1,
	SelectNoneOnLossRestorePreviousOnGain = 2,
	EGbxScrollBoxListFocusChangedAction_MAX = 3
};


// Enum GbxUI.EGbxScrollBoxListWrapMode
enum class EGbxScrollBoxListWrapMode : uint8_t
{
	Stick                          = 0,
	Wrap                           = 1,
	EGbxScrollBoxListWrapMode_MAX  = 2
};


// Enum GbxUI.EVerticalTextAutoSizeType
enum class EVerticalTextAutoSizeType : uint8_t
{
	none                           = 0,
	top                            = 1,
	center                         = 2,
	bottom                         = 3,
	EVerticalTextAutoSizeType_MAX  = 4
};


// Enum GbxUI.EHoldToPressGlyphType
enum class EHoldToPressGlyphType : uint8_t
{
	None                           = 0,
	Gamepad                        = 1,
	Keyboard                       = 2,
	KeyboardWide                   = 3,
	KeyboardXWide                  = 4,
	EHoldToPressGlyphType_MAX      = 5
};


// Enum GbxUI.EGbxInputGlyphType
enum class EGbxInputGlyphType : uint8_t
{
	KeyboardMouse                  = 0,
	PS4                            = 1,
	XboxOne                        = 2,
	GenericGamepad                 = 3,
	SwitchPro                      = 4,
	Stadia                         = 5,
	DPX                            = 6,
	MPX                            = 7,
	EGbxInputGlyphType_MAX         = 8
};


// Enum GbxUI.EGbxActionToTextType
enum class EGbxActionToTextType : uint8_t
{
	PlayerController               = 0,
	KeyboardMouse                  = 1,
	Gamepad                        = 2,
	EGbxActionToTextType_MAX       = 3
};


// Enum GbxUI.EGbxSpinnerWidgetGoToMethod
enum class EGbxSpinnerWidgetGoToMethod : uint8_t
{
	FromCurrent                    = 0,
	Immediately                    = 1,
	EGbxSpinnerWidgetGoToMethod_MAX = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GbxUI.GbxGFxAnchor
// 0x0018
struct FGbxGFxAnchor
{
	struct FVector2D                                   NormalizedPosition;                                       // 0x0000(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   Offset;                                                   // 0x0008(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   Scale;                                                    // 0x0010(0x0008) (Edit, IsPlainOldData)
};

// ScriptStruct GbxUI.GbxGFxmovieClipAppendixItem
// 0x0010
struct FGbxGFxmovieClipAppendixItem
{
	TArray<class FString>                              ClipPaths;                                                // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct GbxUI.GbxGFxMovieClipAppendix
// 0x0060
struct FGbxGFxMovieClipAppendix
{
	struct FGbxGFxmovieClipAppendixItem                DefaultRetVal;                                            // 0x0000(0x0010) (Transient)
	TMap<class FString, struct FGbxGFxmovieClipAppendixItem> AppendixMap;                                              // 0x0010(0x0050) (Edit, ZeroConstructor)
};

// ScriptStruct GbxUI.GbxFocusableWidgetAdjacencyInfo
// 0x0020
struct FGbxFocusableWidgetAdjacencyInfo
{
	TWeakObjectPtr<class UObject>                      WidgetUp;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UObject>                      WidgetDown;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UObject>                      WidgetLeft;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UObject>                      WidgetRight;                                              // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxUI.GbxMenuInputEvent
// 0x0030
struct FGbxMenuInputEvent
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct GbxUI.GbxProgressBarInterpolator
// 0x0028
struct FGbxProgressBarInterpolator
{
	float                                              Delay;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGbxEasingFunc                              EasingFunc;                                               // 0x0008(0x000C) (Edit, BlueprintVisible)
	float                                              StartValue;                                               // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CurrentValue;                                             // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EndValue;                                                 // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ElapsedTime;                                              // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DeltaEndOverride;                                         // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxUI.GbxProgressBarRange
// 0x0018
struct FGbxProgressBarRange
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Min;                                                      // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIncreasing;                                              // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDecreasing;                                              // 0x0011(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
};

// ScriptStruct GbxUI.GbxGFxListConfig
// 0x0090
struct FGbxGFxListConfig
{
	EGbxGFxListConfigType                              ConfigType;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EGbxGFxListOrientation                             ListOrientation;                                          // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EGbxGFxListAlignment                               ListAlignment;                                            // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	int                                                FillSize;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VertCellSpacing;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HorzCellSpacing;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoHideScrollBar;                                       // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	class FString                                      ScrollBarName;                                            // 0x0018(0x0010) (Edit, ZeroConstructor)
	EGbxGFxScrollListWrapMode                          WrapMode;                                                 // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EGbxFocusableWidgetMouseBehavior                   DefaultItemSelectionBehavior;                             // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EGbxGFxScrollListFocusChangedAction                FocusChangeAction;                                        // 0x002A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bMustHaveOneFocusableCellToReceiveFocus;                  // 0x002B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class FString                                      EntryPrefix;                                              // 0x0030(0x0010) (Edit, ZeroConstructor)
	class FString                                      GridAreaName;                                             // 0x0040(0x0010) (Edit, ZeroConstructor)
	class FString                                      GridMaskName;                                             // 0x0050(0x0010) (Edit, ZeroConstructor)
	EGbxGFxScrollListFocusOrderPriority                FocusOrderPriority;                                       // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EGbxGFxScrollListAddedItemPriority                 AddedItemPriority;                                        // 0x0061(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseFixedCellBounds;                                      // 0x0062(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0063(0x0001) MISSED OFFSET
	struct FVector2D                                   FixedCellBoundsDemensions;                                // 0x0064(0x0008) (Edit, IsPlainOldData)
	bool                                               bMoveSelectionScrollIntoView;                             // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bMoveSelectionAnimateScroll;                              // 0x006D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bKeepScrollbarOnTop;                                      // 0x006E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAlwaysConsumeDirectionInput;                             // 0x006F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowScrolling;                                          // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReverseScrollDirection;                                  // 0x0071(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x0072(0x0006) MISSED OFFSET
	struct FName                                       DefaultItemSelectedAudioEventName;                        // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       DefaultItemClickedAudioEventName;                         // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCanBeNavigatedIfMouseDisabled;                           // 0x0088(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bFocusListIfCellGetsFocused;                              // 0x0089(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x008A(0x0006) MISSED OFFSET
};

// ScriptStruct GbxUI.GbxScrollingListCellInfo
// 0x0020
struct FGbxScrollingListCellInfo
{
	class FString                                      LibraryName;                                              // 0x0000(0x0010) (ZeroConstructor, Transient)
	class UClass*                                      CellClass;                                                // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxListCell*                             Cell;                                                     // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct GbxUI.GbxUIScroller
// 0x0034
struct FGbxUIScroller
{
	float                                              Acceleration;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ItemSize;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxVelocity;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinVelocity;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseFixedVelocity;                                        // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              FixedVelocity;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScrollPosition;                                           // 0x0018(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DesiredPosition;                                          // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              WindowSize;                                               // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              FullSize;                                                 // 0x0024(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CurVelocity;                                              // 0x0028(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              DesiredVelocity;                                          // 0x002C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHasMoved;                                                // 0x0030(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsMoving;                                                // 0x0031(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bHasSlowedDown;                                           // 0x0032(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0033(0x0001) MISSED OFFSET
};

// ScriptStruct GbxUI.GbxGFxPooledGridListConfig
// 0x0030
struct FGbxGFxPooledGridListConfig
{
	class UClass*                                      ItemNativeClass;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      ItemASClass;                                              // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FVector2D                                   ItemSize;                                                 // 0x0018(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   ItemRootOffset;                                           // 0x0020(0x0008) (Edit, IsPlainOldData)
	int                                                VisibleRows;                                              // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                VisibleCols;                                              // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxUI.GbxGFxPooledGridPoolInfo
// 0x0030
struct FGbxGFxPooledGridPoolInfo
{
	struct FGbxScrollingListCellInfo                   CellInfo;                                                 // 0x0000(0x0020) (Transient)
	TWeakObjectPtr<class UGbxGFxPooledGridList>        OwningList;                                               // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                ListIndex;                                                // 0x0028(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                VisibleIndexOffset;                                       // 0x002C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct GbxUI.GbxGFxMenuSwitcherSubmenuInfo
// 0x0058
struct FGbxGFxMenuSwitcherSubmenuInfo
{
	struct FName                                       MenuID;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       MenuName;                                                 // 0x0008(0x0028) (Edit)
	struct FText                                       MenuDescription;                                          // 0x0020(0x0028) (Edit)
	class UGbxGFxMenuData*                             MenuData;                                                 // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UGbxGFxMenuData*                             MenuData_NoCrossplay;                                     // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MenuClass;                                                // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAddToNav;                                                // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct GbxUI.GbxHUDFeedbackManager
// 0x0068
struct FGbxHUDFeedbackManager
{
	class UGbxGFxHUDFeedbackData*                      FeedbackData;                                             // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	TArray<class UGbxGFxMovie*>                        Widgets;                                                  // 0x0010(0x0010) (ZeroConstructor, Transient)
	TWeakObjectPtr<class AGbxPlayerController>         OwningPlayer;                                             // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class APawn>                        OwningPawn;                                               // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class APlayerCameraManager>         OwningPlayerCameraManager;                                // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0038(0x0030) MISSED OFFSET
};

// ScriptStruct GbxUI.GbxHUDStateManager
// 0x0040
struct FGbxHUDStateManager
{
	struct FScriptMulticastDelegate                    OnStateChanged;                                           // 0x0000(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<class UGbxHUDStateData*>                    StateStack;                                               // 0x0010(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
	TArray<class UGbxGFxHUDWidget*>                    Widgets;                                                  // 0x0028(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct GbxUI.TextMarkupDictionaryEntry
// 0x0018
struct FTextMarkupDictionaryEntry
{
	class FString                                      OutputText;                                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	bool                                               bRequiresEndSection;                                      // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct GbxUI.GbxMenuSplitscreenLayouts
// 0x0070
struct FGbxMenuSplitscreenLayouts
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TSoftObjectPtr<class UClass>                       VerticalLayout;                                           // 0x0008(0x0028) (Edit)
	TSoftObjectPtr<class UClass>                       QuarterLayout;                                            // 0x0030(0x0028) (Edit, Transient)
	struct FSoftObjectPath                             QuarterLayoutPath;                                        // 0x0058(0x0018)
};

// ScriptStruct GbxUI.GbxDLCMenuSplitscreenLayouts
// 0x0080
struct FGbxDLCMenuSplitscreenLayouts
{
	TSoftObjectPtr<class UClass>                       VerticalLayout;                                           // 0x0000(0x0028) (Edit, Transient)
	TSoftObjectPtr<class UClass>                       QuarterLayout;                                            // 0x0028(0x0028) (Edit, Transient)
	struct FSoftObjectPath                             SoftVerticalLayout;                                       // 0x0050(0x0018)
	struct FSoftObjectPath                             SoftQuarterLayout;                                        // 0x0068(0x0018)
};

// ScriptStruct GbxUI.GbxCascadingListItemData
// 0x0038
struct FGbxCascadingListItemData
{
	struct FName                                       ItemId;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       Label;                                                    // 0x0008(0x0028) (Edit, BlueprintVisible)
	bool                                               bHasChildren;                                             // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0021(0x0017) MISSED OFFSET
};

// ScriptStruct GbxUI.GbxComboBoxItemInfo
// 0x0020
struct FGbxComboBoxItemInfo
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0028) (Edit)
	int                                                ReferenceIndex;                                           // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct GbxUI.GbxDialogBoxChoiceInfo
// 0x0028
struct FGbxDialogBoxChoiceInfo
{
	struct FText                                       LabelText;                                                // 0x0000(0x0028) (BlueprintVisible)
	struct FName                                       ChoiceNameId;                                             // 0x0018(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCloseDialogOnSelection;                                  // 0x0020(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct GbxUI.GbxDialogBoxInfo
// 0x0060
struct FGbxDialogBoxInfo
{
	struct FText                                       HeaderText;                                               // 0x0000(0x0028) (BlueprintVisible)
	struct FText                                       BodyText;                                                 // 0x0018(0x0028) (BlueprintVisible)
	TArray<struct FGbxDialogBoxChoiceInfo>             Choices;                                                  // 0x0030(0x0010) (BlueprintVisible, ZeroConstructor)
	bool                                               bCanCancel;                                               // 0x0040(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAnyUserCanInteract;                                      // 0x0041(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
	struct FScriptDelegate                             OnChoiceMadeDelegate;                                     // 0x0048(0x0014) (BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FName                                       TemplateNameId;                                           // 0x0058(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxUI.GbxMenuSwitcherSubmenuInfo
// 0x0030
struct FGbxMenuSwitcherSubmenuInfo
{
	struct FName                                       MenuID;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       MenuName;                                                 // 0x0008(0x0028) (Edit)
	class UGbxMenuData*                                MenuData;                                                 // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MenuClass;                                                // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxUI.GbxDialogBoxTemplateMapItem
// 0x0010
struct FGbxDialogBoxTemplateMapItem
{
	struct FName                                       NameId;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DialogClass;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxUI.GbxFocusableWidgetItemStyle
// 0x00C0
struct FGbxFocusableWidgetItemStyle
{
	EGbxFocusableWidgetState                           State;                                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseTextColor;                                            // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseTextSize;                                             // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseIndicatorBrush;                                       // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FSlateColor                                 TextColor;                                                // 0x0008(0x0028) (Edit)
	int                                                TextSize;                                                 // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FSlateBrush                                 IndicatorBrush;                                           // 0x0038(0x0088) (Edit)
};

// ScriptStruct GbxUI.ContextualMenuInfo
// 0x0080
struct FContextualMenuInfo
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0000(0x0080) MISSED OFFSET
};

// ScriptStruct GbxUI.GbxGFxContextualMenuLocTableData
// 0x0030
struct FGbxGFxContextualMenuLocTableData
{
	EContextualMenuEntryType                           Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FText                                       ItemText;                                                 // 0x0008(0x0028) (Edit)
	class FString                                      FrameString;                                              // 0x0020(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct GbxUI.GbxHintInfo
// 0x0040
struct FGbxHintInfo
{
	TArray<struct FName>                               InputActions;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FText                                       HelpText;                                                 // 0x0010(0x0028) (Edit, BlueprintVisible)
	bool                                               bStagePlaced;                                             // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	class UObject*                                     StagePlacedWidget;                                        // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bClickable;                                               // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bForceRefreshText;                                        // 0x0039(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
};

// ScriptStruct GbxUI.GbxGFxMediaPlayerConfig
// 0x0030
struct FGbxGFxMediaPlayerConfig
{
	class UMediaPlayer*                                MediaPlayer;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UGbxMediaData*                               MediaData;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          MediaMaterial;                                            // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   MediaDimensions;                                          // 0x0018(0x0008) (Edit, IsPlainOldData)
	class FString                                      ExternalTextureName;                                      // 0x0020(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct GbxUI.GbxGFxMaterialRenderer
// 0x0018
struct FGbxGFxMaterialRenderer
{
	class UMaterialInterface*                          Material;                                                 // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UTextureRenderTarget2D*                      RenderTarget;                                             // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UGbxGFxMovie>                 OwningMovie;                                              // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct GbxUI.GbxGFxMenuSwitcherNavWidgetCustomItem
// 0x0038
struct FGbxGFxMenuSwitcherNavWidgetCustomItem
{
	struct FName                                       ItemId;                                                   // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class FString                                      IconFrameName;                                            // 0x0008(0x0010) (ZeroConstructor, Transient)
	struct FText                                       TitleText;                                                // 0x0018(0x0028) (Transient)
	bool                                               bDisabled;                                                // 0x0030(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct GbxUI.GbxGFxSliderAcceleration
// 0x0010
struct FGbxGFxSliderAcceleration
{
	int                                                RepeatsNeededToAcclerate;                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                RepeatAdder;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaxIncreases;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeToResetMouseWheelRepeat;                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxUI.GbxHintWidgetMapItem
// 0x0030
struct FGbxHintWidgetMapItem
{
	TArray<struct FName>                               InputActions;                                             // 0x0000(0x0010) (ZeroConstructor)
	bool                                               bIsEnabled;                                               // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	class UObject*                                     HintWidget;                                               // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGbxHintWidget>             HintWidgetInterface;                                      // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxUI.GbxGFxHUDWidgetInfo
// 0x0020
struct FGbxGFxHUDWidgetInfo
{
	class UClass*                                      WidgetClass;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      InstanceString;                                           // 0x0008(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      Priority;                                                 // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct GbxUI.GbxHUDLayoutData
// 0x0010
struct FGbxHUDLayoutData
{
	class UDataTable*                                  Layout;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct GbxUI.GbxMenuKeyRepeatInfo
// 0x0018
struct FGbxMenuKeyRepeatInfo
{
	float                                              InitialButtonRepeatDelay;                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RepeatDelayStart;                                         // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RepeatDelayEnd;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RepeatDelayDelta;                                         // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HoldToPressDuration;                                      // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HoldToPressDurationLong;                                  // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GbxUI.GbxMenuInputAction
// 0x0020
struct FGbxMenuInputAction
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FKey>                                Keys;                                                     // 0x0008(0x0010) (Edit, ZeroConstructor)
	EGbxMenuInputActionTrigger                         ActionTrigger;                                            // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bWantsRepeat;                                             // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
};

// ScriptStruct GbxUI.GbxMenuInputAxisBind
// 0x0020
struct FGbxMenuInputAxisBind
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (Edit)
	float                                              Scale;                                                    // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct GbxUI.GbxMenuInputAxisAction
// 0x0038
struct FGbxMenuInputAxisAction
{
	struct FName                                       ActionName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FGbxMenuInputAxisBind>               Binds;                                                    // 0x0008(0x0010) (Edit, ZeroConstructor)
	bool                                               bTreatAsButtonPress;                                      // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	struct FName                                       PositiveAxisAction;                                       // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       NegativeAxisAction;                                       // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bWantsRepeat;                                             // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct GbxUI.GbxMenuInputRawMousePos
// 0x0018
struct FGbxMenuInputRawMousePos
{
	struct FVector2D                                   PrevMousePos;                                             // 0x0000(0x0008) (Transient, IsPlainOldData)
	struct FVector2D                                   NewMousePos;                                              // 0x0008(0x0008) (Transient, IsPlainOldData)
	int                                                ControllerId;                                             // 0x0010(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                IgnoreMouseMoveFrames;                                    // 0x0014(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct GbxUI.GbxMenuAxisInputEvent
// 0x0028
struct FGbxMenuAxisInputEvent
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct GbxUI.GbxInputToGlyphMapItem
// 0x0518
struct FGbxInputToGlyphMapItem
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (Edit)
	struct FText                                       KeyboardMouseGlyph;                                       // 0x0018(0x0028) (Edit)
	struct FText                                       PS4Glyph;                                                 // 0x0030(0x0028) (Edit)
	struct FText                                       XboxOneGlyph;                                             // 0x0048(0x0028) (Edit)
	struct FText                                       DPXGlyph;                                                 // 0x0060(0x0028) (Edit)
	struct FText                                       MPXGlyph;                                                 // 0x0078(0x0028) (Edit)
	struct FText                                       GenericGamepadGlyph;                                      // 0x0090(0x0028) (Edit)
	struct FText                                       SwitchProGlyph;                                           // 0x00A8(0x0028) (Edit)
	struct FText                                       StadiaGlyph;                                              // 0x00C0(0x0028) (Edit)
	struct FSlateBrush                                 KeyboardMouseGlyphBrush;                                  // 0x00D8(0x0088) (Edit)
	struct FSlateBrush                                 PS4GlyphBrush;                                            // 0x0160(0x0088) (Edit)
	struct FSlateBrush                                 XboxOneGlyphBrush;                                        // 0x01E8(0x0088) (Edit)
	struct FSlateBrush                                 DPXGlyphBrush;                                            // 0x0270(0x0088) (Edit)
	struct FSlateBrush                                 MPXGlyphBrush;                                            // 0x02F8(0x0088) (Edit)
	struct FSlateBrush                                 GenericGamepadGlyphBrush;                                 // 0x0380(0x0088) (Edit)
	struct FSlateBrush                                 SwitchProGlyphBrush;                                      // 0x0408(0x0088) (Edit)
	struct FSlateBrush                                 StadiaGlyphBrush;                                         // 0x0490(0x0088) (Edit)
};

// ScriptStruct GbxUI.GbxInputToGlyphSpecialActionItem
// 0x0508
struct FGbxInputToGlyphSpecialActionItem
{
	struct FName                                       InputAction;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       KeyboardMouseGlyph;                                       // 0x0008(0x0028) (Edit)
	struct FText                                       PS4Glyph;                                                 // 0x0020(0x0028) (Edit)
	struct FText                                       XboxOneGlyph;                                             // 0x0038(0x0028) (Edit)
	struct FText                                       DPXGlyph;                                                 // 0x0050(0x0028) (Edit)
	struct FText                                       MPXGlyph;                                                 // 0x0068(0x0028) (Edit)
	struct FText                                       GenericGamepadGlyph;                                      // 0x0080(0x0028) (Edit)
	struct FText                                       SwitchProGlyph;                                           // 0x0098(0x0028) (Edit)
	struct FText                                       StadiaGlyph;                                              // 0x00B0(0x0028) (Edit)
	struct FSlateBrush                                 KeyboardMouseGlyphBrush;                                  // 0x00C8(0x0088) (Edit)
	struct FSlateBrush                                 PS4GlyphBrush;                                            // 0x0150(0x0088) (Edit)
	struct FSlateBrush                                 XboxOneGlyphBrush;                                        // 0x01D8(0x0088) (Edit)
	struct FSlateBrush                                 DPXGlyphBrush;                                            // 0x0260(0x0088) (Edit)
	struct FSlateBrush                                 MPXGlyphBrush;                                            // 0x02E8(0x0088) (Edit)
	struct FSlateBrush                                 GenericGamepadGlyphBrush;                                 // 0x0370(0x0088) (Edit)
	struct FSlateBrush                                 SwitchProGlyphBrush;                                      // 0x03F8(0x0088) (Edit)
	struct FSlateBrush                                 StadiaGlyphBrush;                                         // 0x0480(0x0088) (Edit)
};

// ScriptStruct GbxUI.GbxFocusableWidgetInfo
// 0x0028
struct FGbxFocusableWidgetInfo
{
	TWeakObjectPtr<class UObject>                      Widget;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGbxFocusableWidgetAdjacencyInfo            AdjacencyInfo;                                            // 0x0008(0x0020)
};

// ScriptStruct GbxUI.DamageAnimationPairing
// 0x0028
struct FDamageAnimationPairing
{
	ERecentDamageFlags                                 DamageTypeFlag;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<class UWidgetAnimation*>                    LeftAnimations;                                           // 0x0008(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	TArray<class UWidgetAnimation*>                    RightAnimations;                                          // 0x0018(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
};

// ScriptStruct GbxUI.GbxGFxMouseCapturePanelMouseButtonInfo
// 0x001C
struct FGbxGFxMouseCapturePanelMouseButtonInfo
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct GbxUI.GbxGFxListCellUpdateInfo
// 0x0010
struct FGbxGFxListCellUpdateInfo
{
	class UGbxGFxListCell*                             Cell;                                                     // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                ListIndex;                                                // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsSelected;                                              // 0x000C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsNewSelection;                                          // 0x000D(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsNewInView;                                             // 0x000E(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000F(0x0001) MISSED OFFSET
};

// ScriptStruct GbxUI.GbxGFxPooledGridListFullConfig
// 0x00C0
struct FGbxGFxPooledGridListFullConfig
{
	struct FGbxGFxListConfig                           BaseListConfig;                                           // 0x0000(0x0090) (Edit)
	struct FGbxGFxPooledGridListConfig                 PoolListConfig;                                           // 0x0090(0x0030) (Edit)
};

// ScriptStruct GbxUI.GbxFocusableWidgetAdjacencyNames
// 0x0040
struct FGbxFocusableWidgetAdjacencyNames
{
	class FString                                      WidgetUpName;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
	class FString                                      WidgetDownName;                                           // 0x0010(0x0010) (Edit, ZeroConstructor)
	class FString                                      WidgetLeftName;                                           // 0x0020(0x0010) (Edit, ZeroConstructor)
	class FString                                      WidgetRightName;                                          // 0x0030(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct GbxUI.ContextualMenuEntryInfo
// 0x0020
struct FContextualMenuEntryInfo
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct GbxUI.UIEventAudioPairRow
// 0x0008 (0x0010 - 0x0008)
struct FUIEventAudioPairRow : public FTableRowBase
{
	class UWwiseEvent*                                 WwiseSound;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct GbxUI.GbxHUDLayoutTableRow
// 0x0028 (0x0030 - 0x0008)
struct FGbxHUDLayoutTableRow : public FTableRowBase
{
	struct FVector2D                                   AnchorPosition;                                           // 0x0008(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   Offset;                                                   // 0x0010(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   Scale;                                                    // 0x0018(0x0008) (Edit, IsPlainOldData)
	class FString                                      LibraryMovieString;                                       // 0x0020(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct GbxUI.GbxMenuInputActionInfo
// 0x000C
struct FGbxMenuInputActionInfo
{
	bool                                               bIsHeld;                                                  // 0x0000(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsPressToHold;                                           // 0x0001(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              PressToHoldDuration;                                      // 0x0004(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              PressToHoldProgress;                                      // 0x0008(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct GbxUI.TextDebugData
// 0x0030
struct FTextDebugData
{
	struct FText                                       DisplayText;                                              // 0x0000(0x0028) (Edit)
	float                                              DisplayTime;                                              // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DisplaySize;                                              // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DisplayColor;                                             // 0x0020(0x0010) (Edit, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
