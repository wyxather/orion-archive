#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Revive_Invulnerable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Revive_Invulnerable.Action_Revive_Invulnerable_C
// 0x0000 (0x02C3 - 0x02C3)
class UAction_Revive_Invulnerable_C : public UAction_Buff_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Revive_Invulnerable.Action_Revive_Invulnerable_C");
		return ptr;
	}


	void FilterIncomingDamage(struct FDamageInfo* DamageInfo, struct FDamageInfo* DamageInfoOut, bool* ShouldApplyDamage);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
