#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Gunner_EnterExit_Nova_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Gunner_EnterExit_Nova.Ability_Gunner_EnterExit_Nova_C
// 0x000D (0x0218 - 0x020B)
class UAbility_Gunner_EnterExit_Nova_C : public UAbility_AnointParent_Gunner_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x020B(0x0005) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0210(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Gunner_EnterExit_Nova.Ability_Gunner_EnterExit_Nova_C");
		return ptr;
	}


	void AnointTriggerEffect(bool* TriggerEffect, bool* res);
	void AnointIronIronBearStarted(class AOakCharacter_IronBear** IronBear);
	void AnointIronBearEnded();
	void ExecuteUbergraph_Ability_Gunner_EnterExit_Nova(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
