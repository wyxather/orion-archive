#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Kill_DLC1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Kill_DLC1.Challenge_Kill_DLC1_C
// 0x0020 (0x0358 - 0x0338)
class UChallenge_Kill_DLC1_C : public UChallenge_Crew_DLC1_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0008) (Transient, DuplicateTransient)
	struct FDataTableRowHandle                         KillMailRow;                                              // 0x0340(0x0010) (Edit, BlueprintVisible)
	class UGameStatData*                               MayorStat;                                                // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Kill_DLC1.Challenge_Kill_DLC1_C");
		return ptr;
	}


	void CompletedChallenge(class AGbxPlayerController** CompletedPlayer);
	void ExecuteUbergraph_Challenge_Kill_DLC1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
