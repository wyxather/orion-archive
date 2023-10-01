#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_DevPerks_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_DevPerks.BP_DevPerks_C
// 0x0008 (0x01A8 - 0x01A0)
class UBP_DevPerks_C : public UOakDeveloperPerks
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01A0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DevPerks.BP_DevPerks_C");
		return ptr;
	}


	void UnlimitedAmmo();
	void UnlockAllCustomizations();
	void KillEnemies();
	void SpawnAwesomeItems();
	void GiveGoldenKeys();
	void GiveEridium();
	void GiveCash();
	void GiveLevels();
	void OnDeveloperPerkActivated(unsigned char* Perk);
	void ExecuteUbergraph_BP_DevPerks(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
