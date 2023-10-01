// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakCS_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OakCS.CSConsoleProxy.OnUnderParScoreReached
// (Event, Public, BlueprintEvent)

void ACSConsoleProxy::OnUnderParScoreReached()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.CSConsoleProxy.OnUnderParScoreReached");

	ACSConsoleProxy_OnUnderParScoreReached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.CSConsoleProxy.OnSumbitPuzzleSolution
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bIsOptimal                     (Parm, ZeroConstructor, IsPlainOldData)

void ACSConsoleProxy::OnSumbitPuzzleSolution(bool bIsOptimal)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.CSConsoleProxy.OnSumbitPuzzleSolution");

	ACSConsoleProxy_OnSumbitPuzzleSolution_Params params;
	params.bIsOptimal = bIsOptimal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.CSConsoleProxy.OnQuitCitizenScienceArcade
// (Event, Public, BlueprintEvent)

void ACSConsoleProxy::OnQuitCitizenScienceArcade()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.CSConsoleProxy.OnQuitCitizenScienceArcade");

	ACSConsoleProxy_OnQuitCitizenScienceArcade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.CSConsoleProxy.OnParScoreReached
// (Event, Public, BlueprintEvent)

void ACSConsoleProxy::OnParScoreReached()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.CSConsoleProxy.OnParScoreReached");

	ACSConsoleProxy_OnParScoreReached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.CSConsoleProxy.OnOptimalScoreReached
// (Event, Public, BlueprintEvent)

void ACSConsoleProxy::OnOptimalScoreReached()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.CSConsoleProxy.OnOptimalScoreReached");

	ACSConsoleProxy_OnOptimalScoreReached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.CSConsoleProxy.OnFirstPuzzleOfCurrentDifficulty
// (Event, Public, BlueprintEvent)

void ACSConsoleProxy::OnFirstPuzzleOfCurrentDifficulty()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.CSConsoleProxy.OnFirstPuzzleOfCurrentDifficulty");

	ACSConsoleProxy_OnFirstPuzzleOfCurrentDifficulty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.CSConsoleProxy.OnEnterPuzzle
// (Event, Public, BlueprintEvent)

void ACSConsoleProxy::OnEnterPuzzle()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.CSConsoleProxy.OnEnterPuzzle");

	ACSConsoleProxy_OnEnterPuzzle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.CSConsoleProxy.OnDifficultyLevelCompleted
// (Event, Public, BlueprintEvent)

void ACSConsoleProxy::OnDifficultyLevelCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.CSConsoleProxy.OnDifficultyLevelCompleted");

	ACSConsoleProxy_OnDifficultyLevelCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.CSTutorialBPLib.UnblockCSPuzzleIntro
// (Final, Native, Static, Public, BlueprintCallable)

void UCSTutorialBPLib::STATIC_UnblockCSPuzzleIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.CSTutorialBPLib.UnblockCSPuzzleIntro");

	UCSTutorialBPLib_UnblockCSPuzzleIntro_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.CSTutorialBPLib.UnblockCSPuzzleInputs
// (Final, Native, Static, Public, BlueprintCallable)

void UCSTutorialBPLib::STATIC_UnblockCSPuzzleInputs()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.CSTutorialBPLib.UnblockCSPuzzleInputs");

	UCSTutorialBPLib_UnblockCSPuzzleInputs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.CSTutorialBPLib.StopHighlightCSTutorialElement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// ECSTutorialElement             TutorialElement                (Parm, ZeroConstructor, IsPlainOldData)

void UCSTutorialBPLib::STATIC_StopHighlightCSTutorialElement(ECSTutorialElement TutorialElement)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.CSTutorialBPLib.StopHighlightCSTutorialElement");

	UCSTutorialBPLib_StopHighlightCSTutorialElement_Params params;
	params.TutorialElement = TutorialElement;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.CSTutorialBPLib.ShowCSTutorialTooltip
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                  Tooltip                        (Parm, ZeroConstructor)

