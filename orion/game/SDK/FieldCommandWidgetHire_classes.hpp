#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x75 (0x3D5 - 0x360)
// WidgetBlueprintGeneratedClass FieldCommandWidgetHire.FieldCommandWidgetHire_C
class UFieldCommandWidgetHire_C : public UUFieldCommandWidgetFollowBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      CloseFCLure;                                       // 0x368(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OpenFCLure;                                        // 0x370(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UNPCFollowChangePartsWidget_C*         CaptionChangeWidget;                               // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNPCStatusPartsWidget_C*               LeftCaptionWidget;                                 // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              MenuFooterRoot;                                    // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              MenuHeaderRoot;                                    // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerStatusPanel_C*                  PlayerStatusPanel;                                 // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNPCStatusPartsWidget_C*               RightCaptionWidget;                                // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        DialogInput;                                       // 0x3A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFIELDCOMMAND_LURE_STATE          State;                                             // 0x3AC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15DC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMenuHeader_C*                         PartsMenuHeader;                                   // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMenuFooter_C*                         PartsMenuFooter;                                   // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKSCharacterBase*                      TargetCharacter;                                   // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKSFieldCharacter_C*                   FollowCharacter;                                   // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FollowLimitCount;                                  // 0x3D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsLeadFailed;                                      // 0x3D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UFieldCommandWidgetHire_C* GetDefaultObj();

	bool OpenFixedFollowNPCReleaseDialog();
	bool OpenFixedFollowNPCDialog();
	bool OpenFailedDialog();
	void GetDialogInput(int32* DialogInput);
	bool CloseDialog();
	bool OpenSwapDialog();
	bool OpenReleaseDialog();
	bool OpenFollowDialog();
	void OnClosedSwapDialog(int32 SelectIndex);
	void OnClosedFailedDialog(int32 DialogInput);
	void OnClosedReleaseDialog(int32 SelectIndex);
	void OnClosedDialog(int32 SelectIndex);
	class AKSCharacterBase* Get_Follow_Hire_Member();
	bool IsChangeStateCloseFinish();
	bool SetReference();
	bool IsRunning();
	void InitPartsWidget();
	void SetupHelpUI(class FName HeaderLabel, class FName FooterLabel);
	void DialogOpenCommon();
	void UpdateOpening();
	void OnOpenFinish();
	void UpdateMain();
	void UpdateClosing();
	void OnCloseFinish();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_FieldCommandWidgetHire(int32 EntryPoint);
};

}


