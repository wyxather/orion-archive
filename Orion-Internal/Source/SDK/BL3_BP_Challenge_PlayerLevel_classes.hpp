#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Challenge_PlayerLevel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Challenge_PlayerLevel.BP_Challenge_PlayerLevel_C
// 0x000C (0x026C - 0x0260)
class UBP_Challenge_PlayerLevel_C : public UBP_Challenge_Console_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (Transient, DuplicateTransient)
	int                                                PlayerLevel;                                              // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Challenge_PlayerLevel.BP_Challenge_PlayerLevel_C");
		return ptr;
	}


	void LeveledUp(int Old_XP_Level, int New_XP_Level);
	void OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter);
	void ExecuteUbergraph_BP_Challenge_PlayerLevel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
