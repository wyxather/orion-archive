#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x271 - 0x260)
// WidgetBlueprintGeneratedClass BattleTargetCursor.BattleTargetCursor_C
class UBattleTargetCursor_C : public UUserWidget
{
public:
	class UAcqImage*                             CursorImage;                                       // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABattleCharacterBaseBP_C*              TargetCharacter;                                   // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CursorVisible;                                     // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBattleTargetCursor_C* GetDefaultObj();

	void UpdateVisible();
	void HideCursor();
	void VisibleCursor(class ABattleCharacterBaseBP_C* TargetCharacter);
};

}


