#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class CriWareRuntime.Atom3dRegionHandle
class UAtom3dRegionHandle : public UObject
{
public:
	uint8                                        Pad_124[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAtom3dRegionHandle* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class CriWareRuntime.Atom3dRegion
class UAtom3dRegion : public UObject
{
public:
	uint8                                        Pad_12A[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAtom3dRegionHandle*                   Handle;                                            // 0x40(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAtom3dRegion* GetDefaultObj();

	void SetHandle(class UAtom3dRegionHandle* InHandle);
	class UAtom3dRegionHandle* GetHandle();
};

// 0x98 (0x290 - 0x1F8)
// Class CriWareRuntime.Atom3dSourceBaseComponent
class UAtom3dSourceBaseComponent : public USceneComponent
{
public:
	float                                        DefaultOutputVolumeScale;                          // 0x1F8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAtom3dRegion*                         DefaultRegion;                                     // 0x200(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsAttenuationDistanceDebugSpheresVisible : 1;     // Mask: 0x1, PropSize: 0x10x208(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_9 : 7;                                      // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_12E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DefaultMinAttenuationDistance;                     // 0x20C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultMaxAttenuationDistance;                     // 0x210(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsOutputInteriorPanFieldDebugSpheresVisible : 1;  // Mask: 0x1, PropSize: 0x10x214(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_A : 7;                                      // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_12F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DefaultSourceRadius;                               // 0x218(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultInteriorDistance;                           // 0x21C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        DefaultDistanceAisacControls;                      // 0x220(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        DefaultOutputBasedAzimuthAngleAisacControls;       // 0x230(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        DefaultOutputBasedElevationAngleAisacControls;     // 0x240(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        DefaultListenerBasedAzimuthAngleAisacControls;     // 0x250(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        DefaultListenerBasedElevationAngleAisacControls;   // 0x260(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        bIsDebugStringsForDetailsVisible : 1;              // Mask: 0x1, PropSize: 0x10x270(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_130[0x1F];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAtom3dSourceBaseComponent* GetDefaultObj();

	void SetRegion(class UAtom3dRegion* InRegion);
};

// 0x30 (0x2C0 - 0x290)
// Class CriWareRuntime.Atom3dTransceiverComponent
class UAtom3dTransceiverComponent : public UAtom3dSourceBaseComponent
{
public:
	class AActor*                                InputPoint;                                        // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        DefaultGlobalAisacs;                               // 0x298(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        bIsInputCrossfadeFieldDebugSpheresVisible : 1;     // Mask: 0x1, PropSize: 0x10x2A8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_F : 7;                                      // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_13E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DefaultDirectAudioRadius;                          // 0x2AC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultCrossfadeDistance;                          // 0x2B0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAtom3dTransceiverComponent* GetDefaultObj();

};

// 0x40 (0x298 - 0x258)
// Class CriWareRuntime.AtomAreaSoundVolume
class AAtomAreaSoundVolume : public AVolume
{
public:
	float                                        Priority;                                          // 0x258(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10x25C(0x1)(Edit, Net, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_10 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_155[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CollisionProfile;                                  // 0x260(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        SoundStopDistance;                                 // 0x268(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsEnableAtomCompoentPack;                         // 0x26C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_15D[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsAutoPlaySound;                                  // 0x26F(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDeterminationFromVolumeBoundaryPlane;           // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableRepeatPlayWhenSoundStop;                    // 0x271(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15E[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UAtomComponent*>                AtomComponents;                                    // 0x278(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class USoundAtomCue*>                 Sounds;                                            // 0x288(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AAtomAreaSoundVolume* GetDefaultObj();

	void SetPriority(float NewPriority);
	void SetEnabled(bool bNewEnabled);
	void OnRep_bEnabled();
	float GetPriority();
	bool GetEnabled();
	void DestroySounds();
	TArray<class UAtomComponent*> CreateSounds(const struct FVector& Listener_location);
};

// 0x18 (0x40 - 0x28)
// Class CriWareRuntime.AtomAsrRack
class UAtomAsrRack : public UObject
{
public:
	int32                                        RackId;                                            // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A3[0x14];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAtomAsrRack* GetDefaultObj();

	void SetEffectBypass(const class FString& BusName, const class FString& EffectName, bool Bypasses);
	void SetBusVolumeByName(const class FString& BusName, float Volume);
	void SetBusSendLevelByName(const class FString& SourceBusName, const class FString& DestBusName, float Level);
	class UAtomAsrRack* GetDefaultAsrRack();
	class FString GetCurrentAppliedSnapshot(int32 AsrRackID);
	bool GetBusAnalyzerInfo(const class FString& DspBusName, int32* Num_channels, TArray<float>* Rms_levels, TArray<float>* Peak_levels, TArray<float>* Peak_hold_levels);
	class UAtomAsrRack* GetAsrRack(int32 AsrRackID);
	void DetachDspBusSetting();
	void ConnectToPadVibrator(int32 UserIndex);
	void ConnectToPadSpeaker(int32 UserIndex);
	void AttachDspBusSetting(const class FString& SettingName);
	void ApplyDspBusSnapshot(const class FString& SnapshotName, int32 Milliseconds);
};

// 0x20 (0x278 - 0x258)
// Class CriWareRuntime.AtomEntranceVolume
class AAtomEntranceVolume : public AVolume
{
public:
	float                                        Priority;                                          // 0x258(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10x25C(0x1)(Edit, Net, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_12 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1B9[0xB];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TWeakObjectPtr<class AAtomAudioVolume>> NeighbourhoodAudioVolumeArray;                     // 0x268(0x10)(Edit, Net, ZeroConstructor, EditConst, RepNotify, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AAtomEntranceVolume* GetDefaultObj();

	void SetPriority(float NewPriority);
	void SetEnabled(bool bNewEnabled);
	void OnRep_bEnabled();
	float GetPriority();
	bool GetEnabled();
};

// 0x88 (0x2E0 - 0x258)
// Class CriWareRuntime.AtomAudioVolume
class AAtomAudioVolume : public AVolume
{
public:
	float                                        Priority;                                          // 0x258(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10x25C(0x1)(Edit, Net, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_13 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1C8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CollisionProfile;                                  // 0x260(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAutoSettingEntranceVolume;                        // 0x268(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAutoSettingNeighbourAudioVolumeToEntranceVolume;  // 0x269(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1CA[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          AudioVolumeTags;                                   // 0x270(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bOverrideAtomAudioVolume;                          // 0x280(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1CB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAtomAudioVolumeSettings*              AtomAudioVolumeSettings;                           // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAtomAudioVolumeParameters            AtomAudioVolumeSettingsOverrides;                  // 0x290(0x40)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<class AAtomEntranceVolume*>           EntranceVolumes;                                   // 0x2D0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AAtomAudioVolume* GetDefaultObj();

	void SetReverbSettings(struct FSnapshotSwitchSettings& NewReverbSettings);
	void SetPriority(float NewPriority);
	void SetEnabled(bool bNewEnabled);
	void OnRep_bEnabled();
	float GetPriority();
	bool GetEnabled();
	void EnableAllAudioVolume(bool bEnable);
};

// 0x40 (0x68 - 0x28)
// Class CriWareRuntime.AtomAudioVolumeSettings
class UAtomAudioVolumeSettings : public UObject
{
public:
	struct FAtomAudioVolumeParameters            AtomAudioVolumeParameters;                         // 0x28(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAtomAudioVolumeSettings* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class CriWareRuntime.AtomBusSampler
class UAtomBusSampler : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnRecordingStarted;                                // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRecordingFinished;                               // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_21C[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAtomBusSampler* GetDefaultObj();

	void StopRecordedSound();
	void StartRecording(float InExpectedDuration, int32 InAsrRack, const class FString& InBusName, bool BusOutput);
	void PlayRecordedSound();
	void PauseRecordedSound(bool bPause);
	void OnRecordingStarted__DelegateSignature();
	void OnRecordingFinished__DelegateSignature();
	bool IsRecording();
	bool IsPlayingRecordedSound();
	bool IsPausedRecordedSound();
	void FinishRecording();
	bool CanRecord();
	bool CanPlayRecordedSound();
};

// 0x0 (0x28 - 0x28)
// Class CriWareRuntime.AtomCallback
class IAtomCallback : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAtomCallback* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class CriWareRuntime.AtomCallbackManager
class UAtomCallbackManager : public UObject
{
public:
	uint8                                        Pad_23E[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAtomCallbackManager* GetDefaultObj();

	void NativeBreakAtomSequenceInfo(struct FAtomSequenceInfo& SequenceInfo, float* Time, class FString* TagName, enum class EAtomSequenceEventType* EventType, int32* CallbackID);
	void NativeBreakAtomBeatSyncInfo(struct FAtomBeatSyncInfo& BeatSyncInfo, int32* BarCnt, int32* BeatCnt, float* BeatProgress, float* Bpm, int32* Offset, int32* NumBeats);
};

// 0x0 (0x28 - 0x28)
// Class CriWareRuntime.AtomCategory
class UAtomCategory : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAtomCategory* GetDefaultObj();

	void StopByName(const class FString& CategoryName);
	void SetVolumeByName(const class FString& CategoryName, float Volume);
	void SetAisacControlByName(const class FString& CategoryName, const class FString& AISACName, float Value);
	bool ResetAllAisacControlByName(const class FString& CategoryName);
	bool ResetAllAisacControlById(int32 CategoryId);
	void PauseByName(const class FString& CategoryName, bool bPause);
	bool IsPausedByName(const class FString& CategoryName);
	float GetVolumeByName(const class FString& CategoryName);
	int32 GetNumAttachedAisacsByName(const class FString& CategoryName);
	int32 GetNumAttachedAisacsById(int32 CategoryId);
	float GetCurrentAisacControlValueByName(const class FString& CategoryName, const class FString& AisacControlName);
	float GetCurrentAisacControlValueById(int32 CategoryId, int32 AisacControlID);
	void GetAttachedAisacInfoByName(const class FString& CategoryName, int32 AisacAttachedIndex, bool* IsSuccess, struct FAtomAisacInfo* AisacInfo);
	void GetAttachedAisacInfoById(int32 CategoryId, int32 AisacAttachedIndex, bool* IsSuccess, struct FAtomAisacInfo* AisacInfo);
};

// 0xEA8 (0x10A0 - 0x1F8)
// Class CriWareRuntime.AtomComponent
class UAtomComponent : public USceneComponent
{
public:
	uint8                                        Pad_34F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundAtomCue*                         Sound;                                             // 0x200(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAtom3dRegion*                         Region;                                            // 0x208(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAutoDestroy : 1;                                  // Mask: 0x1, PropSize: 0x10x210(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPersistAcrossLevelTransition : 1;                 // Mask: 0x2, PropSize: 0x10x210(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_24 : 1;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        bStopWhenOwnerDestroyed : 1;                       // Mask: 0x8, PropSize: 0x10x210(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsUISound : 1;                                    // Mask: 0x10, PropSize: 0x10x210(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_25 : 3;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_350[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DefaultVolume;                                     // 0x214(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableMultipleSoundPlayback : 1;                  // Mask: 0x1, PropSize: 0x10x218(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsePlaylist : 1;                                  // Mask: 0x2, PropSize: 0x10x218(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_26 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	bool                                         bIsMovable;                                        // 0x219(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanStraddleAudioVolume;                           // 0x21A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAudioVolume;                                   // 0x21B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAreaSoundVolume;                               // 0x21C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_351[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAtomSoundObject*                      SoundObject;                                       // 0x220(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DefaultBlockIndex;                                 // 0x228(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_352[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAtomAisacControlParam>        DefaultAisacControl;                               // 0x230(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAtomSelectorParam>            DefaultSelectorLabel;                              // 0x240(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EAtomLoopSetting                  LoopSetting;                                       // 0x250(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOnly2DSound : 1;                                  // Mask: 0x1, PropSize: 0x10x251(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_27 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_353[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnStatusChanged;                                   // 0x258(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnAudioVolumeChanged;                              // 0x268(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnAudioFinished;                                   // 0x278(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UWorld*                                PlayWorld;                                         // 0x288(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameViewportClient*                   GameViewport;                                      // 0x290(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_354[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAtomSoundObject*                      DefaultSoundObject;                                // 0x2B0(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideAttenuation : 1;                          // Mask: 0x1, PropSize: 0x10x2B8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_28 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_355[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundAttenuation*                     AttenuationSettings;                               // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundAttenuationSettings             AttenuationOverrides;                              // 0x2C8(0x3A0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_356[0x9D0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundAtomCueSheet*                    CueSheet;                                          // 0x1038(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_357[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAtomSoundObject*                      AppliedSoundObject;                                // 0x1050(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_358[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnAtomBeatSyncCallback;                            // 0x1078(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnAtomSequenceCallback;                            // 0x1088(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_359[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAtomComponent* GetDefaultObj();

	void StopWithoutReleaseTime();
	void Stop();
	void SetVolume(float Volume);
	void SetSoundObject(class UAtomSoundObject* InSoundObject);
	void SetSound(class USoundAtomCue* NewSound);
	void SetSelectorLabel(const class FString& Selector, const class FString& Label);
	void SetRegion(class UAtom3dRegion* InRegion);
	void SetPitchMultiplier(float NewPitchMultiplier);
	void SetPitch(float Pitch);
	void SetNextBlockIndex(int32 BlockIndex);
	void SetDefaultAttenuationEnable(bool bEnable);
	void SetBusSendLevelOffsetByName(const class FString& BusName, float LevelOffset);
	void SetBusSendLevelOffset(int32 BusId, float LevelOffset);
	void SetBusSendLevelByName(const class FString& BusName, float Level);
	void SetBusSendLevel(int32 BusId, float Level);
	void SetAsrRackIdArray(const TArray<int32>& AsrRackIDs);
	void SetAsrRackID(int32 Asr_rack_id);
	void SetAisacByName(const class FString& ControlName, float ControlValue);
	void Play(float StartTime);
	void Pause(bool bPause);
	void OnStatusChanged__DelegateSignature(enum class EAtomComponentStatus Status, class UAtomComponent* AtomComponent);
	void OnAudioVolumeChanged__DelegateSignature(enum class EAtomAudioVolumeType Type, class AAtomAudioVolume* AtomAudioVolume, bool bIsCalledFromTick);
	void OnAudioFinished__DelegateSignature();
	bool IsReducingTickFrequency();
	bool IsPlaying();
	bool IsPaused();
	bool IsLoop();
	bool HasBeenEconomicTick();
	float GetVolume();
	struct FVector GetVelocity();
	float GetTime();
	enum class EAtomComponentStatus GetStatus();
	float GetSequencePosition();
	int32 GetNumQueuedSounds();
	float GetMaxAttenuationDistance();
	float GetEconomicTickFrequency();
	float GetEconomicTickDistanceMargin();
	float GetEconomicTickDistance();
	bool GetDefaultAttenuationEnable();
	float GetCurrentMaxAttenuationDistance();
	float GetCurrentEconomicTickMarginDistance();
	float GetCurrentEconomicTickFrequency();
	float GetCurrentEconomicTickBoundaryDistance();
	float GetCurrentCullingMarginDistance();
	float GetCurrentCullingBoundaryDistance();
	class AAtomAudioVolume* GetCurrentBelongingAudioVolume(enum class EAtomAudioVolumeType Type, bool IsNeighbor);
	float GetCullDistanceMargin();
	float GetCullDistance();
	class FString GetCueName();
	TMap<class FString, float> GetAudioVolumeValueMap(enum class EAtomAudioVolumeType Type);
	int32 GetAtomComponentID();
	class UAtomComponent* GetAtomComponentFromID(int32 TargetID);
	void FadeOut(float FadeOutDuration, float FadeVolumeLevel);
	void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime);
	void EnqueueSound(class USoundAtomCue* NewSound);
	void DestroyComponentByID(int32 TargetID);
	void ClearSelectorLabels();
	bool BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings* OutAttenuationSettings);
	void AttachAreaSoundVolume(class AAtomAreaSoundVolume* Sound_shape_volume);
	void AtomSequenceCallbackDelegate__DelegateSignature(class UAtomComponent* AtomComponent, struct FAtomSequenceInfo& SequenceInfo);
	void AtomBeatSyncCallbackDelegate__DelegateSignature(class UAtomComponent* AtomComponent, struct FAtomBeatSyncInfo& BeatSyncInfo);
	void AdjustAttenuation(struct FSoundAttenuationSettings& InAttenuationSettings);
};

// 0x40 (0x68 - 0x28)
// Class CriWareRuntime.AtomComponentPool
class UAtomComponentPool : public UObject
{
public:
	TArray<class UAtomComponent*>                Pool;                                              // 0x28(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_369[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAtomComponentPool* GetDefaultObj();

};

// 0x98 (0x290 - 0x1F8)
// Class CriWareRuntime.AtomCueSheetLoaderComponent
class UAtomCueSheetLoaderComponent : public USceneComponent
{
public:
	struct FSoftObjectPath                       CueSheetReference;                                 // 0x1F8(0x18)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCriFsBinderComponent*                 BinderComponent;                                   // 0x210(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLoadCompleted;                                   // 0x218(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLoadError;                                       // 0x228(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_38D[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundAtomCueSheet*                    CueSheet;                                          // 0x268(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_38E[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAtomCueSheetLoaderComponent* GetDefaultObj();

