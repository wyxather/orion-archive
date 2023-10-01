#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Siren_DeepWell_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Siren_DeepWell.Passive_Siren_DeepWell_C
// 0x0000 (0x01B0 - 0x01B0)
class UPassive_Siren_DeepWell_C : public UOakPassiveAbility
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Siren_DeepWell.Passive_Siren_DeepWell_C");
		return ptr;
	}


	EGbxAbilityState CalculateAbilityState();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
