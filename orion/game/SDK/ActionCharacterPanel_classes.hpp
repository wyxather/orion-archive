#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x308 - 0x2C0)
// WidgetBlueprintGeneratedClass ActionCharacterPanel.ActionCharacterPanel_C
class UActionCharacterPanel_C : public UAcqUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAcqImage*                             CharacterIcon;                                     // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                            Grid_Question;                                     // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                            Grid_Rain;                                         // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Img_Base_BG;                                       // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             SelecterEffect;                                    // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              SubIconRoot;                                       // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABattleCharacterBaseBP_C*              Character;                                         // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_SubActionCharacterPanel_C*        SubIcon;                                           // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UActionCharacterPanel_C* GetDefaultObj();

	void SetSubSelecterVisible();
	void SetSelecterVisible();
	void PlayCloseSubIcon();
	void PlayOpenSubIcon();
	void Initialize();
	void ResetSubActiveCharacter();
	void SetSubActiveCharacter(class ABattleCharacterBaseBP_C* Character);
	void Debug_UpdateParam(class UTexture2D* OrderIcon, class UTexture2D* FrontIcon, float IconUV_X, float IconUV_Y, float ScaleX, float ScaleY, const struct FVector2D& CharaOffset, float CharaScale, float InvertX, class UTexture2D* WeaponIcon, const struct FVector2D& FootPivot, bool IsEnemy);
	void CheckSpecial(bool* Special);
	void SetQuestionMode(bool Enable);
	void SetRainMode(bool Enable);
	enum class ESlateVisibility GetSelecterEffectVisibility();
	void ResetActiveCharacter();
	void SetActiveCharacter(class ABattleCharacterBaseBP_C* Character);
	void Construct();
	void ExecuteUbergraph_ActionCharacterPanel(int32 EntryPoint);
};

}


