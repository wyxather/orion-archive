#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_APhys_Enemy_DeathRagdollNoAnimation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass APhys_Enemy_DeathRagdollNoAnimation.APhys_Enemy_DeathRagdollNoAnimation_C
// 0x0000 (0x0200 - 0x0200)
class UAPhys_Enemy_DeathRagdollNoAnimation_C : public UOakAction_PhysicalDeath
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass APhys_Enemy_DeathRagdollNoAnimation.APhys_Enemy_DeathRagdollNoAnimation_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
