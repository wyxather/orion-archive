#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPPetEnrageRift_Mod4_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C
// 0x0032 (0x0510 - 0x04DE)
class ABPPetEnrageRift_Mod4_C : public ABPPetEnrageRift_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x04DE(0x0002) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E0(0x0008) (Transient, DuplicateTransient)
	class UWwiseAudioComponent*                        WE_Cha_Beastmaster_Skill_Hulk_Out_Rift_Lp_Start;          // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        TouchCylinder;                                            // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    FXEmitter;                                                // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class APlayerController*                           LinkedTarget;                                             // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UBPEventHub_Beastmaster_C*                   EventHubOwner;                                            // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPPetEnrageRift_Mod4.BPPetEnrageRift_Mod4_C");
		return ptr;
	}


	void PlayFeedback(class AActor* InLinkedTarget);
	class UPrimitiveComponent* GetOverlapComponent();
	void UserConstructionScript();
	void OnShutdownRequested(bool* bForced);
	void OnLinkedTargetAdded(class AOakCharacter** InLinkedTarget);
	void OnLinkedTargetRemoved(class AOakCharacter** InLinkedTarget);
	void ExecuteUbergraph_BPPetEnrageRift_Mod4(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
