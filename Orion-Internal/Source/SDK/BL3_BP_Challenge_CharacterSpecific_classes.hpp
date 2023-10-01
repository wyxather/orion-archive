#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Challenge_CharacterSpecific_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Challenge_CharacterSpecific.BP_Challenge_CharacterSpecific_C
// 0x0009 (0x0269 - 0x0260)
class UBP_Challenge_CharacterSpecific_C : public UOakChallenge
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (Transient, DuplicateTransient)
	TEnumAsByte<Enum_PlayerCharacter>                  PlayerChar;                                               // 0x0268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Challenge_CharacterSpecific.BP_Challenge_CharacterSpecific_C");
		return ptr;
	}


	void SetBinds(class AOakCharacter* Character, bool* BindSet);
	void OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter);
	void ExecuteUbergraph_BP_Challenge_CharacterSpecific(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
