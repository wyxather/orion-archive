#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakCS_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OakCS.CSAction
// 0x0020 (0x0048 - 0x0028)
class UCSAction : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OakCS.CSAction");
		return ptr;
	}

};


// Class OakCS.CSActionInsertToken
// 0x0000 (0x0048 - 0x0048)
class UCSActionInsertToken : public UCSAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OakCS.CSActionInsertToken");
		return ptr;
	}

};


// Class OakCS.CSActionRemoveToken
// 0x0000 (0x0048 - 0x0048)
class UCSActionRemoveToken : public UCSAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OakCS.CSActionRemoveToken");
		return ptr;
	}

};


// Class OakCS.CSActionSwapTileAndToken
// 0x0010 (0x0058 - 0x0048)
class UCSActionSwapTileAndToken : public UCSAction
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OakCS.CSActionSwapTileAndToken");
		return ptr;
	}

};


// Class OakCS.CSCheatManager
// 0x0000 (0x0028 - 0x0028)
class UCSCheatManager : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OakCS.CSCheatManager");
		return ptr;
	}

};


// Class OakCS.CSCondition
// 0x0000 (0x0088 - 0x0088)
class UCSCondition : public UGbxCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OakCS.CSCondition");
		return ptr;
	}

};


// Class OakCS.CSConsole
// 0x0008 (0x0668 - 0x0660)
class ACSConsole : public AAdvancedInteractiveObject
{
public:
	class UGbxMenuData*                                CSMenuData;                                               // 0x0660(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OakCS.CSConsole");
		return ptr;
	}

};


// Class OakCS.CSConsoleProxy
// 0x0038 (0x0520 - 0x04E8)
class ACSConsoleProxy : public AAdvancedInteractiveObjectProxy
{
public:
	struct FName                                       CurrentOpponent;                                          // 0x04E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TSoftObjectPtr<class UGbxMenuData>                 CSMenuData;                                               // 0x04F0(0x0028)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0518(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OakCS.CSConsoleProxy");
		return ptr;
	}


	void OnUnderParScoreReached();
	void OnSumbitPuzzleSolution(bool bIsOptimal);
	void OnQuitCitizenScienceArcade();
	void OnParScoreReached();
	void OnOptimalScoreReached();
	void OnFirstPuzzleOfCurrentDifficulty();
	void OnEnterPuzzle();
	void OnDifficultyLevelCompleted();
};


// Class OakCS.CSLevelData
// 0x0010 (0x0040 - 0x0030)
class UCSLevelData : public UGbxDataAsset
{
public:
	TArray<struct FCSLevelInfo>                        LevelInfos;                                               // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OakCS.CSLevelData");
		return ptr;
	}

};


// Class OakCS.CSPuzzleFeedbackManager
// 0x0138 (0x0160 - 0x0028)
class UCSPuzzleFeedbackManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x0028(0x0014) MISSED OFFSET
	struct FCSPuzzleFeedbackSettings                   Settings;                                                 // 0x003C(0x0020) (Edit, DisableEditOnInstance)
	TWeakObjectPtr<class UGFxCSPuzzle>                 Puzzle;                                                   // 0x005C(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UGFxCSTokenPool>              TokenPool;                                                // 0x0064(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UGFxCSProgressBar>            ProgressBar;                                              // 0x006C(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UGbxGFxObject>                ProgressBarContainer;                                     // 0x0074(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UCSPuzzleSession>             PuzzleSession;                                            // 0x007C(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UGbxGFxObject>                ParScoreTextFeedback;                                     // 0x0084(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UGbxGFxObject>                ParScoreContainer;                                        // 0x008C(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UGbxTextField>                ParScoreText;                                             // 0x0094(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UGbxGFxObject>                CurrentScoreContainer;                                    // 0x009C(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UGbxTextField>                CurrentScoreText;                                         // 0x00A4(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UGbxGFxObject>                HighScoreContainer;                                       // 0x00AC(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UGbxTextField>                HighScoreText;                                            // 0x00B4(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UGbxGFxObject>                ProgressBarBonusScoreContainer;                           // 0x00BC(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UGbxTextField>                ProgressBarBonusScoreText;                                // 0x00C4(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UGbxGFxObject>                BonusScoreContainer;                                      // 0x00CC(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UGbxTextField>                BonusScoreText;                                           // 0x00D4(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UGbxGFxObject>                NumTokensContainer;                                       // 0x00DC(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UGbxTextField>                NumTokensText;                                            // 0x00E4(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UGFxCSPuzzleMenu>             OwningMenu;                                               // 0x00EC(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	TArray<class UGFxCSPuzzleTile*>                    TweeningTiles;                                            // 0x00F8(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x58];                                      // 0x0108(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OakCS.CSPuzzleFeedbackManager");
		return ptr;
	}

};


