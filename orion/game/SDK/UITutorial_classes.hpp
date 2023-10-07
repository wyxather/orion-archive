#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x420 - 0x358)
// WidgetBlueprintGeneratedClass UITutorial.UITutorial_C
class UUITutorial_C : public UUITutorialBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUITutorialCommonUI_C*                 TutorialPage01;                                    // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUITutorialCommonUI_C*                 TutorialPage02;                                    // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUITutorialBG_C*                       UITutorialBG;                                      // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UTexture2D*>                    TutorialTexture;                                   // 0x378(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        ShowPageIndex;                                     // 0x388(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLastImage;                                       // 0x38C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_525[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUITutorialCommonUI_C*                 NowPage;                                           // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUITutorialCommonUI_C*                 NextPage;                                          // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableTutorialPageData            NowPageData;                                       // 0x3A0(0x38)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UUITutorialTemplateBase*>       TemplateList;                                      // 0x3D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UUITutorialTemplateBase*               NowPageTemplate;                                   // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUITutorialTemplateBase*               NextPageTemplate;                                  // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TemplateListMax;                                   // 0x3F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_526[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDataTableTutorialPageData>    PageDataList;                                      // 0x400(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class ETUTORIAL_TYPE                    TutorialType;                                      // 0x410(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETUTORIAL_SEQ                     UiState;                                           // 0x411(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_End_Card;                                       // 0x412(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Is_Epilogue;                                       // 0x413(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_527[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UKSFade*                               Fade;                                              // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUITutorial_C* GetDefaultObj();

	void FadeOutFinish();
	void SetBGFocus(class UUITutorialCommonUI_C* Target);
	bool OpenTutorial(TArray<struct FDataTableTutorialPageData>& TopPageData, enum class ETUTORIAL_TYPE TutorialType, bool IsEndCard, bool IsEpilouge);
	bool ForceTutorialClose();
	bool IsChangeStateCloseFinish();
	bool IsChangeStateOpenFinish();
	void SetupTutorialPage(bool NowPage, struct FDataTableTutorialPageData& TutorialPageData);
	void SetupTemplate(struct FDataTableTutorialPageData& TutorialPageData, class UUITutorialTemplateBase** Template);
	void AddTemplateList(class UUITutorialTemplateBase* AddTemplate);
	void GetTemplateFromList(int32 TemplateType, class UUITutorialTemplateBase** Template, bool* IsSuccess);
	void CloseEvent();
	bool IsRunning();
	void Change_Next_Image();
	void TickEvent();
	void ConstructObjectSetting();
	void SwitchImage();
	void OnCursorUp();
	void OnCursorDown();
	void OnCursorLeft();
	void OnCursorRight();
	void OnMenuDecide();
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
	void OnLeftAxisY(float AxisValue);
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
	void OnMenuCancel();
	void UpdateMain();
	void OnOpenFinish();
	void OnCloseFinish();
	void UpdateClosing();
	void Construct();
	void UIClose();
	void ChangeInputMode(enum class EKSUseInputType Type);
	void ExecuteUbergraph_UITutorial(int32 EntryPoint);
};

}