	void OnLoadError__DelegateSignature();
	void OnLoadCompleted__DelegateSignature();
	void OnAtomCueSheetLoaded__DelegateSignature(class USoundAtomCueSheet* Loaded);
	void LoadAtomCueSheet(class UObject* WorldContextObject, TSoftObjectPtr<class USoundAtomCueSheet> Asset, FDelegateProperty_ OnLoaded, const struct FLatentActionInfo& LatentInfo);
	void Load();
	enum class EAtomCueSheetLoaderComponentStatus GetStatus();
	class USoundAtomCueSheet* GetAtomCueSheet();
};

// 0x28 (0x50 - 0x28)
// Class CriWareRuntime.AtomDeviceWatcher
class UAtomDeviceWatcher : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnDeviceUpdated;                                   // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_39E[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAtomDeviceWatcher* GetDefaultObj();

	void OnDeviceUpdated__DelegateSignature();
	class FString GetDeviceName();
	int32 GetDeviceChannelCount();
};

// 0x10 (0x230 - 0x220)
// Class CriWareRuntime.AtomDisposer
class AAtomDisposer : public AActor
{
public:
	uint8                                        Pad_3A1[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AAtomDisposer* GetDefaultObj();

};

// 0x18 (0x210 - 0x1F8)
// Class CriWareRuntime.AtomListenerFocusPoint
class UAtomListenerFocusPoint : public USceneComponent
{
public:
	float                                        DistanceFocusLevel;                                // 0x1F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DirectionFocusLevel;                               // 0x1FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A2[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAtomListenerFocusPoint* GetDefaultObj();

};

// 0x10 (0xC0 - 0xB0)
// Class CriWareRuntime.AtomParameterComponent
class UAtomParameterComponent : public UActorComponent
{
public:
	class UAtomSoundObject*                      SoundObject;                                       // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAtom3dRegion*                         Region;                                            // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAtomParameterComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class CriWareRuntime.AtomProfileData
class UAtomProfileData : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAtomProfileData* GetDefaultObj();