// Class OakCS.CSPuzzleIntroManager
// 0x0040 (0x0068 - 0x0028)
class UCSPuzzleIntroManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	struct FCSPuzzleIntroSettings                      Settings;                                                 // 0x0038(0x0014) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x1C];                                      // 0x004C(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OakCS.CSPuzzleIntroManager");
		return ptr;
	}

};


// Class OakCS.CSPuzzleSession
// 0x00D0 (0x00F8 - 0x0028)
class UCSPuzzleSession : public UObject
{
public:
	TArray<class UCSAction*>                           PuzzleActions;                                            // 0x0028(0x0010) (ZeroConstructor, Transient)
	class UTutorialPuzzle*                             TutorialPuzzle;                                           // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0040(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OakCS.CSPuzzleSession");
		return ptr;
	}

};


// Class OakCS.CSTutorialBPLib
// 0x0000 (0x0028 - 0x0028)
class UCSTutorialBPLib : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OakCS.CSTutorialBPLib");
		return ptr;
	}


	void STATIC_UnblockCSPuzzleIntro();
	void STATIC_UnblockCSPuzzleInputs();
	void STATIC_StopHighlightCSTutorialElement(ECSTutorialElement TutorialElement);
	void STATIC_ShowCSTutorialTooltip(const class FString& Tooltip);
	void STATIC_ShowCSTutorialElement(ECSTutorialElement TutorialElement);
	void STATIC_HighlightCSTutorialElement(ECSTutorialElement TutorialElement);
	void STATIC_HideCSTutorialTooltip(const class FString& Tooltip);
	void STATIC_HideCSTutorialElement(ECSTutorialElement TutorialElement);
	void STATIC_CSWaitForScore(class UWorld* World, ECSScoreCondition ScoreCondition, const struct FLatentActionInfo& LatentInfo);
	void STATIC_BlockCSPuzzleIntro();
	void STATIC_BlockCSPuzzleInputs();
};


// Class OakCS.GFxCSButton
// 0x0010 (0x0320 - 0x0310)
class UGFxCSButton : public UGbxGFxListCell
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0310(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OakCS.GFxCSButton");
		return ptr;
	}


	void OnInputDeviceChanged(EGbxMenuInputDevice NewInputDevice);
};


// Class OakCS.GFxCSBoosterItem
// 0x0070 (0x0390 - 0x0320)
class UGFxCSBoosterItem : public UGFxCSButton
{
public:
	class UGbxTextField*                               DisplayName;                                              // 0x0320(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               Description;                                              // 0x0328(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               UnlockDescription;                                        // 0x0330(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               Price;                                                    // 0x0338(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               Picture;                                                  // 0x0340(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               BoosterTimer;                                             // 0x0348(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0350(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OakCS.GFxCSBoosterItem");
		return ptr;
	}

};


// Class OakCS.GFxCSSubMenu
// 0x0010 (0x06A0 - 0x0690)
class UGFxCSSubMenu : public UGbxGFxMenuSwitcherSubmenu
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0690(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OakCS.GFxCSSubMenu");
		return ptr;
	}

};


