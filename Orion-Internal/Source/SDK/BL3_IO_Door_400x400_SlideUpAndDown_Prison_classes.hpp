#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_Door_400x400_SlideUpAndDown_Prison_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IO_Door_400x400_SlideUpAndDown_Prison.IO_Door_400x400_SlideUpAndDown_Prison_C
// 0x00A0 (0x0838 - 0x0798)
class AIO_Door_400x400_SlideUpAndDown_Prison_C : public AIO_Door_Parent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0798(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        BottomDoorBase;                                           // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DoorBottom;                                               // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        TopDoorBase;                                              // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DoorTop;                                                  // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               NavMeshBox_Frame_3;                                       // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               NavMeshBox_Frame_2;                                       // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               NavMeshBox_Closed;                                        // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_1_Door1_z_28C5DC8C41458EEC2982319BFB00ED98;      // 0x07D8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_28C5DC8C41458EEC2982319BFB00ED98;   // 0x07DC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07DD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_Door1_z_AB3ECFED45BD798C2099E0847A9E0710;      // 0x07E8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_AB3ECFED45BD798C2099E0847A9E0710;   // 0x07EC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x07ED(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_0_Door1_z_34A9A1014609EE357108D28FBD9BEA00;    // 0x07F8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0_0__Direction_34A9A1014609EE357108D28FBD9BEA00; // 0x07FC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x07FD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_0_1;                                             // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FWwisePlaybackInstance                      Audio_Top;                                                // 0x0808(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FWwisePlaybackInstance                      Audio_Bottom;                                             // 0x0820(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IO_Door_400x400_SlideUpAndDown_Prison.IO_Door_400x400_SlideUpAndDown_Prison_C");
		return ptr;
	}


	void Audio_PlayLockedUse();
	void Audio_PlayClosed();
	void Audio_PlayClosing();
	void Audio_PlayOpened();
	void Audio_PlayOpening();
	void UserConstructionScript();
	void Timeline_0_0__FinishedFunc();
	void Timeline_0_0__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void PlayDoorMovement(TEnumAsByte<Enum_Door_ReasonForTimeline>* Reason);
	void ExecuteUbergraph_IO_Door_400x400_SlideUpAndDown_Prison(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
