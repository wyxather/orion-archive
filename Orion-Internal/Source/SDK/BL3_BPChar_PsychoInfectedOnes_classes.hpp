#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_PsychoInfectedOnes_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_PsychoInfectedOnes.BPChar_PsychoInfectedOnes_C
// 0x0010 (0x23F0 - 0x23E0)
class ABPChar_PsychoInfectedOnes_C : public ABPChar_PsychoShared_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x23E0(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    PS_Gore_Blood_Drip_Red;                                   // 0x23E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_PsychoInfectedOnes.BPChar_PsychoInfectedOnes_C");
		return ptr;
	}


	void UserConstructionScript();
	void BloodSplats();
	void ReceiveBeginPlay();
	void PsychoShared_TargetChanged(class AActor** TargetActor);
	void CleaverFacePlant(const struct FDamageReactionEventSummary& NewParam);
	void ExecuteUbergraph_BPChar_PsychoInfectedOnes(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
