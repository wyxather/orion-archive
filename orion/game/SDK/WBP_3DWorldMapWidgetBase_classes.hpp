#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x200 (0x650 - 0x450)
// WidgetBlueprintGeneratedClass WBP_3DWorldMapWidgetBase.WBP_3DWorldMapWidgetBase_C
class UWBP_3DWorldMapWidgetBase_C : public UWorldMapWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x450(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      FadeInIconAnim;                                    // 0x458(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FadeOutIconAnim;                                   // 0x460(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FadeInWidgetAnim;                                  // 0x468(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FadeOutWidgetAnim;                                 // 0x470(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_3DWorldMapAreaLabel_C*            ThreeDWorldMapAreaLabel;                           // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBackgroundBlur*                       Blur;                                              // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_3DWorldMapCursor_C*               CursorWidget;                                      // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              FrameSequencerRoot;                                // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          MapIconsCanvas;                                    // 0x498(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            OverlayOnMapSlot;                                  // 0x4A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              RootOverlay;                                       // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              SequencerRoot;                                     // 0x4B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_3DWorldMapEffect_C*               WBP_3DWorldMapEffect;                              // 0x4B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_3DWorldMapWidgetFrameImage_C*     WBP_3DWorldMapWidgetFrameImage;                    // 0x4C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        InputZoomValue;                                    // 0x4C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LastCursorWorldPos;                                // 0x4CC(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             SnapStartPos;                                      // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SnapStartWorldPos;                                 // 0x4E0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsTouchingFastRotateGlobeLineX;                    // 0x4EC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsTouchingFastRotateGlobeLineY;                    // 0x4ED(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15E6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMenuFooter_C*                         Footer;                                            // 0x4F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFixedCursorToIcon;                               // 0x4F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15E7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWorldMapIconBase*                     Prev_SelectedIcon;                                 // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnSelectIconEvent;                                 // 0x508(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector2D                             GlobeRotationDelta;                                // 0x518(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsNeedRestoreCurosrPositionFromPrevFrameCursorPosition; // 0x520(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15E9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             EasedFastRotationSpeedScale;                       // 0x524(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsStopSnapping;                                    // 0x52C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15EA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ALevelSequenceActor*                   CloseSequenceActor;                                // 0x530(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Prev_IsTouchingFastRotateGlobeLineY;               // 0x538(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Prev_IsTouchingFastRotateGlobeLineX;               // 0x539(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsFlatEarthMode;                                   // 0x53A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15EC[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EWorldMapZoomType, struct FVector2D> RotationGlobeScaleMap;                             // 0x540(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<enum class EWorldMapZoomType, struct FVector2D> FastRotationGlobeScaleMap;                         // 0x590(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<enum class EWorldMapZoomType, struct FVector2D> CursorSpeedScaleMap;                               // 0x5E0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*              DarkEffectMaterial;                                // 0x630(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDarkendAnyDarkArea;                              // 0x638(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15ED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMenuHeader_C*                         Header;                                            // 0x640(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             SnapRotaion;                                       // 0x648(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_3DWorldMapWidgetBase_C* GetDefaultObj();

	void GetCursorPosition(struct FVector2D* Position, bool* Enable);
	void CursorRight(bool* MenuDecide);
	void CursorLeft(bool* MenuCancel);
	void DecideMenu(bool* NextState);
	void CancelMenu(bool* ReturnState);
	void GetMenuRelativePos(struct FVector2D* RelativePos);
	void OnPaint(struct FPaintContext& Context);
	void GetCursorSlowScale(struct FVector2D* Val);
	void OutFocusWorldMap(bool IsFast);
	void FocusWorldMap(bool IsFast);
	void UpdateDarkAreaEffect();
	void UpdateWidgetFromSequencer(float InDeltaTime);
	void GetWorldMapActorClass(TSoftClassPtr<class AWorldMapActorBase>* WorldMapActorClassRef);
	void SetBackgroundMode_IconOnly(bool IsHide, bool Force);
	void SetBackgroundMode(bool IsHide, bool Force);
	void OnOpened();
	void GetAutoRotateSpeed(float* Param);
	void RefreshFooterGuide();
	void MakeFooterGuideData(enum class EWorldMapZoomType ZoomType, const struct FWorldMapTable& SelectedIconData, TArray<struct FGuideData>* NewParam);
	void RotateToCenterByWorldMapLabel(class FName WorldMapLabel, bool IsAnimate, bool* NotFound);
	void FastCloseWorldMap();
	void CloseWorldMapInternal();
	bool IsClosed();
	void OnClosed();
	void CloseWorldMap();
	void OpenWorldMapInternal();
	void OpenWorldMap();
	void UpdateWorldMap(float InDeltaTime);
	void EaseFastGlobeRotateSpeed(float InDeltaTime);
	void EaseInputValue(float InDeltaTime);
	void SaveCursorPosToWorldPos();
	void ResetInputValue();
	void Resotre_Cursor_Pos_from_World_Pos();
	void IsSpawnedWorldMapActor(bool* IsSpawned, class AWorldMapActorBase** SpawnedActor);
	void GetFastRotateGlobeLine(struct FVector2D* Param);
	void GetRotationGlobeScale(struct FVector2D* Param);
	void GetFastRotationGlobeScaleMap(struct FVector2D* Param);
	void GetMaxGlobeRotation(struct FVector2D* Param);
	void GetCursorSpeedScale(struct FVector2D* Param);
	void GetCursorMoveLimit(struct FVector2D* Param);
	void GetCursorSnapDuration(float* Param);
	void GetCursorSnapDistance(float* Param);
	void OnDeselectIcon();
	void OnSelectIcon();
	void SetSetectedIcon(class UWorldMapIconBase* SelectedIcon);
	void UpdateSelectedIcon();
	bool IsZooming();
	bool IsFastTraveling();
	void SetFooter(class UMenuFooter_C* Footer);
	void SetHeader(class UMenuHeader_C* Header);
	void UpdateCursorSnap(float InDeltaTime);
	void UpdateCursorSnap_WhenFIxCursorToIcon();
	struct FVector2D GetCenterPosition();
	void UpdateGlobe(float InDeltaTime);
	void UpdateCamera(float InDeltaTime);
	void UpdateCursorPosition(float InDeltaTime);
	void UpdateSnapProcess(float DeltaTime);
	void DecideIcon();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void CreateMapIconInstance();
	void OutFocusMenu();
	void FocusMenu();
	void CursorUp();
	void CursorDown();
	void OnHelpMenu();
	void GetRightAxisX(float AxisValue);
	void GetRightAxisY(float AxisValue);
	void RBMenu();
	void RightAxisUp();
	void RightAxisDown();
	void RBMenuRelease();
	void GetGamePadAxisX(float AxisValue);
	void GetGamePadAxisY(float AxisValue);
	void GetLeftAxisX(float AxisValue);
	void GetLeftAxisY(float AxisValue);
	void Construct();
	void SubMenu_WorldMapZoomIn();
	void SubMenu_WorldMapZoomOut();
	void SubMenu_WorldMapSlowCursorX(float AxisValue);
	void SubMenu_WorldMapSlowCursorY(float AxisValue);
	void ExecuteUbergraph_WBP_3DWorldMapWidgetBase(int32 EntryPoint);
	void OnSelectIconEvent__DelegateSignature(bool IsSelect);
};

}


