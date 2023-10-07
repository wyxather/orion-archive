#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x279 - 0x260)
// WidgetBlueprintGeneratedClass BattleBonusWidget.BattleBonusWidget_C
class UBattleBonusWidget_C : public UUserWidget
{
public:
	class UWidgetAnimation*                      Bonus_in;                                          // 0x260(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UKSTextBlock*                          BonusText;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKSTextBlock*                          BonusType;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EBATTLERESULT_BONUS_TYPE          BattleBonusType;                                   // 0x278(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBattleBonusWidget_C* GetDefaultObj();

	void SetExpBonusType(bool BreakBonus, bool OverKillBonus);
	void PlayBonusIn();
	void SetBattleBonusType(enum class EBATTLERESULT_BONUS_TYPE BonusType);
	void SetLanguege();
};

}


