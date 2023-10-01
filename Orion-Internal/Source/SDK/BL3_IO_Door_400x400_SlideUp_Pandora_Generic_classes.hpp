#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_Door_400x400_SlideUp_Pandora_Generic_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IO_Door_400x400_SlideUp_Pandora_Generic.IO_Door_400x400_SlideUp_Pandora_Generic_C
// 0x0088 (0x0820 - 0x0798)
class AIO_Door_400x400_SlideUp_Pandora_Generic_C : public AIO_Door_Parent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0798(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Door;                                                     // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DirectionalHack;                                          // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               NavMeshBox_Frame_3;                                       // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               NavMeshBox_Frame_2;                                       // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_DoorFrame_400x400;                                     // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               NavMeshBox_Door;                                          // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_1_DoorZ_B80889B044B7C1ABED3570B8595175CD;        // 0x07D0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_B80889B044B7C1ABED3570B8595175CD;   // 0x07D4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07D5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_DoorZ_37287E594D8CA6B366AC64901AAAC512;        // 0x07E0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_37287E594D8CA6B366AC64901AAAC512;   // 0x07E4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x07E5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_0_DoorZ_23FBC21240D3E8513ECA7FBD50819295;      // 0x07F0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0_0__Direction_23FBC21240D3E8513ECA7FBD50819295; // 0x07F4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x07F5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_0_1;                                             // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FWwisePlaybackInstance                      Audio_PlaybackInstance;                                   // 0x0800(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               OpensDownward;                                            // 0x0818(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0819(0x0003) MISSED OFFSET
	int                                                DirecitonalModifier;                                      // 0x081C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IO_Door_400x400_SlideUp_Pandora_Generic.IO_Door_400x400_SlideUp_Pandora_Generic_C");
		return ptr;
	}


	void Audio_PlayLocked();
	void Audio_StopClosing();
	void Audio_StopOpening();
	void Audio_PlayClosing();
	void Audio_PlayOpening();
	void UserConstructionScript();
	void Timeline_0_0__FinishedFunc();
	void Timeline_0_0__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void PlayDoorMovement(TEnumAsByte<Enum_Door_ReasonForTimeline>* Reason);
	void ExecuteUbergraph_IO_Door_400x400_SlideUp_Pandora_Generic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
