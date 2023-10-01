#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_MissionDamageable_IlldoominatiTransmitter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IO_MissionDamageable_IlldoominatiTransmitter.IO_MissionDamageable_IlldoominatiTransmitter_C
// 0x0030 (0x0758 - 0x0728)
class AIO_MissionDamageable_IlldoominatiTransmitter_C : public AIO_MissionDamageable_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0728(0x0008) (Transient, DuplicateTransient)
	class UWwiseAudioComponent*                        WwiseAudio;                                               // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Dish;                                                     // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Antenna;                                                  // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URotatingMovementComponent*                  RotatingMovement;                                         // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Base;                                                     // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IO_MissionDamageable_IlldoominatiTransmitter.IO_MissionDamageable_IlldoominatiTransmitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void PlayFeedback_Damageable();
	void PlayFeedback_Destroyed();
	void PlayFeedback_Default();
	void PlayFeedback_Destroying();
	void ReceiveBeginPlay();
	void MovementLoop();
	void ExecuteUbergraph_IO_MissionDamageable_IlldoominatiTransmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
