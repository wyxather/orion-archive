#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CrewChallengeComponent_Salvage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CrewChallengeComponent_Salvage.BP_CrewChallengeComponent_Salvage_C
// 0x0008 (0x07D8 - 0x07D0)
class UBP_CrewChallengeComponent_Salvage_C : public UChallengeLevelActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07D0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CrewChallengeComponent_Salvage.BP_CrewChallengeComponent_Salvage_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void Setup_Challenge();
	void ClaptrapPart_Found(const struct FUseEvent& UseEvent);
	void ExecuteUbergraph_BP_CrewChallengeComponent_Salvage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
