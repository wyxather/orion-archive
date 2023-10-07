#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x3E0 - 0x358)
// WidgetBlueprintGeneratedClass UIMainTitle.UIMainTitle_C
class UUIMainTitle_C : public UMainTitleBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      CloseTimeChangeUI;                                 // 0x360(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OpenTimeChnageUI;                                  // 0x368(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBPW_TimeChangeButton_C*               BPW_TimeChangeButton;                              // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_64;                                          // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                            TimeChangeUI;                                      // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTitleBackScene_C*                     TitleBackScene_30;                                 // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UTitleBase*>                    Titles;                                            // 0x390(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	enum class EUITitleFlow                      Scene;                                             // 0x3A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TickEnable;                                        // 0x3A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EUITitleFlow                      PrevScene;                                         // 0x3A2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11BA[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SceneFadeTime;                                     // 0x3A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMovie_Actor_C*                        MoviePlayer;                                       // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FirstLoadStep;                                     // 0x3B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MainStep;                                          // 0x3B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FirstLoadWait;                                     // 0x3B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CheckStep;                                         // 0x3BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKSLoadingWidget*                      LoadingUI;                                         // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CheckLoadStep;                                     // 0x3C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        StepTest;                                          // 0x3CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimeZoneType                     CurrentTime;                                       // 0x3D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11BB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTitlePlayerSelect_C*                  PlayerSelectScene;                                 // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUIMainTitle_C* GetDefaultObj();

	void SetupNewGameForAutoPlay(int32 PlayerCharaId);
	void SetTitleScene(class UTitleBase* Scene, enum class EUITitleFlow Flow);
	void Debug_PrintFinishScene(enum class EUITitleFlow Scene);
	void Debug_PrintStartScene(enum class EUITitleFlow Scene);
	void GetSceneFunction(uint8 InByte, class UTitleBase** Output);
	class FString Debug_GetStateInfoAsString();
	void ChnageTime();
	void SwitchTimeChangeUIVisibility();
	bool IsAvailableTimeChange();
	bool IsRunning();
	void SetupDBAccess();
	void KickBattleUI();
	void Set_Title_Scene_OLD(class UTitleBase* Scene, enum class EUITitleFlow Flow);
	void CheckLoad(bool* OK);
	void SetupManager();
	void SetupNextScene();
	void CheckReady_DEPRECATED(enum class EUITitleFlow Scene, bool* OK);
	void CheckLoadComplete(bool* Result);
	void OnIsPlayerInput(bool* IsPlayerInput);
	void InitGameParam();
	void IsCompliteInitializing(bool* Result);
	void TitleInit();
	void SetupTitleBack(bool BackSceneEnable);
	void TitleLoadGame(bool* IsEnd);
	void TitleNewGame(bool* IsEnd);
	void Remove();
	void TickFade();
	void TitleFadeOut();
	void CreateTitleUI(enum class EUITitleFlow Flow);
	void FinishFadeIn();
	void FinishFadeOut();
	void DestoryTitleUI();
	void OnCursorUp();
	void OnCursorDown();
	void OnCursorLeft();
	void OnCursorRight();
	void OnMenuButtonX();
	void OnMenuLB();
	void OnMenuRB();
	void OnMenuButtonStart();
	void OnMenuButtonSelect();
	void OnMenuDecideRepeat();
	void OnMenuCancelRepeat();
	void OnMenuButtonXRepeat();
	void OnMenuButtonYRepeat();
	void OnMenuButtonStartRepeat();
	void OnMenuButtonSelectRepeat();
	void OnMenuLStickButton();
	void OnMenuRStickButton();
	void OnRightAxisUp();
	void OnRightAxisDown();
	void OnMenuRBRelease();
	void OnGamePadAxisX(float AxisValue);
	void OnGamePadAxisY(float AxisValue);
	void OnCursorUpRelease();
	void OnCursorDownRelease();
	void OnCursorLeftRelease();
	void OnCursorRightRelease();
	void OnListPaging(bool IsLeftInput);
	void OnMenuRTrigger();
	void OnMenuLTrigger();
	void OnMenuRightUpRepeat();
	void OnMenuRightDownRepeat();
	void WorldMapZoomIn();
	void WorldMapZoomOut();
	void ChangeStatusRight();
	void ChangeStatusLeft();
	void HelpScrollAxis(float AxisaValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void Destruct();
	void OnCursorDownRepeat();
	void OnCursorUpRepeat();
	void OnRightAxisX(float AxisValue);
	void OnRightAxisY(float AxisValue);
	void OnLeftAxisX(float AxisValue);
	void OnLeftAxisY(float AxisValue);
	void OnMenuDecide();
	void OnMenuCancel();
	void OnMenuLBRepeat();
	void OnMenuRBRepeat();
	void ChangeTimeZone();
	void OnCursorRightRepeat();
	void OnCursorLeftRepeat();
	void OnMinusButton();
	void OnPlusButton();
	void WorldMapSlowCursorX(float AxisValue);
	void WorldMapSlowCursorY(float AxisValue);
	void OnMenuButtonY();
	void OnAnyButton();
	void OnAnyKey();
	void ExecuteUbergraph_UIMainTitle(int32 EntryPoint);
};

}


