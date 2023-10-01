#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_FaceFX_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class FaceFX.FaceFXAsset
// 0x0000 (0x0028 - 0x0028)
class UFaceFXAsset : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FaceFX.FaceFXAsset");
		return ptr;
	}

};


// Class FaceFX.FaceFXActor
// 0x0028 (0x0050 - 0x0028)
class UFaceFXActor : public UFaceFXAsset
{
public:
	TArray<struct FFaceFXActorData>                    PlatformData;                                             // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	TArray<class UFaceFXAnim*>                         Animations;                                               // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	bool                                               bHasBonesFromMultipleSkeletons;                           // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FaceFX.FaceFXActor");
		return ptr;
	}

};


// Class FaceFX.FaceFXAnim
// 0x0038 (0x0060 - 0x0028)
class UFaceFXAnim : public UFaceFXAsset
{
public:
	TArray<struct FFaceFXAnimData>                     PlatformData;                                             // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	struct FFaceFXAnimId                               ID;                                                       // 0x0038(0x0010) (Edit, DisableEditOnTemplate)
	struct FFaceFXAudioAsset                           Audio;                                                    // 0x0048(0x0018) (Edit, DisableEditOnTemplate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FaceFX.FaceFXAnim");
		return ptr;
	}

};


// Class FaceFX.FaceFXAnimationSection
// 0x0058 (0x0138 - 0x00E0)
class UFaceFXAnimationSection : public UMovieSceneSection
{
public:
	struct FFaceFXSkelMeshComponentId                  SkelMeshComponentId;                                      // 0x00E0(0x0010) (Edit)
	struct FFaceFXAnimId                               AnimationId;                                              // 0x00F0(0x0010) (Edit)
	TSoftObjectPtr<class UFaceFXAnim>                  Animation;                                                // 0x0100(0x0028) (Edit)
	float                                              StartOffset;                                              // 0x0128(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndOffset;                                                // 0x012C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsAnimationDurationLoaded : 1;                           // 0x0130(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0131(0x0003) MISSED OFFSET
	float                                              AnimationDuration;                                        // 0x0134(0x0004) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FaceFX.FaceFXAnimationSection");
		return ptr;
	}

};


// Class FaceFX.FaceFXAnimationTrack
// 0x0010 (0x0068 - 0x0058)
class UFaceFXAnimationTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  AnimationSections;                                        // 0x0058(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FaceFX.FaceFXAnimationTrack");
		return ptr;
	}

};


// Class FaceFX.FaceFXAnimSet
// 0x0010 (0x0040 - 0x0030)
class UFaceFXAnimSet : public UDataAsset
{
public:
	struct FGbxFaceFXAnimSetData                       FaceFXAnimSetData;                                        // 0x0030(0x0010) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FaceFX.FaceFXAnimSet");
		return ptr;
	}

};


// Class FaceFX.FaceFXAudioComponent
// 0x0028 (0x01A0 - 0x0178)
class UFaceFXAudioComponent : public UActorComponent
{
public:
	TWeakObjectPtr<class UWwiseAudioComponent>         WwiseAudioComponent;                                      // 0x0178(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0180(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FaceFX.FaceFXAudioComponent");
		return ptr;
	}

};


// Class FaceFX.FaceFXCharacter
// 0x0158 (0x0180 - 0x0028)
class UFaceFXCharacter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0028(0x0068) MISSED OFFSET
	class UFaceFXActor*                                FaceFXActor;                                              // 0x0090(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UFaceFXAudioComponent*                       AudioComponent;                                           // 0x0098(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x98];                                      // 0x00A0(0x0098) MISSED OFFSET
	class UFaceFXAnim*                                 CurrentAnim;                                              // 0x0138(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x30];                                      // 0x0140(0x0030) MISSED OFFSET
	class UFaceFXAnimSet*                              CurrentAnimSet;                                           // 0x0170(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0178(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FaceFX.FaceFXCharacter");
		return ptr;
	}

};


// Class FaceFX.FaceFXComponent
// 0x0040 (0x01B8 - 0x0178)
class UFaceFXComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnPlaybackAudioStart;                                     // 0x0178(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPlaybackStopped;                                        // 0x0188(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FFaceFXEntry>                        Entries;                                                  // 0x0198(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x01A8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FaceFX.FaceFXComponent");
		return ptr;
	}


	void StopAll();
	bool Stop(class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);
	bool Setup(class USkeletalMeshComponent* SkelMeshComp, class UFaceFXAudioComponent* AudioComponent, class UFaceFXActor* Asset, bool IsAutoPlaySound, bool IsDisableMorphTargets, class UObject* Caller);
	bool Resume(class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);
	bool PlayById(const struct FName& Group, const struct FName& AnimName, class USkeletalMeshComponent* SkelMeshComp, bool Loop, class UObject* Caller);
	bool Play(class UFaceFXAnim* Animation, class USkeletalMeshComponent* SkelMeshComp, bool Loop, class UObject* Caller);
	bool Pause(class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);
	void OnCharacterPlaybackStopped(class UFaceFXCharacter* Character, const struct FFaceFXAnimId& AnimId);
	void OnCharacterAudioStart(class UFaceFXCharacter* Character, const struct FFaceFXAnimId& AnimId, bool IsAudioStarted, class UFaceFXAudioComponent* AudioComponentStartedOn);
	bool JumpToById(float Position, bool Pause, const struct FName& Group, const struct FName& AnimName, bool LoopAnimation, class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);
	bool JumpTo(float Position, bool Pause, class UFaceFXAnim* Animation, bool LoopAnimation, class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);
	bool IsPlayingAnimation(const struct FFaceFXAnimId& AnimId, class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);
	bool IsPlaying(class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);
	bool IsPaused(class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller);
	float GetFaceFXBlendWeight(class USkeletalMeshComponent* SkeletalMeshComponent, float DeltaTime, float BlendTime);
};


// Class FaceFX.FaceFXMatineeControl
// 0x0010 (0x0080 - 0x0070)
class UFaceFXMatineeControl : public UInterpTrack
{
public:
	TArray<struct FFaceFXTrackKey>                     Keys;                                                     // 0x0070(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FaceFX.FaceFXMatineeControl");
		return ptr;
	}

};


// Class FaceFX.FaceFXMatineeControlInst
// 0x0058 (0x0080 - 0x0028)
class UFaceFXMatineeControlInst : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                       // 0x0028(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x54];                                      // 0x002C(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FaceFX.FaceFXMatineeControlInst");
		return ptr;
	}

};


// Class FaceFX.FaceFXSettings
// 0x0050 (0x0078 - 0x0028)
class UFaceFXSettings : public UObject
{
public:
	TMap<class FString, struct FFaceFXLocalizationData> FaceFXLocalizationEquivalents;                            // 0x0028(0x0050) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FaceFX.FaceFXSettings");
		return ptr;
	}

};


// Class FaceFX.FaceFXEditorSettings
// 0x0050 (0x0078 - 0x0028)
class UFaceFXEditorSettings : public UObject
{
public:
	TMap<class FString, struct FFaceFXDLCPathSettings> FaceFXDLCSettings;                                        // 0x0028(0x0050) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FaceFX.FaceFXEditorSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
