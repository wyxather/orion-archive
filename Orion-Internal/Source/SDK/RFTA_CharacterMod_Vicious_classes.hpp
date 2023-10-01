#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_CharacterMod_Vicious_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CharacterMod_Vicious.CharacterMod_Vicious_C
// 0x0008 (0x0230 - 0x0228)
class UCharacterMod_Vicious_C : public UCharacterMod_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CharacterMod_Vicious.CharacterMod_Vicious_C");
		return ptr;
	}


	void OnComputeStats();
	void ExecuteUbergraph_CharacterMod_Vicious(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
