#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CrewChallengeComponent_Sabotage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CrewChallengeComponent_Sabotage.BP_CrewChallengeComponent_Sabotage_C
// 0x0008 (0x07D8 - 0x07D0)
class UBP_CrewChallengeComponent_Sabotage_C : public UChallengeLevelActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07D0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CrewChallengeComponent_Sabotage.BP_CrewChallengeComponent_Sabotage_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void Setup_Challenge();
	void Sabotaged_Broadcast(const struct FUseEvent& UseEvent);
	void ExecuteUbergraph_BP_CrewChallengeComponent_Sabotage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
