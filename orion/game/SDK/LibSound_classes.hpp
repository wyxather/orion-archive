#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass LibSound.LibSound_C
class ULibSound_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class ULibSound_C* GetDefaultObj();

	void StopVoice(class UObject* __WorldContext);
	void PlayMapBGM(float FadeOutTime, float FadeInTime, class UObject* __WorldContext);
	void PlayVoiceByLabel(class FName SELabel, class UObject* __WorldContext, bool* Success);
	void StopLoopSe(int32 HandleId, class UObject* __WorldContext);
	void PlayLoopSeByLabel(class FName SELabel, class UObject* __WorldContext, int32* HandleId, bool* Success);
	void PlayMenuSe(enum class EMENU_SE_TYPE SeType, class UObject* __WorldContext);
	void StopBgm(class UObject* __WorldContext);
	void PlaySeById(int32 SEID, class UObject* __WorldContext, bool* Success);
	void PlayBgmById(int32 BGMID, int32 Priority, class UObject* __WorldContext, bool* Success, struct FSoundData* BeforSoundData);
	void PlayBgmByLabel(class FName BgmLable, int32 Priority, class UObject* __WorldContext, bool* Success, struct FSoundData* BeforSoundData);
};

}