	TArray<struct FAtomProfileItem> CriWareAdx2ProfileDataUpdate(class UObject* WorldContextObject);
	void CriWareAdx2ProfileDataSort(const TArray<struct FAtomProfileItem>& Original_item, enum class EAtomProfileSortType Sort_type, enum class EAtomSortOrderType Order_type, TArray<struct FAtomProfileItem>* Sorted_item);
};

// 0x8 (0x228 - 0x220)
// Class CriWareRuntime.AtomSound
class AAtomSound : public AActor
{
public:
	class UAtomComponent*                        AtomComponent;                                     // 0x220(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AAtomSound* GetDefaultObj();

};

// 0x10 (0x230 - 0x220)
// Class CriWareRuntime.AtomSoundData
class AAtomSoundData : public AActor
{
public:
	class USoundAtomCueSheet*                    CueSheet;                                          // 0x220(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_414[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AAtomSoundData* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class CriWareRuntime.AtomSoundObject
class UAtomSoundObject : public UDataAsset
{
public:
	bool                                         EnableVoiceLimitScope;                             // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableCategoryCueLimitScope;                       // 0x31(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_416[0x16];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAtomSoundObject* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class CriWareRuntime.AtomSpectrumAnalyzer
class UAtomSpectrumAnalyzer : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAtomSpectrumAnalyzer* GetDefaultObj();