// Class OakCS.GFxCSBoosterShopMenu
// 0x0070 (0x0710 - 0x06A0)
class UGFxCSBoosterShopMenu : public UGFxCSSubMenu
{
public:
	struct FText                                       BuyBoosterMessageHeader;                                  // 0x06A0(0x0028) (Edit, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       BuyBoosterMessage;                                        // 0x06B8(0x0028) (Edit, BlueprintReadOnly, DisableEditOnInstance)
	int                                                NumBoosterItemByRow;                                      // 0x06D0(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x06D4(0x0004) MISSED OFFSET
	class UBoosterData*                                BoosterData;                                              // 0x06D8(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGbxGFxGridScrollingList*                    BoosterList;                                              // 0x06E0(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGFxCSBoosterItem*                           ClickedBoosterItem;                                       // 0x06E8(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x06F0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OakCS.GFxCSBoosterShopMenu");
		return ptr;
	}


	void OnCSBucksAmountChanged(int NewAmount);
	void OnConfirmPurchase(class UGbxGFxDialogBox* SourceDialog, const struct FName& ChoiceNameId, const struct FGbxMenuInputEvent& InputInfo);
	void OnBoosterItemClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo);
};


// Class OakCS.GFxCSHelpMenu
// 0x0130 (0x07B0 - 0x0680)
class UGFxCSHelpMenu : public UGbxGFxMenu
{
public:
	class UGFxCSButton*                                RulesTab;                                                 // 0x0680(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGFxCSButton*                                ControllerTab;                                            // 0x0688(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               RulesContainer;                                           // 0x0690(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               HelpContainer;                                            // 0x0698(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               ControlsContainer;                                        // 0x06A0(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGFxCSButton*                                CloseButton;                                              // 0x06A8(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x100];                                     // 0x06B0(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OakCS.GFxCSHelpMenu");
		return ptr;
	}


	void OnCloseClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo);
};


// Class OakCS.GFxCSHUD
// 0x0080 (0x0720 - 0x06A0)
class UGFxCSHUD : public UGbxGFxMenuSwitcher
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x06A0(0x0010) MISSED OFFSET
	class UCSGlobals*                                  CitizenScienceGlobals;                                    // 0x06B0(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGFxEchologWidgetBase*                       EchoWidget;                                               // 0x06B8(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGFxCSSubtitles*                             SubtitlesWidget;                                          // 0x06C0(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               CSBucksAmountTextField;                                   // 0x06C8(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               MenuTitle;                                                // 0x06D0(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGFxCSButton*                                BackButton;                                               // 0x06D8(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGFxCSButton*                                HelpButton;                                               // 0x06E0(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               CSBucksObject;                                            // 0x06E8(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               PlayerIdPanel;                                            // 0x06F0(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               PlayerIdText;                                             // 0x06F8(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0700(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OakCS.GFxCSHUD");
		return ptr;
	}


	void OnHelpClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo);
	void OnCSBucksAmountChanged(int NewAmount);
	void OnBackClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo);
};


// Class OakCS.GFxCSLevelButton
// 0x00B0 (0x03D0 - 0x0320)
class UGFxCSLevelButton : public UGFxCSButton
{
public:
	class UGbxTextField*                               CharacterName;                                            // 0x0320(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               LevelDifficulty;                                          // 0x0328(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               PuzzleCompletedNum;                                       // 0x0330(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               CharacterPicture;                                         // 0x0338(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGFxCSProgressBar*                           ProgressBar;                                              // 0x0340(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               RewardPanel;                                              // 0x0348(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               RewardText;                                               // 0x0350(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               RewardPicture;                                            // 0x0358(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x70];                                      // 0x0360(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OakCS.GFxCSLevelButton");
		return ptr;
	}

};


// Class OakCS.GFxCSLevelList
// 0x0000 (0x0320 - 0x0320)
class UGFxCSLevelList : public UGbxGFxGridScrollingList
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OakCS.GFxCSLevelList");
		return ptr;
	}

};


