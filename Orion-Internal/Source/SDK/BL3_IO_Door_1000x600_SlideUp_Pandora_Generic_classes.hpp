#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_Door_1000x600_SlideUp_Pandora_Generic_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IO_Door_1000x600_SlideUp_Pandora_Generic.IO_Door_1000x600_SlideUp_Pandora_Generic_C
// 0x00B1 (0x0849 - 0x0798)
class AIO_Door_1000x600_SlideUp_Pandora_Generic_C : public AIO_Door_Parent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0798(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        DoorGreeble_5;                                            // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        DoorGreeble_4;                                            // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        DoorGreeble_3;                                            // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        DoorGreeble_2;                                            // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        FrameGreeble_3;                                           // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Button_Generic_Arrow_V1;                               // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        DoorFrame;                                                // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        DoorMesh;                                                 // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               NavMeshBox_Closed;                                        // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_1_DoorZ_FA840E704193543209435B93DD8F6C57;        // 0x07E8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_FA840E704193543209435B93DD8F6C57;   // 0x07EC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07ED(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_DoorZ_A6542E5845652F2B9605139884AD324E;        // 0x07F8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_A6542E5845652F2B9605139884AD324E;   // 0x07FC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x07FD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_0_DoorZ_F4022801420C59118CF7789B954E7BA5;      // 0x0808(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0_0__Direction_F4022801420C59118CF7789B954E7BA5; // 0x080C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x080D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_0_1;                                             // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FWwisePlaybackInstance                      Audio_ClosingInstance;                                    // 0x0818(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FWwisePlaybackInstance                      Audio_OpeningInstance;                                    // 0x0830(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               LudicrousSpeed;                                           // 0x0848(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IO_Door_1000x600_SlideUp_Pandora_Generic.IO_Door_1000x600_SlideUp_Pandora_Generic_C");
		return ptr;
	}


	void Audio_LockedUse();
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
	void ReceiveBeginPlay();
	void ExecuteUbergraph_IO_Door_1000x600_SlideUp_Pandora_Generic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
