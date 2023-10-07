#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass LibGameOption.LibGameOption_C
class ULibGameOption_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibGameOption_C* GetDefaultObj();

	void ApplyLetterSize(class UObject* __WorldContext);
	void Refresh_Voice_ResourceInner(bool IsJA, class UObject* __WorldContext);
	void Refresh_Voice_Resource(bool IsJA, class UObject* __WorldContext);
	void OnApplyReactionFlag(enum class EOPTION_ITEM_KIND OptionKind, bool Flag, class UObject* __WorldContext);
	void OnApplyReactionParam(enum class EOPTION_ITEM_KIND OptionKind, int32 Value, class UObject* __WorldContext);
	void OnApplyTemporaryFlag(enum class EOPTION_ITEM_KIND OptionKind, bool Flag, class UObject* __WorldContext);
	void Debug_RefreshTextLanguage(enum class EKSLanguage InLang, class UObject* __WorldContext);
	void ResetGraphicSettings(class UObject* __WorldContext);
	void ResetSoundOptionSettings(class UObject* __WorldContext);
	void ResetGameOptionSettings(class UObject* __WorldContext);
	void GetCharacterSystemVoice(enum class EPlayableCharacterID CharacterID, class UObject* __WorldContext, class FName* VoiceLabel);
	void RefreshTextLanguage(enum class EKSLanguage InLang, class UObject* __WorldContext);
	void UnloadLanguageResource(class UObject* __WorldContext);
	void LoadLanguageResource(class UObject* __WorldContext);
	void OnApplyTemporaryParam(enum class EOPTION_ITEM_KIND OptionKind, int32 Value, class UObject* __WorldContext);
	void OnChangeVoiceVolume(class UObject* __WorldContext);
	enum class EKSSaveDataFlagType GetSystemFlagType(enum class EOPTION_ITEM_KIND Index, class UObject* __WorldContext);
	enum class EKSSaveDataParamType GetSystemParamType(enum class EOPTION_ITEM_KIND Index, class UObject* __WorldContext);
	void Reset_Option_Settings(class UObject* __WorldContext);
	void ApplyAllOptionToGame(class UObject* __WorldContext);
	void ConvertOptionVolume(int32 VolumeLevel, class UObject* __WorldContext, float* Volume);
	void ApplyOptionToGame(enum class EOPTION_ITEM_KIND Selection, class UObject* __WorldContext);
};

}