	void GetLevelsDB(float Display_range, TArray<float>* Spectra);
	void GetLevels(TArray<float>* Spectra);
	void CreateDspSpectra(class UAtomAsrRack* Asr_rack, const class FString& bus_name, int32 Num_bands);
};

// 0x0 (0x28 - 0x28)
// Class CriWareRuntime.AtomStatics
class UAtomStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAtomStatics* GetDefaultObj();

	void UpdateDistanceFactorForAllSounds(float ArgDistanceFactor);
	void StopAllSoundsForKeyFromAtomComponentIds(class UObject* AtomPlayGateRef, class UObject* SkeltalMeshComponentRef);
	void StopAllSounds();
	class UAtomComponent* SpawnSoundAttached(class USoundAtomCue* Sound, class USceneComponent* AttachToComponent, class FName AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, enum class EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
	class UAtomComponent* SpawnSoundAtLocation(class UObject* WorldContextObject, class USoundAtomCue* Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
	class UAtomComponent* SpawnSound2D(class UObject* WorldContextObject, class USoundAtomCue* Sound, float PitchMultiplier, float StartTime, bool bPersistAcrossLevelTransition, bool bAutoDestroy);
	class UAtomComponent* SpawnAtomSoundAttachedByName(class USoundAtomCueSheet* CueSheet, const class FString& CueName, class USceneComponent* AttachToComponent, struct FAtomComponentParams& Params, class FName AttachPointName, const struct FVector& Location, enum class EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, bool bAutoDestroy);
	class UAtomComponent* SpawnAtomSoundAttached(class USoundAtomCue* Sound, class USceneComponent* AttachToComponent, struct FAtomComponentParams& Params, class FName AttachPointName, const struct FVector& Location, enum class EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, bool bAutoDestroy);
	class UAtomComponent* SpawnAtomSoundAtLocationByName(class UObject* WorldContextObject, class USoundAtomCueSheet* CueSheet, const class FString& CueName, const struct FVector& Location, struct FAtomComponentParams& Params, bool bAutoDestroy);
	class UAtomComponent* SpawnAtomSoundAtLocation(class UObject* WorldContextObject, class USoundAtomCue* Sound, const struct FVector& Location, struct FAtomComponentParams& Params, bool bAutoDestroy);
	class UAtomComponent* SpawnAtomSound2DByName(class UObject* WorldContextObject, class USoundAtomCueSheet* CueSheet, const class FString& CueName, struct FAtomComponentParams& Params, bool bPersistAcrossLevelTransition, bool bAutoDestroy);
	class UAtomComponent* SpawnAtomSound2D(class UObject* WorldContextObject, class USoundAtomCue* Sound, struct FAtomComponentParams& Params, bool bPersistAcrossLevelTransition, bool bAutoDestroy);
	void SetListenerRegion(class UAtom3dRegion* Region, int32 PlayerIndex);
	void SetListenerFocusPointTargetComponent(class USceneComponent* TargetComponent, int32 PlayerIndex);
	void SetListenerFocusPointTargetActor(class AActor* TargetActor, int32 PlayerIndex);
	void SetListenerFocusPointInfo(const struct FAtomListenerFocusPointInfo& FocusPointInfo, int32 PlayerIndex);
	void SetListenerFocusPointDistanceLevel(float DistanceLevel, int32 PlayerIndex);
	void SetListenerFocusPointDirectionLevel(float DirectionLevel, int32 PlayerIndex);
	void SetAtomGameVariable(const class FString& GameVariableName, float Value);
	class UAtomComponent* PlaySoundForAnimNotify(class USoundAtomCue* Sound, class USceneComponent* AttachToComponent, class FName AttachPointName, const struct FVector& Location, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, bool bFollow);
	class UAtomComponent* PlaySoundAttached(class USoundAtomCue* Sound, class USceneComponent* AttachToComponent, class FName AttachPointName, const struct FVector& Location, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings);
	void PlaySoundAtLocation(class UObject* WorldContextObject, class USoundAtomCue* Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings);
	void PlayAtomSoundAtLocationByName(class UObject* WorldContextObject, class USoundAtomCueSheet* CueSheet, const class FString& CueName, const struct FVector& Location, struct FAtomComponentParams& Params);
	void PlayAtomSoundAtLocation(class UObject* WorldContextObject, class USoundAtomCue* Sound, const struct FVector& Location, struct FAtomComponentParams& Params);
	void PauseAudioOutput(bool bPause);
	bool LoadAtomConfig(class USoundAtomConfig* AcfObject);
	struct FVector GetListeningPoint(int32 PlayerIndex);
	class UAtom3dRegion* GetListenerRegion(int32 PlayerIndex);
	struct FAtomListenerFocusPointInfo GetListenerFocusPointInfo(int32 PlayerIndex);
	class AAtomAudioVolume* GetAudioVolumeAffectingListener(int32 PlayerIndex, enum class EAtomAudioVolumeType TypeNum);
	float GetAtomGameVariable(const class FString& GameVariableName);
	class UAtomComponent* CreateRootedAtomComponent(class UObject* WorldContextObject, bool bAutoDestroy);
	void AddToAtomComponentIds(class UObject* AtomPlayGateRef, class UObject* SkeltalMeshComponentRef, int32 AtomComponentID);
};

// 0x0 (0x28 - 0x28)
// Class CriWareRuntime.AtomTriggerTableFunctionLibrary
class UAtomTriggerTableFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAtomTriggerTableFunctionLibrary* GetDefaultObj();

	bool GetDataTableRowFromName(class UDataTable* Table, class FName RowName, struct FAtomTriggerRow* OutRow);
};

// 0x8050 (0x8410 - 0x3C0)
// Class CriWareRuntime.AtomUnrealSoundRenderer
class UAtomUnrealSoundRenderer : public USoundWaveProcedural
{
public:
	uint8                                        Pad_57F[0x8050];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAtomUnrealSoundRenderer* GetDefaultObj();

};

// 0xF8 (0x120 - 0x28)
// Class CriWareRuntime.AtomWavePlayer
class UAtomWavePlayer : public UObject
{
public:
	uint8                                        Pad_5AB[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bIsUISound : 1;                                    // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_4A : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_5AD[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnWaveFinished;                                    // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_5AE[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnWavePlaybackPercent;                             // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B0[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundAtomCue*                         SoundAtomCue;                                      // 0x90(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAtomWaveInfo                         WaveInfo;                                          // 0x98(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bLoop : 1;                                         // Mask: 0x1, PropSize: 0x10xAC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5B1[0x73];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAtomWavePlayer* GetDefaultObj();

	void StopDelayed(float DelayTime);
	void Stop();
	void SetWave(class USoundAtomCue* InCue);
	void SetPaused(bool bPause);
	bool SetLooping(bool Looping);
	void Play(float StartTime);
	bool IsPlaying();
	bool IsPaused();
	bool IsLooping();
	bool HasError();
	struct FAtomWaveInfo GetWaveInfo();
	struct FTimespan GetTime();
	enum class EAtomWavePlayState GetPlayState();
	class USoundAtomCue* GetCue();
	void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel);
};

// 0x58 (0x250 - 0x1F8)
// Class CriWareRuntime.CriFsBinderComponent
class UCriFsBinderComponent : public USceneComponent
{
public:
	class FString                                FilePath;                                          // 0x1F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBindCompleted;                                   // 0x208(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBindError;                                       // 0x218(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C5[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCriFsBinderComponent* GetDefaultObj();

