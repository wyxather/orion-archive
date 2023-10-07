#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x104 (0x6F4 - 0x5F0)
// BlueprintGeneratedClass SoundManagerBP.SoundManagerBP_C
class ASoundManagerBP_C : public ASoundManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UMJSoundListenerComponent*             MJSoundListener;                                   // 0x5F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x600(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timer;                                             // 0x608(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESOUND_STATE                      State;                                             // 0x60C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F0E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LoopSeMax;                                         // 0x610(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F0F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLoopSeData>                   LoopSeList;                                        // 0x618(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                        FadeVolume_Bgm;                                    // 0x628(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ChangeBgmVolume;                                   // 0x62C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ChangeSeVolume;                                    // 0x62D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsInterrupt;                                       // 0x62E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsOlberic;                                         // 0x62F(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TMap<class FName, int32>                     BGMNameToID;                                       // 0x630(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          LoadedCharaVoices;                                 // 0x680(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          TempCharaVoices;                                   // 0x690(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          TempRemoveVoices;                                  // 0x6A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          TempAddVoices;                                     // 0x6B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        BgmNextBlock;                                      // 0x6C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F18[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CueSheetAssetPaths;                                // 0x6C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        FadeVolume_Voice;                                  // 0x6D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadeTimer_Voice;                                   // 0x6DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadeOutTime_Voice;                                 // 0x6E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  BGMSelectorName;                                   // 0x6E4(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  BGMSelectorLabel;                                  // 0x6EC(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ASoundManagerBP_C* GetDefaultObj();

	void StopEnvSoundAll();
	void StopImmediateBGM();
	bool SetupBattleChangeEnvSound(bool bIsBattle);
	void CheckPauseBGM(bool* IsPause);
	void CheckNextBGMLabel(class FName BgmLabel, bool* IsUnMatch);
	bool RequestPlayTitleBgmByLabel(class FName BgmLabel, float FadeOutTime, float FadeInTime, int32 Priority, bool IsDayTime, bool bIsDebugPlay);
	bool ResetManager();
	bool DestroyManager();
	bool RequestPlayFadeMapChangeBgmByLabel(class FName BgmLabel, float FadeOutTime, float FadeInTime, int32 Priority, bool bIsDebugPlay);
	void OnExitBar(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& Args);
	bool RequestStopMusicRecord(float FadeOutTime);
	bool RestoreBgmBeforePlayMusicRecord(float FadeOutTime, float FadeInTime, int32 Priority, bool bIsDebugPlay);
	bool RequestPlayMusicRecord(class FName BgmLabel, float FadeOutTime, float FadeInTime, int32 Priority, bool bIsDebugPlay);
	void RequestPlayEventSeByRowName(const class FString& SeName);
	void ApplyBgmSelector(class UAtomComponent* AtomComponent);
	bool SetBgmSelector(class FName SelectorName, class FName SelectorLabel);
	void RequestPlayBgmByLabel(class FName BgmLabel, int32 Priority, bool* Success, struct FSoundData* BeforSoundData);
	bool RefreshCharacterVoiceResource(TArray<class FName>& TempCharaVoices);
	void RequestPlayEventSeByLabel(class FName SELabel, bool* Success);
	bool ChangeNextBgmFadeInTime(float FadeIn);
	bool ChangeCurrentBgmFadeOutTime(float FadeOut);
	void RequestPlayBattleSeByLabel(class FName SELabel, bool* Success);
	void RequestPlayBattleVoiceByLabel(class FName VoiceLabel, bool* Success, class FString* CueName, float* Duration);
	void GetCurrentBgmData(struct FSoundData* PlayingBgmData);
	void RequestPlayBgmById(int32 BGMID, int32 Priority, bool* Success, struct FSoundData* BeforSoundData);
	bool RequestStopLoopSe(int32 HandleId);
	bool RequestPlayLoopSe(int32 HandleId, class FName SELabel);
	void GetLoopSeHandle(int32* HandleId, bool* Success);
	bool ApplyEnvVolume();
	bool OnLevelShown();
	bool RequestStopBGM();
	void UpdateEnvSound(float DeltaTime);
	class FName GetCurrentBgmLabel();
	void ResetVoiceVolume();
	bool GetCueSheetAssetPath(class FName CueSheetName, class FName* OutAssetPath);
	bool RequestPlaySeByLabel(class FName SELabel);
	void InitForSwitch();
	bool StopVoice(float FadeOutTime);
	bool RequestPlayVoiceByLabel(class FName VoiceLabel);
	void ApplyBgmBlockIndex(class UAtomComponent* AtomComponent);
	void Request_Play_Event_Se_by_Label_OLD(class FName SELabel, bool* Success);
	bool RequestPlay3DSeWithComponent(class UAtomComponent* Component, class FName BgmLabel);
	void SetDspBusToEnvSound(enum class EKSDspBusType DspBusType);
	void ChangeNextBgmFadeInTime_OLD(float FadeIn);
	bool SetCategoryVolumeByName(const class FString& CategoryName, float Volume);
	void CancelInterrupt();
	bool SetBgmNextBlockIndex(int32 BlockIndex);
	bool RequestPlayBgmByLabel_Inner(class FName BgmLabel, float FadeOutTime, float FadeInTime, int32 Priority, bool IsInterrupt, bool IsDebugForcePlay);
	void Debug_ShowBgmState();
	void Debug_ShowBgmSoundData(const class FString& Header, struct FSoundData& PlaySoundData);
	void ResetPlayBgmData(struct FSoundData& PlayBgmData);
	void UpdateFadeIn(struct FSoundData& CurrentSoundData, bool* IsEnd);
	void UpdateFadeOut(struct FSoundData& CurrentSoundData, bool* IsEnd);
	void UpdateChangeBGM(struct FSoundData& PlayBgmData_Current, struct FSoundData& PlayBgmData_Next);
	void UpdateTick(float Delta_Seconds);
	bool RequestPlayInterruptBgmByLabel(class FName BgmLabel, float FadeOutTime, float FadeInTime, int32 Priority);
	void OnExitHouse();
	void OnEnterHouse();
	void Debug_Tick();
	void Debug_Show_Env_Sound_Info_OLD(bool Show);
	void PauseEnvSoundAll(bool bPause);
	void CollectEnvSound();
	bool RequestStopFadeBgm(float FadeOutTime, bool StopBoth);
	bool RequestPlayFadeBgmByLabel(class FName BgmLabel, float FadeOutTime, float FadeInTime, int32 Priority, bool bIsDebugPlay);
	void GetVoiceCue(class FName VoiceLabel, class USoundAtomCue** SoundCue, class FName* CueSheetName, bool* Success);
	void PlayVoiceFromCue(class USoundAtomCue* Voice_Cue);
	void RestoreSeVolume();
	void RestoreBgmVolume();
	void SetSeVolume(float Volume);
	void SetBgmVolume(float Volume);
	void Init();
	void StopAllLoopSe();
	void GetBGMDataById(int32 BGMID, bool* IsFound, class FName* BgmLabel, int32* Out_Row_ID, class USoundAtomCue** GetSound);
	class FName GetBGMDataByLabel(class FName BgmLabel, bool* IsFound, int32* Out_Row_ID, class USoundAtomCue** GetSound);
	void GetSECue(class FName SELabel, class USoundAtomCue** SoundCue, class FName* CueSheetName, bool* Success);
	void SetChangeBGM(const struct FSoundData& NextChangeBgm);
	void SetupBGM(class USoundAtomCue* Sound, class FName BgmLabel, int32 BGMID, float FadeIn, float FadeOut_, float Volume, int32 Priority, float Time, bool IsInterrupt, bool IsPlayedMusicRecord, struct FSoundData* SoundData);
	void OnBeginPlay();
	void UpdateManager(float DeltaSeconds);
	void InitLastPlayeNormalBGM(enum class ENOTICE_TYPE NoticeType, struct FNoticeArgs& Args);
	void PauseEnvGaya(bool bBattle, bool bEvent);
	void ResumeEnvGaya(bool bBattle, bool bEvent);
	void ExecuteUbergraph_SoundManagerBP(int32 EntryPoint);
};

}


