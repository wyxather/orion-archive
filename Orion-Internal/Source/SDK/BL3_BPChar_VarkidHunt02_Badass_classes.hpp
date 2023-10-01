#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_VarkidHunt02_Badass_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_VarkidHunt02_Badass.BPChar_VarkidHunt02_Badass_C
// 0x0020 (0x2620 - 0x2600)
class ABPChar_VarkidHunt02_Badass_C : public ABPChar_VarkidBadass_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2600(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SM_BormanNatesHair1;                                      // 0x2608(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_BormanNatesHair;                                       // 0x2610(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Crown;                                                    // 0x2618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_VarkidHunt02_Badass.BPChar_VarkidHunt02_Badass_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void DetermineNaturalEvolutionElligibility();
	void CE_TimeToPodUp(const struct FDamageReactionEventSummary& DamageSummary);
	void CE_VarkidNaturalPodDeath();
	void VarkidPod_HideBody();
	void ExecuteUbergraph_BPChar_VarkidHunt02_Badass(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
