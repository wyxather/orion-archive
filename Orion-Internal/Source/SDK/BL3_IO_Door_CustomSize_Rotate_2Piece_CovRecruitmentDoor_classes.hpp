#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_Door_CustomSize_Rotate_2Piece_CovRecruitmentDoor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IO_Door_CustomSize_Rotate_2Piece_CovRecruitmentDoor.IO_Door_CustomSize_Rotate_2Piece_CovRecruitmentDoor_C
// 0x0090 (0x0828 - 0x0798)
class AIO_Door_CustomSize_Rotate_2Piece_CovRecruitmentDoor_C : public AIO_Door_Parent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0798(0x0008) (Transient, DuplicateTransient)
	class UWwiseAudioComponent*                        WwiseAudio_RightDoor;                                     // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseAudioComponent*                        WwiseAudio_LeftDoor;                                      // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PS_IO_COV_Recruitment_Door_CustomSize1;                   // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PS_IO_COV_Recruitment_Door_CustomSize;                    // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               NavMeshBox_Frame_3;                                       // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               NavMeshBox_Frame_2;                                       // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        RightDoor;                                                // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        LeftDoor;                                                 // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               NavMeshBox_Closed;                                        // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_0_Door1_rotation_8E53046B40363F53A1970183C37E9FCB;// 0x07E8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0_0__Direction_8E53046B40363F53A1970183C37E9FCB; // 0x07EC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07ED(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_0_1;                                             // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FWwisePlaybackInstance                      Audio_LeftDoor;                                           // 0x07F8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FWwisePlaybackInstance                      Audio_RightDoor;                                          // 0x0810(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IO_Door_CustomSize_Rotate_2Piece_CovRecruitmentDoor.IO_Door_CustomSize_Rotate_2Piece_CovRecruitmentDoor_C");
		return ptr;
	}


	void UserConstructionScript();
	void Timeline_0_0__FinishedFunc();
	void Timeline_0_0__UpdateFunc();
	void Timeline_0_0__Audio_DoorClose_End__EventFunc();
	void Timeline_0_0__Audio_DoorOpen_End__EventFunc();
	void PlayDoorMovement(TEnumAsByte<Enum_Door_ReasonForTimeline>* Reason);
	void Audio_Play_Closing();
	void Audio_Play_Opening();
	void Audio_Stop_Closing();
	void Audio_Stop_Opening();
	void ExecuteUbergraph_IO_Door_CustomSize_Rotate_2Piece_CovRecruitmentDoor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