void UCSTutorialBPLib::STATIC_ShowCSTutorialTooltip(const class FString& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.CSTutorialBPLib.ShowCSTutorialTooltip");

	UCSTutorialBPLib_ShowCSTutorialTooltip_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.CSTutorialBPLib.ShowCSTutorialElement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// ECSTutorialElement             TutorialElement                (Parm, ZeroConstructor, IsPlainOldData)

void UCSTutorialBPLib::STATIC_ShowCSTutorialElement(ECSTutorialElement TutorialElement)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.CSTutorialBPLib.ShowCSTutorialElement");

	UCSTutorialBPLib_ShowCSTutorialElement_Params params;
	params.TutorialElement = TutorialElement;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.CSTutorialBPLib.HighlightCSTutorialElement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// ECSTutorialElement             TutorialElement                (Parm, ZeroConstructor, IsPlainOldData)

void UCSTutorialBPLib::STATIC_HighlightCSTutorialElement(ECSTutorialElement TutorialElement)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.CSTutorialBPLib.HighlightCSTutorialElement");

	UCSTutorialBPLib_HighlightCSTutorialElement_Params params;
	params.TutorialElement = TutorialElement;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.CSTutorialBPLib.HideCSTutorialTooltip
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                  Tooltip                        (Parm, ZeroConstructor)

void UCSTutorialBPLib::STATIC_HideCSTutorialTooltip(const class FString& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.CSTutorialBPLib.HideCSTutorialTooltip");

	UCSTutorialBPLib_HideCSTutorialTooltip_Params params;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.CSTutorialBPLib.HideCSTutorialElement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// ECSTutorialElement             TutorialElement                (Parm, ZeroConstructor, IsPlainOldData)

void UCSTutorialBPLib::STATIC_HideCSTutorialElement(ECSTutorialElement TutorialElement)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.CSTutorialBPLib.HideCSTutorialElement");

	UCSTutorialBPLib_HideCSTutorialElement_Params params;
	params.TutorialElement = TutorialElement;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.CSTutorialBPLib.CSWaitForScore
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)
// ECSScoreCondition              ScoreCondition                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FLatentActionInfo       LatentInfo                     (Parm)

void UCSTutorialBPLib::STATIC_CSWaitForScore(class UWorld* World, ECSScoreCondition ScoreCondition, const struct FLatentActionInfo& LatentInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.CSTutorialBPLib.CSWaitForScore");

	UCSTutorialBPLib_CSWaitForScore_Params params;
	params.World = World;
	params.ScoreCondition = ScoreCondition;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.CSTutorialBPLib.BlockCSPuzzleIntro
// (Final, Native, Static, Public, BlueprintCallable)

void UCSTutorialBPLib::STATIC_BlockCSPuzzleIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.CSTutorialBPLib.BlockCSPuzzleIntro");

	UCSTutorialBPLib_BlockCSPuzzleIntro_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.CSTutorialBPLib.BlockCSPuzzleInputs
// (Final, Native, Static, Public, BlueprintCallable)

void UCSTutorialBPLib::STATIC_BlockCSPuzzleInputs()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.CSTutorialBPLib.BlockCSPuzzleInputs");

	UCSTutorialBPLib_BlockCSPuzzleInputs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.GFxCSButton.OnInputDeviceChanged
// (Final, Native, Public)
// Parameters:
// EGbxMenuInputDevice            NewInputDevice                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UGFxCSButton::OnInputDeviceChanged(EGbxMenuInputDevice NewInputDevice)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSButton.OnInputDeviceChanged");

	UGFxCSButton_OnInputDeviceChanged_Params params;
	params.NewInputDevice = NewInputDevice;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.GFxCSBoosterShopMenu.OnCSBucksAmountChanged
// (Final, Native, Private, Const)
// Parameters:
// int                            NewAmount                      (Parm, ZeroConstructor, IsPlainOldData)

void UGFxCSBoosterShopMenu::OnCSBucksAmountChanged(int NewAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSBoosterShopMenu.OnCSBucksAmountChanged");

	UGFxCSBoosterShopMenu_OnCSBucksAmountChanged_Params params;
	params.NewAmount = NewAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.GFxCSBoosterShopMenu.OnConfirmPurchase
// (Final, Native, Private, HasOutParms, Const)
// Parameters:
// class UGbxGFxDialogBox*        SourceDialog                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ChoiceNameId                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxMenuInputEvent      InputInfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGFxCSBoosterShopMenu::OnConfirmPurchase(class UGbxGFxDialogBox* SourceDialog, const struct FName& ChoiceNameId, const struct FGbxMenuInputEvent& InputInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSBoosterShopMenu.OnConfirmPurchase");

	UGFxCSBoosterShopMenu_OnConfirmPurchase_Params params;
	params.SourceDialog = SourceDialog;
	params.ChoiceNameId = ChoiceNameId;
	params.InputInfo = InputInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.GFxCSBoosterShopMenu.OnBoosterItemClicked
// (Final, Native, Private, HasOutParms, Const)
// Parameters:
// class UGbxGFxButton*           PressedButton                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxMenuInputEvent      InputInfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGFxCSBoosterShopMenu::OnBoosterItemClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSBoosterShopMenu.OnBoosterItemClicked");

	UGFxCSBoosterShopMenu_OnBoosterItemClicked_Params params;
	params.PressedButton = PressedButton;
	params.InputInfo = InputInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.GFxCSHelpMenu.OnCloseClicked
// (Final, Native, Private, HasOutParms, Const)
// Parameters:
// class UGbxGFxButton*           PressedButton                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxMenuInputEvent      InputInfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGFxCSHelpMenu::OnCloseClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSHelpMenu.OnCloseClicked");

	UGFxCSHelpMenu_OnCloseClicked_Params params;
	params.PressedButton = PressedButton;
	params.InputInfo = InputInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.GFxCSHUD.OnHelpClicked
// (Final, Native, Private, HasOutParms, Const)
// Parameters:
// class UGbxGFxButton*           PressedButton                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxMenuInputEvent      InputInfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGFxCSHUD::OnHelpClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSHUD.OnHelpClicked");

	UGFxCSHUD_OnHelpClicked_Params params;
	params.PressedButton = PressedButton;
	params.InputInfo = InputInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.GFxCSHUD.OnCSBucksAmountChanged
// (Final, Native, Private, Const)
// Parameters:
// int                            NewAmount                      (Parm, ZeroConstructor, IsPlainOldData)

void UGFxCSHUD::OnCSBucksAmountChanged(int NewAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSHUD.OnCSBucksAmountChanged");

	UGFxCSHUD_OnCSBucksAmountChanged_Params params;
	params.NewAmount = NewAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.GFxCSHUD.OnBackClicked
// (Final, Native, Private, HasOutParms, Const)
// Parameters:
// class UGbxGFxButton*           PressedButton                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxMenuInputEvent      InputInfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGFxCSHUD::OnBackClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSHUD.OnBackClicked");

	UGFxCSHUD_OnBackClicked_Params params;
	params.PressedButton = PressedButton;
	params.InputInfo = InputInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.GFxCSLevelSelectorMenu.OnLevelItemClicked
// (Final, Native, Private, HasOutParms, Const)
// Parameters:
// class UGbxGFxButton*           PressedButton                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxMenuInputEvent      InputInfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGFxCSLevelSelectorMenu::OnLevelItemClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSLevelSelectorMenu.OnLevelItemClicked");

	UGFxCSLevelSelectorMenu_OnLevelItemClicked_Params params;
	params.PressedButton = PressedButton;
	params.InputInfo = InputInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.GFxCSMainMenu.OnWhatsThisClicked
// (Final, Native, Private, HasOutParms, Const)
// Parameters:
// class UGbxGFxButton*           PressedButton                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxMenuInputEvent      InputInfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGFxCSMainMenu::OnWhatsThisClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSMainMenu.OnWhatsThisClicked");

	UGFxCSMainMenu_OnWhatsThisClicked_Params params;
	params.PressedButton = PressedButton;
	params.InputInfo = InputInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.GFxCSMainMenu.OnPlayClicked
// (Final, Native, Private, HasOutParms, Const)
// Parameters:
// class UGbxGFxButton*           PressedButton                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxMenuInputEvent      InputInfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGFxCSMainMenu::OnPlayClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSMainMenu.OnPlayClicked");

	UGFxCSMainMenu_OnPlayClicked_Params params;
	params.PressedButton = PressedButton;
	params.InputInfo = InputInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.GFxCSMainMenu.OnErrorDialogClicked
// (Final, Native, Private, HasOutParms, Const)
// Parameters:
// class UGbxGFxDialogBox*        SourceDialog                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ChoiceNameId                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxMenuInputEvent      InputInfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGFxCSMainMenu::OnErrorDialogClicked(class UGbxGFxDialogBox* SourceDialog, const struct FName& ChoiceNameId, const struct FGbxMenuInputEvent& InputInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSMainMenu.OnErrorDialogClicked");

	UGFxCSMainMenu_OnErrorDialogClicked_Params params;
	params.SourceDialog = SourceDialog;
	params.ChoiceNameId = ChoiceNameId;
	params.InputInfo = InputInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.GFxCSMainMenu.OnBuyBoosterClicked
// (Final, Native, Private, HasOutParms, Const)
// Parameters:
// class UGbxGFxButton*           PressedButton                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxMenuInputEvent      InputInfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGFxCSMainMenu::OnBuyBoosterClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSMainMenu.OnBuyBoosterClicked");

	UGFxCSMainMenu_OnBuyBoosterClicked_Params params;
	params.PressedButton = PressedButton;
	params.InputInfo = InputInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.GFxCSPuzzleMenu.OnSubmitClicked
// (Final, Native, Private, HasOutParms, Const)
// Parameters:
// class UGbxGFxButton*           PressedButton                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxMenuInputEvent      InputInfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGFxCSPuzzleMenu::OnSubmitClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSPuzzleMenu.OnSubmitClicked");

	UGFxCSPuzzleMenu_OnSubmitClicked_Params params;
	params.PressedButton = PressedButton;
	params.InputInfo = InputInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.GFxCSPuzzleMenu.OnQuitConfirmed
// (Final, Native, Private, HasOutParms, Const)
// Parameters:
// class UGbxGFxDialogBox*        SourceDialog                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ChoiceNameId                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxMenuInputEvent      InputInfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGFxCSPuzzleMenu::OnQuitConfirmed(class UGbxGFxDialogBox* SourceDialog, const struct FName& ChoiceNameId, const struct FGbxMenuInputEvent& InputInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSPuzzleMenu.OnQuitConfirmed");

	UGFxCSPuzzleMenu_OnQuitConfirmed_Params params;
	params.SourceDialog = SourceDialog;
	params.ChoiceNameId = ChoiceNameId;
	params.InputInfo = InputInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.GFxCSPuzzleMenu.OnQuickPassClicked
// (Final, Native, Private, HasOutParms, Const)
// Parameters:
// class UGbxGFxButton*           PressedButton                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxMenuInputEvent      InputInfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGFxCSPuzzleMenu::OnQuickPassClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSPuzzleMenu.OnQuickPassClicked");

	UGFxCSPuzzleMenu_OnQuickPassClicked_Params params;
	params.PressedButton = PressedButton;
	params.InputInfo = InputInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.GFxCSPuzzleMenu.OnErrorDialogClicked
// (Final, Native, Private, HasOutParms, Const)
// Parameters:
// class UGbxGFxDialogBox*        SourceDialog                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ChoiceNameId                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxMenuInputEvent      InputInfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGFxCSPuzzleMenu::OnErrorDialogClicked(class UGbxGFxDialogBox* SourceDialog, const struct FName& ChoiceNameId, const struct FGbxMenuInputEvent& InputInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSPuzzleMenu.OnErrorDialogClicked");

	UGFxCSPuzzleMenu_OnErrorDialogClicked_Params params;
	params.SourceDialog = SourceDialog;
	params.ChoiceNameId = ChoiceNameId;
	params.InputInfo = InputInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.GFxCSPuzzleMenu.OnConfirmQuickPass
// (Final, Native, Private, HasOutParms, Const)
// Parameters:
// class UGbxGFxDialogBox*        SourceDialog                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ChoiceNameId                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxMenuInputEvent      InputInfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGFxCSPuzzleMenu::OnConfirmQuickPass(class UGbxGFxDialogBox* SourceDialog, const struct FName& ChoiceNameId, const struct FGbxMenuInputEvent& InputInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSPuzzleMenu.OnConfirmQuickPass");

	UGFxCSPuzzleMenu_OnConfirmQuickPass_Params params;
	params.SourceDialog = SourceDialog;
	params.ChoiceNameId = ChoiceNameId;
	params.InputInfo = InputInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.GFxCSPuzzleMenu.GoToRewardScreenMenu
// (Final, Native, Private, Const)

void UGFxCSPuzzleMenu::GoToRewardScreenMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSPuzzleMenu.GoToRewardScreenMenu");

	UGFxCSPuzzleMenu_GoToRewardScreenMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.GFxCSPuzzleMenu.GoToMainMenu
// (Final, Native, Private, Const)

void UGFxCSPuzzleMenu::GoToMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSPuzzleMenu.GoToMainMenu");

	UGFxCSPuzzleMenu_GoToMainMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.GFxCSPuzzleMenu.extTokenTileTurnedOn
// (Final, Native, Private, Const)

void UGFxCSPuzzleMenu::extTokenTileTurnedOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSPuzzleMenu.extTokenTileTurnedOn");

	UGFxCSPuzzleMenu_extTokenTileTurnedOn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.GFxCSPuzzleMenu.extTokenTileTurnedOff
// (Final, Native, Private, Const)

void UGFxCSPuzzleMenu::extTokenTileTurnedOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSPuzzleMenu.extTokenTileTurnedOff");

	UGFxCSPuzzleMenu_extTokenTileTurnedOff_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.GFxCSRewardScreenMenu.OnPlayNextCharacterClicked
// (Final, Native, Private, HasOutParms, Const)
// Parameters:
// class UGbxGFxButton*           PressedButton                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxMenuInputEvent      InputInfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGFxCSRewardScreenMenu::OnPlayNextCharacterClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSRewardScreenMenu.OnPlayNextCharacterClicked");

	UGFxCSRewardScreenMenu_OnPlayNextCharacterClicked_Params params;
	params.PressedButton = PressedButton;
	params.InputInfo = InputInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.GFxCSRewardScreenMenu.OnPlayAgainClicked
// (Final, Native, Private, HasOutParms, Const)
// Parameters:
// class UGbxGFxButton*           PressedButton                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxMenuInputEvent      InputInfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGFxCSRewardScreenMenu::OnPlayAgainClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSRewardScreenMenu.OnPlayAgainClicked");

	UGFxCSRewardScreenMenu_OnPlayAgainClicked_Params params;
	params.PressedButton = PressedButton;
	params.InputInfo = InputInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.GFxCSRewardScreenMenu.OnMainMenuButtonClicked
// (Final, Native, Private, HasOutParms, Const)
// Parameters:
// class UGbxGFxButton*           PressedButton                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGbxMenuInputEvent      InputInfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGFxCSRewardScreenMenu::OnMainMenuButtonClicked(class UGbxGFxButton* PressedButton, const struct FGbxMenuInputEvent& InputInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSRewardScreenMenu.OnMainMenuButtonClicked");

	UGFxCSRewardScreenMenu_OnMainMenuButtonClicked_Params params;
	params.PressedButton = PressedButton;
	params.InputInfo = InputInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.GFxCSRewardScreenMenu.GoToPuzzleMenu
// (Final, Native, Private, Const)

void UGFxCSRewardScreenMenu::GoToPuzzleMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSRewardScreenMenu.GoToPuzzleMenu");

	UGFxCSRewardScreenMenu_GoToPuzzleMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.GFxCSRewardScreenMenu.GoToMainMenu
// (Final, Native, Private, Const)

void UGFxCSRewardScreenMenu::GoToMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSRewardScreenMenu.GoToMainMenu");

	UGFxCSRewardScreenMenu_GoToMainMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.GFxCSRewardScreenMenu.extRefreshNumCompletedPuzzle
// (Final, Native, Private, Const)

void UGFxCSRewardScreenMenu::extRefreshNumCompletedPuzzle()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSRewardScreenMenu.extRefreshNumCompletedPuzzle");

	UGFxCSRewardScreenMenu_extRefreshNumCompletedPuzzle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.GFxCSRewardScreenMenu.extPuzzleCompletedTextAnimDone
// (Final, Native, Private, Const)

void UGFxCSRewardScreenMenu::extPuzzleCompletedTextAnimDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSRewardScreenMenu.extPuzzleCompletedTextAnimDone");

	UGFxCSRewardScreenMenu_extPuzzleCompletedTextAnimDone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.GFxCSRewardScreenMenu.extOnShowPuzzleRewardDone
// (Final, Native, Private, Const)

void UGFxCSRewardScreenMenu::extOnShowPuzzleRewardDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSRewardScreenMenu.extOnShowPuzzleRewardDone");

	UGFxCSRewardScreenMenu_extOnShowPuzzleRewardDone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.GFxCSRewardScreenMenu.extOnShowBonusDone
// (Final, Native, Private, Const)

void UGFxCSRewardScreenMenu::extOnShowBonusDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSRewardScreenMenu.extOnShowBonusDone");

	UGFxCSRewardScreenMenu_extOnShowBonusDone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.GFxCSRewardScreenMenu.extNumCompletedPuzzleAnimDone
// (Final, Native, Private, Const)

void UGFxCSRewardScreenMenu::extNumCompletedPuzzleAnimDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSRewardScreenMenu.extNumCompletedPuzzleAnimDone");

	UGFxCSRewardScreenMenu_extNumCompletedPuzzleAnimDone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.GFxCSWhatsThisMenu.OnMovieMediaOpenFailed
// (Final, Native, Protected, Const)
// Parameters:
// class FString                  FailedUrl                      (Parm, ZeroConstructor)

void UGFxCSWhatsThisMenu::OnMovieMediaOpenFailed(const class FString& FailedUrl)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSWhatsThisMenu.OnMovieMediaOpenFailed");

	UGFxCSWhatsThisMenu_OnMovieMediaOpenFailed_Params params;
	params.FailedUrl = FailedUrl;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.GFxCSWhatsThisMenu.OnMovieMediaOpened
// (Final, Native, Protected, Const)

void UGFxCSWhatsThisMenu::OnMovieMediaOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSWhatsThisMenu.OnMovieMediaOpened");

	UGFxCSWhatsThisMenu_OnMovieMediaOpened_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.GFxCSWhatsThisMenu.OnMovieEndReached
// (Final, Native, Protected, Const)

void UGFxCSWhatsThisMenu::OnMovieEndReached()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.GFxCSWhatsThisMenu.OnMovieEndReached");

	UGFxCSWhatsThisMenu_OnMovieEndReached_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.OakCitizenScienceManager.GetCitizenScienceManager
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOakCitizenScienceManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOakCitizenScienceManager* UOakCitizenScienceManager::STATIC_GetCitizenScienceManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.OakCitizenScienceManager.GetCitizenScienceManager");

	UOakCitizenScienceManager_GetCitizenScienceManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OakCS.TutorialPuzzle.OnTutorialStart
// (Event, Public, BlueprintEvent)

void UTutorialPuzzle::OnTutorialStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.TutorialPuzzle.OnTutorialStart");

	UTutorialPuzzle_OnTutorialStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.TutorialPuzzle.OnTutorialEnd
// (Event, Public, BlueprintEvent)

void UTutorialPuzzle::OnTutorialEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.TutorialPuzzle.OnTutorialEnd");

	UTutorialPuzzle_OnTutorialEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakCS.TutorialPuzzle.GetTutorialWorld
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWorld*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWorld* UTutorialPuzzle::GetTutorialWorld()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakCS.TutorialPuzzle.GetTutorialWorld");

	UTutorialPuzzle_GetTutorialWorld_Params params;

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