	void Stop();
	void OnBindError__DelegateSignature();
	void OnBindCompleted__DelegateSignature();
	enum class ECriFsBinderStatus GetStatus();
	void Bind();
};

// 0x8 (0x228 - 0x220)
// Class CriWareRuntime.CriFsLoader
class ACriFsLoader : public AActor
{
public:
	class UCriFsLoaderComponent*                 LoaderComponent;                                   // 0x220(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ACriFsLoader* GetDefaultObj();

};

// 0x78 (0x270 - 0x1F8)
// Class CriWareRuntime.CriFsLoaderComponent
class UCriFsLoaderComponent : public USceneComponent
{
public:
	class FString                                FilePath;                                          // 0x1F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLoadCompleted;                                   // 0x208(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLoadError;                                       // 0x218(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C9[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCriFsLoaderComponent* GetDefaultObj();

	void OnLoadError__DelegateSignature();
	void OnLoadCompleted__DelegateSignature();
	void Load();
	enum class ECriFsLoaderStatus GetStatus();
	TArray<uint8> GetDataArray();
};

// 0x28 (0x50 - 0x28)
// Class CriWareRuntime.CriWareError
class UCriWareError : public UObject
{
public:
	uint8                                        Pad_5CA[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnCriWareError;                                    // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_5CB[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCriWareError* GetDefaultObj();

	void OnCriWareError__DelegateSignature(struct FCriWareErrorInfo& ErrorInfo);
	class UCriWareError* GetCriWareError();
};

// 0x0 (0x28 - 0x28)
// Class CriWareRuntime.CriWareFunctionLibrary
class UCriWareFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCriWareFunctionLibrary* GetDefaultObj();

	void SetSpeakerAngleArray(enum class ECriWareSpeakerSystem SpeakerSystem, TArray<float>& Angles);
	void SetGlobalLabelToSelectorByName(const class FString& SelectorName, const class FString& LabelName);
	void SetGameVariableByName(const class FString& GameVariableName, float Value);
};

// 0x0 (0x28 - 0x28)
// Class CriWareRuntime.CriWareInitializer
class UCriWareInitializer : public UObject
{
public:

	static class UClass* StaticClass();
	static class UCriWareInitializer* GetDefaultObj();

};

// 0x338 (0x360 - 0x28)
// Class CriWareRuntime.CriWarePluginSettings
class UCriWarePluginSettings : public UObject
{
public:
	bool                                         bNoExistCriWareIni;                                // 0x28(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEditableCriWareAdxLipSyncSetting;                 // 0x29(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5CD[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDirectoryPath                        NonAssetContentDir;                                // 0x30(0x10)(Edit, NativeAccessSpecifierPublic)
	class FString                                ContentDir;                                        // 0x40(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5CE[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumBinders;                                        // 0x60(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5CF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxBinds;                                          // 0x68(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumLoaders;                                        // 0x70(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxPath;                                           // 0x78(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         OutputsLogFileSystem;                              // 0x80(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PS4_FileAccessThreadAffinityMask;                  // 0x84(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PS4_DataDecompressionThreadAffinityMask;           // 0x8C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PS4_MemoryFileSystemThreadAffinityMask;            // 0x94(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PS4_FileAccessThreadPriority;                      // 0x9C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PS4_DataDecompressionThreadPriority;               // 0xA4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PS4_MemoryFileSystemThreadPriority;                // 0xAC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5DA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         AutomaticallyCreateCueAsset;                       // 0xB4(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UsesInGamePreview;                                 // 0xB5(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E4[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         OutputsLogAtom;                                    // 0xB7(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E5[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDirectoryPath                        AwbRootDirectory;                                  // 0xC0(0x10)(Edit, NativeAccessSpecifierPublic)
	class FString                                AwbRoot;                                           // 0xD0(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E6[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MonitorCommunicationBufferSize;                    // 0xF0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxPitch;                                          // 0xF8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AsrOutputChannels;                                 // 0x100(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxVirtualVoices;                                  // 0x108(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5EA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumStandardMemoryVoices;                           // 0x110(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5EB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StandardMemoryVoiceNumChannels;                    // 0x118(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5EC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StandardMemoryVoiceSamplingRate;                   // 0x120(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5ED[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumStandardStreamingVoices;                        // 0x128(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5EE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StandardStreamingVoiceNumChannels;                 // 0x130(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5EF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StandardStreamingVoiceSamplingRate;                // 0x138(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5F0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         PoolAtomComponent;                                 // 0x140(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5F1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftObjectPath                       AtomConfig;                                        // 0x148(0x18)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5F2[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AcfFileName;                                       // 0x178(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       AtomConfigDataTable;                               // 0x188(0x18)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5F3[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DistanceFactor;                                    // 0x1B8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5F4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EAtomSoundRendererType            SoundRendererTypeUI;                               // 0x1C0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5F5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SoundRendererType;                                 // 0x1C4(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5F6[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAtomAsrRackConfigUI>          AsrRackConfigUI;                                   // 0x1D0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAtomAsrRackConfig>            AsrRackConfig;                                     // 0x1E0(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPublic)
	uint8                                        Pad_5F7[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Hardware1;                                         // 0x200(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Hardware2;                                         // 0x210(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Hardware3;                                         // 0x220(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Hardware4;                                         // 0x230(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EconomicTickMarginDistance;                        // 0x240(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5F8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EconomicTickFrequency;                             // 0x248(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5F9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CullingMarginDistance;                             // 0x250(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5FA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        HcaMxVoiceSamplingRate;                            // 0x258(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5FB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumHcaMxMemoryVoices;                              // 0x260(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5FC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        HcaMxMemoryVoiceNumChannels;                       // 0x268(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5FD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumHcaMxStreamingVoices;                           // 0x270(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5FE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        HcaMxStreamingVoiceNumChannels;                    // 0x278(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5FF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         WASAPI_IsExclusive;                                // 0x280(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_600[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        WASAPI_BitsPerSample;                              // 0x284(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_601[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        WASAPI_SamplingRate;                               // 0x28C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_602[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        WASAPI_NumChannels;                                // 0x294(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_603[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         UseUnrealSoundRenderer;                            // 0x29C(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_604[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         SmartPhone_UseSonicSYNC;                           // 0x29E(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_605[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PS4_ServerThreadAffinityMask;                      // 0x2A0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_606[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PS4_OutputThreadAffinityMask;                      // 0x2A8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_608[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PS4_ServerThreadPriority;                          // 0x2B0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_609[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PS4_OutputThreadPriority;                          // 0x2B8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_60A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         PS4_UseAudio3d;                                    // 0x2C0(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_60B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PS4_NumberOfAudio3dMemoryVoices;                   // 0x2C4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_60C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PS4_SamplingRateOfAudio3dMemoryVoices;             // 0x2CC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_60D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PS4_NumberOfAudio3dStreamingVoices;                // 0x2D4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_60E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PS4_SamplingRateOfAudio3dStreamingVoices;          // 0x2DC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_60F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Switch_NumOpusMemoryVoices;                        // 0x2E4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_610[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Switch_OpusMemoryVoiceNumChannels;                 // 0x2EC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_611[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Switch_OpusMemoryVoiceSamplingRate;                // 0x2F4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_612[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Switch_NumOpusStreamingVoices;                     // 0x2FC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_613[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Switch_OpusStreamingVoiceNumChannels;              // 0x304(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_614[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Switch_OpusStreamingVoiceSamplingRate;             // 0x30C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_615[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         InitializeMana;                                    // 0x314(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_616[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         EnableDecodeSkip;                                  // 0x316(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_617[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxDecoderHandles;                                 // 0x318(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_618[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxManaBPS;                                        // 0x320(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_619[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxManaStreams;                                    // 0x328(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_61A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         UseH264Decoder;                                    // 0x330(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_61B[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         InitializeAdxLipSync;                              // 0x332(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_61C[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxNumAnalyzerHandles;                             // 0x334(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_61D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bUseManaStartupMovies;                             // 0x33C(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWaitForMoviesToComplete;                          // 0x33D(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMoviesAreSkippable;                               // 0x33E(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_61F[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        StartupMovies;                                     // 0x340(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_620[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCriWarePluginSettings* GetDefaultObj();

};

// 0x1E0 (0x290 - 0xB0)
// Class CriWareRuntime.ManaComponent
class UManaComponent : public UActorComponent
{
public:
	class UManaTexture*                          Movie;                                             // 0xB0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEventPoint;                                      // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSubtitleChanged;                                 // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStatusChanged;                                   // 0xD8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMovieChanged;                                    // 0xE8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSeekCompleted;                                   // 0xF8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTrackChanged;                                    // 0x108(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFrameOnTime;                                     // 0x118(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPlayerDestroyed;                                 // 0x128(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnRequestData;                                     // 0x138(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_732[0x40];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UManaPlaylist*                         Playlist;                                          // 0x188(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        PlaylistIndex;                                     // 0x190(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_733[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bLoop;                                             // 0x198(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_734[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AlphaTrack;                                        // 0x19C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        AudioTrack;                                        // 0x1A0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SubAudioTrack;                                     // 0x1A4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ExtraAudioTrack;                                   // 0x1A8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_735[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AudioCategoryName;                                 // 0x1B0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                SubAudioCategoryName;                              // 0x1C0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                ExtraAudioCategoryName;                            // 0x1D0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSubtitlesEnabled;                                 // 0x1E0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_736[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SubtitlesChannel;                                  // 0x1E4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EManaSubtitlesEncoding            SubtitlesEncoding;                                 // 0x1E8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EManaFrameAction                  EndFrameAction;                                    // 0x1E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EManaPlaybackTimer                PlaybackTimer;                                     // 0x1EA(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EManaMaxFrameDrop                 MaxFrameDrop;                                      // 0x1EB(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_741[0xA4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UManaComponent* GetDefaultObj();

