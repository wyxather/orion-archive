#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Gunner_AutoBear_AmmoRegen_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Gunner_AutoBear_AmmoRegen.Ability_Gunner_AutoBear_AmmoRegen_C
// 0x000D (0x0218 - 0x020B)
class UAbility_Gunner_AutoBear_AmmoRegen_C : public UAbility_AnointParent_Gunner_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x020B(0x0005) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0210(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Gunner_AutoBear_AmmoRegen.Ability_Gunner_AutoBear_AmmoRegen_C");
		return ptr;
	}


	void AnointAutoBearEnded(bool* HasValidTarget, class AActor** ChargeTarget);
	void ExecuteUbergraph_Ability_Gunner_AutoBear_AmmoRegen(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
