#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_WorldMenuDialog_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_WorldMenuDialog.Widget_WorldMenuDialog_C
// 0x02B0 (0x04F0 - 0x0240)
class UWidget_WorldMenuDialog_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            LoadTransition;                                           // 0x0248(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            BackAnimation;                                            // 0x0250(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            CreateTransition;                                         // 0x0258(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            DifficultyTransition;                                     // 0x0260(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            SwipeRight;                                               // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            SwipeLeft;                                                // 0x0270(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidget_ButtonEx_C*                          Back;                                                     // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Background;                                               // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFocusButtonWidget*                          BottomBtn;                                                // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonEx_C*                          CancelCreate;                                             // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonEx_C*                          CancelCreate2;                                            // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonEx_C*                          Create;                                                   // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonEx_C*                          CreateButton;                                             // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonEx_C*                          CreateNewWorld;                                           // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  CreateQuestTitle;                                         // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_DifficultyTab_C*                     DifficultyApocalipse;                                     // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_DifficultyTab_C*                     DifficultyHard;                                           // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_DifficultyTab_C*                     DifficultyNightmare;                                      // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_DifficultyTab_C*                     DifficultyNormal;                                         // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFocusButtonWidget*                          FocusButtonWidget_1;                                      // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFocusButtonWidget*                          FocusButtonWidget_2;                                      // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFocusVisual*                                FocusVisual_1;                                            // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFocusVisual*                                FocusVisual_2;                                            // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFocusVisual*                                FocusVisual_537;                                          // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFocusVisual*                                FocusVisual_539;                                          // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFocusVisual*                                FocusVisual_540;                                          // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFocusVisual*                                FocusVisual_541;                                          // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFocusVisual*                                FocusVisual_542;                                          // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      GrimeOverlay;                                             // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_1;                                                  // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_2;                                                  // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_3;                                                  // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_4;                                                  // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_5;                                                  // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_6;                                                  // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_7;                                                  // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_8;                                                  // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_20;                                                 // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_68;                                                 // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_74;                                                 // 0x0380(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_75;                                                 // 0x0388(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_76;                                                 // 0x0390(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_403;                                                // 0x0398(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFocusButtonWidget*                          QuestSelectLeft;                                          // 0x03A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFocusButtonWidget*                          QuestSelectRight;                                         // 0x03A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                                RetainerBox_5;                                            // 0x03B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonEx_C*                          Select;                                                   // 0x03B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                SelectDifficulty;                                         // 0x03C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_WorldSlot_C*                         Slot0;                                                    // 0x03C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_WorldSlot_C*                         Slot1;                                                    // 0x03D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_WorldSlot_C*                         Slot2;                                                    // 0x03D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_WorldSlot_C*                         Slot3;                                                    // 0x03E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonEx_C*                          SurvivalBack;                                             // 0x03E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_DifficultyTab_C*                     SurvivalDifficultyApocalypse;                             // 0x03F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_DifficultyTab_C*                     SurvivalDifficultyHard;                                   // 0x03F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_DifficultyTab_C*                     SurvivalDifficultyNightmare;                              // 0x0400(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_DifficultyTab_C*                     SurvivalDifficultyNormal;                                 // 0x0408(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                SurvivalMode;                                             // 0x0410(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             Switcher;                                                 // 0x0418(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_1;                                              // 0x0420(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_2;                                              // 0x0428(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock_3;                                              // 0x0430(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_ButtonEx_C*                          Widget_ButtonEx_C_2;                                      // 0x0438(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_WorldSlot_C*                         Widget_WorldSlot_C_1;                                     // 0x0440(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_NewWorldTab_C*                       WorldTab;                                                 // 0x0448(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_NewWorldTab_C*                       WorldTabNext;                                             // 0x0450(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_NewWorldTab_C*                       WorldTabPrev;                                             // 0x0458(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidget_WorldSlot_C*                         CurrentWorldSlot;                                         // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentSlot;                                              // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x046C(0x0004) MISSED OFFSET
	TArray<struct FRemnantQuestEntry>                  AvailableQuests;                                          // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                AvailableQuestIdx;                                        // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Difficulty;                                               // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestMode                                         QuestGameMode;                                            // 0x0488(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0489(0x0007) MISSED OFFSET
	class UClass*                                      CachedQuestBP;                                            // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FoundQuest;                                               // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0499(0x0007) MISSED OFFSET
	TMap<EQuestMode, struct FName>                     DifficultyDescriptionRowMap;                              // 0x04A0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_WorldMenuDialog.Widget_WorldMenuDialog_C");
		return ptr;
	}


	void BeginSurvivalMode();
	void GetDescriptionTextFromDifficulty(int* Difficulty, struct FStruct_DifficultyDescription* DescriptionStruct, struct FText* OutText);
	void GetDescriptionRowFromGameMode(EQuestMode* QuestMode, struct FName* RowName);
	void GetCreateCaptionForGameMode(struct FText* Caption);
	void FocusCurrentSlot();
	ESlateVisibility Get_Slot2_Visibility_1();
	void BeginSelectDifficulty();
	ESlateVisibility Get_QuestSelectLeft_Visibility_1();
	void RefreshCreateButton();
	void LoadQuestAndClose(int* Slot);
	bool Get_Select_bIsEnabled_1();
	ESlateVisibility Get_CreateNewWorld_Visibility_1();
	ESlateVisibility Get_QuestSelectRight_Visibility_1();
	void NextQuest();
	void PrevQuest();
	void BuildCreateQuestList();
	void BeginCreateQuest(struct FText* CreateBtnLabel);
	void RefreshCreateQuest();
	void RefreshQuestSlots();
	void GetQuest(int* Slot, class ARemnantQuest** Quest);
	void GetQuestManager(class URemnantQuestManager** QuestManager);
	void DestroyQuest();
	void SetContext(class AActor** Context);
	void OnLoaded_0E363505432DE7D2D120D18BF2E01914(class UClass** Loaded);
	void WaitForQuestToLoadThenExit(class AQuest** Quest);
	void OnQuestLoaded_Event_1();
	void BndEvt__FocusButtonWidget_254_K2Node_ComponentBoundEvent_0_OnNavigationDelegate__DelegateSignature(EUINavigation* Direction, class UWidget** Widget);
	void BndEvt__QuestSelectRight_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget);
	void BndEvt__QuestSelectLeft_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget);
	void BndEvt__CreateNewWorld_K2Node_ComponentBoundEvent_396_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget);
	void OnDialogResult_Event_1(struct FName* Result);
	void CreateQuestEvent(struct FRemnantQuestEntry* Quest);
	void BndEvt__WorldTab_K2Node_ComponentBoundEvent_8_OnSelected__DelegateSignature();
	void BndEvt__DifficultyNormal_K2Node_ComponentBoundEvent_9_OnFocused__DelegateSignature(int* Difficulty);
	void BndEvt__DifficultyHard_K2Node_ComponentBoundEvent_10_OnFocused__DelegateSignature(int* Difficulty);
	void BndEvt__DifficultyNightmare_K2Node_ComponentBoundEvent_11_OnFocused__DelegateSignature(int* Difficulty);
	void BndEvt__Widget_ButtonEx_C_2_K2Node_ComponentBoundEvent_12_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget);
	void BndEvt__DifficultyNormal_K2Node_ComponentBoundEvent_13_OnSelected__DelegateSignature(int* Difficulty);
	void BndEvt__DifficultyHard_K2Node_ComponentBoundEvent_14_OnSelected__DelegateSignature(int* Difficulty);
	void BndEvt__DifficultyNightmare_K2Node_ComponentBoundEvent_15_OnSelected__DelegateSignature(int* Difficulty);
	void BndEvt__CancelCreate_K2Node_ComponentBoundEvent_846_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget);
	void BndEvt__CancelCreate2_K2Node_ComponentBoundEvent_16_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget);
	void BndEvt__BottomBtn_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget);
	void BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget);
	void BndEvt__WorldTab_K2Node_ComponentBoundEvent_4_OnRight__DelegateSignature();
	void BndEvt__WorldTab_K2Node_ComponentBoundEvent_5_OnLeft__DelegateSignature();
	void BndEvt__DifficultyApocalipse_K2Node_ComponentBoundEvent_19_OnFocused__DelegateSignature(int* Difficulty);
	void BndEvt__DifficultyApocalipse_K2Node_ComponentBoundEvent_20_OnSelected__DelegateSignature(int* Difficulty);
	void BndEvt__FocusButtonWidget_1_K2Node_ComponentBoundEvent_11_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget);
	void BndEvt__Widget_DifficultyTab_C_0_K2Node_ComponentBoundEvent_17_OnSelected__DelegateSignature(int* Difficulty);
	void BndEvt__Widget_DifficultyTab_C_1_K2Node_ComponentBoundEvent_18_OnSelected__DelegateSignature(int* Difficulty);
	void BndEvt__Widget_DifficultyTab_C_2_K2Node_ComponentBoundEvent_21_OnSelected__DelegateSignature(int* Difficulty);
	void BndEvt__Widget_DifficultyTab_C_3_K2Node_ComponentBoundEvent_22_OnSelected__DelegateSignature(int* Difficulty);
	void BndEvt__SurvivalDifficultyNormal_K2Node_ComponentBoundEvent_23_OnFocused__DelegateSignature(int* Difficulty);
	void BndEvt__SurvivalDifficultyHard_K2Node_ComponentBoundEvent_24_OnFocused__DelegateSignature(int* Difficulty);
	void BndEvt__SurvivalDifficultyNightmare_K2Node_ComponentBoundEvent_25_OnFocused__DelegateSignature(int* Difficulty);
	void BndEvt__SurvivalDifficultyApocalypse_K2Node_ComponentBoundEvent_26_OnFocused__DelegateSignature(int* Difficulty);
	void Construct();
	void BndEvt__Slot0_K2Node_ComponentBoundEvent_343_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget);
	void BndEvt__Slot1_K2Node_ComponentBoundEvent_369_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget);
	void BndEvt__Slot2_K2Node_ComponentBoundEvent_396_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget);
	void BndEvt__Load_K2Node_ComponentBoundEvent_937_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget);
	void BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget);
	void EndDialog();
	void BndEvt__Slot0_K2Node_ComponentBoundEvent_1_OnCreate__DelegateSignature(class UWidget_WorldSlot_C** Slot);
	void BndEvt__Slot1_K2Node_ComponentBoundEvent_2_OnCreate__DelegateSignature(class UWidget_WorldSlot_C** Slot);
	void BndEvt__Slot2_K2Node_ComponentBoundEvent_3_OnCreate__DelegateSignature(class UWidget_WorldSlot_C** Slot);
	void BndEvt__Slot0_K2Node_ComponentBoundEvent_7_OnSelect__DelegateSignature();
	void BndEvt__Slot1_K2Node_ComponentBoundEvent_8_OnSelect__DelegateSignature();
	void BndEvt__Slot2_K2Node_ComponentBoundEvent_9_OnSelect__DelegateSignature();
	void BndEvt__Slot2_K2Node_ComponentBoundEvent_18_OnSelect__DelegateSignature();
	void BndEvt__Slot2_K2Node_ComponentBoundEvent_5_OnCreate__DelegateSignature(class UWidget_WorldSlot_C** Slot);
	void BndEvt__Slot2_K2Node_ComponentBoundEvent_6_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget);
	void BndEvt__SurvivalBack_K2Node_ComponentBoundEvent_4_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget);
	void ExecuteUbergraph_Widget_WorldMenuDialog(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
