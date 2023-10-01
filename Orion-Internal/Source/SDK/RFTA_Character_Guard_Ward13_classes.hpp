#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Guard_Ward13_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Character_Guard_Ward13.Character_Guard_Ward13_C
// 0x0008 (0x0D08 - 0x0D00)
class ACharacter_Guard_Ward13_C : public ACharacter_Crafter_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0D00(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Guard_Ward13.Character_Guard_Ward13_C");
		return ptr;
	}


	void SetCustomLipFlap(bool* SetCustomLipFlap);
	void ReceiveTick(float* DeltaSeconds);
	void OnSetCustomFlap(bool* UseCustomFlap);
	void ExecuteUbergraph_Character_Guard_Ward13(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
