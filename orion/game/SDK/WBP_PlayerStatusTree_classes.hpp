#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x348 - 0x2C0)
// WidgetBlueprintGeneratedClass WBP_PlayerStatusTree.WBP_PlayerStatusTree_C
class UWBP_PlayerStatusTree_C : public UAcqUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ChangeToPartyB;                                    // 0x2C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ChangeToPartyA;                                    // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UInvalidationBox*                      InvalidationBox_64;                                // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              RootPartyA;                                        // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              RootPartyB;                                        // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              RootSubPartyA;                                     // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              RootSubPartyB;                                     // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         PartyAEnable;                                      // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1277[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UBattleSelectPlayerStatus_C*>   MainPartyA;                                        // 0x308(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UBattleSelectPlayerStatus_C*>   MainPartyB;                                        // 0x318(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UWBP_BattleSelectSubPlayerStatus_C*> SubPartyA;                                         // 0x328(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UWBP_BattleSelectSubPlayerStatus_C*> SubPartyB;                                         // 0x338(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UWBP_PlayerStatusTree_C* GetDefaultObj();

	void AttachSubPartyStatus(bool IsA, class UWBP_BattleSelectSubPlayerStatus_C* StatusUI);
	void GetStatusUI(bool IsA, TArray<class UBattleSelectPlayerStatus_C*>* StatusUI);
	void DetachPartyStatus();
	void AttachPartyStatus(bool IsA, class UBattleSelectPlayerStatus_C* StatusUI);
	void PlayPartyChangeAnim(bool ChangeToA);
	void Construct();
	void ExecuteUbergraph_WBP_PlayerStatusTree(int32 EntryPoint);
};

}