// Class OakCS.GFxCSLevelSelectorMenu
// 0x0020 (0x06C0 - 0x06A0)
class UGFxCSLevelSelectorMenu : public UGFxCSSubMenu
{
public:
	class UCSLevelData*                                LevelData;                                                // 0x06A0(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayBeforeLoadingPuzzleMenu;                             // 0x06A8(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x06AC(0x0004) MISSED OFFSET
	class UGFxCSLevelList*                             LevelList;                                                // 0x06B0(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x06B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OakCS.GFxCSLevelSelectorMenu");
		return ptr;
	}


	void OnLevelItemClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo);
};


// Class OakCS.GFxCSMainMenu
// 0x0050 (0x06F0 - 0x06A0)
class UGFxCSMainMenu : public UGFxCSSubMenu
{
public:
	class UGFxCSButton*                                PlayButton;                                               // 0x06A0(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGFxCSButton*                                BuyBoosterButton;                                         // 0x06A8(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGFxCSButton*                                WhatsThisButton;                                          // 0x06B0(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGFxCSButton*                                QuitButton;                                               // 0x06B8(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxButton*                               HelpButton;                                               // 0x06C0(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               DidYouKnowTitle;                                          // 0x06C8(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               DidYouKnowText;                                           // 0x06D0(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxDialogBox*                            SparkAuthenticatingDialog;                                // 0x06D8(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x06E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OakCS.GFxCSMainMenu");
		return ptr;
	}


	void OnWhatsThisClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo);
	void OnPlayClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo);
	void OnErrorDialogClicked(class UGbxGFxDialogBox* SourceDialog, const struct FName& ChoiceNameId, const struct FGbxMenuInputEvent& InputInfo);
	void OnBuyBoosterClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo);
};


// Class OakCS.GFxCSProgressBar
// 0x0020 (0x0190 - 0x0170)
class UGFxCSProgressBar : public UGbxGFxObject
{
public:
	class UGbxGFxObject*                               MaskObj;                                                  // 0x0170(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               Marker;                                                   // 0x0178(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0180(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OakCS.GFxCSProgressBar");
		return ptr;
	}

};


// Class OakCS.GFxCSPuzzle
// 0x0030 (0x01A0 - 0x0170)
class UGFxCSPuzzle : public UGbxGFxObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0170(0x0010) MISSED OFFSET
	class UGFxCSPuzzleGrid*                            PuzzleGrid;                                               // 0x0180(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGFxCSPuzzleGuide*                           PuzzleGuide;                                              // 0x0188(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGFxCSTokenPool*                             TokenPool;                                                // 0x0190(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0198(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OakCS.GFxCSPuzzle");
		return ptr;
	}

};


// Class OakCS.GFxCSPuzzleGrid
// 0x0080 (0x01F0 - 0x0170)
class UGFxCSPuzzleGrid : public UGbxGFxObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0170(0x0018) MISSED OFFSET
	TArray<struct FGFxCSTileArray>                     PuzzleTiles;                                              // 0x0188(0x0010) (ZeroConstructor)
	TArray<struct FGFxCSTileArray>                     GridTiles;                                                // 0x0198(0x0010) (ZeroConstructor)
	class UGbxGFxObject*                               GridMask;                                                 // 0x01A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGFxCSTokenTile*                             LooseToken;                                               // 0x01B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x38];                                      // 0x01B8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OakCS.GFxCSPuzzleGrid");
		return ptr;
	}

};


// Class OakCS.GFxCSPuzzleGuide
// 0x0020 (0x0190 - 0x0170)
class UGFxCSPuzzleGuide : public UGbxGFxObject
{
public:
	TArray<struct FGFxCSTileArray>                     GuideTiles;                                               // 0x0170(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0180(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OakCS.GFxCSPuzzleGuide");
		return ptr;
	}

};


