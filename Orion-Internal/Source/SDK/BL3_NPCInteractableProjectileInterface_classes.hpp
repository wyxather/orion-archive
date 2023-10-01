#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_NPCInteractableProjectileInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass NPCInteractableProjectileInterface.NPCInteractableProjectileInterface_C
// 0x0000 (0x0028 - 0x0028)
class UNPCInteractableProjectileInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NPCInteractableProjectileInterface.NPCInteractableProjectileInterface_C");
		return ptr;
	}


	void ProjectileDetonate(bool* Success);
	void ProjectileArm(bool* Success);
	void ProjectileDisarm(bool* Success);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
