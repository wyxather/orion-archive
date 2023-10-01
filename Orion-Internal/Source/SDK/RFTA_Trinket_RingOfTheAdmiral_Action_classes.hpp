#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Trinket_RingOfTheAdmiral_Action_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Trinket_RingOfTheAdmiral_Action.Trinket_RingOfTheAdmiral_Action_C
// 0x0000 (0x02C3 - 0x02C3)
class UTrinket_RingOfTheAdmiral_Action_C : public UAction_Buff_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trinket_RingOfTheAdmiral_Action.Trinket_RingOfTheAdmiral_Action_C");
		return ptr;
	}


	void FilterIncomingDamage(struct FDamageInfo* DamageInfo, struct FDamageInfo* DamageInfoOut, bool* ShouldApplyDamage);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
