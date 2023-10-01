#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Beast_ExitStealthNova_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Beast_ExitStealthNova.Ability_Beast_ExitStealthNova_C
// 0x000E (0x0218 - 0x020A)
class UAbility_Beast_ExitStealthNova_C : public UAbility_AnointParent_Beastmaster_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x020A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0210(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Beast_ExitStealthNova.Ability_Beast_ExitStealthNova_C");
		return ptr;
	}


	void AnointTriggerEffect(bool* TriggerEffect, bool* res);
	void ExitStealth();
	void ExecuteUbergraph_Ability_Beast_ExitStealthNova(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
