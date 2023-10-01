#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Invulnerable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Invulnerable.Action_Invulnerable_C
// 0x0000 (0x0228 - 0x0228)
class UAction_Invulnerable_C : public UActionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Invulnerable.Action_Invulnerable_C");
		return ptr;
	}


	void FilterIncomingDamage(struct FDamageInfo* DamageInfo, struct FDamageInfo* DamageInfoOut, bool* ShouldApplyDamage);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
