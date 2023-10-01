#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mus_Recruitment_AmbientMusicPerformer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mus_Recruitment_AmbientMusicPerformer.Mus_Recruitment_AmbientMusicPerformer_C
// 0x0030 (0x0060 - 0x0030)
class UMus_Recruitment_AmbientMusicPerformer_C : public UOakMusicAmbientPerformer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0030(0x0008) (Transient, DuplicateTransient)
	float                                              NextEventTime;                                            // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	class UWwiseAudioComponent*                        SequencingComponent;                                      // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class ABP_Mus_Recruitment_C*                       RecruitmentMusicPerformer;                                // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class UWwiseEvent*>                         WwiseEvents;                                              // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mus_Recruitment_AmbientMusicPerformer.Mus_Recruitment_AmbientMusicPerformer_C");
		return ptr;
	}


	void BeginAmbientMusic(class AOakMusicProvider** MusicProvider, float* AudioTimeSeconds);
	void Tick(float* AudioTimeSeconds);
	void ExecuteUbergraph_Mus_Recruitment_AmbientMusicPerformer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
