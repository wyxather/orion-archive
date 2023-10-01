#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Crew_Geranium_JakobsVaults_AllOpened_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Crew_Geranium_JakobsVaults_AllOpened.Challenge_Crew_Geranium_JakobsVaults_AllOpened_C
// 0x0018 (0x0368 - 0x0350)
class UChallenge_Crew_Geranium_JakobsVaults_AllOpened_C : public UChallenge_Crew_Geranium_OpenJakobsVault_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0350(0x0008) (Transient, DuplicateTransient)
	struct FDataTableRowHandle                         CrewChallengeMailRow;                                     // 0x0358(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Crew_Geranium_JakobsVaults_AllOpened.Challenge_Crew_Geranium_JakobsVaults_AllOpened_C");
		return ptr;
	}


	void CompletedChallenge(class AGbxPlayerController** CompletedPlayer);
	void ExecuteUbergraph_Challenge_Crew_Geranium_JakobsVaults_AllOpened(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
