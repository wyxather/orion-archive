#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxLevelSequence_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GbxLevelSequence.GbxLevelSequence
// 0x0000 (0x0490 - 0x0490)
class UGbxLevelSequence : public ULevelSequence
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxLevelSequence.GbxLevelSequence");
		return ptr;
	}

};


// Class GbxLevelSequence.GbxLevelSequenceActor
// 0x00D0 (0x0600 - 0x0530)
class AGbxLevelSequenceActor : public ALevelSequenceActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0530(0x0020) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPlay;                                                   // 0x0550(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPause;                                                  // 0x0560(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFinished;                                               // 0x0570(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStop;                                                   // 0x0580(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UGameplayTasksComponent*                     GameplayTasksComponent;                                   // 0x0590(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxLevelSequencePlayer*                     GbxLevelSequencePlayer;                                   // 0x0598(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGbxLevelSequenceBindingSlot>        BindingSlots;                                             // 0x05A0(0x0010) (ZeroConstructor, Transient)
	struct FSoftObjectPath                             ReplicatedLevelSequence;                                  // 0x05B0(0x0018) (Net)
	TEnumAsByte<EMovieScenePlayerStatus>               ReplicatedPlaybackStatus;                                 // 0x05C8(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bReplicatedReversePlayback;                               // 0x05C9(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x05CA(0x0002) MISSED OFFSET
	float                                              ReplicatedPlaybackPosition;                               // 0x05CC(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              ReplicatedPlaybackRate;                                   // 0x05D0(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	int                                                ReplicatedLoopCount;                                      // 0x05D4(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	TArray<struct FGbxLevelSequenceBoundActorSlot>     BoundActors;                                              // 0x05D8(0x0010) (Net, ZeroConstructor)
	bool                                               bIgnoreReplicatedPlaybackState;                           // 0x05E8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x13];                                      // 0x05E9(0x0013) MISSED OFFSET
	bool                                               bPendingReplicatedCutsceneSkip;                           // 0x05FC(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bWasCutsceneSkipped;                                      // 0x05FD(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x05FE(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxLevelSequence.GbxLevelSequenceActor");
		return ptr;
	}


	void Stop();
	void SetPlayRate(float PlayRate);
	void PlayLooping(int NumLoops);
	void PlayFromStart();
	void Play();
	void Pause();
	void OnRep_ReplicatedCutsceneSkip();
	void OnLevelSequenceStop();
	void OnLevelSequencePlay();
	void OnLevelSequencePause();
	void OnLevelSequenceFinished();
	bool IsPlaying();
	bool IsPaused();
	bool IsFinished();
	void GoToEndAndStop();
	float GetPlayRate();
};


// Class GbxLevelSequence.GbxLevelSequencePlayer
// 0x0018 (0x08A8 - 0x0890)
class UGbxLevelSequencePlayer : public ULevelSequencePlayer
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0890(0x0010) MISSED OFFSET
	class AGbxLevelSequenceActor*                      GbxLevelSequenceActor;                                    // 0x08A0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxLevelSequence.GbxLevelSequencePlayer");
		return ptr;
	}


	void OnStarted();
	bool IsFinished();
	class UGbxLevelSequencePlayer* STATIC_CreateGbxLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, bool bPlay, const struct FMovieSceneSequencePlaybackSettings& Settings, class AGbxLevelSequenceActor** OutActor);
};


// Class GbxLevelSequence.GbxLevelSequenceThrottleLibrary
// 0x0000 (0x0028 - 0x0028)
class UGbxLevelSequenceThrottleLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxLevelSequence.GbxLevelSequenceThrottleLibrary");
		return ptr;
	}


	void STATIC_UnlimitSequenceActor(class AGbxLevelSequenceActor* Player);
	bool STATIC_ShouldLimitSequenceGroup(const struct FName& InGroup);
	void STATIC_LimitSequenceActor(class AGbxLevelSequenceActor* Player, const struct FName& Group);
	void STATIC_ClearLimitGroup(const struct FName& Group);
};


// Class GbxLevelSequence.GbxMovieSceneBindingOverrides
// 0x0000 (0x0098 - 0x0098)
class UGbxMovieSceneBindingOverrides : public UMovieSceneBindingOverrides
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GbxLevelSequence.GbxMovieSceneBindingOverrides");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
