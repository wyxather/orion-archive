#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Root_Broken_Weak_Intro_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Character_Root_Broken_Weak_Intro.Character_Root_Broken_Weak_Intro_C
// 0x0008 (0x0CF8 - 0x0CF0)
class ACharacter_Root_Broken_Weak_Intro_C : public ACharacter_Root_Broken_Weak_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0CF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Root_Broken_Weak_Intro.Character_Root_Broken_Weak_Intro_C");
		return ptr;
	}


	void ExecuteUbergraph_Character_Root_Broken_Weak_Intro(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
