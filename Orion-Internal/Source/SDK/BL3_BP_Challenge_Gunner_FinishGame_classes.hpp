#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Challenge_Gunner_FinishGame_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Challenge_Gunner_FinishGame.BP_Challenge_Gunner_FinishGame_C
// 0x0000 (0x0278 - 0x0278)
class UBP_Challenge_Gunner_FinishGame_C : public UBP_Challenge_CharacterSpecific_FinishGame_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Challenge_Gunner_FinishGame.BP_Challenge_Gunner_FinishGame_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