	bool ToIndex(int32 Index);
	void Stop();
	void SetVolume(float Volume);
	void SetTexture(class UManaTexture* Texture);
	void SetSubVolume(float Volume);
	void SetSubAudioTrack(int32 Track);
	void SetSubAudioSendLevel(int32 Channel, enum class EAtomSpeakerID SpeakerId, float Volume);
	void SetSubAudioCategory(const class FString& CategoryName);
	void SetPlaybackTimer(enum class EManaPlaybackTimer InPlaybackTimer);
	void SetMovie(class UManaMovie* InMovie);
	void SetMaxDropFrames(enum class EManaMaxFrameDrop InMaxDropFrames);
	void SetFile(const class FString& MovieFilePath);
	void SetExtraVolume(float Volume);
	void SetExtraAudioTrack(int32 Track);
	void SetExtraAudioCategory(const class FString& CategoryName);
	void SetEndFrameAction(enum class EManaFrameAction InFrameAction);
	void SetAudioTrack(int32 Track);
	void SetAudioCategory(const class FString& CategoryName);
	void SetAlphaTrack(int32 Track);
	void SeekToPosition(int32 FrameNumber);
	void Seek(const struct FTimespan& Time);
	void RemoveSubAudioCategory();
	void RemoveExtraAudioCategory();
	void RemoveAudioCategory();
	bool Previous();
	void PreparePlaylistIndex(int32 Index);
	void Prepare();
	void Play();
	void Pause(bool bPause);
	void OnTrackChanged__DelegateSignature(int32 TrackNumber, class UManaComponent* ManaComponent);
	void OnSubtitleChanged__DelegateSignature(class FText Subtitle);
	void OnStatusChanged__DelegateSignature(enum class EManaComponentStatus Status, class UManaComponent* ManaComponent);
	void OnSeekCompleted__DelegateSignature(int32 FrameNumber, class UManaComponent* ManaComponent);
	void OnRequestData__DelegateSignature(class UManaComponent* ManaComponent);
	void OnPlayerDestroyed__DelegateSignature(class UManaComponent* ManaComponent);
	void OnMovieChanged__DelegateSignature(class UManaMovie* Movie, class UManaComponent* ManaComponent);
	void OnFrameOnTime__DelegateSignature(int32 FrameNumber, class UManaComponent* ManaComponent);
	void OnEventPoint__DelegateSignature(const struct FManaEventPointInfo& EventPointInfo);
	bool Next();
	void Loop(bool bInLoop);
	bool IsReady();
	bool IsPreparing();
	bool IsPlaying();
	bool IsPaused();
	bool IsLooping();
	float GetVolume();
	struct FTimespan GetTime();
	class UManaTexture* GetTexture();
	float GetSubVolume();
	enum class EManaComponentStatus GetStatus();
	class UManaMovie* GetSource();
	int32 GetPosition();
	struct FTimespan GetMovieTime();
	int32 GetFrameNumber();
	float GetExtraVolume();
	void EnableSubtitles(bool bEnable);
	void EnableSeamless(bool bEnable);
	void ChangeSubtitlesEncoding(enum class EManaSubtitlesEncoding Encoding);
	void ChangeSubtitlesChannel(int32 Channel);
	void AdvanceTime(const struct FTimespan& DeltaTime);
};

// 0x58 (0x1D0 - 0x178)
// Class CriWareRuntime.ManaComponentTexture
class UManaComponentTexture : public UTexture
{
public:
	int32                                        SizeX;                                             // 0x178(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SizeY;                                             // 0x17C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPixelFormat                      Format;                                            // 0x180(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EManaComponentTextureType         ComponentType;                                     // 0x181(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureAddress                   AddressX;                                          // 0x182(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureAddress                   AddressY;                                          // 0x183(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_743[0x4C];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UManaComponentTexture* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class CriWareRuntime.ManaSource
class UManaSource : public UObject
{
public:

