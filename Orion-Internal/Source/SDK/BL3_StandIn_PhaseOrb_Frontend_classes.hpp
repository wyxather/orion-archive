#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_StandIn_PhaseOrb_Frontend_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StandIn_PhaseOrb_Frontend.StandIn_PhaseOrb_Frontend_C
// 0x0030 (0x05B0 - 0x0580)
class AStandIn_PhaseOrb_Frontend_C : public AStandInAuxiliaryActor_Siren
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0580(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    PS_Siren_Orb_Main_Shock;                                  // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   Play_SirenBrawler_Arms;                                   // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   Play_SirenBrawler_Head;                                   // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   Play_SirenBrawler;                                        // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseAudioComponent*                        WwiseAudio;                                               // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StandIn_PhaseOrb_Frontend.StandIn_PhaseOrb_Frontend_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_StandIn_PhaseOrb_Frontend(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
