#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Root_Bomb_AoE_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Root_Bomb_AoE.Action_Root_Bomb_AoE_C
// 0x0000 (0x027E - 0x027E)
class UAction_Root_Bomb_AoE_C : public UAction_AOE_Attack_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Root_Bomb_AoE.Action_Root_Bomb_AoE_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