	static class UClass* StaticClass();
	static class UManaSource* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class CriWareRuntime.ManaMovie
class UManaMovie : public UManaSource
{
public:
	uint8                                        Pad_744[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FManaVideoTrackInfo>           VideoTracks;                                       // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<struct FManaVideoTrackInfo>           AlphaTracks;                                       // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<struct FManaAudioTrackInfo>           AudioTracks;                                       // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<struct FManaEventPointInfo>           EventPoints;                                       // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	int32                                        NumSubtitleChannels;                               // 0x70(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxSubtitleSize;                                   // 0x74(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bIsAlpha : 1;                                      // Mask: 0x1, PropSize: 0x10x78(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_745[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UManaMovie* GetDefaultObj();

	bool Validate();
	class FString GetUrl();
};

// 0x18 (0xA0 - 0x88)
// Class CriWareRuntime.FileManaMovie
class UFileManaMovie : public UManaMovie
{
public:
	bool                                         bPrecacheFile;                                     // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_746[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                FilePath;                                          // 0x90(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFileManaMovie* GetDefaultObj();

	void SetFilePath(const class FString& Path);
};

// 0x8 (0x90 - 0x88)
// Class CriWareRuntime.DataManaMovie
class UDataManaMovie : public UManaMovie
{
public:
	uint8                                        Pad_749[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDataManaMovie* GetDefaultObj();

	void SetDataArray(TArray<uint8>& InDataArray);
	TArray<uint8> GetDataArray();
};

// 0x10 (0x98 - 0x88)
// Class CriWareRuntime.StreamManaMovie
class UStreamManaMovie : public UManaMovie
{
public:
	class FString                                StreamUrl;                                         // 0x88(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UStreamManaMovie* GetDefaultObj();

};

// 0x178 (0x1A0 - 0x28)
// Class CriWareRuntime.ManaPlayer
class UManaPlayer : public UObject
{
public:
	uint8                                        Pad_7BA[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         PlayOnOpen;                                        // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7BB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        Loop : 1;                                          // Mask: 0x1, PropSize: 0x10x34(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_6C : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_7BC[0xB];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EManaMaxFrameDrop                 MaxFrameDrop;                                      // 0x40(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7BD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnEndReached;                                      // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMovieClosed;                                     // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMovieOpened;                                     // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMovieOpenFailed;                                 // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPlaybackResumed;                                 // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPlaybackSuspended;                               // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSeekCompleted;                                   // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTracksChanged;                                   // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UManaTexture*                          ManaTexture;                                       // 0xC8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UManaMovie*                            ManaMovie;                                         // 0xD0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UManaPlaylist*                         Playlist;                                          // 0xD8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        PlaylistIndex;                                     // 0xE0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7BF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UManaComponent*                        ManaComponent;                                     // 0xE8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7C0[0xB0];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UManaPlayer* GetDefaultObj();

	bool SetVolume(float Volume, enum class EManaPlayerTrack TrackType);
	void SetTimeSyncedSource(class UAtomComponent* SyncedSource);
	void SetTexture(class UManaTexture* InManaTexture);
	bool SetRate(float Rate);
	bool SetLooping(bool Looping);
	bool SelectTrack(enum class EManaPlayerTrack TrackType, int32 TrackIndex);
	bool Seek(const struct FTimespan& Time);
	bool Rewind();
	bool ReOpen();
	bool Previous();
	void PlayAndSeek();
	bool Play();
	bool Pause();
	bool OpenSourceWithOptions(class UManaSource* ManaSource, struct FManaPlayerOptions& PlayerOptions);
	bool OpenPlaylistIndex(class UManaPlaylist* InPlaylist, int32 Index);
	bool OpenPlaylist(class UManaPlaylist* InPlaylist);
	void OpenMovieSource(class UManaMovie* InManaMovie);
	void OnFrameUpdatedDelegate__DelegateSignature(int32 FrameNumber);
	bool Next();
	bool IsSeeking();
	bool IsReady();
	bool IsPreparing();
	bool IsPlaying();
	bool IsPaused();
	bool IsLooping();
	bool IsClosed();
	bool HasError();
	void HandleManaComponentStatusChanged(enum class EManaComponentStatus Status, class UManaComponent* InManaComponent);
	void HandleManaComponentSeekCompleted(int32 InFrameNumber, class UManaComponent* InManaComponent);
	void HandleManaComponentPlayerDestroyed(class UManaComponent* InManaComponent);
	void HandleManaComponentMovieChanged(class UManaMovie* InManaMovie, class UManaComponent* InManaComponent);
	void HandleManaComponentFrameOnTime(int32 InFrameNumber, class UManaComponent* InManaComponent);
	float GetVolume(enum class EManaPlayerTrack TrackType);
	struct FTimespan GetTime();
	class UManaTexture* GetTexture();
	enum class EManaComponentStatus GetStatus();
	float GetRate();
	int32 GetPlaylistIndex();
	struct FTimespan GetMovieTime();
	class UManaMovie* GetMovieSource();
	int32 GetMovieFrames();
	int32 GetFrames();
	struct FTimespan GetDuration();
	bool DisableTrack(enum class EManaPlayerTrack TrackType);
	void Close();
	void BindOnFrameUpdated(FDelegateProperty_& Event);
};

// 0x18 (0x40 - 0x28)
// Class CriWareRuntime.ManaPlaylist
class UManaPlaylist : public UManaSource
{
public:
	TArray<class UManaMovie*>                    Movies;                                            // 0x28(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bIsAlpha;                                          // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsMixedTypes;                                     // 0x39(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsSeamless;                                       // 0x3A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7DA[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UManaPlaylist* GetDefaultObj();