// Class OakCS.GFxCSPuzzleMenu
// 0x0190 (0x0830 - 0x06A0)
class UGFxCSPuzzleMenu : public UGFxCSSubMenu
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x06A0(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnQuit;                                                   // 0x06B0(0x0010) (BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x06C0(0x0008) MISSED OFFSET
	class UGbxGFxDialogBox*                            RequestingPuzzleDialog;                                   // 0x06C8(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UCSPuzzleFeedbackManager*                    PuzzleFeedbackManager;                                    // 0x06D0(0x0008) (Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UCSPuzzleIntroManager*                       PuzzleIntroManager;                                       // 0x06D8(0x0008) (Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UGFxCSPuzzle*                                Puzzle;                                                   // 0x06E0(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               ParScoreContainer;                                        // 0x06E8(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               ParScoreText;                                             // 0x06F0(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               CurrentScoreContainer;                                    // 0x06F8(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               CurrentScoreText;                                         // 0x0700(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               HighScoreContainer;                                       // 0x0708(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               HighScoreText;                                            // 0x0710(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               DebugContainer;                                           // 0x0718(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               DebugCurrentScoreText;                                    // 0x0720(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               DebugRealCurrentScoreText;                                // 0x0728(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               DebugParScoreText;                                        // 0x0730(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               DebugRealParScoreText;                                    // 0x0738(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               DebugHighestScoreText;                                    // 0x0740(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               DebugRealHighestScoreText;                                // 0x0748(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               DebugNbTokenLeftText;                                     // 0x0750(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               DebugMatchingTileValueText;                               // 0x0758(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               DebugPerfectAlignmentModifierText;                        // 0x0760(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               DebugPuzzleId;                                            // 0x0768(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               DebugTokenPos;                                            // 0x0770(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               ParScoreTextFeedback;                                     // 0x0778(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGFxCSProgressBar*                           ProgressBar;                                              // 0x0780(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               ProgressBarBonusScoreContainer;                           // 0x0788(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               ProgressBarBonusScoreText;                                // 0x0790(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxButton*                               QuitButton;                                               // 0x0798(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxButton*                               QuickPassButton;                                          // 0x07A0(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               QuickPassButtonTxt;                                       // 0x07A8(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxButton*                               SubmitButton;                                             // 0x07B0(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               SubmitButtonContainer;                                    // 0x07B8(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               ProgressBarContainer;                                     // 0x07C0(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               NotificationContainer;                                    // 0x07C8(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               NotificationText;                                         // 0x07D0(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               BonusScoreContainer;                                      // 0x07D8(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               BonusScoreText;                                           // 0x07E0(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               NumTokensPanel;                                           // 0x07E8(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               NumTokensContainer;                                       // 0x07F0(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               NumTokensText;                                            // 0x07F8(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               NumTotalTokensText;                                       // 0x0800(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x28];                                      // 0x0808(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OakCS.GFxCSPuzzleMenu");
		return ptr;
	}


	void OnSubmitClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo);
	void OnQuitConfirmed(class UGbxGFxDialogBox* SourceDialog, const struct FName& ChoiceNameId, const struct FGbxMenuInputEvent& InputInfo);
	void OnQuickPassClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo);
	void OnErrorDialogClicked(class UGbxGFxDialogBox* SourceDialog, const struct FName& ChoiceNameId, const struct FGbxMenuInputEvent& InputInfo);
	void OnConfirmQuickPass(class UGbxGFxDialogBox* SourceDialog, const struct FName& ChoiceNameId, const struct FGbxMenuInputEvent& InputInfo);
	void GoToRewardScreenMenu();
	void GoToMainMenu();
	void extTokenTileTurnedOn();
	void extTokenTileTurnedOff();
};


// Class OakCS.GFxCSPuzzleTile
// 0x00C0 (0x0230 - 0x0170)
class UGFxCSPuzzleTile : public UGbxGFxObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0170(0x0040) MISSED OFFSET
	class UGbxGFxObject*                               AnimObject;                                               // 0x01B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x01B8(0x0020) MISSED OFFSET
	class UGbxGFxObject*                               FocusedFeedback;                                          // 0x01D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UGbxTextField*>                       PlayerIds;                                                // 0x01E0(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x40];                                      // 0x01F0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OakCS.GFxCSPuzzleTile");
		return ptr;
	}

};


