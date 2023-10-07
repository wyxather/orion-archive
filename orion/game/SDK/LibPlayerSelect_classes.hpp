#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass LibPlayerSelect.LibPlayerSelect_C
class ULibPlayerSelect_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibPlayerSelect_C* GetDefaultObj();

	void GetHunterPattern(class UObject* __WorldContext, enum class EPLAYER_SELECT_FB_PATTERN* Pattern);
	void GetPlayerSelectFBDrawSize(enum class EPlayableCharacterID PlayerID, class UObject* __WorldContext, struct FVector2D* DrawSize);
	void GetUnReleaseStage(class UObject* __WorldContext, class FName* Label);
	void GetBlankStage(class UObject* __WorldContext, class FName* Label);
	void GetPlayerSelectSelect(enum class EPlayableCharacterID PlayerID, bool IsNight, class UObject* __WorldContext, class FName* FlipbookName);
	void GetPlayerSelectFocus(enum class EPlayableCharacterID PlayerID, class UObject* __WorldContext, class FName* FlipbookName);
	void GetPlayerSelectWait(enum class EPlayableCharacterID PlayerID, class UObject* __WorldContext, class FName* FlipbookName);
};

}


