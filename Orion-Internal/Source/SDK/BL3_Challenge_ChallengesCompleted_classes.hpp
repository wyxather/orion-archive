#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_ChallengesCompleted_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_ChallengesCompleted.Challenge_ChallengesCompleted_C
// 0x0008 (0x0268 - 0x0260)
class UChallenge_ChallengesCompleted_C : public UOakChallenge
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_ChallengesCompleted.Challenge_ChallengesCompleted_C");
		return ptr;
	}


	void OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter);
	void ChallengeCompleted(class UChallengesComponent* ChallengeComponent, class UClass* ChallengeClass);
	void ExecuteUbergraph_Challenge_ChallengesCompleted(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
