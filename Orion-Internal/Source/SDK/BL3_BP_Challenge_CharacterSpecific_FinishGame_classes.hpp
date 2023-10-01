#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Challenge_CharacterSpecific_FinishGame_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Challenge_CharacterSpecific_FinishGame.BP_Challenge_CharacterSpecific_FinishGame_C
// 0x000F (0x0278 - 0x0269)
class UBP_Challenge_CharacterSpecific_FinishGame_C : public UBP_Challenge_CharacterSpecific_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0269(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Challenge_CharacterSpecific_FinishGame.BP_Challenge_CharacterSpecific_FinishGame_C");
		return ptr;
	}


	void CompletedAllPlotMissions();
	void SetBinds(class AOakCharacter** Character, bool* BindSet);
	void CompletedChallenge(class AGbxPlayerController** CompletedPlayer);
	void ExecuteUbergraph_BP_Challenge_CharacterSpecific_FinishGame(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
