#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_MissionScripted_TrapDoorContainer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IO_MissionScripted_TrapDoorContainer.IO_MissionScripted_TrapDoorContainer_C
// 0x00A8 (0x0768 - 0x06C0)
class AIO_MissionScripted_TrapDoorContainer_C : public AIO_MissionScripted_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06C0(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SM_Shack_Metal_Small_Square_OpenDoors;                    // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               NavBox;                                                   // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxNavMeshPainterComponent*                 GbxNavMeshPainter;                                        // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_Rel_Rot_946404C44973FF99B808468AA2AFA37D;      // 0x06F0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_946404C44973FF99B808468AA2AFA37D;   // 0x06F4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x06F5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform                                  Bridge_InitialTransform;                                  // 0x0700(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  SmallSheet_InitialTransform;                              // 0x0730(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    NewVar_0_1;                                               // 0x0760(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IO_MissionScripted_TrapDoorContainer.IO_MissionScripted_TrapDoorContainer_C");
		return ptr;
	}


	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Play_Feedback_ScriptedActionFinished();
	void Play_Feedback_ScriptedActionStarted();
	void Play_Feedback_Default(bool* FromLoad);
	void ExecuteUbergraph_IO_MissionScripted_TrapDoorContainer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