// Class OakCS.GFxCSGridTile
// 0x0000 (0x0230 - 0x0230)
class UGFxCSGridTile : public UGFxCSPuzzleTile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OakCS.GFxCSGridTile");
		return ptr;
	}

};


// Class OakCS.GFxCSGuideTile
// 0x0000 (0x0230 - 0x0230)
class UGFxCSGuideTile : public UGFxCSPuzzleTile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OakCS.GFxCSGuideTile");
		return ptr;
	}

};


// Class OakCS.GFxCSTokenTile
// 0x0000 (0x0230 - 0x0230)
class UGFxCSTokenTile : public UGFxCSPuzzleTile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OakCS.GFxCSTokenTile");
		return ptr;
	}

};


// Class OakCS.GFxCSRewardScreenItem
// 0x0020 (0x0190 - 0x0170)
class UGFxCSRewardScreenItem : public UGbxGFxObject
{
public:
	class UGbxTextField*                               ItemLabel;                                                // 0x0170(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               ItemValue;                                                // 0x0178(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0180(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OakCS.GFxCSRewardScreenItem");
		return ptr;
	}

};


// Class OakCS.GFxCSRewardScreenMenu
// 0x01F0 (0x0890 - 0x06A0)
class UGFxCSRewardScreenMenu : public UGFxCSSubMenu
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x06A0(0x0004) MISSED OFFSET
	float                                              ProgressBarAnimSpeed;                                     // 0x06A4(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayBetweenBonuses;                                      // 0x06A8(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TextAnimationTime;                                        // 0x06AC(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       BaseRewardText;                                           // 0x06B0(0x0028) (Edit, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       ExtraPointText;                                           // 0x06C8(0x0028) (Edit, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       HighScoreMatchedText;                                     // 0x06E0(0x0028) (Edit, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       HighScoreBeatText;                                        // 0x06F8(0x0028) (Edit, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       PioneerText;                                              // 0x0710(0x0028) (Edit, BlueprintReadOnly, DisableEditOnInstance)
	class UCSLevelData*                                LevelData;                                                // 0x0728(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TWeakObjectPtr<class UGbxTextField>                PlayerCSBucksAmountText;                                  // 0x0730(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               PuzzleCompletedTextPanel;                                 // 0x0738(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               MainContentPanel;                                         // 0x0740(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               ProgressTextPanel;                                        // 0x0748(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               NumCompletedPuzzleTextPanel;                              // 0x0750(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               NumCompletedPuzzleText;                                   // 0x0758(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxTextField*                               NumTargetPuzzleText;                                      // 0x0760(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGFxCSProgressBar*                           ProgressBar;                                              // 0x0768(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               NewCustomizationAnimText;                                 // 0x0770(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               AnimRewardPanel;                                          // 0x0778(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               CharacterPicture;                                         // 0x0780(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               CustomizationPicture;                                     // 0x0788(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGFxCSRewardScreenItem*                      PuzzleRewardItem;                                         // 0x0790(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UGFxCSRewardScreenItem*                      TotalPuzzleRewardItem;                                    // 0x0798(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UGFxCSRewardScreenItem*>              BonusItems;                                               // 0x07A0(0x0010) (BlueprintReadOnly, ZeroConstructor, Transient)
	class UGbxGFxGridScrollingList*                    ButtonList;                                               // 0x07B0(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xD8];                                      // 0x07B8(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OakCS.GFxCSRewardScreenMenu");
		return ptr;
	}


	void OnPlayNextCharacterClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo);
	void OnPlayAgainClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo);
	void OnMainMenuButtonClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo);
	void GoToPuzzleMenu();
	void GoToMainMenu();
	void extRefreshNumCompletedPuzzle();
	void extPuzzleCompletedTextAnimDone();
	void extOnShowPuzzleRewardDone();
	void extOnShowBonusDone();
	void extNumCompletedPuzzleAnimDone();
};


