#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x180 (0x3E0 - 0x260)
// WidgetBlueprintGeneratedClass PartyCharacterList.PartyCharacterList_C
class UPartyCharacterList_C : public UPartyCharacterListBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      PartyCharacterClose;                               // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      PartyCharacterOpen;                                // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAcqImage*                             Background;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             BackLine;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              CaptionRoot;                                       // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               CaptionSpacer;                                     // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSTextBlock*                          CaptionText;                                       // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Image_0;                                           // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNowPlayingStoryPanel_C*               NowPlayingStoryPanel;                              // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPartyCharacterPanel_C*                PartyCharacter_00;                                 // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPartyCharacterPanel_C*                PartyCharacter_01;                                 // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPartyCharacterPanel_C*                PartyCharacter_02;                                 // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPartyCharacterPanel_C*                PartyCharacter_03;                                 // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerStatusPanel_C*                  PlayerStatusPanel;                                 // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPossessionNumWidget_C*                PossessNum1;                                       // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPossessionNumWidget_C*                PossessNum2;                                       // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPossessionNumWidget_C*                PossessNum3;                                       // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPossessionNumWidget_C*                PossessNum4;                                       // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPartyCharacterPanel_SelectBack_C*     Select01;                                          // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPartyCharacterPanel_SelectBack_C*     Select02;                                          // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPartyCharacterPanel_SelectBack_C*     Select04;                                          // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPartyCharacterPanel_SelectBack_C*     Selest03;                                          // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               Spacer_6;                                          // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               Spacer_8;                                          // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              StatusPanelRoot;                                   // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               StatusSpacer;                                      // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        CursorPosition;                                    // 0x338(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16CF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPartyCharacterPanel_C*>        PartyCharacterList;                                // 0x340(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         IsAllSelect;                                       // 0x350(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16D0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                RecoveryMemberList;                                // 0x358(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsRecoveryPlaying;                                 // 0x368(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16D1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ValidListNum;                                      // 0x36C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsOpen;                                            // 0x370(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16D2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PassCursorPosition;                                // 0x374(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ChangeFormationFirstMin;                           // 0x378(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16D3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TmpChangeIndex1;                                   // 0x37C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TmpChangeIndex2;                                   // 0x380(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ChangeFormationCount;                              // 0x384(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCursorUpdate;                                    // 0x388(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsShowStory;                                       // 0x389(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16D4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPartyCharacterPanel_SelectBack_C*> SelectList;                                        // 0x390(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<int32>                                SelectedList;                                      // 0x3A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsVisibilityPossession;                            // 0x3B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16D5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PossessionNum;                                     // 0x3B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UPossessionNumWidget_C*>        PossessionWidgetList;                              // 0x3B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         InitializedPossessionNum;                          // 0x3C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16D6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<bool>                                 A;                                                 // 0x3D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UPartyCharacterList_C* GetDefaultObj();

	void IsUIPartsRunning(bool* IsRunning);
	void IsPlayingAnim(bool* IsPlaying);
	void GetMenuRelativePos(struct FVector2D* RelativePos);
	void CursorRight(bool* MenuDecide);
	void CursorLeft(bool* MenuCancel);
	void DecideMenu(bool* NextState);
	void CancelMenu(bool* ReturnState);
	void GetCursorPosition(struct FVector2D* Position, bool* Enable);
	void ListCursorDown_FromCheckIndex(TArray<bool>& CheckIndex, bool* IsSuccess);
	void ListCursorUp_FromCheckIndex(TArray<bool>& CheckIndex, bool* IsSuccess);
	class UPartyCharacterPanelBase* GetMainMemberPanel(int32 MainMemberIndex);
	void IsPlayingItemAnimation(bool* IsPlaying);
	void Init(bool EnableStatusSpacer);
	void IsVisibleLockIcon(int32 ListIndex, bool* IsVisible);
	void HideSelectCursor();
	void OutForcusPossessionNum();
	void ClosePossessionNum();
	void InitPossessionNum();
	void SelectPossessionNum(int32 SelectIndex);
	void SetPossessionNum(int32 Num);
	void OpenPossessionNum();
	void SetCharaLockIcon(class UPartyCharacterPanel_C*& CharacterPanel, int32 CharacterID, bool ForceLock);
	void EndCaptionMode();
	void SetCaptionMode(class FText InText);
	void SetSelectOutFocus();
	void SetShowPlayingStory(bool ShowStory);
	void GetCurrentCharacterData(struct FPlayableCharacterData* CharacterData);
	void IsChangeFormation(bool* IsChangeFormation);
	void UpdateChangeFormation();
	void RefreshSelect(int32 RefreshIndex);
	void RequestChangeFormation(int32 ChangeIndex1, int32 ChangeIndex2, bool* IsSuccess);
	void SetPassCursorPosition(int32 PassCursorPosition);
	void SetFocusDecide();
	void ResetCharacterEquipIcon();
	void SetMainMemberEquipIcon(int32 MainMemberIndex, bool IsVisible);
	void ResetCharacterColor();
	void SwitchDisplayInfo(bool IsStatus);
	void IsPlayingHealAnim(bool* IsPlaying);
	void PlayRecovery(TArray<int32>& Member, enum class ERECOVERY_EFFECT_TYPE RecoveryType);
	void SetPartyAllSelect();
	void SetPartySelect(TArray<int32>& MemberList, bool* Success);
	void OutFocus(bool Fast);
	void RefreshPartyList(bool UseLockIcon, bool DeadIsDark, bool Lock1stChara);
	void GetSelectIndex(int32* Index);
	void ListCursorDown();
	void ListCursorUp();
	void SetCursorPosition(int32 NewCursorPosition, bool IsSelectAnima, bool IsFast, bool* IsSuccess);
	void GetRightAxisX(float AxisValue);
	void GetRightAxisY(float AxisValue);
	void RBMenu();
	void GetLeftAxisX(float AxisValue);
	void GetLeftAxisY(float AxisValue);
	void RightAxisUp();
	void RightAxisDown();
	void RBMenuRelease();
	void GetGamePadAxisX(float AxisValue);
	void GetGamePadAxisY(float AxisValue);
	void SubMenu_WorldMapZoomIn();
	void SubMenu_WorldMapZoomOut();
	void SubMenu_WorldMapSlowCursorX(float AxisValue);
	void SubMenu_WorldMapSlowCursorY(float AxisValue);
	void Construct();
	void CursorUp();
	void CursorDown();
	void FocusMenu();
	void OutFocusMenu();
	void OnHelpMenu();
	void InitWidgetData();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OpenWidget();
	void CloseWidget();
	void ResetPartyPanel();
	void ExecuteUbergraph_PartyCharacterList(int32 EntryPoint);
};

}


