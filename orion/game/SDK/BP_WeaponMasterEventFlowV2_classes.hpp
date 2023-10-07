#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x240 - 0x220)
// BlueprintGeneratedClass BP_WeaponMasterEventFlowV2.BP_WeaponMasterEventFlowV2_C
class ABP_WeaponMasterEventFlowV2_C : public AWeaponMasterEventFlow
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x220(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EWeaponMasterEventV2_MainState    State;                                             // 0x228(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAcquiredMode;                                    // 0x229(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FAC[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  GotLegendWeapon;                                   // 0x22C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsStopEvent;                                       // 0x234(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsNotEnoughMoney;                                  // 0x235(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FAD[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonDialog*                         Dialog;                                            // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_WeaponMasterEventFlowV2_C* GetDefaultObj();

	void OnClosedBuyDialog(int32 SelectIndex);
	void OnClosedSupportAbilityTutorial();
	void OpenSupportAbilityTutorial();
	void OnClosedJobTutorial();
	void OpenJobTutorial();
	void OnClosedSupportAbilityDialog(int32 SelectIndex);
	void OpenSupportAbilityDialog();
	void OnClosedAbilityDialog(int32 SelectIndex);
	void OnClosedJobDialog(int32 SelectIndex);
	void OnClosedWeaponDialog(int32 SelectIndex);
	void SetIsStopEvent(bool NewValue);
	bool GetIsStopEvent();
	class UCommonDialog* OpenDialog(class FText Caption, class FText Text, TArray<class FText>& ButtonText, FDelegateProperty_ CloseFinishCallback, class FName OpenSe);
	int32 SelectIndex(struct FEventData& EventData, int32 OptionIndex);
	enum class EWeaponMasterEventV2_MainState GetState();
	void SetState(enum class EWeaponMasterEventV2_MainState NewValue);
	void ApplyResult();
	void UpdateFlow(const struct FEventData& EventData, int32 CurrentIndex, int32* NextIndex);
	void Setup();
};

}


