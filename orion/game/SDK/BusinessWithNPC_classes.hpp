#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x3F0 - 0x3B0)
// WidgetBlueprintGeneratedClass BusinessWithNPC.BusinessWithNPC_C
class UBusinessWithNPC_C : public UBusinessWithNpcNotificationBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Close;                                             // 0x3B8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Open;                                              // 0x3C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAcqImage*                             Img_Emotion;                                       // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSTextBlock*                          Txt_Detail;                                        // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_FBPart_C*                         WBP_FBPart_L;                                      // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_FBPart_C*                         WBP_FBPart_R;                                      // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        AutoCloseTimer;                                    // 0x3E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AutoStartFipbookAnimationTimer;                    // 0x3EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBusinessWithNPC_C* GetDefaultObj();

	void OpenNotificationAnimal(struct FSpActMerchantResult& SpActMerchantResult, bool bIsFast);
	void NewFunction_0();
	void OnResetHiddenFlag();
	void HideTemporaryInternal(bool IsHidden, enum class EWIDGET_TEMPORARY_HIDE_USER HideUser);
	void StartFlipbookAnimation();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetupNotificationBody(struct FSpActMerchantResult& SpActMerchantResult);
	void OnFinishedCloseAnimation();
	void OnTimerEnd();
	void CloseNotification(bool bIsFast);
	void OpenNotification(struct FSpActMerchantResult& SpActMerchantResult, bool bIsFast);
	void ExecuteUbergraph_BusinessWithNPC(int32 EntryPoint);
};

}


