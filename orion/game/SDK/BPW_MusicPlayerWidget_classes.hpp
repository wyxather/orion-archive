#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x3D0 - 0x360)
// WidgetBlueprintGeneratedClass BPW_MusicPlayerWidget.BPW_MusicPlayerWidget_C
class UBPW_MusicPlayerWidget_C : public UMusicPlayerWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                              FooterRoot;                                        // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListWidget_C*                         MusicList;                                         // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FItemData>                     RecordItemList;                                    // 0x378(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        PlayingRecordIndex;                                // 0x388(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_70D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMenuHeader_C*                         Header;                                            // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMenuFooter_C*                         Footer;                                            // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGuideData>                    FooterGuidData;                                    // 0x3A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          BgmLabelList;                                      // 0x3B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGuideData>                    FooterGuidData_WithStop;                           // 0x3C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBPW_MusicPlayerWidget_C* GetDefaultObj();

	void OnEndState(enum class EMUSIC_PLAYER_WIDGET_STATE CurrentState);
	void OnBeginState(enum class EMUSIC_PLAYER_WIDGET_STATE CurrentState);
	class FString Debug_GetStateInfoAsString();
	void OnOpenFinish();
	void OnStopButton();
	void UIClose();
	void OnCloseFinish();
	void StopMusic();
	void PlayMusic(struct FItemData& RecordItemData, bool* Success);
	void GetMusicRecordItemList(TArray<struct FItemData>* Records, TArray<class FName>* BgmLabelList);
	void OnListEvent(enum class ELIST_EVENT_TYPE EventType, int32 CategoryIdx, int32 ItemIdx);
	bool IsRunning();
	void CreateMusicListItems(TArray<struct FItemData>& Records, int32 PlayingIndex, TArray<struct FMJListWidgetItemData>* ListItems);
	void Construct();
	void UIOpen();
	void SetupMusicList();
	void SetupHeaderFooter();
	void OnCursorUp();
	void OnCursorDown();
	void OnCursorLeft();
	void OnCursorRight();
	void OnMenuButtonX();
	void OnMenuLB();
	void OnMenuRB();
	void OnMenuButtonStart();
	void OnMenuButtonSelect();
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
	void OnCursorDownRepeat();
	void OnCursorUpRepeat();
	void OnMenuDecide();
	void OnMenuButtonY();
	void OnMenuCancel();
	void OnListPaging(bool IsLeftInput);
	void ExecuteUbergraph_BPW_MusicPlayerWidget(int32 EntryPoint);
};

}


