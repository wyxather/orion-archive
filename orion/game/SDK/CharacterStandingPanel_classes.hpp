#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x180 (0x440 - 0x2C0)
// WidgetBlueprintGeneratedClass CharacterStandingPanel.CharacterStandingPanel_C
class UCharacterStandingPanel_C : public UAcqUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ChangeNoon;                                        // 0x2C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ChangeNight;                                       // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OutFocus;                                          // 0x2D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Focus;                                             // 0x2E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAcqImage*                             Img_Base_L;                                        // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Img_Base_R;                                        // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Img_Blur_L;                                        // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Img_Blur_R;                                        // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Img_Ds_L;                                          // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             Img_Ds_R;                                          // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             PlayerBg;                                          // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAcqImage*                             PlayerImage;                                       // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              PlayerOverlay;                                     // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Size_ChName_L;                                     // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Size_ChName_R;                                     // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         FocusState;                                        // 0x340(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_198[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CharacterID;                                       // 0x344(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class EPlayableCharacterID, class FName> CouplingPortraitResourceLabel;                     // 0x348(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<enum class EPlayableCharacterID, class FName> CouplingPortraitBgResourceLabel;                   // 0x398(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsCoupling;                                        // 0x3E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsNight;                                           // 0x3E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsUseName;                                         // 0x3EA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsPreventReopenFromRefreshCharacter;               // 0x3EB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_199[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EPlayableCharacterID, enum class EPlayableCharacterID> CouplingPairCharaID;                               // 0x3F0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UCharacterStandingPanel_C* GetDefaultObj();

	void ResetCharacterResource();
	void SetTextureToMaterial(class UAcqImage* ImageWidget, class UTexture* Texture, class FName ParameterName);
	void GetFocusState(bool* FocusState);
	void SetOutFocusFromPlayerPanel(bool IsPreventReopenFromRefreshCharacter);
	bool GetPortraitBgTe(int32 CharaID, bool IsCoupling, bool IsNight, class UTexture2D** Image);
	bool GetPortraitTex(int32 CharaID, bool IsCoupling, bool IsNight, class UTexture2D** Image);
	void OnFinishedFocusOut();
	void SetOutFocus(bool Fast);
	void IsFocus(bool* Focus);
	void SetUIFocus();
	void InitCharacter(int32 CharacterID, bool UseName, bool IsCoupling, bool IsNight);
	void SetHide(bool IsHide);
	void Refresh_Character(int32 CharacterID, bool UseName, bool IsCoupling, bool IsNight);
	void Construct();
	void ExecuteUbergraph_CharacterStandingPanel(int32 EntryPoint);
};

}


