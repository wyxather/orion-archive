#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Mission_Plot_Achievement_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Mission_Plot_Achievement.Challenge_Mission_Plot_Achievement_C
// 0x0010 (0x0270 - 0x0260)
class UChallenge_Mission_Plot_Achievement_C : public UChallenge_Mission_Plot_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      AchievementChallenge;                                     // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Mission_Plot_Achievement.Challenge_Mission_Plot_Achievement_C");
		return ptr;
	}


	void CompletedChallenge(class AGbxPlayerController** CompletedPlayer);
	void ExecuteUbergraph_Challenge_Mission_Plot_Achievement(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
