#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_MissionScripted_MultiActor_HideShow_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IO_MissionScripted_MultiActor_HideShow.IO_MissionScripted_MultiActor_HideShow_C
// 0x0070 (0x0730 - 0x06C0)
class AIO_MissionScripted_MultiActor_HideShow_C : public AIO_MissionScripted_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06C0(0x0008) (Transient, DuplicateTransient)
	class UTextRenderComponent*                        TextRender3;                                              // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        TextRender2;                                              // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        TextRender1;                                              // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        TextRender;                                               // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Cube;                                                     // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              PostBlendTimeline_NewTrack_0_EB6F51964F581C27B6115CBB8B39F421;// 0x06F0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    PostBlendTimeline__Direction_EB6F51964F581C27B6115CBB8B39F421;// 0x06F4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x06F5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          PostBlendTimeline;                                        // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class AActor*>                              HideActorArray;                                           // 0x0700(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class AActor*>                              ShowActorArray;                                           // 0x0710(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	bool                                               PreviewShowArray;                                         // 0x0720(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PreviewHideArray;                                         // 0x0721(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0722(0x0006) MISSED OFFSET
	class APostProcessVolume*                          PostVolume;                                               // 0x0728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IO_MissionScripted_MultiActor_HideShow.IO_MissionScripted_MultiActor_HideShow_C");
		return ptr;
	}


	void UserConstructionScript();
	void PostBlendTimeline__FinishedFunc();
	void PostBlendTimeline__UpdateFunc();
	void ReceiveBeginPlay();
	void Play_Feedback_Default(bool* FromLoad);
	void Play_Feedback_ScriptedActionStarted();
	void Play_Feedback_ScriptedActionFinished();
	void ShowAll(TArray<class AActor*> ActorArray);
	void HideAll(TArray<class AActor*> ActorArray);
	void ExecuteUbergraph_IO_MissionScripted_MultiActor_HideShow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
