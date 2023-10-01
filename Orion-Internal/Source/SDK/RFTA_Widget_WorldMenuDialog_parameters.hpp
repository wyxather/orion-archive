#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_WorldMenuDialog_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BeginSurvivalMode
struct UWidget_WorldMenuDialog_C_BeginSurvivalMode_Params
{
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.GetDescriptionTextFromDifficulty
struct UWidget_WorldMenuDialog_C_GetDescriptionTextFromDifficulty_Params
{
	int*                                               Difficulty;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_DifficultyDescription*              DescriptionStruct;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FText                                       OutText;                                                  // (Parm, OutParm)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.GetDescriptionRowFromGameMode
struct UWidget_WorldMenuDialog_C_GetDescriptionRowFromGameMode_Params
{
	EQuestMode*                                        QuestMode;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       RowName;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.GetCreateCaptionForGameMode
struct UWidget_WorldMenuDialog_C_GetCreateCaptionForGameMode_Params
{
	struct FText                                       Caption;                                                  // (Parm, OutParm)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.FocusCurrentSlot
struct UWidget_WorldMenuDialog_C_FocusCurrentSlot_Params
{
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.Get_Slot2_Visibility_1
struct UWidget_WorldMenuDialog_C_Get_Slot2_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BeginSelectDifficulty
struct UWidget_WorldMenuDialog_C_BeginSelectDifficulty_Params
{
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.Get_QuestSelectLeft_Visibility_1
struct UWidget_WorldMenuDialog_C_Get_QuestSelectLeft_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.RefreshCreateButton
struct UWidget_WorldMenuDialog_C_RefreshCreateButton_Params
{
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.LoadQuestAndClose
struct UWidget_WorldMenuDialog_C_LoadQuestAndClose_Params
{
	int*                                               Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.Get_Select_bIsEnabled_1
struct UWidget_WorldMenuDialog_C_Get_Select_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.Get_CreateNewWorld_Visibility_1
struct UWidget_WorldMenuDialog_C_Get_CreateNewWorld_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.Get_QuestSelectRight_Visibility_1
struct UWidget_WorldMenuDialog_C_Get_QuestSelectRight_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.NextQuest
struct UWidget_WorldMenuDialog_C_NextQuest_Params
{
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.PrevQuest
struct UWidget_WorldMenuDialog_C_PrevQuest_Params
{
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BuildCreateQuestList
struct UWidget_WorldMenuDialog_C_BuildCreateQuestList_Params
{
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BeginCreateQuest
struct UWidget_WorldMenuDialog_C_BeginCreateQuest_Params
{
	struct FText*                                      CreateBtnLabel;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.RefreshCreateQuest
struct UWidget_WorldMenuDialog_C_RefreshCreateQuest_Params
{
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.RefreshQuestSlots
struct UWidget_WorldMenuDialog_C_RefreshQuestSlots_Params
{
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.GetQuest
struct UWidget_WorldMenuDialog_C_GetQuest_Params
{
	int*                                               Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARemnantQuest*                               Quest;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.GetQuestManager
struct UWidget_WorldMenuDialog_C_GetQuestManager_Params
{
	class URemnantQuestManager*                        QuestManager;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.DestroyQuest
struct UWidget_WorldMenuDialog_C_DestroyQuest_Params
{
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.SetContext
struct UWidget_WorldMenuDialog_C_SetContext_Params
{
	class AActor**                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.OnLoaded_0E363505432DE7D2D120D18BF2E01914
struct UWidget_WorldMenuDialog_C_OnLoaded_0E363505432DE7D2D120D18BF2E01914_Params
{
	class UClass**                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.WaitForQuestToLoadThenExit
struct UWidget_WorldMenuDialog_C_WaitForQuestToLoadThenExit_Params
{
	class AQuest**                                     Quest;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.OnQuestLoaded_Event_1
struct UWidget_WorldMenuDialog_C_OnQuestLoaded_Event_1_Params
{
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__FocusButtonWidget_254_K2Node_ComponentBoundEvent_0_OnNavigationDelegate__DelegateSignature
struct UWidget_WorldMenuDialog_C_BndEvt__FocusButtonWidget_254_K2Node_ComponentBoundEvent_0_OnNavigationDelegate__DelegateSignature_Params
{
	EUINavigation*                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__QuestSelectRight_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_WorldMenuDialog_C_BndEvt__QuestSelectRight_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__QuestSelectLeft_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_WorldMenuDialog_C_BndEvt__QuestSelectLeft_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__CreateNewWorld_K2Node_ComponentBoundEvent_396_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_WorldMenuDialog_C_BndEvt__CreateNewWorld_K2Node_ComponentBoundEvent_396_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.OnDialogResult_Event_1
struct UWidget_WorldMenuDialog_C_OnDialogResult_Event_1_Params
{
	struct FName*                                      Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.CreateQuestEvent
struct UWidget_WorldMenuDialog_C_CreateQuestEvent_Params
{
	struct FRemnantQuestEntry*                         Quest;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__WorldTab_K2Node_ComponentBoundEvent_8_OnSelected__DelegateSignature
struct UWidget_WorldMenuDialog_C_BndEvt__WorldTab_K2Node_ComponentBoundEvent_8_OnSelected__DelegateSignature_Params
{
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__DifficultyNormal_K2Node_ComponentBoundEvent_9_OnFocused__DelegateSignature
struct UWidget_WorldMenuDialog_C_BndEvt__DifficultyNormal_K2Node_ComponentBoundEvent_9_OnFocused__DelegateSignature_Params
{
	int*                                               Difficulty;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__DifficultyHard_K2Node_ComponentBoundEvent_10_OnFocused__DelegateSignature
struct UWidget_WorldMenuDialog_C_BndEvt__DifficultyHard_K2Node_ComponentBoundEvent_10_OnFocused__DelegateSignature_Params
{
	int*                                               Difficulty;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__DifficultyNightmare_K2Node_ComponentBoundEvent_11_OnFocused__DelegateSignature
struct UWidget_WorldMenuDialog_C_BndEvt__DifficultyNightmare_K2Node_ComponentBoundEvent_11_OnFocused__DelegateSignature_Params
{
	int*                                               Difficulty;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Widget_ButtonEx_C_2_K2Node_ComponentBoundEvent_12_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_WorldMenuDialog_C_BndEvt__Widget_ButtonEx_C_2_K2Node_ComponentBoundEvent_12_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__DifficultyNormal_K2Node_ComponentBoundEvent_13_OnSelected__DelegateSignature
struct UWidget_WorldMenuDialog_C_BndEvt__DifficultyNormal_K2Node_ComponentBoundEvent_13_OnSelected__DelegateSignature_Params
{
	int*                                               Difficulty;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__DifficultyHard_K2Node_ComponentBoundEvent_14_OnSelected__DelegateSignature
struct UWidget_WorldMenuDialog_C_BndEvt__DifficultyHard_K2Node_ComponentBoundEvent_14_OnSelected__DelegateSignature_Params
{
	int*                                               Difficulty;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__DifficultyNightmare_K2Node_ComponentBoundEvent_15_OnSelected__DelegateSignature
struct UWidget_WorldMenuDialog_C_BndEvt__DifficultyNightmare_K2Node_ComponentBoundEvent_15_OnSelected__DelegateSignature_Params
{
	int*                                               Difficulty;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__CancelCreate_K2Node_ComponentBoundEvent_846_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_WorldMenuDialog_C_BndEvt__CancelCreate_K2Node_ComponentBoundEvent_846_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__CancelCreate2_K2Node_ComponentBoundEvent_16_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_WorldMenuDialog_C_BndEvt__CancelCreate2_K2Node_ComponentBoundEvent_16_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__BottomBtn_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_WorldMenuDialog_C_BndEvt__BottomBtn_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_WorldMenuDialog_C_BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__WorldTab_K2Node_ComponentBoundEvent_4_OnRight__DelegateSignature
struct UWidget_WorldMenuDialog_C_BndEvt__WorldTab_K2Node_ComponentBoundEvent_4_OnRight__DelegateSignature_Params
{
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__WorldTab_K2Node_ComponentBoundEvent_5_OnLeft__DelegateSignature
struct UWidget_WorldMenuDialog_C_BndEvt__WorldTab_K2Node_ComponentBoundEvent_5_OnLeft__DelegateSignature_Params
{
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__DifficultyApocalipse_K2Node_ComponentBoundEvent_19_OnFocused__DelegateSignature
struct UWidget_WorldMenuDialog_C_BndEvt__DifficultyApocalipse_K2Node_ComponentBoundEvent_19_OnFocused__DelegateSignature_Params
{
	int*                                               Difficulty;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__DifficultyApocalipse_K2Node_ComponentBoundEvent_20_OnSelected__DelegateSignature
struct UWidget_WorldMenuDialog_C_BndEvt__DifficultyApocalipse_K2Node_ComponentBoundEvent_20_OnSelected__DelegateSignature_Params
{
	int*                                               Difficulty;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__FocusButtonWidget_1_K2Node_ComponentBoundEvent_11_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_WorldMenuDialog_C_BndEvt__FocusButtonWidget_1_K2Node_ComponentBoundEvent_11_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Widget_DifficultyTab_C_0_K2Node_ComponentBoundEvent_17_OnSelected__DelegateSignature
struct UWidget_WorldMenuDialog_C_BndEvt__Widget_DifficultyTab_C_0_K2Node_ComponentBoundEvent_17_OnSelected__DelegateSignature_Params
{
	int*                                               Difficulty;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Widget_DifficultyTab_C_1_K2Node_ComponentBoundEvent_18_OnSelected__DelegateSignature
struct UWidget_WorldMenuDialog_C_BndEvt__Widget_DifficultyTab_C_1_K2Node_ComponentBoundEvent_18_OnSelected__DelegateSignature_Params
{
	int*                                               Difficulty;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Widget_DifficultyTab_C_2_K2Node_ComponentBoundEvent_21_OnSelected__DelegateSignature
struct UWidget_WorldMenuDialog_C_BndEvt__Widget_DifficultyTab_C_2_K2Node_ComponentBoundEvent_21_OnSelected__DelegateSignature_Params
{
	int*                                               Difficulty;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Widget_DifficultyTab_C_3_K2Node_ComponentBoundEvent_22_OnSelected__DelegateSignature
struct UWidget_WorldMenuDialog_C_BndEvt__Widget_DifficultyTab_C_3_K2Node_ComponentBoundEvent_22_OnSelected__DelegateSignature_Params
{
	int*                                               Difficulty;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__SurvivalDifficultyNormal_K2Node_ComponentBoundEvent_23_OnFocused__DelegateSignature
struct UWidget_WorldMenuDialog_C_BndEvt__SurvivalDifficultyNormal_K2Node_ComponentBoundEvent_23_OnFocused__DelegateSignature_Params
{
	int*                                               Difficulty;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__SurvivalDifficultyHard_K2Node_ComponentBoundEvent_24_OnFocused__DelegateSignature
struct UWidget_WorldMenuDialog_C_BndEvt__SurvivalDifficultyHard_K2Node_ComponentBoundEvent_24_OnFocused__DelegateSignature_Params
{
	int*                                               Difficulty;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__SurvivalDifficultyNightmare_K2Node_ComponentBoundEvent_25_OnFocused__DelegateSignature
struct UWidget_WorldMenuDialog_C_BndEvt__SurvivalDifficultyNightmare_K2Node_ComponentBoundEvent_25_OnFocused__DelegateSignature_Params
{
	int*                                               Difficulty;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__SurvivalDifficultyApocalypse_K2Node_ComponentBoundEvent_26_OnFocused__DelegateSignature
struct UWidget_WorldMenuDialog_C_BndEvt__SurvivalDifficultyApocalypse_K2Node_ComponentBoundEvent_26_OnFocused__DelegateSignature_Params
{
	int*                                               Difficulty;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.Construct
struct UWidget_WorldMenuDialog_C_Construct_Params
{
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Slot0_K2Node_ComponentBoundEvent_343_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_WorldMenuDialog_C_BndEvt__Slot0_K2Node_ComponentBoundEvent_343_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Slot1_K2Node_ComponentBoundEvent_369_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_WorldMenuDialog_C_BndEvt__Slot1_K2Node_ComponentBoundEvent_369_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Slot2_K2Node_ComponentBoundEvent_396_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_WorldMenuDialog_C_BndEvt__Slot2_K2Node_ComponentBoundEvent_396_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Load_K2Node_ComponentBoundEvent_937_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_WorldMenuDialog_C_BndEvt__Load_K2Node_ComponentBoundEvent_937_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_WorldMenuDialog_C_BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.EndDialog
struct UWidget_WorldMenuDialog_C_EndDialog_Params
{
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Slot0_K2Node_ComponentBoundEvent_1_OnCreate__DelegateSignature
struct UWidget_WorldMenuDialog_C_BndEvt__Slot0_K2Node_ComponentBoundEvent_1_OnCreate__DelegateSignature_Params
{
	class UWidget_WorldSlot_C**                        Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Slot1_K2Node_ComponentBoundEvent_2_OnCreate__DelegateSignature
struct UWidget_WorldMenuDialog_C_BndEvt__Slot1_K2Node_ComponentBoundEvent_2_OnCreate__DelegateSignature_Params
{
	class UWidget_WorldSlot_C**                        Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Slot2_K2Node_ComponentBoundEvent_3_OnCreate__DelegateSignature
struct UWidget_WorldMenuDialog_C_BndEvt__Slot2_K2Node_ComponentBoundEvent_3_OnCreate__DelegateSignature_Params
{
	class UWidget_WorldSlot_C**                        Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Slot0_K2Node_ComponentBoundEvent_7_OnSelect__DelegateSignature
struct UWidget_WorldMenuDialog_C_BndEvt__Slot0_K2Node_ComponentBoundEvent_7_OnSelect__DelegateSignature_Params
{
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Slot1_K2Node_ComponentBoundEvent_8_OnSelect__DelegateSignature
struct UWidget_WorldMenuDialog_C_BndEvt__Slot1_K2Node_ComponentBoundEvent_8_OnSelect__DelegateSignature_Params
{
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Slot2_K2Node_ComponentBoundEvent_9_OnSelect__DelegateSignature
struct UWidget_WorldMenuDialog_C_BndEvt__Slot2_K2Node_ComponentBoundEvent_9_OnSelect__DelegateSignature_Params
{
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Slot2_K2Node_ComponentBoundEvent_18_OnSelect__DelegateSignature
struct UWidget_WorldMenuDialog_C_BndEvt__Slot2_K2Node_ComponentBoundEvent_18_OnSelect__DelegateSignature_Params
{
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Slot2_K2Node_ComponentBoundEvent_5_OnCreate__DelegateSignature
struct UWidget_WorldMenuDialog_C_BndEvt__Slot2_K2Node_ComponentBoundEvent_5_OnCreate__DelegateSignature_Params
{
	class UWidget_WorldSlot_C**                        Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__Slot2_K2Node_ComponentBoundEvent_6_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_WorldMenuDialog_C_BndEvt__Slot2_K2Node_ComponentBoundEvent_6_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.BndEvt__SurvivalBack_K2Node_ComponentBoundEvent_4_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_WorldMenuDialog_C_BndEvt__SurvivalBack_K2Node_ComponentBoundEvent_4_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_WorldMenuDialog.Widget_WorldMenuDialog_C.ExecuteUbergraph_Widget_WorldMenuDialog
struct UWidget_WorldMenuDialog_C_ExecuteUbergraph_Widget_WorldMenuDialog_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
