#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x300 - 0x260)
// WidgetBlueprintGeneratedClass MainMenuList.MainMenuList_C
class UMainMenuList_C : public UMainMenuListBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      MainMenuListClose;                                 // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      MainMenuListOpen;                                  // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMainMenuItemPanel_C*                  MainMenu_Ability;                                  // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuItemPanel_C*                  MainMenu_ChangeMember;                             // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuItemPanel_C*                  MainMenu_Class;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuItemPanel_C*                  MainMenu_Equipment;                                // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuItemPanel_C*                  MainMenu_Etc;                                      // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuItemPanel_C*                  MainMenu_Item;                                     // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuItemPanel_C*                  MainMenu_Magic;                                    // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuItemPanel_C*                  MainMenu_Record;                                   // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuItemPanel_C*                  MainMenu_Status;                                   // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuItemPanel_C*                  MainMenu_World;                                    // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          MainMenuPanel;                                     // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UMainMenuItemPanel_C*>          MainMenuList;                                      // 0x2D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        CursorPositionMax;                                 // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CursorPosition;                                    // 0x2E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsOpen;                                            // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsCursorUpdate;                                    // 0x2E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32C[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMainMenuItemPanel_C*>          AllMainMenuList;                                   // 0x2F0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UMainMenuList_C* GetDefaultObj();

	void IsUIPartsRunning(bool* IsRunning);
	void IsPlayingAnim(bool* IsPlaying);
	void SetCursorVisibility(bool IsVisible);
	void Setup();
	void GetSelectedListPanelPosition(struct FVector2D* ViewportPosition);
	void CheckHolyTorch();
	void SetupMenuList();
	void Construct();
	void GetMenuItemByType(enum class EMAINMENUSTATE Type, class UMainMenuItemPanel_C** MenuItem);
	void IsCancelAnimationPlaying(bool* IsPlaying);
	void InitMenuListIcon();
	void StopAllPanelAnim();
	void DefaultAnim();
	void SetCursorPosFromState(enum class EMAINMENUSTATE MainMenuState, bool AnimFast);
	void SetCursorPosition(int32 CursorPosition);
	void UpdateNewIcon();
	void SetEnable(enum class EMAINMENUSTATE MenuType, bool Enable);
	void SetupUnEnable();
	void NowSelectFocus();
	void NowSelectOutFocus();
	void GetSelectData(class UMainMenuItemPanel_C** Item);
	void NowSelectCancel(bool IsFast);
	void NowSelectDecide(bool IsFast);
	void CursorDown();
	void CursorUp();
	void CloseWidget();
	void OnAnimationFinished(class UWidgetAnimation* Animation);
	void OpenWidget();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void InitWidgetData();
	void OnPartyRefresh(enum class ENOTICE_TYPE ENoticeType, struct FNoticeArgs& NoticeArgs);
	void ExecuteUbergraph_MainMenuList(int32 EntryPoint);
};

}


