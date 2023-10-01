#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Collection_DeadDrop_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Collection_DeadDrop.Challenge_Collection_DeadDrop_C
// 0x0010 (0x0348 - 0x0338)
class UChallenge_Collection_DeadDrop_C : public UChallenge_Crew_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      ActiveChallenge;                                          // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Collection_DeadDrop.Challenge_Collection_DeadDrop_C");
		return ptr;
	}


	void OnChallengeActivated();
	void ExecuteUbergraph_Challenge_Collection_DeadDrop(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