// Class OakCS.GFxCSStartScreen
// 0x0000 (0x0680 - 0x0680)
class UGFxCSStartScreen : public UGbxGFxMenu
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OakCS.GFxCSStartScreen");
		return ptr;
	}

};


// Class OakCS.GFxCSSubtitles
// 0x00B0 (0x0220 - 0x0170)
class UGFxCSSubtitles : public UGbxGFxObject
{
public:
	float                                              ClosedCaptionLifetime;                                    // 0x0170(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxTextScalingForLargestBackground;                       // 0x0174(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      SubtitleBackgroundSizeMapping;                            // 0x0178(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0188(0x0018) MISSED OFFSET
	class UGbxTextField*                               SubtitleField;                                            // 0x01A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UGbxGFxObject*                               SubtitleBackground;                                       // 0x01A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	ESubtitleLayoutType                                CurrentSubtitleLayoutType;                                // 0x01B0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01B1(0x0007) MISSED OFFSET
	class UGbxGFxObject*                               ClosedCaptioningContainer;                                // 0x01B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FClosedCaptionEntry>                 ClosedCaptioningLines;                                    // 0x01C0(0x0010) (ZeroConstructor, Transient)
	TArray<struct FSubtitleLine>                       SubtitleLines;                                            // 0x01D0(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x8];                                       // 0x01E0(0x0008) MISSED OFFSET
	int64_t                                            CurrentSubtitleID;                                        // 0x01E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bStopAfterCurrentSubtitle;                                // 0x01F0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bSubtitleChangePending;                                   // 0x01F1(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x01F2(0x0002) MISSED OFFSET
	float                                              SubtitleLifetime;                                         // 0x01F4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x01F8(0x0008) MISSED OFFSET
	struct FText                                       CachedSubtitle;                                           // 0x0200(0x0028) (Transient)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0218(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OakCS.GFxCSSubtitles");
		return ptr;
	}

};


// Class OakCS.GFxCSTokenPool
// 0x0030 (0x01A0 - 0x0170)
class UGFxCSTokenPool : public UGbxGFxObject
{
public:
	class UGbxGFxObject*                               TokenPoolMask;                                            // 0x0170(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UGFxCSTokenTile*>                     TokenTiles;                                               // 0x0178(0x0010) (ZeroConstructor, Transient)
	TArray<class UGFxCSGridTile*>                      GridTiles;                                                // 0x0188(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0198(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OakCS.GFxCSTokenPool");
		return ptr;
	}

};


// Class OakCS.GFxCSWhatsThisMenu
// 0x0080 (0x0720 - 0x06A0)
class UGFxCSWhatsThisMenu : public UGFxCSSubMenu
{
public:
	class UGbxLevelSequence*                           MovieSequencer;                                           // 0x06A0(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          MediaMaterial;                                            // 0x06A8(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MaterialName;                                             // 0x06B0(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       FadeName;                                                 // 0x06B8(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ParticleSystemName;                                       // 0x06C0(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ScreenParticle;                                           // 0x06C8(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ParticleDepth;                                            // 0x06D0(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // 0x06D4(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StartAudioSetupForMovieEvent;                             // 0x06D8(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UWwiseEvent*                                 StopAudioSetupForMovieEvent;                              // 0x06E0(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UScreenParticleManagerComponent*             ScreenParticleManagerComponent;                           // 0x06E8(0x0008) (ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class ULevelSequencePlayer*                        MovieSequencePlayer;                                      // 0x06F0(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class ALevelSequenceActor*                         MovieSequenceActor;                                       // 0x06F8(0x0008) (BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0700(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OakCS.GFxCSWhatsThisMenu");
		return ptr;
	}


	void OnMovieMediaOpenFailed(const class FString& FailedUrl);
	void OnMovieMediaOpened();
	void OnMovieEndReached();
};


