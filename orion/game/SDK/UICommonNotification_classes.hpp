#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x418 - 0x358)
// WidgetBlueprintGeneratedClass UICommonNotification.UICommonNotification_C
class UUICommonNotification_C : public UKSUserWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      OutMessage;                                        // 0x360(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      InMessage;                                         // 0x368(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OutWindow;                                         // 0x370(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      InWindow;                                          // 0x378(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Open;                                              // 0x380(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAcqImage*                             Back;                                              // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Icon;                                              // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSTextBlock*                          MessagetextBlock;                                  // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Ripple01;                                          // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Ripple02;                                          // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Ripple03;                                          // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FCommonNotificationParam>      RequestList;                                       // 0x3B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class ECOMMON_NOTIFICATION_STATE        UiState;                                           // 0x3C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DD3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WaitTimeCount;                                     // 0x3CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPause;                                           // 0x3D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DD4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PauseAnimeTime;                                    // 0x3D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsOpening;                                         // 0x3D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DD5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCommonNotificationParam              CurrentNotoficationParam;                          // 0x3E0(0x38)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UUICommonNotification_C* GetDefaultObj();

	void AddRequestToStack(struct FCommonNotificationParam& NewItem);
	void UpdateNotificationMessage(struct FCommonNotificationParam& CommonNotificationParam);
	void OnResetHiddenFlag();
	void HideTemporaryInternal(bool IsHidden, enum class EWIDGET_TEMPORARY_HIDE_USER HideUser);
	void GetIsOpenning(bool* IsOpening);
	void AllInfoClear();
	void SetPause(bool Pause);
	void OpenRequest(const struct FCommonNotificationParam& Request);
	void UpdateNextMassage();
	void UpdateWait(float DeltaTime);
	void AddInfoRequest(const struct FCommonNotificationParam& Request);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ResetFromTitle();
	void OnCompleteMainStory(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& Args);
	void ExecuteUbergraph_UICommonNotification(int32 EntryPoint);
};

}


