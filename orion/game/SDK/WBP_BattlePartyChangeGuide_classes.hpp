#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2E0 - 0x2C0)
// WidgetBlueprintGeneratedClass WBP_BattlePartyChangeGuide.WBP_BattlePartyChangeGuide_C
class UWBP_BattlePartyChangeGuide_C : public UAcqUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                              Panel_StyleChange;                                 // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSTextBlock*                          Text_Button;                                       // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSTextBlock*                          Text_PartyChange;                                  // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_BattlePartyChangeGuide_C* GetDefaultObj();

	void RefreshButtonText();
	void Update_Text(bool IsEnable);
	void SetColor(enum class EGameColor ColorType);
	void SetDefaultText();
	void ChangeInputMode(enum class EKSUseInputType Type);
	void Construct();
	void ExecuteUbergraph_WBP_BattlePartyChangeGuide(int32 EntryPoint);
};

}


