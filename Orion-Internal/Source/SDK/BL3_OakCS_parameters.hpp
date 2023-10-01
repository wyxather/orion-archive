#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakCS_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OakCS.CSConsoleProxy.OnUnderParScoreReached
struct ACSConsoleProxy_OnUnderParScoreReached_Params
{
};

// Function OakCS.CSConsoleProxy.OnSumbitPuzzleSolution
struct ACSConsoleProxy_OnSumbitPuzzleSolution_Params
{
	bool                                               bIsOptimal;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakCS.CSConsoleProxy.OnQuitCitizenScienceArcade
struct ACSConsoleProxy_OnQuitCitizenScienceArcade_Params
{
};

// Function OakCS.CSConsoleProxy.OnParScoreReached
struct ACSConsoleProxy_OnParScoreReached_Params
{
};

// Function OakCS.CSConsoleProxy.OnOptimalScoreReached
struct ACSConsoleProxy_OnOptimalScoreReached_Params
{
};

// Function OakCS.CSConsoleProxy.OnFirstPuzzleOfCurrentDifficulty
struct ACSConsoleProxy_OnFirstPuzzleOfCurrentDifficulty_Params
{
};

// Function OakCS.CSConsoleProxy.OnEnterPuzzle
struct ACSConsoleProxy_OnEnterPuzzle_Params
{
};

// Function OakCS.CSConsoleProxy.OnDifficultyLevelCompleted
struct ACSConsoleProxy_OnDifficultyLevelCompleted_Params
{
};

// Function OakCS.CSTutorialBPLib.UnblockCSPuzzleIntro
struct UCSTutorialBPLib_UnblockCSPuzzleIntro_Params
{
};

// Function OakCS.CSTutorialBPLib.UnblockCSPuzzleInputs
struct UCSTutorialBPLib_UnblockCSPuzzleInputs_Params
{
};

// Function OakCS.CSTutorialBPLib.StopHighlightCSTutorialElement
struct UCSTutorialBPLib_StopHighlightCSTutorialElement_Params
{
	ECSTutorialElement                                 TutorialElement;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakCS.CSTutorialBPLib.ShowCSTutorialTooltip
struct UCSTutorialBPLib_ShowCSTutorialTooltip_Params
{
	class FString                                      Tooltip;                                                  // (Parm, ZeroConstructor)
};

// Function OakCS.CSTutorialBPLib.ShowCSTutorialElement
struct UCSTutorialBPLib_ShowCSTutorialElement_Params
{
	ECSTutorialElement                                 TutorialElement;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakCS.CSTutorialBPLib.HighlightCSTutorialElement
struct UCSTutorialBPLib_HighlightCSTutorialElement_Params
{
	ECSTutorialElement                                 TutorialElement;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakCS.CSTutorialBPLib.HideCSTutorialTooltip
struct UCSTutorialBPLib_HideCSTutorialTooltip_Params
{
	class FString                                      Tooltip;                                                  // (Parm, ZeroConstructor)
};

// Function OakCS.CSTutorialBPLib.HideCSTutorialElement
struct UCSTutorialBPLib_HideCSTutorialElement_Params
{
	ECSTutorialElement                                 TutorialElement;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakCS.CSTutorialBPLib.CSWaitForScore
struct UCSTutorialBPLib_CSWaitForScore_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	ECSScoreCondition                                  ScoreCondition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function OakCS.CSTutorialBPLib.BlockCSPuzzleIntro
struct UCSTutorialBPLib_BlockCSPuzzleIntro_Params
{
};

// Function OakCS.CSTutorialBPLib.BlockCSPuzzleInputs
struct UCSTutorialBPLib_BlockCSPuzzleInputs_Params
{
};

// Function OakCS.GFxCSButton.OnInputDeviceChanged
struct UGFxCSButton_OnInputDeviceChanged_Params
{
	EGbxMenuInputDevice                                NewInputDevice;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakCS.GFxCSBoosterShopMenu.OnCSBucksAmountChanged
struct UGFxCSBoosterShopMenu_OnCSBucksAmountChanged_Params
{
	int                                                NewAmount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakCS.GFxCSBoosterShopMenu.OnConfirmPurchase
struct UGFxCSBoosterShopMenu_OnConfirmPurchase_Params
{
	class UGbxGFxDialogBox*                            SourceDialog;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ChoiceNameId;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxMenuInputEvent                          InputInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function OakCS.GFxCSBoosterShopMenu.OnBoosterItemClicked
struct UGFxCSBoosterShopMenu_OnBoosterItemClicked_Params
{
	class UGbxGFxButton*                               PressedButton;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxMenuInputEvent                          InputInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function OakCS.GFxCSHelpMenu.OnCloseClicked
struct UGFxCSHelpMenu_OnCloseClicked_Params
{
	class UGbxGFxButton*                               PressedButton;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxMenuInputEvent                          InputInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function OakCS.GFxCSHUD.OnHelpClicked
struct UGFxCSHUD_OnHelpClicked_Params
{
	class UGbxGFxButton*                               PressedButton;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxMenuInputEvent                          InputInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function OakCS.GFxCSHUD.OnCSBucksAmountChanged
struct UGFxCSHUD_OnCSBucksAmountChanged_Params
{
	int                                                NewAmount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OakCS.GFxCSHUD.OnBackClicked
struct UGFxCSHUD_OnBackClicked_Params
{
	class UGbxGFxButton*                               PressedButton;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxMenuInputEvent                          InputInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function OakCS.GFxCSLevelSelectorMenu.OnLevelItemClicked
struct UGFxCSLevelSelectorMenu_OnLevelItemClicked_Params
{
	class UGbxGFxButton*                               PressedButton;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxMenuInputEvent                          InputInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function OakCS.GFxCSMainMenu.OnWhatsThisClicked
struct UGFxCSMainMenu_OnWhatsThisClicked_Params
{
	class UGbxGFxButton*                               PressedButton;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxMenuInputEvent                          InputInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function OakCS.GFxCSMainMenu.OnPlayClicked
struct UGFxCSMainMenu_OnPlayClicked_Params
{
	class UGbxGFxButton*                               PressedButton;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxMenuInputEvent                          InputInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function OakCS.GFxCSMainMenu.OnErrorDialogClicked
struct UGFxCSMainMenu_OnErrorDialogClicked_Params
{
	class UGbxGFxDialogBox*                            SourceDialog;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ChoiceNameId;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxMenuInputEvent                          InputInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function OakCS.GFxCSMainMenu.OnBuyBoosterClicked
struct UGFxCSMainMenu_OnBuyBoosterClicked_Params
{
	class UGbxGFxButton*                               PressedButton;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxMenuInputEvent                          InputInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function OakCS.GFxCSPuzzleMenu.OnSubmitClicked
struct UGFxCSPuzzleMenu_OnSubmitClicked_Params
{
	class UGbxGFxButton*                               PressedButton;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxMenuInputEvent                          InputInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function OakCS.GFxCSPuzzleMenu.OnQuitConfirmed
struct UGFxCSPuzzleMenu_OnQuitConfirmed_Params
{
	class UGbxGFxDialogBox*                            SourceDialog;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ChoiceNameId;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxMenuInputEvent                          InputInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function OakCS.GFxCSPuzzleMenu.OnQuickPassClicked
struct UGFxCSPuzzleMenu_OnQuickPassClicked_Params
{
	class UGbxGFxButton*                               PressedButton;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxMenuInputEvent                          InputInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function OakCS.GFxCSPuzzleMenu.OnErrorDialogClicked
struct UGFxCSPuzzleMenu_OnErrorDialogClicked_Params
{
	class UGbxGFxDialogBox*                            SourceDialog;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ChoiceNameId;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxMenuInputEvent                          InputInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function OakCS.GFxCSPuzzleMenu.OnConfirmQuickPass
struct UGFxCSPuzzleMenu_OnConfirmQuickPass_Params
{
	class UGbxGFxDialogBox*                            SourceDialog;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ChoiceNameId;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxMenuInputEvent                          InputInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function OakCS.GFxCSPuzzleMenu.GoToRewardScreenMenu
struct UGFxCSPuzzleMenu_GoToRewardScreenMenu_Params
{
};

// Function OakCS.GFxCSPuzzleMenu.GoToMainMenu
struct UGFxCSPuzzleMenu_GoToMainMenu_Params
{
};

// Function OakCS.GFxCSPuzzleMenu.extTokenTileTurnedOn
struct UGFxCSPuzzleMenu_extTokenTileTurnedOn_Params
{
};

// Function OakCS.GFxCSPuzzleMenu.extTokenTileTurnedOff
struct UGFxCSPuzzleMenu_extTokenTileTurnedOff_Params
{
};

// Function OakCS.GFxCSRewardScreenMenu.OnPlayNextCharacterClicked
struct UGFxCSRewardScreenMenu_OnPlayNextCharacterClicked_Params
{
	class UGbxGFxButton*                               PressedButton;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxMenuInputEvent                          InputInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function OakCS.GFxCSRewardScreenMenu.OnPlayAgainClicked
struct UGFxCSRewardScreenMenu_OnPlayAgainClicked_Params
{
	class UGbxGFxButton*                               PressedButton;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxMenuInputEvent                          InputInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function OakCS.GFxCSRewardScreenMenu.OnMainMenuButtonClicked
struct UGFxCSRewardScreenMenu_OnMainMenuButtonClicked_Params
{
	class UGbxGFxButton*                               PressedButton;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGbxMenuInputEvent                          InputInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function OakCS.GFxCSRewardScreenMenu.GoToPuzzleMenu
struct UGFxCSRewardScreenMenu_GoToPuzzleMenu_Params
{
};

// Function OakCS.GFxCSRewardScreenMenu.GoToMainMenu
struct UGFxCSRewardScreenMenu_GoToMainMenu_Params
{
};

// Function OakCS.GFxCSRewardScreenMenu.extRefreshNumCompletedPuzzle
struct UGFxCSRewardScreenMenu_extRefreshNumCompletedPuzzle_Params
{
};

// Function OakCS.GFxCSRewardScreenMenu.extPuzzleCompletedTextAnimDone
struct UGFxCSRewardScreenMenu_extPuzzleCompletedTextAnimDone_Params
{
};

// Function OakCS.GFxCSRewardScreenMenu.extOnShowPuzzleRewardDone
struct UGFxCSRewardScreenMenu_extOnShowPuzzleRewardDone_Params
{
};

// Function OakCS.GFxCSRewardScreenMenu.extOnShowBonusDone
struct UGFxCSRewardScreenMenu_extOnShowBonusDone_Params
{
};

// Function OakCS.GFxCSRewardScreenMenu.extNumCompletedPuzzleAnimDone
struct UGFxCSRewardScreenMenu_extNumCompletedPuzzleAnimDone_Params
{
};

// Function OakCS.GFxCSWhatsThisMenu.OnMovieMediaOpenFailed
struct UGFxCSWhatsThisMenu_OnMovieMediaOpenFailed_Params
{
	class FString                                      FailedUrl;                                                // (Parm, ZeroConstructor)
};

// Function OakCS.GFxCSWhatsThisMenu.OnMovieMediaOpened
struct UGFxCSWhatsThisMenu_OnMovieMediaOpened_Params
{
};

// Function OakCS.GFxCSWhatsThisMenu.OnMovieEndReached
struct UGFxCSWhatsThisMenu_OnMovieEndReached_Params
{
};

// Function OakCS.OakCitizenScienceManager.GetCitizenScienceManager
struct UOakCitizenScienceManager_GetCitizenScienceManager_Params
{
	class UOakCitizenScienceManager*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OakCS.TutorialPuzzle.OnTutorialStart
struct UTutorialPuzzle_OnTutorialStart_Params
{
};

// Function OakCS.TutorialPuzzle.OnTutorialEnd
struct UTutorialPuzzle_OnTutorialEnd_Params
{
};

// Function OakCS.TutorialPuzzle.GetTutorialWorld
struct UTutorialPuzzle_GetTutorialWorld_Params
{
	class UWorld*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
