#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x51 (0x311 - 0x2C0)
// WidgetBlueprintGeneratedClass GuildSubMenuList.GuildSubMenuList_C
class UGuildSubMenuList_C : public UAcqUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      SubMenuClose;                                      // 0x2C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      SubMenuOpen;                                       // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UMainMenuSubItemPanel_C*               SubMenuList01;                                     // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuSubItemPanel_C*               SubMenuList02;                                     // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuSubItemPanel_C*               SubMenuList03;                                     // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          SubMenuRoot;                                       // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        SelectIndex;                                       // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMainMenuSubItemPanel_C*>       SubMenuList;                                       // 0x300(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         ActiveFlag;                                        // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UGuildSubMenuList_C* GetDefaultObj();

	void GetAcquisitionJobAbility(int32* JobID, int32* Index);
	void GetCurrentIndex(int32* Index);
	void SetupText(TArray<class FName>& Label);
	void ReOpen();
	void IsActive(bool* ActiveFlag);
	void Cancel();
	void GetCursorPosition(struct FVector2D* Position, bool* Enable);
	void CursorRight(bool* MenuDecide);
	void CursorLeft(bool* MenuCancel);
	void DecideMenu(bool* NextState);
	void CancelMenu(bool* ReturnState);
	void GetMenuRelativePos(struct FVector2D* RelativePos);
	void ChangeSelectIndex(bool IsUp);
	void CusorDown();
	void CusorUp();
	void Init();
	void OutFocus(int32 Index, bool IsUp, bool AnimFast);
	void Focus(bool IsUp, bool AnimFast);
	void Close();
	void Open(bool ReOpen);
	void PlayCloseAnim();
	void PlayOpenAnim(bool IsFast);
	void MenuDecide();
	void OnCursorUp();
	void OnCursorDown();
	void MenuCancel();
	void Construct();
	void ExecuteUbergraph_GuildSubMenuList(int32 EntryPoint);
};

}


