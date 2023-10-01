#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_MIssion_SuckerPunch_Suicide_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_MIssion_SuckerPunch_Suicide.Challenge_MIssion_SuckerPunch_Suicide_C
// 0x0018 (0x0278 - 0x0260)
class UChallenge_MIssion_SuckerPunch_Suicide_C : public UOakChallenge
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (Transient, DuplicateTransient)
	struct FDataTableRowHandle                         RewardMail;                                               // 0x0268(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_MIssion_SuckerPunch_Suicide.Challenge_MIssion_SuckerPunch_Suicide_C");
		return ptr;
	}


	void CompletedChallenge(class AGbxPlayerController** CompletedPlayer);
	void ExecuteUbergraph_Challenge_MIssion_SuckerPunch_Suicide(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
