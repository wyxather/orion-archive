#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARandom_Tink_GunMelee_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ARandom_Tink_GunMelee.ARandom_Tink_GunMelee_C
// 0x0008 (0x0240 - 0x0238)
class UARandom_Tink_GunMelee_C : public UOakAction_RandomAnim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ARandom_Tink_GunMelee.ARandom_Tink_GunMelee_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void MeleeAttack();
	void ExecuteUbergraph_ARandom_Tink_GunMelee(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