	void RemoveAt(int32 Index);
	void Remove(class UManaMovie* ManaMovie);
	int32 Num();
	bool IsSeamless();
	bool IsMixedTypes();
	bool IsAlpha();
	void Insert(class UManaMovie* ManaMovie, int32 Index);
	class UManaMovie* GetRandom(int32* InOutIndex);
	class UManaMovie* GetPrevious(int32* InOutIndex);
	class UManaMovie* GetNext(int32* InOutIndex);
	class UManaMovie* Get(int32 Index);
	void Add(class UManaMovie* ManaMovie);
};

// 0xF8 (0x270 - 0x178)
// Class CriWareRuntime.ManaTexture
class UManaTexture : public UTexture
{
public:
	uint8                                        Pad_7E0[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UManaSource*                           MovieSource;                                       // 0x180(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                MovieFilePath;                                     // 0x188(0x10)(ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bRenderToTexture : 1;                              // Mask: 0x1, PropSize: 0x10x198(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_6D : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_7E1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TargetGamma;                                       // 0x19C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bHDR : 1;                                          // Mask: 0x1, PropSize: 0x10x1A0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_6E : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_7E2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ETextureAddress                   AddressX;                                          // 0x1A4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureAddress                   AddressY;                                          // 0x1A5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E3[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ClearColor;                                        // 0x1A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideDimensions : 1;                           // Mask: 0x1, PropSize: 0x10x1B8(0x1)(Edit, BlueprintVisible, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_6F : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_7E4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntPoint                             TargetDimensions;                                  // 0x1BC(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPixelFormat                      OverrideFormat;                                    // 0x1C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnTextureUpdated;                                  // 0x1C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class UManaComponentTexture*>         ComponentTextures;                                 // 0x1D8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	TArray<class UManaComponentTexture*>         AlphaComponentTextures;                            // 0x1E8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	class UManaComponent*                        ManaPlayer;                                        // 0x1F8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7E6[0x70];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UManaTexture* GetDefaultObj();

	void SetMovieSource(class UManaSource* InSource);
	void OnTextureUpdated__DelegateSignature(class UManaTexture* ManaTexture);
};

// 0x70 (0xB0 - 0x40)
// Class CriWareRuntime.MaterialExpressionManaColorSpaceConverter
class UMaterialExpressionManaColorSpaceConverter : public UMaterialExpression
{
public:
	struct FExpressionInput                      Luma;                                              // 0x40(0x14)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      ChromaB;                                           // 0x54(0x14)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      ChromaR;                                           // 0x68(0x14)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      Alpha;                                             // 0x7C(0x14)(NoDestructor, NativeAccessSpecifierPublic)
	struct FExpressionInput                      Gamma;                                             // 0x90(0x14)(NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bH264;                                             // 0xA4(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EManaMovieType                    MovieType;                                         // 0xA5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EManaColorSpace                   ColorSpace;                                        // 0xA6(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseGammaExponent;                                 // 0xA7(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ConstGamma;                                        // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E7[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMaterialExpressionManaColorSpaceConverter* GetDefaultObj();

};

// 0x68 (0xA8 - 0x40)
// Class CriWareRuntime.MaterialExpressionManaMovieFormatSwitch
class UMaterialExpressionManaMovieFormatSwitch : public UMaterialExpression
{
public:
	struct FExpressionInput                      Inputs[0x5];                                       // 0x40(0x64)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E8[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMaterialExpressionManaMovieFormatSwitch* GetDefaultObj();

};

// 0x8 (0x90 - 0x88)
// Class CriWareRuntime.PlatformManaMovie
class UPlatformManaMovie : public UManaMovie
{
public:
	class UManaMovie*                            ManaMovie;                                         // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UPlatformManaMovie* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class CriWareRuntime.SoundAtomConfig
class USoundAtomConfig : public UObject
{
public:
	class FString                                AcfFilePath;                                       // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7EA[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USoundAtomConfig* GetDefaultObj();

	TArray<struct FAtomCategoryInfoParam> GetCategoryInfoArray();
};

// 0x98 (0xC0 - 0x28)
// Class CriWareRuntime.SoundAtomCue
class USoundAtomCue : public UObject
{
public:
	uint8                                        Pad_830[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundAtomCueSheet*                    CueSheet;                                          // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CueName;                                           // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAtomLoopSetting                  LoopSetting;                                       // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyAtomParameter;                               // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_831[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Duration;                                          // 0x4C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FirstWaveDuration;                                 // 0x50(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_832[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundAttenuation*                     AttenuationSettings;                               // 0x58(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableAudioVolume;                                // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMovable;                                        // 0x61(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanStraddleAudioVolume;                           // 0x62(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseDistanceToEnableAudioVolume;                   // 0x63(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinDistanceToEnableAudioVolume;                    // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAreaSoundVolume;                               // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_833[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        UpdateRateForFrame;                                // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAtom3dRegion*                         Region;                                            // 0x70(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEconomicTick;                                     // 0x78(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOverrideEconomicTickSettings;                     // 0x79(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_835[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EconomicTickDistanceMargin;                        // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EconomicTickFrequency;                             // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableDistanceCulling;                            // 0x84(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOverrideCullSettings;                             // 0x85(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_836[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CullDistanceMargin;                                // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EconomicTickMarginDistance;                        // 0x8C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoopSettingByAtomCraft;                           // 0x90(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCullingSoundPlayingProcessByDistance;             // 0x91(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLegacyCullingSettings;                         // 0x92(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_838[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxProcessDistance;                                // 0x94(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideCullingSettings;                          // 0x98(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_839[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CullingMarginDistance;                             // 0x9C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoop;                                             // 0xA0(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_84F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundAttenuation*                     DefaultAttenuation;                                // 0xA8(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_850[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USoundAtomCue* GetDefaultObj();

	bool Validate();
	bool IsLooping();
	bool IsEconomicTickEnabled();
	float GetMaxAttenuationDistanceToUse();
	float GetMaxAttenuationDistanceToApply();
	float GetEconomicTickMarginDistanceToUse();
	float GetEconomicTickFrequencyToUse();
	float GetEconomicTickFrequencyToApply();
	float GetEconomicTickDistanceMarginToApply();
	float GetEconomicTickDistance();
	float GetEconomicTickBoundaryDistanceToUse();
	float GetCullingMarginDistanceToUse();
	float GetCullingBoundaryDistanceToUse();
	float GetCullDistanceMarginToApply();
	float GetCullDistance();
	bool BP_GetCueInfo(struct FAtomCueInfo& CueInfo);
};

// 0xF0 (0x118 - 0x28)
// Class CriWareRuntime.SoundAtomCueSheet
class USoundAtomCueSheet : public UObject
{
public:
	bool                                         Contains;                                          // 0x28(0x1)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_890[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AcbFilePath;                                       // 0x30(0x10)(ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CueSheetName;                                      // 0x40(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumSlots;                                          // 0x50(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideAwbDirectory;                             // 0x54(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_891[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDirectoryPath                        AwbDirectory;                                      // 0x58(0x10)(Edit, NativeAccessSpecifierPublic)
	class UDataTable*                            AdditionalData;                                    // 0x68(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAtomCueInfo>                  CueInfos;                                          // 0x70(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_892[0x98];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USoundAtomCueSheet* GetDefaultObj();

	void ReleaseAcb(class FName AcbName);
	class USoundAtomCueSheet* LoadAtomCueSheet(class USoundAtomCueSheet* CueSheet, bool bAddToLevel);
	class USoundAtomCueSheet* LoadAcb(class FName AcbName, bool bAddToLevel);
	bool IsLoaded();
	int32 GetNumCues();
	class USoundAtomCue* GetAtomCueByName(const class FString& CueName);
	class USoundAtomCue* GetAtomCueByIndex(int32 CueIndex);
	class USoundAtomCue* GetAtomCueById(int32 CueId);
	void DetachDspBusSetting();
	bool BP_GetCueInfoFromName(const class FString& Name, struct FAtomCueInfo& CueInfo);
	bool BP_GetCueInfoFromIndex(int32 Index, struct FAtomCueInfo& CueInfo);
	bool BP_GetCueInfoFromId(int32 ID, struct FAtomCueInfo& CueInfo);
	void AttachDspBusSetting(const class FString& SettingName);
	void ApplyDspBusSnapshot(const class FString& SnapshotName, int32 Milliseconds);
};

}


