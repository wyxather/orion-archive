#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass LibMissionRecord.LibMissionRecord_C
class ULibMissionRecord_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibMissionRecord_C* GetDefaultObj();

	void GetExtraStoryHeaderTitleByExtraStoryCategory(enum class EEXTRA_STORY_CATEGORY ExtraStory, class UObject* __WorldContext, class FName* TextLabel);
	void GetMainStoryHeaderTitleByPlayerId(enum class EPlayableCharacterID PlayerID, class UObject* __WorldContext, class FName* TextLabel);
};

}