// Class OakCS.OakCitizenScienceManager
// 0x00D0 (0x00F8 - 0x0028)
class UOakCitizenScienceManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET
	class UCSPuzzleSession*                            CurrentPuzzleSession;                                     // 0x00A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UCSGlobals*                                  CSGlobals;                                                // 0x00B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x00B8(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OakCS.OakCitizenScienceManager");
		return ptr;
	}


	class UOakCitizenScienceManager* STATIC_GetCitizenScienceManager();
};


// Class OakCS.TutorialPuzzle
// 0x0040 (0x0068 - 0x0028)
class UTutorialPuzzle : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class FString                                      PuzzleLines;                                              // 0x0030(0x0010) (Edit, ZeroConstructor)
	class FString                                      PuzzleGuides;                                             // 0x0040(0x0010) (Edit, ZeroConstructor)
	int                                                NumberOfTokens;                                           // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ScoringMatchingTile;                                      // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScoringPerfectAlignment;                                  // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ScoringParScore;                                          // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ScoringBestScore;                                         // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OakCS.TutorialPuzzle");
		return ptr;
	}


	void OnTutorialStart();
	void OnTutorialEnd();
	class UWorld* GetTutorialWorld();
};


// Class OakCS.CSGlobals
// 0x01C0 (0x01F0 - 0x0030)
class UCSGlobals : public UGbxDataAsset
{
public:
	class UInventoryCategoryData*                      CSBucksInventoryType;                                     // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UOakCustomizationData*>               SkinRewards;                                              // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UOakCustomizationData*>               HeadRewards;                                              // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                HighScoreMatchedModifier;                                 // 0x0058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HighScoreBeatenModifier;                                  // 0x005C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FDebugPuzzle>                        DebugPuzzles;                                             // 0x0060(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              TutorialPuzzle;                                           // 0x0070(0x0010) (Edit, ZeroConstructor)
	class UCSLevelData*                                LevelData;                                                // 0x0080(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBoosterData*                                BoosterData;                                              // 0x0088(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       ShiftAccountRequiredTitle;                                // 0x0090(0x0028) (Edit, DisableEditOnInstance)
	struct FText                                       ShiftAccountRequiredText;                                 // 0x00A8(0x0028) (Edit, DisableEditOnInstance)
	struct FText                                       SubmitPuzzleErrorTitle;                                   // 0x00C0(0x0028) (Edit, DisableEditOnInstance)
	struct FText                                       SubmitPuzzleErrorText;                                    // 0x00D8(0x0028) (Edit, DisableEditOnInstance)
	struct FText                                       GetPuzzleErrorTitle;                                      // 0x00F0(0x0028) (Edit, DisableEditOnInstance)
	struct FText                                       GetPuzzleErrorText;                                       // 0x0108(0x0028) (Edit, DisableEditOnInstance)
	struct FText                                       BuyBoosterMessageTitle;                                   // 0x0120(0x0028) (Edit, DisableEditOnInstance)
	struct FText                                       BuyBoosterMessageText;                                    // 0x0138(0x0028) (Edit, DisableEditOnInstance)
	struct FText                                       OverrideBoosterMessageTitle;                              // 0x0150(0x0028) (Edit, DisableEditOnInstance)
	struct FText                                       OverrideBoosterMessageText;                               // 0x0168(0x0028) (Edit, DisableEditOnInstance)
	struct FText                                       QuitPuzzleMessageTitle;                                   // 0x0180(0x0028) (Edit, DisableEditOnInstance)
	struct FText                                       QuitPuzzleMessageBody;                                    // 0x0198(0x0028) (Edit, DisableEditOnInstance)
	struct FText                                       QuickPassMessageTitle;                                    // 0x01B0(0x0028) (Edit, DisableEditOnInstance)
	struct FText                                       QuickPassMessageText;                                     // 0x01C8(0x0028) (Edit, DisableEditOnInstance)
	TArray<struct FText>                               DidYouKnowMessages;                                       // 0x01E0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OakCS.CSGlobals");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
