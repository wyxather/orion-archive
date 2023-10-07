#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C (0x28C - 0x260)
// WidgetBlueprintGeneratedClass WBP_BattleDoubleSpeed.WBP_BattleDoubleSpeed_C
class UWBP_BattleDoubleSpeed_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Close;                                             // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Open;                                              // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UKSTextBlock*                          KSTextBlock_30;                                    // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        DeltaTime;                                         // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WaitFlag;                                          // 0x284(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1210[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WaitTime;                                          // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_BattleDoubleSpeed_C* GetDefaultObj();

	void RefreshButtonText();
	void ResetParam();
	void CheckAnimation();
	void PlayCloseAnim();
	void OnOpenAnimFinish();
	void ChangeSpeed(bool BattleStartOpen);
	void SetText();
	void PlayOpenAnim(bool BattleStartOpen);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ChangeInputMode(enum class EKSUseInputType Type);
	void ExecuteUbergraph_WBP_BattleDoubleSpeed(int32 EntryPoint);
};

}


