#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_DLCSkill_4_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Beastmaster_DLCSkill_4.Passive_Beastmaster_DLCSkill_3_C
// 0x0000 (0x01B0 - 0x01B0)
class UPassive_Beastmaster_DLCSkill_3_C : public UOakPassiveAbility
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Beastmaster_DLCSkill_4.Passive_Beastmaster_DLCSkill_3_C");
		return ptr;
	}


	EGbxAbilityState CalculateAbilityState();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
