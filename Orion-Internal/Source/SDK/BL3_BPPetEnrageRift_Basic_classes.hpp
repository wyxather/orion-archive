#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPPetEnrageRift_Basic_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPPetEnrageRift_Basic.BPPetEnrageRift_Basic_C
// 0x0012 (0x04F0 - 0x04DE)
class ABPPetEnrageRift_Basic_C : public ABPPetEnrageRift_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x04DE(0x0002) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E0(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    RiftFX;                                                   // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPPetEnrageRift_Basic.BPPetEnrageRift_Basic_C");
		return ptr;
	}


	void UserConstructionScript();
	void NotifyPetTeleported();
	void OnPetSummonStarted();
	void ExecuteUbergraph_BPPetEnrageRift_Basic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
