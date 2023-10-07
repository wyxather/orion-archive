#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x13 (0x663 - 0x650)
// WidgetBlueprintGeneratedClass WBP_3DWorldMapWidget.WBP_3DWorldMapWidget_C
class UWBP_3DWorldMapWidget_C : public UWBP_3DWorldMapWidgetBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x650(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      NewAnimation;                                      // 0x658(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	bool                                         IsExecutingFastTravel;                             // 0x660(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         InWorldMap;                                        // 0x661(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsDialogOpening;                                   // 0x662(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWBP_3DWorldMapWidget_C* GetDefaultObj();

	void UpdateGlobe(float InDeltaTime);
	bool IsClosing();
	bool IsOpening();
	void CloseWorldMapInternal();
	void OnClosed();
	void AppendArray(TArray<struct FGuideData>& ArrayA, TArray<struct FGuideData>& ArrayB, TArray<struct FGuideData>* Array);
	bool IsFastTraveling();
	void DecideMenu(bool* NextState);
	void CancelMenu(bool* ReturnState);
	void GetAutoRotateSpeed(float* Param);
	void RefreshFooterGuide();
	void OnDeselectIcon();
	void OnSelectIcon();
	void MakeFooterGuideData(enum class EWorldMapZoomType ZoomType, const struct FWorldMapTable& SelectedIconData, TArray<struct FGuideData>* NewParam);
	void SetFooter(class UMenuFooter_C* Footer);
	void OpenWorldMapInternal();
	void SetSetectedIcon(class UWorldMapIconBase* SelectedIcon);
	void UpdateCursorSnap(float InDeltaTime);
	void OnClosedFastTravelFailedDialog(int32 Selection);
	void OnClosedFastTravelConfirmDialog(int32 Selection);
	void DecideIcon();
	void CreateMapIconInstance();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Destruct();
	void GetLeftAxisX(float AxisValue);
	void GetLeftAxisY(float AxisValue);
	void RightAxisUp();
	void RightAxisDown();
	void SubMenu_WorldMapZoomIn();
	void SubMenu_WorldMapZoomOut();
	void SubMenu_WorldMapSlowCursorX(float AxisValue);
	void SubMenu_WorldMapSlowCursorY(float AxisValue);
	void ExecuteUbergraph_WBP_3DWorldMapWidget(int32 EntryPoint);
};

}


