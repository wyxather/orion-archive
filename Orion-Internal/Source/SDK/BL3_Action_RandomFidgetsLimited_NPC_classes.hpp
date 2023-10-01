#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_RandomFidgetsLimited_NPC_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_RandomFidgetsLimited_NPC.Action_RandomFidgetsLimited_NPC_C
// 0x0000 (0x0238 - 0x0238)
class UAction_RandomFidgetsLimited_NPC_C : public UOakAction_RandomAnim
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_RandomFidgetsLimited_NPC.Action_RandomFidgetsLimited_NPC_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
