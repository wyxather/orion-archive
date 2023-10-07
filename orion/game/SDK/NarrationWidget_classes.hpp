#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x710 (0xA68 - 0x358)
// WidgetBlueprintGeneratedClass NarrationWidget.NarrationWidget_C
class UNarrationWidget_C : public UNarrationWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimCloseNarrationNoteBG;                          // 0x360(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimOpenNarrationNoteBG;                           // 0x368(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimCloseNarrationBG;                              // 0x370(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimOpenNarrationBG;                               // 0x378(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimCloseNarration;                                // 0x380(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimOpenNarration;                                 // 0x388(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          Canvas;                                            // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image;                                             // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_1839;                                        // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_1841;                                        // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_1842;                                        // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_BG;                                          // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_BG2;                                         // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_BG3;                                         // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_BG4;                                         // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Img_Frame;                                         // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          MessageView;                                       // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                              Narration_Frame;                                   // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          NoteView;                                          // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UNarrationMessageWidget_C*>     MessageViewList;                                   // 0x3F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FNarrationDataBase                    DrawMessageList;                                   // 0x408(0x40)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class ENARRATION_STATE                  State;                                             // 0x448(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1561[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DrawMessageViewIndex;                              // 0x44C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FNarrationDataBase>            PageText;                                          // 0x450(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        PageIndex;                                         // 0x460(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLastPage;                                        // 0x464(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1563[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Timer;                                             // 0x468(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1564[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPostProcessSettings                  PostProcessDef;                                    // 0x470(0x580)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UNarrationNoteWidget_C*                NoteWidget;                                        // 0x9F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NoteMode;                                          // 0x9F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1565[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ScrollSpeed;                                       // 0x9FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FailedSETime;                                      // 0xA00(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PassBGOpenAnime;                                   // 0xA04(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PassBGCloseAnime;                                  // 0xA05(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsForceCloseFlag;                                  // 0xA06(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1566[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AutoNarrationTimer;                                // 0xA08(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentGruopIndex;                                 // 0xA0C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FNarrationTextGroup>           CurretTextGroup;                                   // 0xA10(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          GroupLabelList;                                    // 0xA20(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsGroup;                                           // 0xA30(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1567[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CurrentFlashbackLabel;                             // 0xA34(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  BeforeFlashbackLabel;                              // 0xA3C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FlashbackInnerState;                               // 0xA44(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowFlashback;                                     // 0xA48(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1568[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUIFlashbackBase*                      Flashback;                                         // 0xA50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUIEventBackgroundFadeBase*            EventFade;                                         // 0xA58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseNoteBackground;                                 // 0xA60(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         AllFade;                                           // 0xA61(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1569[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VoiceTimeOut;                                      // 0xA64(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UNarrationWidget_C* GetDefaultObj();

	void CheckNextStepForGroup(int32 ViewIndex, bool AllFade, int32 StartIndex, int32 EndIndex, bool* IsNextStep);
	void CheckNextStep(int32 ViewIndex, bool* IsNextStep);
	void SetState(enum class ENARRATION_STATE State);
	void RequestMultiLineDraw();
	void GetAllFadeAnim(int32 ViewIndex, bool* AllFade);
	void SettingOtherWidget();
	void CheckCloseBGAnim();
	void CheckOpenBGAnim();
	void Get_Event_Fade_Color(struct FLinearColor* OutSlateColor);
	void CloseFlashback();
	void ResetFlashbackParam(bool AllReset);
	void Update_Flashback(bool* End);
	void PhraseMessageDraw_Inner();
	void SettingGroupParam(int32 ViewIndex);
	void UpdateGroupDrawMessage(bool* IsEnd);
	void GetCurrentNarration(int32 ViewIndex, class UNarrationMessageWidgetBase** CurrentLine);
	void IsNarrationGroupEnd(int32 ViewIndex, bool* Ret);
	void GetTextGroupLabel(int32 ViewIndex, TArray<class FName>* TextArray);
	void PlayCloseBGAnim();
	void PlayOpenBGAnim();
	void PlayCloseAnim();
	void PlayOpenAnim();
	void CheckCloseAnim();
	void CheckOpenAnim();
	void Debug_Auto_Narration();
	bool OneLineDraw(class UNarrationMessageWidgetBase* TargetObject, class FName TalkLabel, int32 TextJustification, bool DisableAnimation, bool IsVoiceSkip);
	void UpdateDrawMessage(bool* IsEnd);
	bool SetPlayPageMessage(struct FNarrationDataBase& Page);
	void NextPage(bool* IsEnd);
	void SelfClose();
	bool IsRunning();
	void OnCursorUp();
	void OnCursorDown();
	void OnCursorLeft();
	void OnCursorRight();
	void OnMenuButtonX();
	void OnMenuButtonY();
	void OnMenuLB();
	void OnMenuRB();
	void OnMenuButtonStart();
	void OnMenuButtonSelect();
	void OnCursorUpRepeat();
	void OnCursorDownRepeat();
	void OnCursorLeftRepeat();
	void OnCursorRightRepeat();
	void OnMenuDecideRepeat();
	void OnMenuCancelRepeat();
	void OnMenuButtonXRepeat();
	void OnMenuButtonYRepeat();
	void OnMenuLBRepeat();
	void OnMenuRBRepeat();
	void OnMenuButtonStartRepeat();
	void OnMenuButtonSelectRepeat();
	void OnRightAxisX(float AxisValue);
	void OnRightAxisY(float AxisValue);
	void OnMenuLStickButton();
	void OnMenuRStickButton();
	void OnLeftAxisX(float AxisValue);
	void OnPlusButton();
	void OnMinusButton();
	void OnRightAxisUp();
	void OnRightAxisDown();
	void OnMenuRBRelease();
	void OnGamePadAxisX(float AxisValue);
	void OnGamePadAxisY(float AxisValue);
	void OnCursorUpRelease();
	void OnCursorDownRelease();
	void OnCursorLeftRelease();
	void OnCursorRightRelease();
	void OnAnyButton();
	void OnListPaging(bool IsLeftInput);
	void OnMenuRTrigger();
	void OnMenuLTrigger();
	void OnMenuRightUpRepeat();
	void OnMenuRightDownRepeat();
	void ChangeTimeZone();
	void WorldMapZoomIn();
	void WorldMapZoomOut();
	void WorldMapSlowCursorX(float AxisValue);
	void WorldMapSlowCursorY(float AxisValue);
	void ChangeStatusRight();
	void ChangeStatusLeft();
	void HelpScrollAxis(float AxisaValue);
	void OnAnyKey();
	void Debug_Localization(bool IsDebug);
	void OnMenuCancel();
	void OnLeftAxisY(float AxisValue);
	void OnMenuDecide();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UIOpen();
	void UIClose();
	void Close(bool IsForceClose);
	void CloseMessage();
	void AllDrawMessage();
	void PhraseMessageDraw();
	void OpenInner();
	void SetAnimationMode(bool PassBGOpen, bool PassBGClose);
	void PlayNarration(class FName NarrationSetLabel);
	void PlayNote(class FName NoteLabel, bool UseBackground);
	void NoticeCreatedWidget(enum class EWIDGET_CREATE_PHASE CreatePhase);
	void ExecuteUbergraph_NarrationWidget(int32 EntryPoint);
};

}


